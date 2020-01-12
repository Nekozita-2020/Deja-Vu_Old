using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Stage2_GameManager : StageGameManagerBase
{
    // アイテムの画像リスト
    [SerializeField] private List<Sprite> m_ItemImageList = null;

    // 所持アイテムを表示するUI
    [SerializeField] private List<Image> m_Belongings = null;

    // ステージに配置されてるアイテムボックスリスト1〜4
    [SerializeField] private List<ItemBox> m_ItemBoxList1 = null;
    [SerializeField] private List<ItemBox> m_ItemBoxList2 = null;
    [SerializeField] private List<ItemBox> m_ItemBoxList3 = null;
    [SerializeField] private List<ItemBox> m_ItemBoxList4 = null;



    protected override void SetCallBack()
    {
        base.SetCallBack();

    }

    protected override void Init()
    {
        base.Init();

    }

}
