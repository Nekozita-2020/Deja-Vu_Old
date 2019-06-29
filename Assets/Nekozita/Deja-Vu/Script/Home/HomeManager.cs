using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomeManager : MonoBehaviour
{

    void Start()
    {
        // 使用していないアセットをアンロードしてメモリを解放
        Resources.UnloadUnusedAssets();

        // シーンに必要なアセットをロード
        ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_GRAPE);
        ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_WATER_FLOAR);

        // シーンをフェードイン
        SceneController.Instance.FadeIn();

        // BGMを再生(同じBGMが再生されていれば未処理)
        SoundManager.Instance.PlayBGM(ResourcesPath.AUDIO_BGM_HEALING_10);
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