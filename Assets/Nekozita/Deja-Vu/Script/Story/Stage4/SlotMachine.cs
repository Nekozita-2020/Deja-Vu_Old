using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SlotMachine : MonoBehaviour
{
    // 生成するオブジェクト郡
    [SerializeField] private List<GameObject> m_CoinsObjList = null;

    [Header("オブジェクトの生成間隔秒(〜秒毎に生成)")]
    [SerializeField] private float GenerateInterval = 1.0f;

    // オブジェクト生成をするタイミングかどうかのフラグ
    private bool m_GanarateFlug = false;

    // 時間管理用
    private float m_Time = 0.0f;



    private void Start()
    {
        Init();
    }

    private void Init()
    {
        var m_FiollowScript = this.gameObject.GetComponent<FollowTarget_Z>();

        // Grapeを追従するようにする
        if (m_FiollowScript != null)
            m_FiollowScript.target = DataStore.OnGetCurrentGrape().transform;
        else
            Debug.Log("FollowTarget_Zがアタッチされてない");
    }

    private void Update()
    {
        if (m_GanarateFlug == true)
        {
            m_Time += Time.deltaTime;

            if (GenerateInterval < m_Time)
            {
                // 指定秒毎に生成
                GenerateToObject();

                m_Time = 0.0f;
            }
        }
    }

    /// <summary>
    /// オブジェクト群からオブジェクトを生成
    /// </summary>
    private void GenerateToObject()
    {
        int GenerateNum = Random.Range(0, m_CoinsObjList.Count);
        var Obj = Instantiate(m_CoinsObjList[GenerateNum], this.gameObject.transform);

        // オブジェクトの向きをランダムにする
        float m_RandomPos_x = Random.Range(DataStore.MovementRange.LimitLeft, DataStore.MovementRange.LimitRight);
        float m_FixedPos_y = DataStore.OnGetCurrentGrape().transform.localPosition.y;
        float m_FixedPos_z = DataStore.OnGetCurrentGrape().transform.localPosition.z;

        Vector3 RandomAngle = new Vector3(m_RandomPos_x, m_FixedPos_y, m_FixedPos_z);
        Obj.transform.LookAt(RandomAngle);

        // 生成したオブジェクトに消滅する条件を与えておく
        Destroy(Obj, 3.0f);
    }
}
