using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoryWindow : WindowBase
{

	StoryWindowView View;

    protected override void SettingView()
    {
        base.SettingView();

        View = m_View as StoryWindowView;
        View.m_ClickStartButton = OnClickStartButton;
    }

    public void OnClickStartButton()
    {
        SceneController.Instance.FadeOut("StoryMenu");
    }

}
