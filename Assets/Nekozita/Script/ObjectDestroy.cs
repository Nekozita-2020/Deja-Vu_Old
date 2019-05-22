using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectDestroy : MonoBehaviour
{

    void Start()
    {

    }

    void Update()
    {

    }

    public void OnObjectDestroy()
    {
        // オブジェクトを消去
        Destroy(this.gameObject);
        // Destroy(TouchSencer);
    }

    public void OnObjectDerayDestroy()
    {
        // 3秒後にオブジェクトを消去
        Destroy(this.gameObject, 3.0f);
        // Destroy(TouchSencer);
    }

}