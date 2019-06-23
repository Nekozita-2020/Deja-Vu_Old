using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ObjectManager : SingletonMonoBehaviour<ObjectManager>
{

    // ロードしたプレハブ
    [SerializeField] public GameObject LastLoadObject = null;

    // ロードが完了したかどうかを管理する変数
    private Action LastLoadExec = null;



    private void Awake()
    {
        // シーン遷移後に削除されないようにする
        DontDestroyOnLoad(this.gameObject);
    }

    /// <summary>
    /// 指定したアセットをResoucesフォルダ内からロードする
    /// プレハブのロードが成功しなければnullを返す
    /// </summary>
    /// <param name="LoadPrefabName">Load prefab.</param>
    public Action OnPrefabLoad(string LoadPrefabName)
    {
        // プレハブをロードする
        LastLoadObject = (GameObject)Resources.Load(LoadPrefabName);

        // プレハブを元にインスタンスを生成する
        Instantiate(LastLoadObject, LastLoadObject.transform.position, Quaternion.identity);

        if (!LastLoadObject) return LastLoadExec;

        return null;
    }

}
