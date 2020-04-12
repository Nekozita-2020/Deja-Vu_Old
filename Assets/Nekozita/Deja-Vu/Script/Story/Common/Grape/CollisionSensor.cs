using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 衝突を検知したらコールバック先にて処理を行う
/// </summary>
public class CollisionSensor : MonoBehaviour
{
    public Action<Collider> m_ColliderCallBack = null;
    public Action<Collision> m_CollisionCallBack = null;



    private void OnTriggerEnter(Collider m_Collision)
    {
        this.m_ColliderCallBack?.Invoke(m_Collision);
    }

    // オブジェクトに衝突した時のメソッド
    private void OnCollisionEnter(Collision m_Collision)
    {
        this.m_CollisionCallBack?.Invoke(m_Collision);
    }
}
