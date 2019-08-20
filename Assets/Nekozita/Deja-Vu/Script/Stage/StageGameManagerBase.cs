using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class StageGameManagerBase : GameManagerBase
{

    [SerializeField] private GameObject TouchSenser = null;
    [SerializeField] private GameObject PausebleObjects = null; 
    [SerializeField] protected GameObject Grape = null;

    private void Start()
    {
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
        TouchSenser.GetComponent<DoubleTapSencer>().OnDoubleTap = OnDoubleTapAction;
        Grape.GetComponent<CollisionSensor>().CallBack = CollisionAction;
    }

    /// <summary>
    /// 衝突時の処理
    /// </summary>
    /// <param name="m_Collision"></param>
    private void CollisionAction(Collider m_Collision)
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
    /// ダブルタップ時の処理
    /// </summary>
    protected virtual void OnDoubleTapAction()
    {
        // エフェクトの色を変更
        Grape.GetComponent<EffectColorChange>().OnColorChange();

        // タグを変更
        Grape.GetComponent<TagToChange>().OnTagChange();

        // SEを鳴らす
        SoundManager.Instance.PlaySE(ResourcesPath.AUDIO_SE_HEARTBEAT);
    }

    /// <summary>
    /// ゲームのポーズ処理
    /// </summary>
    public virtual void OnPause()
    {
        // Pauseフラグ　true: 停止中　false: 動作中
        bool PausebleFlug = PausebleObjects.GetComponent<Pausable>().pausing;

        if (PausebleFlug == false)
        {
            // ゲームを停止させる
            TouchSenser.SetActive(false);
            PausebleObjects.GetComponent<Pausable>().pausing = true;
        }
        else
        {
            // ゲームを再開させる
            TouchSenser.SetActive(true);
            PausebleObjects.GetComponent<Pausable>().pausing = false;
        }
    }

}
