using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomObjectGenerate : MonoBehaviour
{
    public GameObject ScoreCount;

    GameObject MainCamera;

    int ObjectBorder = 10;
    int ObjectNumber;

    //ランダムで出現させるプレハブ群
    public GameObject[] RandomGenerateObject;

    private float Lifetime = 3;

    void Start()
    {
        MainCamera = GameObject.Find("MainCamera");
        ObjectNumber = Random.Range(0, RandomGenerateObject.Length);
    }

    void Update()
    {
        if (ObjectBorder < MainCamera.transform.position.z)
        {
            CreateObject();
        }
    }

    void CreateObject()
    {
        // Lifetime秒後に消滅するオブジェクトをランダム生成
        // 座標は(-2 ~ 2, 2 ~ 5, ObjectBorder + 30)からランダム
        Destroy(Instantiate(RandomGenerateObject[ObjectNumber], new Vector3(Random.Range(-2, 2), Random.Range(2, 5), ObjectBorder + 30f), RandomGenerateObject[ObjectNumber].transform.rotation), Lifetime);
        ObjectBorder += Random.Range(1, 20);
        ObjectNumber = Random.Range(0, RandomGenerateObject.Length);

        //オブジェクトの出力時スコアを加算
        ScoreCount.GetComponent<ScoreCount>().AddScore();
    }

}