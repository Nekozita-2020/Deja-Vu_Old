using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SettingWindow : WindowBase
{

    [SerializeField] private float MovementSensitivity_Value;
    public GameObject Grape_Demo = null;
    SettingWindowView View;
    public Action DeleatSettingWin = null;

    private bool DragFlug = false;

	protected override void SettingView()
	{
		base.SettingView();

		View = m_View as SettingWindowView;
        View.m_ChengeValue_Slider_MovementSensitivity
            = OnChengeValue_Slider_MovementSensitivity;
        View.m_ClickApplyButton = OnClickApplyButton;
        View.m_OnDragTouchSenser = OnDragTouchSenser;

        Init();
    }

    public void Init()
    {
        MovementSensitivity_Value = PlayerPrefs.GetFloat("MovementSensitivity", 0.5F);
        View.Slider_MovementSensitivity.value = MovementSensitivity_Value;
        Grape_Demo.SetActive(true);
    }

    private void OnDestroy()
    {
        Grape_Demo.SetActive(false);
        DeleatSettingWin?.Invoke();
    }

    private void OnChengeValue_Slider_MovementSensitivity()
    {
        Grape_Demo.GetComponent<DragMoving>().MovementSensitivity
            = View.Slider_MovementSensitivity.value;
    }

    private void OnClickApplyButton()
	{
        // 操作感度を設定する
        PlayerPrefs.SetFloat("MovementSensitivity",
            View.Slider_MovementSensitivity.value);
        PlayerPrefs.Save();
    }

    private void OnDragTouchSenser()
    {
        DragFlug = true;
    }

    protected override void OnCloseWindow()
    {
        // ドラッグしていなければウインドウを閉じる
        if(DragFlug == false) base.OnCloseWindow();

        DragFlug = false;
    }

}
