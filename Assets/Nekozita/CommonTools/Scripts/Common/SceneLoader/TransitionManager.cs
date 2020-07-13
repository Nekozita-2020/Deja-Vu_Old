using System;
using System.Collections;
using System.Linq;
using UniRx;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

namespace Nekozita
{
    /// <summary>
    /// シーン遷移を管理する
    /// </summary>
    public class TransitionManager : SingletonMonoBehaviour<TransitionManager>
    {
        /// <summary>
        /// 蓋絵（トランジションアニメーションの管理コンポーネント）
        /// </summary>
        private MeshTransition m_TransitionComponent;

        /// <summary>
        /// 蓋絵のImage
        /// </summary>
        [SerializeField] private Image m_CoverImage = null;

        /// <summary>
        /// シーン遷移処理を実行中であるか
        /// </summary>
        private bool m_IsRunning = false;

        public bool p_IsRunning { get { return m_IsRunning; } }

        /// <summary>
        /// トランジションアニメーションを終了させてよいか
        /// (蓋絵が開くアニメーションを再生してよいか)
        /// </summary>
        private ReactiveProperty<bool> m_IsCanEndTransition = new ReactiveProperty<bool>(false);

        private SceneLavel m_CurrentGameScene;

        /// <summary>
        /// 現在のシーン情報
        /// </summary>
        public SceneLavel p_CurrentGameScene
        {
            get { return m_CurrentGameScene; }
        }

        /// <summary>
        /// トランジションのアニメーションの終了通知
        /// (蓋絵が開き切ったり、閉じきったことを通知する)
        /// </summary>
        private Subject<Unit> m_OnTransactionFinishedInternal = new Subject<Unit>();

        /// <summary>
        /// トランジションが終了しシーンが開始したことを通知する
        /// </summary>
        private Subject<Unit> m_OnTransitionAnimationFinishedSubject = new Subject<Unit>();

        private Subject<Unit> m_OnAllSceneLoaded = new Subject<Unit>();

        /// <summary>
        /// 全シーンのロードが完了したことを通知する
        /// </summary>
        public IObservable<Unit> p_OnScenesLoaded { get { return m_OnAllSceneLoaded; } }

        /// <summary>
        /// トランジションが終了し、シーンが開始したことを通知する
        /// OnCompletedもセットで発行する
        /// </summary>
        public IObservable<Unit> p_OnTransitionAnimationFinished
        {
            get
            {
                if (m_IsRunning)
                {
                    return m_OnTransitionAnimationFinishedSubject.FirstOrDefault();
                }
                else
                {
                    //シーン遷移を実行していないなら即値を返却
                    return Observable.Return(Unit.Default);
                }
            }
        }



        private void Awake()
        {
            // 勝手に消さない
            DontDestroyOnLoad(this.gameObject);

            try
            {
                // 現在のシーンを取得する
                m_CurrentGameScene =
                    (SceneLavel)Enum.Parse(typeof(SceneLavel), SceneManager.GetActiveScene().name, false);
            }
            catch
            {
                Debug.Log("現在のシーンの取得に失敗");

                // Debugシーンとかの場合は適当なシーンで埋めておく
                m_CurrentGameScene = SceneLavel.Title; 
            }
        }

        private void Start()
        {
            Initialize();

            // トランジションの終了を待機してゲームを開始するような設定の場合を想定して
            // 初期化直後にシーン遷移完了通知を発行する(デバッグで任意のシーンからゲームを開始できるように)
            m_OnAllSceneLoaded.OnNext(Unit.Default);
        }

        /// <summary>
        /// 初期化
        /// </summary>
        private void Initialize()
        {
            if (m_TransitionComponent == null)
            {
                m_TransitionComponent = GetComponent<MeshTransition>();
                // m_Image = GetComponent<Image>();

                // タッチイベントを蓋絵でブロクしない
                m_CoverImage.raycastTarget = false;

                // この辺はMeshTransitionの設定
                // アニメーションが終わったら自動的に反転する(蓋の開け閉めを別々のメソッド用意した方が可読性が高いかも)
                // m_TransitionComponent.flipAfterAnimation = true;

                // トランジションアニメーションが終了したイベントをObservableに変換する
                m_TransitionComponent.onTransitionComplete.AddListener(
                    () => m_OnTransactionFinishedInternal.OnNext(Unit.Default));
            }
        }

        /// <summary>
        /// トランジションアニメーションを終了させる
        /// （AutoMove=falseを指定した際に呼び出す必要がある)
        /// </summary>
        public void EndTransitionAnim()
        {
            m_IsCanEndTransition.Value = true;
        }

        /// <summary>
        /// シーン遷移を実行する
        /// </summary>
        /// <param name="_NextScene">次のシーン</param>
        /// <param name="_Data">次のシーンへ引き継ぐデータ</param>
        /// <param name="_AdditiveLoadScenes">追加ロードするシーン</param>
        /// <param name="_AutoMove">トランジションの自動遷移を行うか</param>
        public void StartTransaction(
            SceneLavel _NextScene,
            SceneDataPack _Data,
            SceneLavel[] _AdditiveLoadScenes,
            bool _AutoMove
            )
        {
            if (m_IsRunning) return;
            StartCoroutine(TransitionCoroutine(_NextScene, _Data, _AdditiveLoadScenes, _AutoMove));
        }

        /// <summary>
        /// シーン遷移処理の本体
        /// </summary>
        private IEnumerator TransitionCoroutine(
            SceneLavel _NextScene,
            SceneDataPack _Data,
            SceneLavel[] _AdditiveLoadScenes,
            bool _AutoMove
            )
        {
            // 処理開始フラグセット
            m_IsRunning = true;

            // トランジションの自動遷移設定
            m_IsCanEndTransition.Value = _AutoMove;

            if (m_TransitionComponent == null)
            {
                // 初期化できてなかったらここで初期化する
                Initialize();
                yield return null;
            }

            // 蓋絵でuGUIのタッチイベントをブロックする
            m_CoverImage.raycastTarget = true;

            // トランジション開始（蓋絵で画面を隠す）
            // m_TransitionComponent.flip = false;
            // m_TransitionComponent.ignoreTimeScale = true;
            m_TransitionComponent.OnPlayCloseTransitionAnim();

            // トランジションアニメーションが終了するのを待つ
            yield return m_OnTransactionFinishedInternal.FirstOrDefault().ToYieldInstruction();

            // 前のシーンから受け取った情報を登録
            SceneLoader.m_PreviousSceneData = _Data;

            // メインとなるシーンをSingleで読み込む
            yield return SceneManager.LoadSceneAsync(_NextScene.ToString(), LoadSceneMode.Single);

            // 追加シーンがある場合は一緒に読み込む
            if (_AdditiveLoadScenes != null)
            {
                yield return _AdditiveLoadScenes.Select(scene =>
                    SceneManager.LoadSceneAsync(scene.ToString(), LoadSceneMode.Additive)
                    .AsObservable()).WhenAll().ToYieldInstruction();
            }
            yield return null;

            // 使ってないリソースの解放とGCを実行
            Resources.UnloadUnusedAssets();
            GC.Collect();

            yield return null;

            // 現在シーンを設定
            m_CurrentGameScene = _NextScene;

            // シーンロードの完了通知を発行
            m_OnAllSceneLoaded.OnNext(Unit.Default);

            if (!_AutoMove)
            {
                // 自動遷移しない設定の場合はフラグがtrueに変化するまで待機
                yield return m_IsCanEndTransition.FirstOrDefault(x => x).ToYieldInstruction();
            }
            m_IsCanEndTransition.Value = false;

            // 蓋絵を開く方のアニメーション開始
            m_TransitionComponent.OnPlayOpenTransitionAnim();

            // 蓋絵が開ききるのを待つ
            yield return m_OnTransactionFinishedInternal.FirstOrDefault().ToYieldInstruction();

            // 蓋絵のイベントブロックを解除
            m_CoverImage.raycastTarget = false;

            // トランジションが全て完了したことを通知
            m_OnTransitionAnimationFinishedSubject.OnNext(Unit.Default);

            // 終了
            m_IsRunning = false;
        }
    }
}