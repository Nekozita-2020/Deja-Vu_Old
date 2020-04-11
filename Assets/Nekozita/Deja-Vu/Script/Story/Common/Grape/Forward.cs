using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Forward : MonoBehaviour
{
    [Tooltip("進行速度")]
    public float ForwardSpeed = 20.0f;

    [Tooltip("進行速度(一定)をランダムにするか")]
    [SerializeField] private bool IsRamdom_InitialSpeed = false;

    [Tooltip("ランダム速度範囲")]
    public float m_RamdomSpeedLower = 0.0f;
    public float m_RamdomSpeedUpper = 10.0f;

    [Tooltip("進行方向　true: 向いてる方向へ false: 逆向きへ")]
    [SerializeField] private bool IsForward = true;



    private void Start()
    {
        if (IsRamdom_InitialSpeed)
        {
            // ランダム速度が指定されてる場合は速度をランダムにセット
            ForwardSpeed = Random.Range(m_RamdomSpeedLower, m_RamdomSpeedUpper);
        }
    }

    void FixedUpdate()
    {
        if(IsForward == true)
        {
            // 設定したスピードで進む(このオブジェクトを基準にしたZ方向(0, 0, 1)の単位ベクトル)
            transform.position += transform.forward * Time.deltaTime * ForwardSpeed;
        }
        else
        {
            // 設定したスピードで進む(このオブジェクトを基準にしたZ方向(0, 0, 1)の単位ベクトル)
            transform.position -= transform.forward * Time.deltaTime * ForwardSpeed;
        }
    }

}