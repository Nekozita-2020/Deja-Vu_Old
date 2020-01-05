using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Windowの処理部分を担当させるクラス
/// </summary>
public class TutorialWindow : WindowBase
{
    TutorialWindowView View;

    protected override void SettingView()
    {
        base.SettingView();

        View = m_View as TutorialWindowView;

        View.m_OnClickReturnStoryMenuButton = this.OnReturnStoryMenuScene;
        View.m_OnClickCloseButton = this.OnClickClose;
    }

    public void OnReturnStoryMenuScene()
    {
        // ステージセレクト画面へ飛ばす
        SceneController.Instance.FadeOut("StoryMenu");
    }

    public void OnClickClose()
    {
        this.gameObject.SetActive(false);
    }

}
