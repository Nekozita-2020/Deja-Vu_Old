using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;

/// <summary>
/// Windowの表示部分の処理を担当させるクラス
/// </summary>
public class TutorialWindowView : WindowViewBase
{
    [SerializeField] private Button m_ReturnStoryMenuButton = null;
    [SerializeField] private Button m_CloseButton = null;

    public Action m_OnClickReturnStoryMenuButton = null;
    public Action m_OnClickCloseButton = null;



    public void OnClickReturnStoryMenuButton()
    {
        m_OnClickReturnStoryMenuButton?.Invoke();
    }

    public void OnClickCloseButton()
    {
        m_OnClickCloseButton?.Invoke();
    }

}