using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomeManager : GameManagerBase
{

    // 各Windowの親となるオブジェクト
    [SerializeField] private GameObject HomeMenu = null;

    // 現在表示しているWindow
    [SerializeField] public GameObject NowWindow = null;



    void Start()
    {
        // シーンに必要なアセットをロード
        ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_WATER_FLOAR);

        // BGMを再生(同じBGMが再生されていれば未処理)
        SoundManager.Instance.PlayBGM(ResourcesPath.AUDIO_BGM_HEALING_10);
    }

    /// <summary>
    /// 指定されたWindowを表示する
    /// </summary>
    public void OnOpenWindow(string WindowName)
    {
        if (NowWindow != null) this.OnCloseWindow();

        switch (WindowName)
        {
            case "Story":
                NowWindow = ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_STORY_WINDOW, HomeMenu);
                break;
            case "GrapeMemory":
                NowWindow = ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_GRAPE_MEMORY_WINDOW, HomeMenu);
                break;
            case "Setting":
                NowWindow = ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_SETTING_WINDOW, HomeMenu);
                break;
            case "Credit":
                NowWindow = ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_CREDIT_WINDOW, HomeMenu);
                break;
        }
    }

    /// <summary>
    /// 表示中のウインドウを閉じる
    /// </summary>
    public void OnCloseWindow()
    {
        if(NowWindow != null) Destroy(NowWindow);
    }

}