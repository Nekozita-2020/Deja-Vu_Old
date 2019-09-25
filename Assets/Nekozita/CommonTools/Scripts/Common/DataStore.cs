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
}
