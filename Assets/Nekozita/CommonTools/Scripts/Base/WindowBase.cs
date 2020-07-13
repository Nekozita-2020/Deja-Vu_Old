using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
using System;
using UniRx;

namespace Nekozita
{
    /// <summary>
    /// Modelベースクラス
    /// </summary>
    public class WindowModelBase
    {
        public WindowModelBase() { }
    }

    /// <summary>
    /// Presenterベースクラス
    /// </summary>
    public class WindowBase : MonoBehaviour
    {
        // Viewベースクラス
        WindowViewBase m_View;

        // 引き継いできたデータクラス
        WindowParameter m_Parameter;

        /// <summary>
        /// トランジションのアニメーションの終了通知
        /// (蓋絵が開き切ったり、閉じきったことを通知する)
        /// </summary>
        private Subject<Unit> m_OnTransactionFinishedInternal;



        public WindowBase(WindowParameter _Parameter = null)
        {
            // 引き継ぎデータがあればキャッシュ
            if (_Parameter != null)
                m_Parameter = _Parameter;
        }

        private void Awake()
        {
            m_View = this.GetComponent<WindowViewBase>();

            this.m_OnTransactionFinishedInternal = new Subject<Unit>();
        }

        private void Start()
        {
            // Viewのセッティング
            m_View.Init();

            // Presenterのセッティング
            this.Init();
        }

        public void Init()
        {
            // Close時のコールバックをセット
            m_View.OnCloseEvent = OnCloseWindow;

            // アニメーションが終了したイベントをObservableに変換する
            m_View.m_OnCompleteAnim.AddListener(
                () => m_OnTransactionFinishedInternal.OnNext(Unit.Default));

            // Opne時の処理
            OnOpenWindow();
        }

        private IEnumerator SyncEndAnim(Action _EndAnimCallback = null)
        {
            // トランジションアニメーションが終了するのを待つ
            yield return m_OnTransactionFinishedInternal.FirstOrDefault().ToYieldInstruction();

            _EndAnimCallback?.Invoke();
        }

        /// <summary>
        /// Open時の処理
        /// </summary>
        private void OnOpenWindow()
        {
            // アニメーション前に行う処理
            m_View.OnOpenBeforeAni(m_Parameter);

            // アニメーションを再生
            m_View.PlayOpenAni();

            // アニメーションの終了を待機し、その後のアクションを実行するコルーチン
            StartCoroutine(this.SyncEndAnim(() => m_View.OnOpenAniEnd(m_Parameter)));
        }

        /// <summary>
        /// Close時の処理
        /// </summary>
        private void OnCloseWindow()
        {
            // アニメーション前に行う処理
            m_View.OnCloseBeforeAni();

            // アニメーションを再生
            m_View.PlayCloseAni();

            // アニメーションの終了を待機し、その後のアクションを実行するコルーチン
            StartCoroutine(this.SyncEndAnim(() =>
            {
                m_View.OnCloseAniEnd();

                // このWindowを破棄するタイミングで1度だけViewのOnDestroy()が実行される
                Destroy(this.gameObject);
            }));
        }
    }

    /// <summary>
    /// Window側に渡したいデータ格納用クラス
    /// ※渡したいデータをクラスにまとめてこれを継承させ、Window側でダウンキャストさせて扱う想定
    /// </summary>
    public class WindowParameter
    {

    }
}