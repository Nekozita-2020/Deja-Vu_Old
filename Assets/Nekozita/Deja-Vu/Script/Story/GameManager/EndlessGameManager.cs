using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine.UI;

public class EndlessGameManager : StageGameManagerBase
{

    // スコア表示
    [SerializeField] private Text HighScore = null;
    [SerializeField] private int HighScoreNum;
    [SerializeField] private Text NowScore = null;
    [SerializeField] private int NowScoreNum;

    // ストーリーの進捗度(クリアしたステージ数)
    private int StoryProgress;

    // 地面を移動させていき無限に続くように見せる
    [SerializeField] private GameObject Grand1 = null;
    [SerializeField] private GameObject Grand2 = null;

    // 生成するオブジェクトを格納しているディレクトリのパス
    string StoryDirectoryPath = ResourcesDirectoryPath.PREFAB_STORY;

    // ランダムに生成するオブジェクトリスト
    private List<GameObject> RandomGenerateObject = new List<GameObject>();

    // 時間の管理変数
    private float m_Timer = 0.0f;

    // オブジェクトランダム生成のタイミング(秒)
    private float GenerateTiming = 3.0f;

    // 生成したオブジェクトが消えるまでの時間(秒)
    private float ObjectLifetime = 5.0f;

    // グレープの前にオブジェクトがランダム生成される距離
    private int ObjectBorder = 50;

    // 現在のオブジェクト生成数
    private int NowGenerateCount = 1;

    // 移動する地面の位置
    private int GrandMovingBorder;

    // 動かす地面の管理変数
    private int MoveGrandNum = 1;



    private void FixedUpdate()
    {
        // カメラがBorderまできたら前にいるTerrainを移動
        if (GrandMovingBorder < MainCamera.transform.position.z)
        {
            this.MoveTerrain();
        }

        // ランダム生成オブジェクト群があり、かつグレープが表示されている場合
        if (0 < RandomGenerateObject.Count && Grape.activeInHierarchy == true)
        {
            m_Timer += Time.deltaTime;

            // オブジェクトランダム生成タイミング
            if (GenerateTiming < m_Timer)
            {
                for(int i = 0; i < NowGenerateCount; i++)
                {
                    // オブジェクトのランダム生成
                    RandomObjectGenerate();
                }

                // オブジェクトの出力時スコアを加算
                AddScore();

                // スコアが一定の値に到達する毎にスピードを上げる
                if(NowScoreNum % 5 == 0)
                {
                    Grape.GetComponent<Forward>().ForwardSpeed++;
                }

                // スコアが一定の値に到達する毎にオブジェクト生成数を増やす
                if (NowScoreNum % 10 == 0)
                {
                    // 最大数を守りつつ、数を増やす
                    NowGenerateCount++;
                    NowGenerateCount = Mathf.Clamp(NowGenerateCount, 1, 3);
                }

                // 値の更新(次回のランダム生成タイミングをランダム設定)
                m_Timer = 0.0f;
                GenerateTiming = Random.Range(1.0f, 2.0f);
            }
        }
    }

    protected override void Init()
    {
        base.Init();

        // 動かす地面の管理変数の初期値を設定(この位置をカメラが超えたら移動)
        GrandMovingBorder = (int)Grand1.transform.localPosition.z * 2;

        // ストーリーの進捗度を取得(クリアしたステージ数)
        StoryProgress = PlayerPrefs.GetInt("ClearStage", -1);

        // Storyディレクトリ以下のGameObjectを全て取得
        SetObjectList(StoryDirectoryPath + "/Stage");

        // 現在のスコアを初期化
        NowScoreNum = 0;
        NowScore.text = NowScoreNum.ToString();

        // ハイスコアを表示
        HighScoreNum = PlayerPrefs.GetInt("HighScore", 0);
        HighScore.text = HighScoreNum.ToString();
    }

    /// <summary>
    /// 指定したディレクトリ(ディレクトリパス)以下の全ファイルを取得
    /// </summary>
    /// <param name="_DirectoryPath"></param>
    private void SetObjectList(string _DirectoryPath)
    {
        // チュートリアル未クリアの-1のままだと生成するオブジェクトが無くなってしまうので+1する
        StoryProgress++;
        for (int i = 0; i <= StoryProgress; i++)
        {
            _DirectoryPath = _DirectoryPath + i;

            // クリアしたステージまでのディレクトリに入っている全オブジェクトパスを取得
            GameObject[] FilePathArray =
                Resources.LoadAll<GameObject>(_DirectoryPath);

            // 取得したファイルの中からアセットだけリストに追加する
            foreach (GameObject FilePath in FilePathArray)
            {
                RandomGenerateObject.Add(FilePath);
            }
        }
    }

    /// <summary>
    /// 指定秒後に消滅するオブジェクトをランダム生成
    /// 座標は(Grapeの移動範囲, Grapeのz座標 + ObjectBorder(20〜50))からランダム
    /// </summary>
    private void RandomObjectGenerate()
    {
        int GenerateObjectNumber = Random.Range(0, RandomGenerateObject.Count);

        Destroy(Instantiate(RandomGenerateObject[GenerateObjectNumber],
            new Vector3(Random.Range(DataStore.MovementRange.LimitLeft, DataStore.MovementRange.LimitRight),
            Random.Range(DataStore.MovementRange.LimitBottom, DataStore.MovementRange.LimitTop),
            Grape.transform.localPosition.z + ObjectBorder),
            RandomGenerateObject[GenerateObjectNumber].transform.rotation), ObjectLifetime);

        // グレープの前にオブジェクトがランダム生成される距離を更新
        ObjectBorder = Random.Range(50, 100);
    }

    /// <summary>
    /// スコアを加算する
    /// </summary>
    private void AddScore()
    {
        NowScoreNum++;
        NowScore.text = NowScoreNum.ToString();
    }

    /// <summary>
    /// 地面を移動させていき無限に続くように見せる
    /// </summary>
    private void MoveTerrain()
    {
        GrandMovingBorder += 200;

        if (MoveGrandNum == 1)
        {
            Vector3 temp = new Vector3(Grand1.transform.localPosition.x,
                Grand1.transform.localPosition.y, GrandMovingBorder + 200);
            Grand1.transform.position = temp;

            // 次に動かす地面は2番
            MoveGrandNum = 2;
        }
        else if (MoveGrandNum == 2)
        {
            Vector3 temp = new Vector3(Grand2.transform.localPosition.x,
                Grand2.transform.localPosition.y, GrandMovingBorder + 200);
            Grand2.transform.position = temp;

            // 次に動かす地面は1番
            MoveGrandNum = 1;
        }
    }

    // ゲームオーバー処理を拡張
    protected override void OnGameOver()
    {
        base.OnGameOver();

        // ハイスコアチェック
        ScoreCompare();
    }

    /// <summary>
    /// ハイスコアかどうかを判定
    /// </summary>
    public void ScoreCompare()
    {
        if (HighScoreNum < NowScoreNum)
        {
            PlayerPrefs.SetInt("HighScore", NowScoreNum);
            PlayerPrefs.Save();
        }
    }

}