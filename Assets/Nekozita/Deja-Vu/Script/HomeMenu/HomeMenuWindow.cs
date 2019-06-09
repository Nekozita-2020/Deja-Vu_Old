using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomeMenuWindow : WindowBase
{

    private HomeMenuWindowView m_View;



    private void Awake()
    {
        m_View.StoryButton = OnClickStoryButton;
        m_View.MemoryButton = OnClickMeoryButton;
        m_View.SettingButton = OnClickSettingButton;
        m_View.CreditButton = OnClickCreditButton;
        m_View.StoryStartButton = OnClickStoryStartButton;
    }

    private void Start()
    {

    }

    private void OnClickStoryButton()
    {

    }

    private void OnClickMeoryButton()
    {

    }

    private void OnClickSettingButton()
    {

    }

    private void OnClickCreditButton()
    {

    }

    private void OnClickStoryStartButton()
    {

    }

}
