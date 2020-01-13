using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Stage2_GameManager : StageGameManagerBase
{
    // ステージで使用するアイテムの画像リスト
    [SerializeField] private List<Sprite> m_ItemImageList = null;
    [NonSerialized] private List<Sprite> m_ItemImageList_Cache = new List<Sprite>();

    // 所持アイテムを表示するUI
    [SerializeField] private List<SpriteRenderer> m_Belongings = null;
    private List<Sprite> SpriteList = new List<Sprite>(3);

    // ステージに配置されてるアイテムボックスリスト1〜4
    [SerializeField] private List<ItemBox> m_ItemBoxList1 = null;
    [SerializeField] private List<ItemBox> m_ItemBoxList2 = null;
    [SerializeField] private List<ItemBox> m_ItemBoxList3 = null;
    [SerializeField] private List<ItemBox> m_ItemBoxList4 = null;

    // 目標アイテムの吹き出し
    [SerializeField] private List<SpriteRenderer> m_SeekItemList = null;

    // ゴール前ゲート
    [SerializeField] private FenceGate m_FenceGate = null;



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
        // リスト内を空にする
        for (int i = 0; i < m_ItemImageList_Cache.Count; i++)
        {
            m_ItemImageList_Cache.RemoveAt(0);
        }

        // キャッシュを元のデータで上書き
        for (int i = 0; i < m_ItemImageList.Count; i++)
        {
            m_ItemImageList_Cache.Add(m_ItemImageList[i]);
        }
    }

    /// <summary>
    /// ステージ全体のセットアップ
    /// </summary>
    private void StageSetUp()
    {
        // 各アイテムボックスをセットアップ
        SetUpItemBox(m_ItemBoxList1);
        SetUpItemBox(m_ItemBoxList2);
        SetUpItemBox(m_ItemBoxList3);
        SetUpItemBox(m_ItemBoxList4);

        // 目標アイテムを設定
        OnSetSeekItem();

        // ゲート側に開くための条件アイテムを伝える
        StartCoroutine(OnSetSeekItemToGate());
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
            int m_IndexNum = UnityEngine.Random.Range(0, this.m_ItemImageList_Cache.Count);
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

    /// <summary>
    /// 所持アイテム画像リストに追加 
    /// </summary>
    /// <param name="_GetItemSprite"></param>
    private void AddSpriteList(Sprite _GetItemSprite)
    {
        SpriteList.Add(_GetItemSprite);
        // 既に3つアイテムを取得していれば、先頭を削除して詰める
        if (3 < SpriteList.Count)
            SpriteList.RemoveAt(0);
    }

    /// <summary>
    /// 所持アイテムUIを更新
    /// </summary>
    private void UpdateBelongingsList()
    {
        for(int i = 0; i < SpriteList.Count; i++)
        m_Belongings[i].sprite = SpriteList[i];
    }

    private void OnSetSeekItem()
    {
        for (int i = 0; i < 3; i++)
        {
            int m_IndexNum = UnityEngine.Random.Range(0, this.m_ItemImageList_Cache.Count);
            m_SeekItemList[i].sprite = this.m_ItemImageList_Cache[m_IndexNum];

            // このループ内で画像が重複セットされないように、その画像項目を消去する
            this.m_ItemImageList_Cache.RemoveAt(m_IndexNum);
        }
        OnRefresh_ItemImageList_Cache();
    }

    private IEnumerator OnSetSeekItemToGate()
    {
        // インスタンスが生成されるまで待つ
        yield return new WaitUntil (() => m_FenceGate.m_SeekItemList != null);

        // ゲートオープンチェックの為に、所持アイテムのインスタンスを渡しておく
        m_FenceGate.m_Belongings = this.m_Belongings;

        for(int i = 0; i < m_SeekItemList.Count; i++)
        {
            m_FenceGate.m_SeekItemList.Add(m_SeekItemList[i].sprite);
        }
    }
}
