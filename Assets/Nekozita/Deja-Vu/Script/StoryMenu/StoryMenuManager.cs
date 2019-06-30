using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoryMenuManager : GameManagerBase
{

    void Start()
    {
        // シーンに必要なアセットをロード
        ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_WATER_FLOAR);

        // BGMを再生(同じBGMが再生されていれば未処理)
        SoundManager.Instance.PlayBGM(ResourcesPath.AUDIO_BGM_HEALING_10);
    }

}