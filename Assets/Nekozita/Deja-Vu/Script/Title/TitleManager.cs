﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TitleManager : GameManagerBase
{

    void Start()
    {
        // フェードインしてシーンをスタートさせる
        // Titleシーン開始時にまだSceneControllerが生成されておらず、一時的にここで記述
        SceneController.Instance?.FadeIn();

        // タイトルBGMを再生
        SoundManager.Instance.PlayBGM(ResourcesPath.AUDIO_BGM_HEALING_10);

        // 必要なプレハブを生成
        ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_WATER_FLOAR);
    }

}
