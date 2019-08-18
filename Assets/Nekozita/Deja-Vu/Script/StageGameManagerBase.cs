using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class StageGameManagerBase : GameManagerBase
{
    [SerializeField] private GameObject PausebleObjects = null; 
    [SerializeField] protected GameObject Grape = null;

    private void Start()
    {
        // グレープのプレハブを生成
        // Grape = ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_GRAPE);

        // 指定した親オブジェクトの子にする
        // Grape.transform.parent = PausebleObjects.transform;

        this.Init();
    }

    private void Init()
    {
        // コールバックをセット
        SetCallBack();
    }

    /// <summary>
    /// コールバックをセット
    /// </summary>
    private void SetCallBack()
    {
        Grape.GetComponent<CollisionSensor>().CallBack = CollisionAction;
    }

    /// <summary>
    /// 衝突時の処理
    /// </summary>
    /// <param name="m_Collision"></param>
    private void CollisionAction(Collision m_Collision)
    {
        switch (m_Collision.gameObject.tag)
        {
            case "Positive":
                break;
            case "Negative":
                break;
            case "Key":
                break;
            case "Scenery":
                break;
            case "Finish":
                break;
        }
    }

    /// <summary>
    /// ゲームのポーズ処理
    /// </summary>
    public virtual void OnPause()
    {
        /* timeScaseではやりづらいか?
        if (Time.timeScale != 0.0f) Time.timeScale = 0.0f;
        else Time.timeScale = 1.0f;
        */

        // Pauseフラグ　true: 停止　false: 再開
        bool PausebleFlug = PausebleObjects.GetComponent<Pausable>().pausing;

        if (PausebleFlug == false) PausebleObjects.GetComponent<Pausable>().pausing = true;
        else PausebleObjects.GetComponent<Pausable>().pausing = false;
    }

}