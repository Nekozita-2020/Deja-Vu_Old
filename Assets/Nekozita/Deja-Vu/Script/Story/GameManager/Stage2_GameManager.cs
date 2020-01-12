using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Stage2_GameManager : StageGameManagerBase
{
    // ステージで使用するアイテムの画像リスト
    [SerializeField] private List<Sprite> m_ItemImageList = null;
    [SerializeField] private List<Sprite> m_ItemImageList_Cache = new List<Sprite>();

    // 所持アイテムを表示するUI
    [SerializeField] private List<SpriteRenderer> m_Belongings = null;
    private List<Sprite> SpriteList = new List<Sprite>(3);

    // ステージに配置されてるアイテムボックスリスト1〜4
    [SerializeField] private List<ItemBox> m_ItemBoxList1 = null;
    [SerializeField] private List<ItemBox> m_ItemBoxList2 = null;
    [SerializeField] private List<ItemBox> m_ItemBoxList3 = null;
    [SerializeField] private List<ItemBox> m_ItemBoxList4 = null;



    protected override void Init()
    {
        base.Init();

        // 画像リストキャッシュのリフレッシュ
        OnRefresh_ItemImageList_Cache();

        // ステージ内のセットアップ
        StageSetUp();
    }

    private void OnRefresh_ItemImageList_Cache()
    {

        // キャッシュを元のデータで上書き
        for(int i = 0; i < m_ItemImageList.Count; i++)
        {
            m_ItemImageList_Cache.Add(m_ItemImageList[i]);
        }
    }

    /// <summary>
    /// ステージ全体のセットアップ
    /// </summary>
    private void StageSetUp()
    {
        SetUpItemBox(m_ItemBoxList1);
        SetUpItemBox(m_ItemBoxList2);
        SetUpItemBox(m_ItemBoxList3);
        SetUpItemBox(m_ItemBoxList4);
    }

    /// <summary>
    /// 各アイテムボックスのセットアップ
    /// </summary>
    /// <param name="_ItemBoxList"></param>
    private void SetUpItemBox(List<ItemBox> _ItemBoxList)
    {
        for(int i = 0; i < _ItemBoxList.Count; i++)
        {
            // コールバックのセット
            _ItemBoxList[i].m_CallBack = this.GetItem;

            // アイテム画像のセット
            int m_IndexNum = Random.Range(0, this.m_ItemImageList_Cache.Count);
            _ItemBoxList[i].m_ItemImage.sprite = this.m_ItemImageList_Cache[m_IndexNum];

            // このループ内で画像が重複セットされないように、その画像項目を消去する
            this.m_ItemImageList_Cache.RemoveAt(m_IndexNum);
        }
        OnRefresh_ItemImageList_Cache();
    }

    /// <summary>
    /// アイテムの取得時の処理
    /// </summary>
    /// <param name="_GetItemSprite"></param>
    private void GetItem(Sprite _GetItemSprite)
    {
        // 所持アイテム画像リストに追加
        AddSpriteList(_GetItemSprite);

        // 所持アイテムUIを更新
        UpdateBelongingsList();
    }

    private void AddSpriteList(Sprite _GetItemSprite)
    {
        SpriteList.Add(_GetItemSprite);
        // 既に3つアイテムを取得していれば、先頭を削除して詰める
        if (3 < SpriteList.Count)
            SpriteList.RemoveAt(0);
    }

    private void UpdateBelongingsList()
    {
        for(int i = 0; i < SpriteList.Count; i++)
        m_Belongings[i].sprite = SpriteList[i];
    }
}
