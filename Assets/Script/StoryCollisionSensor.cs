using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoryCollisionSensor : MonoBehaviour
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
        else if (collision.gameObject.tag == "Finish")
        {
            GameDirector.GetComponent<StoryGameManagement>().OnGameClearProcess();
            // this.GetComponent<PlayToEffect>().OnEffectPlay_A();
            this.GetComponent<PlayToSEAfterDestroy>().OnPlaySE();
            this.GetComponent<ObjectDestroy>().OnObjectDerayDestroy();
        }
        // アタッチされてるオブジェクトと異なるタグに衝突
        else
        {
            GameDirector.GetComponent<StoryGameManagement>().OnGameOverProcess();
            this.GetComponent<PlayToEffect>().OnEffectPlay_A();
            this.GetComponent<PlayToSEAfterDestroy>().OnPlaySE();
            this.GetComponent<ObjectDestroy>().OnObjectDestroy();
        }
    }

}
