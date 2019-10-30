using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using System.Collections;

/// <summary>
/// ゲーム起動時に実行させる処理をまとめたクラス
/// </summary>
public class RuntimeManager : SingletonMonoBehaviour<RuntimeManager>
{
    [SerializeField] private LogoWindowView m_LogoWindowView = null;
    [SerializeField] private TitleManager m_TitleManager = null;
    private bool MakeToolsFlag = false;



    private IEnumerator Start()
    {
        // フレームレートを60FPSに設定
        Application.targetFrameRate = 60;

        // 追加予定のCommonToolsが有効でない時(まだ読み込んでいない時)だけ追加ロードするように
        if (!SceneManager.GetSceneByName("CommonTools").IsValid())
        {
            // イベントにイベントハンドラーを追加
            SceneManager.sceneLoaded += OnMakeCommonTools;
            SceneManager.LoadScene("CommonTools", LoadSceneMode.Additive);
        }

        // ロゴウインドウのフェードが完了するまで待つ
        yield return new WaitUntil(() => m_LogoWindowView.FadeCompleteFlag);

        // CommonToolsが生成されるまで待つ
        yield return new WaitUntil(() => MakeToolsFlag);

        // タイトルスタート
        m_TitleManager.gameObject.SetActive(true);
    }

    /// <summary>
    /// CommonToolsが生成された時の処理
    /// </summary>
    /// <param name="m_LoadScene"></param>
    /// <param name="m_mode"></param>
    private void OnMakeCommonTools(Scene m_LoadScene, LoadSceneMode m_mode)
    {
        MakeToolsFlag = true;
    }

}