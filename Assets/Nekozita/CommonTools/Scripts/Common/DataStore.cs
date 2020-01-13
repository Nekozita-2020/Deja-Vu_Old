using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// プロジェクト内で使う共通データを保存しておくクラス
/// </summary>
public class DataStore : MonoBehaviour
{
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
}
