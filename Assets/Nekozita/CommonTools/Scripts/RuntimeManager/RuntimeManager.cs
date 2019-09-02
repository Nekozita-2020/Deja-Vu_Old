using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using System.Collections;

/// <summary>
/// ゲーム起動時に実行させる処理をまとめたクラス
/// </summary>
public class RuntimeManager : SingletonMonoBehaviour<RuntimeManager>
{

    [SerializeField] private GameObject Logo = null;
    [SerializeField] private GameObject TitleManager = null;


    private IEnumerator Start()
    {
        // CommonToolsをロード
        OnMakeTools();

        // 【応急処置】1フレーム待つ
        yield return null;

        // ロゴをフェードイン
        SceneController.Instance.FadeIn();

        // ロゴを1秒間表示させる想定
        yield return new WaitForSeconds(1.0f);

        // ロゴをフェードアウト
        SceneController.Instance.FadeOut(Callback:() =>
        {
            // ロゴを非表示
            Logo.SetActive(false);

            // ゲームのタイトル画面をフェードインしてゲーム開始
            SceneController.Instance.FadeIn();
            TitleManager.SetActive(true);
        });
    }

    private void OnMakeTools()
    {
        // ゲーム起動時にロードさせるシーン名
        string LoadSceneName = "CommonTools";

        // 追加予定のSceneが有効でない時(まだ読み込んでいない時)だけ追加ロードするように
        if (!SceneManager.GetSceneByName(LoadSceneName).IsValid())
        {
            SceneManager.LoadScene(LoadSceneName, LoadSceneMode.Additive);
        }
    }

}