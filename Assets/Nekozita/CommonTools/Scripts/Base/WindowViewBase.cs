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
    [SerializeField] internal GameObject NowWindow = null;

    // クリックされたボタンの種類
    internal Action<string> ButtonName = null;


    private void OnClickButton(string ClickButtonName)
    {
        ButtonName?.Invoke(ClickButtonName);
    }
}
