using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using System.Collections;

/// <summary>
/// ゲーム起動時に実行させる処理をまとめたクラス
/// </summary>
public class RuntimeManager : SingletonMonoBehaviour<RuntimeManager>
{

    [SerializeField] private GameObject TitleManager = null;
    private bool MakeToolsFlag = false;
    private GameObject LogoWindow = null;


    private IEnumerator Start()
    {
        // 追加予定のCommonToolsが有効でない時(まだ読み込んでいない時)だけ追加ロードするように
        if (!SceneManager.GetSceneByName("CommonTools").IsValid())
        {
            // イベントにイベントハンドラーを追加
            SceneManager.sceneLoaded += OnMakeTools;
            SceneManager.LoadScene("CommonTools", LoadSceneMode.Additive);
        }

        // CommonToolsが生成されるまで待つ
        yield return new WaitUntil(() => MakeToolsFlag);

        // ロゴを表示
        LogoWindow = ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_LOGO_WINDOW);

        // ロゴをフェードイン
        SceneController.Instance.FadeIn(() =>
        {
            StartCoroutine("OnLogoWait");
        });
    }

    /// <summary>
    /// CommonToolsが生成されたフラグを立てる
    /// </summary>
    /// <param name="m_LoadScene"></param>
    /// <param name="m_mode"></param>
    private void OnMakeTools(Scene m_LoadScene, LoadSceneMode m_mode)
    {
        MakeToolsFlag = true;
    }

    private IEnumerator OnLogoWait()
    {
        // ロゴを1秒間表示させる想定
        yield return new WaitForSeconds(1.0f);

        // ロゴをフェードアウト
        SceneController.Instance.FadeOut(Callback: () =>
        {
            // ロゴを削除
            Destroy(LogoWindow);

            // ゲームのタイトル画面をフェードインしてゲーム開始
            SceneController.Instance.FadeIn();
            TitleManager.SetActive(true);
        });

    }

}