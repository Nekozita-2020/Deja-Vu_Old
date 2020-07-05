namespace Nekozita
{
    // UnityのBuildSettingsに登録してあるシーン名と完全一致でここに記述する
    public enum SceneLavel
    {
        Title,
        CommonTools,
        Home,
        StoryMenu,
        Endless,
        Stage0,
        Stage1,
        Stage2,
        Stage3,
        Stage4,
        Stage5,
        Stage6,
        Stage7,
        Stage8,
        Stage9,
        Stage10,
        Stage11,
        Stage12,
        Stage13,
        Stage14,
        Stage15,
    }

    /// <summary>
    /// シーンをまたいでデータを受け渡すときに利用する
    /// </summary>
    public abstract class SceneDataPack
    {
        /// <summary>
        /// 前のシーン
        /// </summary>
        public abstract SceneLavel p_PreviousGameScene { get; }

        /// <summary>
        /// 前シーンで追加ロードしていたシーン一覧
        /// </summary>
        public abstract SceneLavel[] p_PreviousAdditiveScene { get; }
    }

    /// <summary>
    /// デフォルト実装
    /// </summary>
    public class DefaultSceneDataPack : SceneDataPack
    {
        private readonly SceneLavel m_PrevGameScenes;
        private readonly SceneLavel[] m_AdditiveScenes;

        public SceneLavel[] p_AdditiveScenes
        {
            get { return m_AdditiveScenes; }
        }

        public override SceneLavel p_PreviousGameScene
        {
            get { return m_PrevGameScenes; }
        }

        public override SceneLavel[] p_PreviousAdditiveScene
        {
            get { return null; }
        }

        public DefaultSceneDataPack(SceneLavel _Prev, SceneLavel[] _Additive)
        {
            m_PrevGameScenes = _Prev;
            m_AdditiveScenes = _Additive;
        }
    }

    // シーン遷移持のデータ受け渡し例

    /* バトルシーンに遷移する際に利用するDataPack
    public class ToBattleSceneDataPack : SceneDataPack
    {
        private readonly GameScenes m_PreviousGameScene;
        private readonly GameScenes[] m_AdditiveGameScenes;

        public override GameScenes p_PreviousGameScene
        {
            get { return m_PreviousGameScene; }
        }

        public override GameScenes[] p_PreviousAdditiveScene
        {
            get { return m_AdditiveGameScenes; }
        }

        /// <summary>
        /// 参加人数
        /// </summary>
        public int PlayerCount { get; private set; }

        public ToBattleSceneDataPack(int _PlayerCount, GameScenes _PreviousGameScene, GameScenes[] _AdditiveSceneses)
        {
            PlayerCount = _PlayerCount;
            this.m_PreviousGameScene = _PreviousGameScene;
            m_AdditiveGameScenes = _AdditiveSceneses;
        }
    }
    */

    /* 遷移元シーン
    // プレイヤ人数を3名に設定
    var m_DataPack = new ToBattleSceneDataPack(3, GameScenes.Menu, new GameScenes[0]);
    // シーン遷移
    SceneLoader.LoadScene(GameScenes.Stage1, m_DataPack, new[] { GameScenes.BattleManager });
    */

    /* 遷移先シーン
    // 遷移先のマネージャコンポーネントなどで値を読み取って初期化に利用できる
    private void Start()
    {
        var data = SceneLoader.PreviousSceneData as ToBattleSceneDataPack;
        if (data != null)
        {
            var playerCount = data.PlayerCount;
            InitializeGame(playerCount);
        }
        else
        {
            Debug.LogError("初期化に必要な情報が足りません。デバッグデータを利用します。");
            InitializeGame(1);
        }
    }
    */
}