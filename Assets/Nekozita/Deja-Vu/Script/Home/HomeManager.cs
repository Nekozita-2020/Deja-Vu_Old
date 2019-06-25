using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomeManager : MonoBehaviour
{

    // 現在表示しているWindow
    [SerializeField] public GameObject NowWindow = null;

    // ゲームメニューのオブジェクト群
    [SerializeField] HomeMenu Story = null;
    [SerializeField] HomeMenu GrapeMemory = null;
    [SerializeField] HomeMenu Setting = null;
    [SerializeField] HomeMenu Credit = null;



    void Start()
    {
        // 使用していないアセットをアンロードしてメモリを解放
        Resources.UnloadUnusedAssets();

        // シーンに必要なアセットをロード
        ObjectManager.Instance.OnPrefabLoad(ResourcesFilePath.PREFAB_GRAPE);
        ObjectManager.Instance.OnPrefabLoad(ResourcesFilePath.PREFAB_WATER_FLOAR);

        // シーンをフェードイン
        SceneController.Instance.FadeIn();

        // BGMを再生(同じBGMが再生されていれば未処理)
        SoundManager.Instance.PlayBGM(ResourcesFilePath.AUDIO_BGM_HEALING_10);
    }

    /// <summary>
    /// 各ゲームメニューWindowの表示および切り替え
    /// </summary>
    /// <param name="Menu">Menu.</param>
    public void OnClickMenuButton(string Menu)
    {
        if(NowWindow != null) NowWindow.SetActive(false);

        switch (Menu)
        {
            case "Story":
                NowWindow = Story.Window;
                Story.Window.SetActive(true);
                break;
            case "GrapeMemory":
                NowWindow = GrapeMemory.Window;
                GrapeMemory.Window.SetActive(true);
                break;
            case "Setting":
                NowWindow = Setting.Window;
                Setting.Window.SetActive(true);
                break;
            case "Credit":
                NowWindow = Credit.Window;
                Credit.Window.SetActive(true);
                break;
        }
    }

    /// <summary>
    /// 画面をタッチ時Windowがあれば閉じる
    /// </summary>
    public void OnCloseNowWindow()
    {
        if(NowWindow != null) NowWindow.SetActive(false);
    }

    /// <summary>
    /// 指定したシーンへ遷移させる
    /// </summary>
    /// <param name="SceneName">Scene name.</param>
    public void OnSceneChange(string SceneName)
    {
        SceneController.Instance.FadeOut(SceneName);
    }

}

[System.Serializable]
public class HomeMenu
{
    public GameObject Button = null;
    public GameObject Window = null;
}