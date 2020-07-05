using UniRx;
using System;
using UnityEngine;

namespace Nekozita
{
    /* How To
     * // 単純なシーン遷移
     * SceneLoader.LoadScene(GameScenes.Home);
     * 
     * // "Stage1"シーンを先にロードし、続けて"BattleManager"シーンをロード
     * SceneLoader.LoadScene(GameScenes.Stage1, additiveLoadScenes: new[] { GameScenes.BattleManager });
    */

    public static class SceneLoader
    {
        /// <summary>
        /// 前のシーンから引き継いだデータ
        /// </summary>
        public static SceneDataPack m_PreviousSceneData;

        /// <summary>
        /// シーン遷移マネージャ
        /// </summary>
        private static TransitionManager m_TransitionManager;

        /// <summary>
        /// シーン遷移マネージャのプロパティ
        /// (存在しない場合は生成する)
        /// </summary>
        private static TransitionManager p_TransitionManager
        {
            get
            {
                if (m_TransitionManager != null)
                    return m_TransitionManager;

                Initialize();
                return m_TransitionManager;
            }
        }



        /// <summary>
        /// トランジションマネージャが存在しない場合に初期化する
        /// </summary>
        public static void Initialize()
        {
            if (TransitionManager.Instance == null)
            {
                var resource = Resources.Load("TransitionCanvas");
                UnityEngine.Object.Instantiate(resource);
            }
            m_TransitionManager = TransitionManager.Instance;
        }

        /// <summary>
        /// シーン遷移のトランジションが完了したことを通知する
        /// </summary>
        public static IObservable<Unit> OnTransitionFinished
        {
            get { return p_TransitionManager.p_OnTransitionAnimationFinished; }
        }

        /// <summary>
        /// シーンのロードが全て完了したことを通知する
        /// </summary>
        public static IObservable<Unit> OnScenesLoaded { get { return p_TransitionManager.p_OnScenesLoaded.FirstOrDefault(); } }

        /// <summary>
        /// トランジションアニメーションを終了させてゲームシーンを移す
        /// （AutoMoveにfalseを指定した際に実行する必要がある）
        /// </summary>
        public static void EndTransitionAnim()
        {
            p_TransitionManager.EndTransitionAnim();
        }

        /// <summary>
        ///　シーン遷移処理中か
        /// </summary>
        public static bool IsTransitionRunning
        {
            get { return p_TransitionManager.p_IsRunning; }
        }

        /// <summary>
        /// シーン遷移を行う
        /// </summary>
        /// <param name="scene">次のシーン</param>
        /// <param name="data">次のシーンへ引き継ぐデータ</param>
        /// <param name="additiveLoadScenes">追加でロードするシーン</param>
        /// <param name="autoMove">トランジションアニメーションを自動的に完了させるか
        ///                        falseの場合はOpen()を実行しないとトランジションが終了しない</param>
        public static void LoadScene(SceneLavel scene,
            SceneDataPack data = null,
            SceneLavel[] additiveLoadScenes = null,
            bool autoMove = true)
        {
            if (data == null)
            {
                //引き継ぐデータが未指定の場合はシーン情報のみを詰める
                data = new DefaultSceneDataPack(p_TransitionManager.p_CurrentGameScene, additiveLoadScenes);
            }
            p_TransitionManager.StartTransaction(scene, data, additiveLoadScenes, autoMove);
        }
    }
}