using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;


public class ButtonExtention : Selectable
{
	// 〜〜〜 全ボタン共通データ群 〜〜〜
	// ボタンが押されているフラグ
	public static bool m_IsPushButton = false;

    // 〜〜〜 ボタン別データ群 〜〜〜
	// 通常クリック
	[SerializeField] public Button.ButtonClickedEvent m_OnClick = null;



	public override void OnPointerDown(PointerEventData eventData)
	{
		// ボタンが押されたフラグを立てる
		m_IsPushButton = true;
	}

	public override void OnPointerUp(PointerEventData eventData)
	{
		// ボタンが押されている時、ボタン上で指を離した場合、そのクリック処理を実行
		if (m_IsPushButton)
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
		// ボタンSEを鳴らす

		// ボタンアニメーションを再生

		// クリック処理を実行
		m_OnClick?.Invoke();
	}

	/*
	public override void OnPointerEnter(PointerEventData eventData) { }
	*/
}
