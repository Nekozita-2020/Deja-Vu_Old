using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WindowBase : MonoBehaviour, IButtonDistinction
{

    WindowViewBase m_View;

    private void Awake()
    {
        m_View = new WindowViewBase();
        m_View.ButtonName = OnButtonKindDistinction;
    }

    /// <summary>
    /// 継承先にてボタンに応じて処理を分けるインタフェース
    /// </summary>
    /// <param name="ButtonName"></param>
    public void OnButtonKindDistinction(string ButtonName)
    {
        // 押されたボタンに応じて処理を書く
    }

    /// <summary>
    /// 指定したウインドウを開く
    /// ※既にウインドウがあれば閉じて切り替える
    /// </summary>
    /// <param name="OpenWindowName">Open window.</param>
    protected void OnOpenWindow(string OpenWindowName)
    {
        if (m_View.NowWindow != null) OnCloseWindow();
        else
        {
            ObjectManager.Instance.OnPrefabLoad(OpenWindowName);

        }
    }

    /// <summary>
    /// 指定したウインドウを閉じる
    /// </summary>
    protected void OnCloseWindow()
    {
        if (m_View.NowWindow == null) return;

        Destroy(m_View.NowWindow);
    }

}

public interface IButtonDistinction
{
    /// <summary>
    /// 継承先にてボタンに応じて処理を分けるインタフェース
    /// </summary>
    /// <param name="ButtonName"></param>
    void OnButtonKindDistinction(string ButtonName);
}