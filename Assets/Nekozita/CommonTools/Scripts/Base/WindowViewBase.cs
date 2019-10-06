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



    public virtual void Init()
    {

    }

    /// <summary>
    /// このウインドウを閉じる
    /// </summary>
    public virtual void OnCloseWindow()
    {
        OnCloseEvent?.Invoke();
    }

}
