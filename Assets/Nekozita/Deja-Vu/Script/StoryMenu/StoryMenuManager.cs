using System.Linq;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoryMenuManager : GameManagerBase
{

    // ステージの説明テキストとスタートボタンを含んだ親オブジェクトとその子オブジェクト群
    [SerializeField] private GameObject StageDescriptionList = null;
    private Dictionary<string, GameObject> StageDescriptionDic =
        new Dictionary<string, GameObject>();

    // ステージの選択ボタンリスト
    [SerializeField] private GameObject StageNodeList = null;

    // 現在表示されている親オブジェクト(ステージの説明テキストとスタートボタン)
    [SerializeField] private GameObject NowDescription = null;

    private bool OnDrag = false;



    void Start()
    {
        // シーンに必要なアセットをロード
        ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_WATER_FLOAR);

        // UIをストーリーの進捗度に合わせる(エンドレスとチュートリアルで最少は2)
        for(int i = 0; i <= PlayerPrefs.GetInt("ClearStage", -1) + 2; i++)
        {
            // ストーリーノードを表示
            StageNodeList.transform.GetChild(i).gameObject.SetActive(true);

            // クリアしたステージ説明の名前とそのオブジェクトを取得
            string DescriptionName =
                StageDescriptionList.transform.GetChild(i).gameObject.name;
            GameObject DescriptionObj =
                StageDescriptionList.transform.GetChild(i).gameObject;

            // 取得内容を元に、クリアしたステージのStageDescriptionを保存
            StageDescriptionDic.Add(DescriptionName, DescriptionObj);
        }
    }

    /// <summary>
    /// クリックされたボタンに応じ、ストーリー説明を表示する
    /// </summary>
    /// <param name="StageName"></param>
    public void OnClickStageNodeButton(string StageName)
    {
        // 表示中のものがあれば非表示に
        if (NowDescription != null) OnCloseDescription();

        // クリックしたステージ説明を表示する
        StageDescriptionDic[StageName].SetActive(true);
        NowDescription = StageDescriptionDic[StageName];
    }

    /// <summary>
    /// ドラッグしたかチェックを行う
    /// </summary>
    public void OnDragCheck()
    {
        OnDrag = true;
    }

    /// <summary>
    /// 表示中のストーリー説明を非表示にする
    /// </summary>
    public void OnCloseDescription()
    {
        if (NowDescription != null && OnDrag == false)
        {
            NowDescription.SetActive(false);
            NowDescription = null;
        }

        OnDrag = false;
    }

}
