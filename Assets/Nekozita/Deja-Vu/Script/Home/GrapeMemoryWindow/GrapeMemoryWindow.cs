using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
/*
public class GrapeMemoryWindow : WindowBase
{

    GrapeMemoryWindowView View;

    // グレープの記憶解放時期リスト
    // private List<int> UnlockTimingList = new List<int>();

    protected override void SettingView()
    {
        base.SettingView();

        View = m_View as GrapeMemoryWindowView;

        View.m_OnEndMovieButton = OnClickEndMovieButton;
    }

    void Start()
    {
        // DataStoreの全ての解放タイミングを保存しておく
        // GetUnlockTiming();

        // ストーリーの進捗度を取得(クリアしたステージ数)
        int m_StoryProgress = PlayerPrefs.GetInt("ClearStage", -1);

        // グレープの記憶を解放する
        UnlockOfGrapeMemory(m_StoryProgress);
    }
    /*
    /// <summary>
    /// DataStoreの全ての解放タイミングを保存しておく
    /// </summary>
    public void GetUnlockTiming()
    {
        // DataStoreの"全解放以外の"解放タイミングを保存しておく
        // ※ラストステージクリア時はそのタイミングで複数の記憶が解放される為、
        //  別リストで解放記憶が管理されてる
        UnlockTimingList.Add(DataStore.UnlockTimingOfGrapeMemory.Unlock_1);
        UnlockTimingList.Add(DataStore.UnlockTimingOfGrapeMemory.Unlock_2);
        UnlockTimingList.Add(DataStore.UnlockTimingOfGrapeMemory.Unlock_3);
        UnlockTimingList.Add(DataStore.UnlockTimingOfGrapeMemory.Unlock_4);
        UnlockTimingList.Add(DataStore.UnlockTimingOfGrapeMemory.Unlock_5);
        UnlockTimingList.Add(DataStore.UnlockTimingOfGrapeMemory.Unlock_6);
        UnlockTimingList.Add(DataStore.UnlockTimingOfGrapeMemory.Unlock_7);
    }
    /// <summary>
    /// グレープの記憶を解放する
    /// </summary>
    /// <param name="_StoryProgress"></param>
    private void UnlockOfGrapeMemory(int _StoryProgress)
    {
        int m_UnlockIndexNum = 0;

        // DataStoreのグレープの記憶解放時期リストを作成
        DataStore.MakeUnlockTimingList();

        for (int i = 0; i <= _StoryProgress; i++)
        {
            if (DataStore.m_UnlockTimingList.Contains(i))
            {
                View.MemoryList[m_UnlockIndexNum].gameObject.SetActive(true);
                m_UnlockIndexNum++;
            }

            // 全解放時は、別リストで管理されてる複数の記憶が解放
            if (DataStore.UnlockTimingOfGrapeMemory.Unlock_All <= i)
            {
                foreach (Text x in View.Memory_20) x.gameObject.SetActive(true);
                View.StillLostMemoryText.gameObject.SetActive(false);
            }
        }
    }

    public void OnClickEndMovieButton()
    {
        // エンドムービーを再生

    }

}
*/