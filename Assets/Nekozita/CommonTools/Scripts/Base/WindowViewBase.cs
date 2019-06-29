using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

/// <summary>
/// Windowの表示部分の処理を担当させるベーススクリプト
/// </summary>
public class WindowViewBase : MonoBehaviour
{

    // 現在表示しているWindow
    [SerializeField] protected GameObject NowWindow = null;

    /// <summary>
    /// このウインドウを閉じる
    /// </summary>
    protected void OnCloseThisWindow()
    {
        Destroy(this);
    }

}
