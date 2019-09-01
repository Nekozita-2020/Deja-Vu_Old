using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManagerBase : MonoBehaviour
{

    [Header("再生するBGM")]
    [SerializeField] private AudioClip PlayBGM = null;

    private void Awake()
    {
        // 使用していないアセットをアンロードしてメモリを解放
        Resources.UnloadUnusedAssets();

        // フェードインしてシーンをスタートさせる
        SceneController.Instance?.FadeIn();

        if(PlayBGM != null)
        {
            // BGMを再生(同じBGMが再生されていれば未処理)
            SoundManager.Instance.PlayBGM(PlayBGM.name);
        }
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
