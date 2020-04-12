using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Piano : MonoBehaviour
{

    // 衝突センサー
    [SerializeField] private CollisionSensor m_CollisionSensor = null;

    // 移動するスクリプト
    [SerializeField] private FollowTarget_Z m_FollowTarget_Z = null;

    // 生成するオブジェクト群
    [SerializeField] private List<GameObject> GenerateObject = null;

    [Header("オブジェクトの生成間隔秒(〜秒毎に生成)")]
    [SerializeField] private float GenerateInterval = 2.0f;

    // そのシーン中のグレープ
    private GameObject m_Grape = null;

    // オブジェクト生成をするタイミングかどうかのフラグ
    private bool m_GanarateFlug = false;

    // 時間管理用
    private float m_Time = 0.0f;



    private void Awake()
    {
        // シーン中のグレープを探索する
        // (ScriptableObjectでもエンドレスモードに対応できないため、苦肉の策)
        m_Grape = GameObject.Find("Grape");

        m_CollisionSensor.m_ColliderCallBack = ActiveMovement;
    }

    private void FixedUpdate()
    {
        if (m_GanarateFlug == true)
        {
            m_Time += Time.deltaTime;

            if (GenerateInterval < m_Time)
            {
                // 1秒毎に生成
                GenerateToObject();

                m_Time = 0.0f;
            }
        }
    }

    /// <summary>
    /// 追従スクリプトをアクティブ化して、オブジェクト生成フラグも立てる
    /// </summary>
    /// <param name="m_Collision"></param>
    private void ActiveMovement(Collider m_Collision)
    {
        // 衝突オブジェクトがグレープなら
        if (m_Collision.gameObject == m_Grape)
        {
            // スクリプトをアクティブにしてフラグも立てる
            m_FollowTarget_Z.target = m_Grape?.transform;
            m_FollowTarget_Z.enabled = true;
            m_GanarateFlug = true;
        }
    }

    /// <summary>
    /// オブジェクト群からオブジェクトを生成
    /// </summary>
    private void GenerateToObject()
    {
        int GenerateNum = 0;
        GenerateNum = Random.Range(0, GenerateObject.Count);

        var Obj = Instantiate(GenerateObject[GenerateNum], this.gameObject.transform);

        // 生成したオブジェクトに向かっていく対象を伝える
        Obj.GetComponent<LookAtTarget>()?.SetTarget(m_Grape?.transform);

        // 生成したオブジェクトに消滅する条件を与えておく
        Destroy(Obj, 3.0f);
    }

}