using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class ObjectManager : SingletonMonoBehaviour<ObjectManager>
{

    // ロードしたプレハブ
    public GameObject LoadObject = null;

    // ロードが完了したかどうかを管理する変数
    // private Action LastLoadExec = null;



    private void Awake()
    {
        // シーン遷移後に削除されないようにする
        DontDestroyOnLoad(this.gameObject);
    }

    /// <summary>
    /// 指定したアセットをResoucesフォルダ内からロードする
    /// 子にしたい場合は親となるオブジェクトを指定する
    /// </summary>
    /// <param name="LoadPrefabName"></param>
    /// <param name="Parent"></param>
    /// <returns></returns>
    public GameObject OnPrefabLoad(string LoadPrefabName, GameObject Parent = null)
    {
        // プレハブをロード
        LoadObject = (GameObject)Resources.Load(LoadPrefabName);

        // プレハブを元にインスタンスを生成する
        LoadObject = Instantiate(LoadObject, LoadObject.transform.position, LoadObject.transform.rotation);

        // 親を設定
        if (Parent != null)
        {
            LoadObject.transform.SetParent(Parent.transform, false);
        }

        return LoadObject;
    }

}
