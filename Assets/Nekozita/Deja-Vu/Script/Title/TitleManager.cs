using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TitleManager : MonoBehaviour
{

    private void Start()
    {
        // タイトルBGMを再生
        SoundManager.Instance.PlayBGM(ResourcesPath.AUDIO_BGM_HEALING_10);

        // 必要なプレハブを生成
        ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_WATER_FLOAR);

        // フェードインしてスタート
        SceneController.Instance.FadeIn();
    }

    public void OnTapScreen(string ChangeScene)
    {
        SceneController.Instance.FadeOut(ChangeScene);
    }

}
