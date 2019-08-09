using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Windowの処理部分を担当させるBaseクラス
/// </summary>
public class WindowBase : MonoBehaviour
{

	protected WindowViewBase m_View = new WindowViewBase();



    protected virtual void Awake()
    {
        m_View = GetComponent<WindowViewBase>();
        m_View.Init();

        this.SettingView();
    }

    protected virtual void SettingView()
    {
        m_View.OnCloseEvent = this.OnCloseWindow;
    }

    protected virtual void OnCloseWindow()
    {
        Destroy(this.gameObject);
    }

}
