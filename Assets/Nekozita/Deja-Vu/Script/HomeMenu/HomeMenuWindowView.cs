using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class HomeMenuWindowView : WindowViewBase
{

    // 各メニューボタンのアクション
    public Action StoryButton = null;
    public Action MemoryButton = null;
    public Action SettingButton = null;
    public Action CreditButton = null;

    // ストーリーモードのスタートボタンのアクション
    public Action StoryStartButton = null;



    private void OnClickStoryButton()
    {
        StoryButton.Invoke();
    }

    private void OnClickMeoryButton()
    {
        MemoryButton.Invoke();
    }

    private void OnClickSettingButton()
    {
        SettingButton.Invoke();
    }

    private void OnClickCreditButton()
    {
        CreditButton.Invoke();
    }

    private void OnClickStoryStartButton()
    {

    }

}
