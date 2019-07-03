using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

/// <summary>
/// Windowの表示部分の処理を担当させるBaseクラス
/// </summary>
public class WindowViewBase : MonoBehaviour
{

    // 現在表示しているWindow
    [SerializeField] public Action OnCloseEvent = null;



    public void Init()
    {

    }

    /// <summary>
    /// このウインドウを閉じる
    /// </summary>
    protected void OnCloseWindow()
    {
        OnCloseEvent?.Invoke();
    }

}
