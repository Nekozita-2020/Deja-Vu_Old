using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManagerBase : MonoBehaviour
{

    private void Awake()
    {
        // 使用していないアセットをアンロードしてメモリを解放
        Resources.UnloadUnusedAssets();

        // フェードインしてシーンをスタートさせる
        SceneController.Instance?.FadeIn();
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
