using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainCamaraController : MonoBehaviour
{

    private void Awake()
    {
        // シーン遷移後に削除されないようにする
        // DontDestroyOnLoad(this.gameObject);
    }

}