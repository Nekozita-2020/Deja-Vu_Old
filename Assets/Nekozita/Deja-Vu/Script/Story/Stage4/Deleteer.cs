using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Deleteer : MonoBehaviour
{
    // カメラに写っていないときに呼ばれる関数
    void OnBecameInvisible()
    {
        GameObject.Destroy(this.gameObject);
    }
}
