using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class forward : MonoBehaviour
{

    [Tooltip("進行速度")]
    public float ForwardSpeed = 20F;
        
    void FixedUpdate()
    {
        // 設定したスピードで進む(このオブジェクトを基準にしたZ方向(0, 0, 1)の単位ベクトル)
        transform.position += transform.forward * Time.deltaTime * ForwardSpeed;
    }

}