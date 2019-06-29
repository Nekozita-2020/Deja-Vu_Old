using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoryWindow : WindowBase
{

	StoryWindowView m_View;

    void Start()
    {
        m_View = new StoryWindowView();
        m_View.m_ClickStartButton = OnClickStartButton;
    }

    public void OnClickStartButton()
    {
        SceneController.Instance.FadeOut("StoryMenu");
    }


}
