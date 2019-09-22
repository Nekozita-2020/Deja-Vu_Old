using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// 衝突を検知したらコールバック先にて処理を行う
/// </summary>
public class CollisionSensor : MonoBehaviour
{

    public Action<Collider> CallBack = null;
 
    private void OnTriggerEnter(Collider m_Collision)
    {
        this.CallBack?.Invoke(m_Collision);
    }

}
