using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomeManager : GameManagerBase
{

    void Start()
    {
        // シーンに必要なアセットをロード
        // ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_GRAPE);
        ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_WATER_FLOAR);

        // BGMを再生(同じBGMが再生されていれば未処理)
        SoundManager.Instance.PlayBGM(ResourcesPath.AUDIO_BGM_HEALING_10);
    }

}