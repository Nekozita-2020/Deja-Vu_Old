using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UniRx;

namespace Nekozita
{
	public class ButtonExtention : Selectable
	{
		/// <summary>
        /// ボタンのSE
        /// </summary>
		private enum ButtonSE
        {
			None = 0,
			Positive,
			Negative
        }

		// 〜〜〜 全ボタン共通データ群 〜〜〜
		// ボタンが押されているフラグ
		public static bool m_IsPushButton = false;

		// ボタン処理が実行中のフラグ(連続クリックを防止する)
		public static bool m_IsRunning = false;

		// 〜〜〜 ボタン別データ群 〜〜〜
		// ボタンSEの種類
		[SerializeField] private ButtonSE m_ButtonSE_Type = ButtonSE.None;

		// 通常クリックイベント
		[SerializeField] private Button.ButtonClickedEvent m_OnClick = null;

		// アニメーションが終了したイベント
		[NonSerialized] public UnityEvent m_OnCompleteAnim = new UnityEvent();

		// ボタンのアニメーションの終了通知
		private Subject<Unit> m_OnButtonAnimFinishedInternal;

		// Window関係のAnimator
		private Animator m_Animator = null;



		private void Awake()
		{
			// WindowにAnimatorがアタッチされている前提
			m_Animator = this.GetComponent<Animator>();

			this.m_OnButtonAnimFinishedInternal = new Subject<Unit>();

			// アニメーションが終了したイベントをObservableに変換する
			this.m_OnCompleteAnim.AddListener(
				() => m_OnButtonAnimFinishedInternal.OnNext(Unit.Default));
		}

		/// <summary>
		/// Animatorの有効・無効化の切り替え
		/// </summary>
		/// <param name="_IsEnabled"></param>
		public void SetAnimatorEnabled(bool _IsEnabled)
		{
			m_Animator.enabled = _IsEnabled;
		}

		public override void OnPointerDown(PointerEventData eventData)
		{
			// ボタンが押されたフラグを立てる
			m_IsPushButton = true;
		}

		public override void OnPointerUp(PointerEventData eventData)
		{
			// ボタン処理中でない時かつ、ボタンが押されている時、ボタン上で指を離した場合、そのクリック処理を実行
			if (!m_IsRunning && m_IsPushButton)
				this.OnClick();
		}

		public override void OnPointerExit(PointerEventData eventData)
		{
			// ボタンが押されている時、そのボタン領域からポインタが外れた場合、そのクリックを無効にする
			if (m_IsPushButton)
				m_IsPushButton = false;
		}

		private void OnClick()
		{
			// 処理中フラグを立てる
			m_IsRunning = true;

			// ボタンSEを鳴らす
			this.OnPlaySE();

			// ボタンアニメーションを再生
			this.PlayButtonAnim();

			// アニメーションの終了を待機し、その後のアクションを実行するコルーチン
			StartCoroutine(this.SyncEndAnim(() =>
			{
				// クリック処理を実行
				m_OnClick?.Invoke();
			}));
		}

		/// <summary>
        /// ボタンSEを再生
        /// </summary>
		private void OnPlaySE()
        {
			int m_SoundNum = (int)m_ButtonSE_Type;

            switch (m_ButtonSE_Type)
            {
				case ButtonSE.None:
					break;

				case ButtonSE.Positive:
					SoundManager.Instance.PlaySE($"SE_00{m_SoundNum}");
					break;

				case ButtonSE.Negative:
					SoundManager.Instance.PlaySE($"SE_00{m_SoundNum}");
					break;
			}
		}

		/// <summary>
		/// ボタンアニメーションを再生
		/// </summary>
		private void PlayButtonAnim()
		{
			SetAnimatorEnabled(true);
			m_Animator.Play("ButtonClick");
		}

		/// <summary>
		/// Animation内から呼び出し、イベントを発行する想定
		/// </summary>
		public void EndAnim()
		{
			SetAnimatorEnabled(false);
			m_OnCompleteAnim?.Invoke();
		}

		private IEnumerator SyncEndAnim(Action _EndAnimCallback = null)
		{
			// アニメーションが終了するのを待つ
			yield return m_OnButtonAnimFinishedInternal.FirstOrDefault().ToYieldInstruction();

			_EndAnimCallback?.Invoke();

			// 処理中フラグを戻す
			m_IsRunning = false;
		}
	}
}