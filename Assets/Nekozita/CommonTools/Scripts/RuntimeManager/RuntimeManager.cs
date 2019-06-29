using UnityEngine;
using UnityEngine.SceneManagement;

/// <summary>
/// ゲーム起動時に実行させる処理をまとめたクラス
/// コンポーネントに設定しなくてもちゃんと呼ばれる！
/// </summary>
public class RuntimeManager
{

    // ゲーム開始時(シーン読み込み前)に実行される
    [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
    private static void RuntimeMethod()
    {
        Debug.Log("Runtime処理を実行: BeforeSceneLoad");

        // ゲーム起動時にロードさせるシーン名
        string LoadSceneName = "CommonTools";

        // 追加予定のSceneが有効でない時(まだ読み込んでいない時)だけ追加ロードするように
        if (!SceneManager.GetSceneByName(LoadSceneName).IsValid())
        {
            SceneManager.LoadScene(LoadSceneName, LoadSceneMode.Additive);
        }
    }

}