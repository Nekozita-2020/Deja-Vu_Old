using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HomeManager : GameManagerBase
{

	// 現在表示しているWindow
	[SerializeField] protected GameObject NowWindow = null;

	void Start()
    {
        // シーンに必要なアセットをロード
        ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_WATER_FLOAR);

        // BGMを再生(同じBGMが再生されていれば未処理)
        SoundManager.Instance.PlayBGM(ResourcesPath.AUDIO_BGM_HEALING_10);
    }

    /// <summary>
    /// 表示中のウインドウを閉じる
    /// </summary>
    public void OnCloseWindow()
    {
        if(NowWindow != null) Destroy(NowWindow);
    }

}