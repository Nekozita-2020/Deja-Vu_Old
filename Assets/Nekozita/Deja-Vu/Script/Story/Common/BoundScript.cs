using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BoundScript : MonoBehaviour
{

    [SerializeField] private Rigidbody sphere;//バウンドさせたいオブジェクトを宣言

    //sphereに触れた時のメソッド
    private void OnCollisionEnter(Collision collision)
    {
        //Y軸方向に常に同じ力を与える
        sphere.AddForce(Vector3.up * 10f, ForceMode.Impulse);
    }
}