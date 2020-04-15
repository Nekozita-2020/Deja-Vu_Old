using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SlotMachine : MonoBehaviour
{
    // オブジェクト生成をするタイミングかどうかのフラグ
    [SerializeField] private bool m_GanarateFlug = false;

    // オブジェクトを生成する位置
    [SerializeField] private Transform m_GeneratePos = null;

    // 生成するオブジェクト郡
    [SerializeField] private List<GameObject> m_CoinsObjList = null;

    [Header("オブジェクトの生成間隔秒(〜秒毎に生成)")]
    [SerializeField] [Range(0.5f, 3.0f)] public float GenerateInterval = 1.0f;
    [Range(0.5f, 3.0f)] private float GenerateInterval_Chche = 1.0f;

    [Header("レベル変化させるまでの秒数")]
    [SerializeField] [Range(1, 10)] public float ChangeLevelInterval = 7.0f;
    [Range(1, 10)] private float ChangeLevelInterval_Chche = 10.0f;

    // オブジェクト排出レベル
    private int m_Level = 1;

    // オブジェクト排出率(1度に何個?)
    private int m_GenerateCount = 1;

    // 時間管理用
    private float m_Time = 0.0f;



    private void Start()
    {
        Init();
    }

    private void Init()
    {
        // Grapeを追従するようにする
        var m_FiollowScript = this.gameObject.GetComponent<FollowTarget_Z>();
        if (m_FiollowScript != null)
            m_FiollowScript.target = DataStore.OnGetCurrentGrape().transform;
        else
            Debug.Log("FollowTarget_Zがアタッチされてない");

        // レベルをランダム設定
        OnChangeLevel();

        // 変数の値をキャッシュ
        GenerateInterval_Chche = GenerateInterval;
        ChangeLevelInterval_Chche = ChangeLevelInterval;
    }

    private void FixedUpdate()
    {
        if (m_GanarateFlug == true)
        {
            m_Time += Time.deltaTime;

            // レベル変更チェック
            if (ChangeLevelInterval_Chche < m_Time)
            {
                // レベルを変更
                OnChangeLevel();

                // インターバル更新
                ChangeLevelInterval_Chche = ChangeLevelInterval + m_Time;
            }

            //オブジェクト排出チェック
            if (GenerateInterval_Chche < m_Time)
            {
                // 指定秒毎に生成して、インターバルを更新
                for(int i = 0; i < m_GenerateCount; i++)
                {
                    // オブジェクト排出率(レベル依存)に応じてオブジェクトを出す
                    GenerateToObject();
                }

                // インターバル更新
                GenerateInterval_Chche = GenerateInterval + m_Time;
            }
        }
    }

    /// <summary>
    /// オブジェクト群からオブジェクトを生成
    /// </summary>
    private void GenerateToObject()
    {
        int GenerateNum = Random.Range(0, m_CoinsObjList.Count);
        var Obj = Instantiate(m_CoinsObjList[GenerateNum], m_GeneratePos);

        // オブジェクトの向きをランダムにする
        float m_RandomPos_x = Random.Range(DataStore.MovementRange.LimitLeft + 1,
            DataStore.MovementRange.LimitRight - 1);
        float m_FixedPos_y = DataStore.OnGetCurrentGrape().transform.localPosition.y;
        float m_FixedPos_z = DataStore.OnGetCurrentGrape().transform.localPosition.z;

        Vector3 RandomAngle = new Vector3(m_RandomPos_x, m_FixedPos_y, m_FixedPos_z);
        Obj.transform.LookAt(RandomAngle);
    }

    /// <summary>
    /// レベルを変更
    /// </summary>
    private void OnChangeLevel()
    {
        m_Level = Random.Range(1, 11);

        // コイン排出率 = レベルという仕様
        m_GenerateCount = m_Level;

        switch (m_Level)
        {
            case 1:
                GenerateInterval = 3.0f;
                break;
            case 2:
                GenerateInterval = 2.75f;
                break;
            case 3:
                GenerateInterval = 2.5f;
                break;
            case 4:
                GenerateInterval = 2.0f;
                break;
            case 5:
                GenerateInterval = 2.0f;
                break;
            case 6:
                GenerateInterval = 1.5f;
                break;
            case 7:
                GenerateInterval = 1.5f;
                break;
            case 8:
                GenerateInterval = 1.0f;
                break;
            case 9:
                GenerateInterval = 1.0f;
                break;
            case 10:
                GenerateInterval = 0.5f;
                break;
            default:
                break;
        }
    }
}
