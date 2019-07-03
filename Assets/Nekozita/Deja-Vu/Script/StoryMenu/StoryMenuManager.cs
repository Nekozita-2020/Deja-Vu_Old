using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoryMenuManager : GameManagerBase
{

    // ステージの説明テキストとスタートボタンを含んだ親オブジェクトとその子オブジェクト群
    [SerializeField] private GameObject StageDescriptionList = null;
    private List<GameObject> StageDescriptionChildren = new List<GameObject>();

    // ステージの選択ボタンリスト
    [SerializeField] private GameObject StageNodeList = null;

    // 現在表示されている親オブジェクト(ステージの説明テキストとスタートボタン)
    [SerializeField] private GameObject NowDescription = null;



    void Start()
    {
        // シーンに必要なアセットをロード
        ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_WATER_FLOAR);

        // BGMを再生(同じBGMが再生されていれば未処理)
        SoundManager.Instance.PlayBGM(ResourcesPath.AUDIO_BGM_HEALING_10);

        // ストーリーの進捗度に合わせてボタンを表示
        for(int i = 0; i <= PlayerPrefs.GetInt("ClearStage", 0); i++)
        {
            StageNodeList.transform.GetChild(i).gameObject.SetActive(true);
        }

        // StageDesctiptionListの子オブジェクトを取得していく
        var transforms = StageDescriptionList.GetComponentsInChildren<Transform>();
        // 使いやすいようにtransformsからgameObjectを取り出す
        foreach (Transform t in transforms) StageDescriptionChildren.Add(t.gameObject);
    }

    public void OnClickStageNodeButton(string StageName)
    {
        foreach(GameObject x in StageDescriptionChildren)
        {
            if(x.name == StageName)
            {
                if (NowDescription != null) OnCloseDescription();
                x.SetActive(true);
                return;
            }
        }
    }

    public void OnCloseDescription()
    {
        if (NowDescription != null) NowDescription.SetActive(false);
    }

}