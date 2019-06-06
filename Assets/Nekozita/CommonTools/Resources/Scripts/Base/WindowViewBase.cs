using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// Windowの表示部分の処理を担当させるベーススクリプト
/// </summary>
public class WindowViewBase : MonoBehaviour
{
    // その時表示しているWindow
    protected GameObject NowWindow;

    /// <summary>
    /// 指定したアセットをResoucesフォルダ内からロードする
    /// </summary>
    /// <param name="LoadPrefab">Load prefab.</param>
    private void OnPrefabLoad(string LoadPrefab)
    {
        // プレハブを取得
        GameObject LoadObject = (GameObject)Resources.Load(LoadPrefab);

        // プレハブを元にインスタンスを生成する
        GameObject Instance = Instantiate(LoadObject, new Vector3(0.0f, 0.0f, 0.0f), Quaternion.identity);
    }

    void OpneWindow(GameObject OpenWindow)
    {
        if(NowWindow == null) return;

        Destroy(NowWindow);
        OpenWindow.SetActive(true);
        NowWindow = OpenWindow;
    }

    void CloseWindow()
    {
        if (NowWindow == null) return;

        Destroy(NowWindow);
    }

}
