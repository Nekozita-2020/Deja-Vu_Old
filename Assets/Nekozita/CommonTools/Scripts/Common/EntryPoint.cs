using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using System.Collections;
using Cysharp.Threading.Tasks;

/// <summary>
/// ゲーム起動時に実行させる処理をまとめたクラス
/// </summary>
public class EntryPoint : SingletonMonoBehaviour<EntryPoint>
{
    [RuntimeInitializeOnLoadMethod()]
    static async void Init()
    {
        // フレームレートを30FPSに設定
        Application.targetFrameRate = 30;

        // 追加予定のCommonToolsが有効でない時(まだ読み込んでいない時)だけ追加ロードするように
        if (!SceneManager.GetSceneByName("CommonTools").IsValid())
        {
            await SceneManager.LoadSceneAsync("CommonTools", LoadSceneMode.Additive);

            /* 進捗とか表示する用の「UniTask Ver2」用の書き方
            await SceneManager.LoadSceneAsync("CommonTools", LoadSceneMode.Additive)
                .ToUniTask(
                Progress.Create<float>(n => Debug.Log($"現在{n * 100}%"))
                );
            */
        }

        // ロゴウインドウを出す
        // ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_WATER_FLOAR);


    }

    /*
    private IEnumerator Start()
    {
        // フレームレートを30FPSに設定
        Application.targetFrameRate = 30;

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
    */

}