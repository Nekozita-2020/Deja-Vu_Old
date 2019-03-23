using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionSensor : MonoBehaviour
{

    GameObject GameDirector;

    void Start()
    {
        GameDirector = GameObject.Find("GameDirector");
    }

    void Update()
    {

    }

    // 衝突時の処理
    void OnCollisionEnter(Collision collision)
    {
        // 無害の物に衝突
        if (collision.gameObject.tag == "Scenery")
        {
            // 何も起こらない
        }
        // アタッチされてるオブジェクトと異なるタグに衝突
        else if (collision.gameObject.tag != this.tag)
        {
            GameDirector.GetComponent<GameManagement>().OnGameOverProcess();
            this.GetComponent<PlayToEffect>().OnEffectPlay_A();
            this.GetComponent<PlayToSEAfterDestroy>().OnPlaySE();
            this.GetComponent<ObjectDestroy>().OnObjectDestroy();
        }
    }

}
