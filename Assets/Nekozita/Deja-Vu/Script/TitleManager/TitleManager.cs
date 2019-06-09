using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TitleManager : MonoBehaviour
{

    private void Start()
    {
        // タイトルBGMを再生
        SoundManager.Instance.PlayBGM(ResourcesFilePath.AUDIO_BGM_PIANO);

        // 必要なプレハブを生成
        ObjectManager.Instance.OnPrefabLoad(ResourcesFilePath.PREFAB_WATER_FLOAR);
    }

    public void OnTapScreen(string ChangeScene)
    {
        SceneController.Instance.FadeOut(ChangeScene);
    }

}
