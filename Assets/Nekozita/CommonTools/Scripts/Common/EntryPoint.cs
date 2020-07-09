using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using System.Collections;
using Cysharp.Threading.Tasks;

namespace Nekozita
{
    /// <summary>
    /// ゲーム起動時に実行させる処理をまとめたクラス
    /// </summary>
    public class EntryPoint : SingletonMonoBehaviour<EntryPoint>
    {
        public static bool m_MakeToolsFlag = false;


        /*
        // RuntimeInitializeLoadType.BeforeSceneLoadを付けることで各Awakeより前に呼べる
        // [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        static async void RuntimeInitialize()
        {
            // フレームレートを30FPSに設定
            Application.targetFrameRate = 30;

            // 追加予定のCommonToolsが有効でない時(まだ読み込んでいない時)だけ追加ロードするように
            if (!SceneManager.GetSceneByName("CommonTools").IsValid())
            {
                await SceneManager.LoadSceneAsync("CommonTools", LoadSceneMode.Additive);

                // 進捗とか表示する用の「UniTask Ver2」用の書き方
                // await SceneManager.LoadSceneAsync("CommonTools", LoadSceneMode.Additive)
                //     .ToUniTask(
                //     Progress.Create<float>(n => Debug.Log($"現在{n * 100}%"))
                //     );
            }
        }
        */

        // RuntimeInitializeLoadType.BeforeSceneLoadを付けることで各Awakeより前に呼べる
        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
        private static void RuntimeInitialize()
        {
            // 起動時の設定
            SystemSetting();
        }

        private static void SystemSetting()
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
        }

        /// <summary>
        /// CommonToolsが生成された時の処理
        /// </summary>
        /// <param name="m_LoadScene"></param>
        /// <param name="m_mode"></param>
        private static void OnMakeCommonTools(Scene m_LoadScene, LoadSceneMode m_mode)
        {
            m_MakeToolsFlag = true;
        }
    }
}