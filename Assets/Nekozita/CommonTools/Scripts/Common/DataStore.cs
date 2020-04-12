using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// プロジェクト内で使う共通データを保存しておくクラス
/// </summary>
public class DataStore : MonoBehaviour
{
    // プレイ中のステージのGrapeのオブジェクトをその都度セットする想定
    private static GameObject m_CurrentGrape = null;

    // グレープの記憶の解放時期
    public static readonly List<int> m_UnlockTimingList = new List<int>();



    /// <summary>
    /// プレイ中のステージのGrapeのオブジェクトを保存する
    /// </summary>
    /// <param name="_Grape"></param>
    public static void OnSetCurrentGrape(GameObject _Grape)
    {
        m_CurrentGrape = _Grape;
    }

    public static GameObject OnGetCurrentGrape()
    {
        if (m_CurrentGrape == null)
            Debug.Log("CurrentGrapeがセットされていない");
        return m_CurrentGrape;
    }

    /// <summary>
    /// グレープの記憶の解放時期
    /// </summary>
    public class UnlockTimingOfGrapeMemory
    {
        // 解放タイミング = クリアしたステージ番号
        public static readonly int Unlock_1 = 2;
        public static readonly int Unlock_2 = 4;
        public static readonly int Unlock_3 = 6;
        public static readonly int Unlock_4 = 8;
        public static readonly int Unlock_5 = 10;
        public static readonly int Unlock_6 = 12;
        public static readonly int Unlock_7 = 14;
        public static readonly int Unlock_All = 15;
    }

    /// <summary>
    /// DataStoreの全ての解放タイミングリストを作成する
    /// </summary>
    public static void MakeUnlockTimingList()
    {
        m_UnlockTimingList.Add(UnlockTimingOfGrapeMemory.Unlock_1);
        m_UnlockTimingList.Add(UnlockTimingOfGrapeMemory.Unlock_2);
        m_UnlockTimingList.Add(UnlockTimingOfGrapeMemory.Unlock_3);
        m_UnlockTimingList.Add(UnlockTimingOfGrapeMemory.Unlock_4);
        m_UnlockTimingList.Add(UnlockTimingOfGrapeMemory.Unlock_5);
        m_UnlockTimingList.Add(UnlockTimingOfGrapeMemory.Unlock_6);
        m_UnlockTimingList.Add(UnlockTimingOfGrapeMemory.Unlock_7);
        m_UnlockTimingList.Add(UnlockTimingOfGrapeMemory.Unlock_All);
    }

    /// <summary>
    /// グレープの移動範囲
    /// </summary>
    public class MovementRange
    {
        public static readonly float LimitTop = 12.0f;
        public static readonly float LimitBottom = -4.0f;
        public static readonly float LimitRight = 7.0f;
        public static readonly float LimitLeft = -7.0f;
    }
}
