using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReturnPoint : MonoBehaviour
{
    [SerializeField] private Transform m_Grape = null;

    // グレープのスタート時z座標
    private float m_GrapeFirst_Z_Point;



    private void Start()
    {
        // グレープのスタート位置を設定
        m_GrapeFirst_Z_Point = m_Grape.transform.localPosition.z;
    }

    private void OnTriggerEnter(Collider m_Collision)
    {
        ReturnToStartPosition(m_Grape);
    }

    private void ReturnToStartPosition(Transform _ReturnToTarget)
    {
        Vector3 m_ReturnToPosition = new Vector3(_ReturnToTarget.localPosition.x,
            _ReturnToTarget.localPosition.y, m_GrapeFirst_Z_Point);

        _ReturnToTarget.localPosition = m_ReturnToPosition;
    }

}
