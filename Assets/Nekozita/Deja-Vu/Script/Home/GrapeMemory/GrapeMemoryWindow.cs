using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GrapeMemoryWindow : WindowBase
{

    GrapeMemoryWindowView View;

    protected override void SettingView()
    {
        base.SettingView();

        View = m_View as GrapeMemoryWindowView;
    }

    void Start()
    {
        // ストーリーの進捗度を取得(クリアしたステージ数)
        int StoryProgress = PlayerPrefs.GetInt("ClearStage", 20);

        // 記憶が欠けているテキストを表示
        View.StillLostMemoryText.gameObject.SetActive(true);
        int ListNum = 0;

        for (int i = 0; i <= StoryProgress; i++)
        {
            if (i == 3 || i == 5 || i == 8 || i == 10 ||
                i == 13 || i == 15 || i == 18 || i == 19)
            {
                View.MemoryList[ListNum].gameObject.SetActive(true);
                ListNum++;
            }
            else if(i == 20)
            {
                foreach (Text x in View.Memory_20) x.gameObject.SetActive(true);
                View.StillLostMemoryText.gameObject.SetActive(false);
            }
        }
    }

}