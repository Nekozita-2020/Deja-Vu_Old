using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WindowBase : MonoBehaviour
{
    protected WindowViewBase m_ViewBase;

    /// <summary>
    /// 指定したウインドウを開く
    /// ※既にウインドウがあれば閉じて切り替える
    /// </summary>
    /// <param name="OpenWindowName">Open window.</param>
    void OnOpenWindow(string OpenWindowName)
    {
        if (m_ViewBase.NowWindow != null) OnCloseWindow();

        ObjectManager.Instance.OnPrefabLoad(OpenWindowName);

        if (ObjectManager.Instance.OnPrefabLoad(OpenWindowName) != null && !m_ViewBase.NowWindow)
        {
            //NowWindow = ObjectManager.Instance.LastLoadObject;
        }
    }

    /// <summary>
    /// 指定したウインドウを閉じる
    /// </summary>
    void OnCloseWindow()
    {
        if (m_ViewBase.NowWindow == null) return;

        Destroy(m_ViewBase.NowWindow);
    }

}
