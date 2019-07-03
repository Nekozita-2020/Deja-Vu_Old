using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SettingWindowView : WindowViewBase
{

    // 感度設定関連
    [SerializeField] public Slider Slider_MovementSensitivity = null;
    public float MovementSensitivity_Value;

    public Action m_ClickApplyButton = null;


    public void OnClickApplyButton()
    {
        m_ClickApplyButton?.Invoke();
    }

}
