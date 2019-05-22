using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveEndressTerrain : MonoBehaviour
{

    // Terrainを移動させていき無限に続くように見せる
    public GameObject Terrain1;
    public GameObject Terrain2;

    // 移動するTerrainの位置(初期値:75)
    int Border = 75;

    // カメラの位置を参照して移動させる
    GameObject MainCamera;

    void Start()
    {
        MainCamera = GameObject.Find("MainCamera");
    }

    void Update()
    {
        // カメラがBorderまできたら前にいるTerrainを移動
        if (Border < MainCamera.transform.position.z)
        {
            this.MoveTerrain();
        }
    }

    void MoveTerrain()
    {
        if (Terrain1.transform.position.z < Border)
        {
            Border += 150;
            Vector3 temp = new Vector3(0, 0, Border);
            Terrain1.transform.position = temp;
        }
        else if (Terrain2.transform.position.z < Border)
        {
            Border += 150;
            Vector3 temp = new Vector3(0, 0, Border);
            Terrain2.transform.position = temp;
        }
    }

}
