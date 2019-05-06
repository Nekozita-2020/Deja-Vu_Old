using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StoryCollisionSensor : MonoBehaviour
{

    [SerializeField] StoryGameManagement StoryGameManagement;

    void Start()
    {

    }

    void Update()
    {

    }

    // 衝突時の処理
    void OnCollisionEnter(Collision collision)
    {
        // 無害の物に衝突
        if (collision.gameObject.tag == this.gameObject.tag || collision.gameObject.tag == "Scenery")
        {
            // 何も起こらない
        }
        else if (collision.gameObject.tag == "Finish")
        {
            StoryGameManagement.OnGameClearProcess();
            // this.GetComponent<PlayToEffect>().OnEffectPlay_A();
            this.GetComponent<PlayToSEAfterDestroy>().OnPlaySE();
            this.GetComponent<ObjectDestroy>().OnObjectDerayDestroy();
        }
        // アタッチされてるオブジェクトと異なるタグに衝突
        else
        {
            StoryGameManagement.OnGameOverProcess();
            this.GetComponent<PlayToEffect>().OnEffectPlay_A();
            this.GetComponent<PlayToSEAfterDestroy>().OnPlaySE();
            this.GetComponent<ObjectDestroy>().OnObjectDestroy();
        }
    }

}
