using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class StageGameManagerBase : GameManagerBase
{

    [SerializeField] private GameObject MainCamera = null;
    [SerializeField] private GameObject GameOverUI = null;
    [SerializeField] private GameObject StageClearUI = null;
    [SerializeField] private GameObject PauseButton = null;
    [SerializeField] private GameObject TouchSenser = null;
    [SerializeField] private GameObject PausebleObjects = null; 
    [SerializeField] protected GameObject Grape = null;
    [SerializeField] private ParticleSystem DestroyEffect = null;



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
                // タグがNegativeならゲームオーバー
                if (m_Collision.gameObject.tag == "Negative") OnGameOver();
                break;

            case "Negative":
                // タグがPositiveならゲームオーバー
                if (m_Collision.gameObject.tag == "Positive") OnGameOver();
                break;

            case "Key":
                // 問答無用でゲームオーバー
                OnGameOver();
                break;

            case "Scenery":
                // 処理はなし
                break;

            case "Finish":
                // ステージクリア
                OnStageClear();
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

    /// <summary>
    /// ゲームオーバー処理
    /// </summary>
    private void OnGameOver()
    {
        // ポーズボタンを非表示
        PauseButton.SetActive(false);

        // ゲームを停止させる
        OnPause();

        // グレープを非表示
        Grape.SetActive(false);

        // デストロイエフェクトを再生
        Vector3 DestroyEffectPosition = new Vector3(Grape.transform.position.x,
             Grape.transform.position.y + 2, Grape.transform.position.z);
        Instantiate(DestroyEffect, DestroyEffectPosition, Quaternion.identity);

        // ゲームオーバーUIを表示
        GameOverUI.SetActive(true);
    }

    /// <summary>
    /// ゲームクリア処理
    /// </summary>
    private void OnStageClear()
    {
        // 【テスト用】
        // OnGameOver();

        // SEを鳴らす
        SoundManager.Instance.PlaySE(ResourcesPath.AUDIO_SE_DESTROY_SOUND);

        // カメラの移動を止める
        MainCamera.GetComponent<FollowTarget_Z>().enabled = false;

        SceneController.Instance.FadeOut(Callback: () =>
        {
            // グレープを非表示にする
            Grape.SetActive(false);

            // ゲームクリアUIを表示してからフェードインを開始
            StageClearUI.SetActive(true);
            SceneController.Instance.FadeIn();
        });
    }

}
