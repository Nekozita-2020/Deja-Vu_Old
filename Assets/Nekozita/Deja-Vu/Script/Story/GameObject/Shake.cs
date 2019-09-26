using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shake : MonoBehaviour
{
    [Header("移動方向")]
    [SerializeField] private bool Horizontal = false;
    [SerializeField] private bool Vertical = false;

    [Header("移動範囲")]
    [SerializeField] private float Width = 1.0f;
    [SerializeField] private float Height = 1.0f;

    [Header("スピード")]
    [SerializeField] private float speed = 1.0f;

    // 値を保存する用
    private float Elapsed = 0.0f;



    private void FixedUpdate()
    {
        // いずれかの移動方向が指定されている時
        if(Horizontal || Vertical)
        {
            Elapsed += Time.deltaTime * speed;

            // 水平方向
            if (Horizontal)
            {
                this.transform.localPosition = new Vector3(Mathf.Cos(Elapsed) * Width,
                    this.transform.localPosition.y, this.transform.localPosition.z);
            }

            // 垂直方向
            if (Vertical)
            {
                this.transform.localPosition = new Vector3(this.transform.localPosition.x,
                    Mathf.Sin(Elapsed) * Height, this.transform.localPosition.z);
            }

            // 奥行き
        }
    }
}
