using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoundScript : MonoBehaviour
{
    // バウンドさせたいオブジェクトを宣言
    [SerializeField] private Rigidbody sphere;

    [Tooltip("バウンド係数のランダム範囲")]
    public float m_RamdomBouncinessLower = 1.0f;
    public float m_RamdomBouncinessUpper = 30.0f;


    // オブジェクトに衝突した時のメソッド
    private void OnCollisionEnter(Collision collision)
    {
        // バウンドする度にバウンド係数をランダム設定
        float m_RandomBounciness = Random.Range(m_RamdomBouncinessLower, m_RamdomBouncinessUpper);

        if (collision.gameObject.tag == "Scenery")
        {
            // ランダムなバウンド係数でY軸方向に力を与える
            sphere.AddForce(Vector3.up * m_RandomBounciness, ForceMode.Impulse);
        }

    }
}