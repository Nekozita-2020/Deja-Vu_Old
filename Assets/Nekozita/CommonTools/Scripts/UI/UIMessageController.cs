using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIMessageController : MonoBehaviour
{

    // UIMessageの背景
    [SerializeField] private Canvas BackGroundCanvas = null;

    // 画面の蓋
    [SerializeField] private Image FadeCanvas = null;

    // クリアメッセージの親オブジェクト
    [SerializeField] private GameObject MessageList_Parent = null;

    // 負荷を減らす為、メッセージ表示中に止めておきたいエフェクト群
    [SerializeField] private List<ParticleSystem> PauseEffectList = new List<ParticleSystem>();

    // フェードしたい時間（単位は秒）
    private float FadeTime = 1.0f;

    // 表示するクリアメッセージデータ
    private List<GameObject> MessageList = new List<GameObject>();

    // 現在表示中のメッセージ番号(=要素番号のため 0~)
    private int NowMessageNum = 0;

    // フェードイン開始フラグ true: テキストを表示 false:テキストを非表示
    private bool FadeIn_Flag = false;

    // フェードアウト開始フラグ true: テキストを非表示 false:テキストを表示
    private bool FadeOut_Flag = false;

    // 終了フラグ true: 最後にフェードインして終了 false:まだ処理は続いている
    private bool Finish_Flag = false;

    // FadeCanvasの色情報
    private float FadeCanvasColor_Red, FadeCanvasColor_Green, FadeCanvasColor_Blue, FadeCanvasColor_Alpha;

    // 実際に変化させるFadeCanvasのアルファ値
    private float NowFadeCanvasColor_Alpha;



    void Start()
    {
        // もしバックグラウンドが非表示なら表示させる
        if (!BackGroundCanvas.gameObject.activeInHierarchy) BackGroundCanvas.gameObject.SetActive(true);

        // FadeCanvasの色情報(アルファ値を含む)を取得
        GetFadeCanvasColor();

        // 指定したエフェクト群を停止させる
        PauseEffect();

        // 表示するメッセージデータをセットする(全データの取得まで待ってる)
        GetMessageData(() =>
        {
            // 最初のメッセージを表示する
            MessageList[NowMessageNum].SetActive(true);

            // フェードイン開始
            FadeIn_Flag = true;
        });
    }

    void Update()
    {
        // フェードイン/アウトのフラグがどちらかtrueの処理
        if(FadeIn_Flag || FadeOut_Flag)
        {
            if (FadeIn_Flag)
            {
                // アルファ値を減らす
                NowFadeCanvasColor_Alpha -= Time.deltaTime / FadeTime;

                if (NowFadeCanvasColor_Alpha <= 0.0f)
                {
                    if (Finish_Flag)
                    {
                        // 開始時に準備するし後処理は要らないかも？
                        // AfterCare();

                        // 自身を非表示にして終了
                        this.gameObject.SetActive(false);
                    }
                    else
                    {
                        // コルーチンでタッチ待ち
                        StartCoroutine("OnTapStay");
                    }
                }
            }
            else if (FadeOut_Flag)
            {
                // アルファ値を増やす
                NowFadeCanvasColor_Alpha += Time.deltaTime / FadeTime;

                if (1.0F <= NowFadeCanvasColor_Alpha)
                {
                    // 表示中のメッセージを非表示
                    MessageList[NowMessageNum].SetActive(false);

                    NowMessageNum++;

                    // 次のメッセージがある
                    if (NowMessageNum <= MessageList.Count - 1)
                    {
                        // 次のメッセージを表示する
                        MessageList[NowMessageNum].SetActive(true);

                        // フェードインを開始
                        FadeIn_Flag = true;
                    }
                    // もうメッセージが無い
                    else
                    {
                        // 背景を非表示
                        BackGroundCanvas.gameObject.SetActive(false);

                        // 終了フラグを立てる
                        Finish_Flag = true;

                        // フェードインを開始
                        FadeIn_Flag = true;
                    }
                }
            }

            // FadeCanvasの色をセットする
            SetFadeCanvasColor();
        }
    }

    /// <summary>
    /// 後処理する
    /// </summary>
    private void AfterCare()
    {
        BackGroundCanvas.gameObject.SetActive(true);
        FadeCanvas.color = new Color(FadeCanvasColor_Red, FadeCanvasColor_Green, FadeCanvasColor_Blue, FadeCanvasColor_Alpha);
    }

    /// <summary>
    /// FadeCanvasの色情報(アルファ値を含む)を取得
    /// </summary>
    private void GetFadeCanvasColor()
    {
        FadeCanvasColor_Red = FadeCanvas.color.r;
        FadeCanvasColor_Green = FadeCanvas.color.g;
        FadeCanvasColor_Blue = FadeCanvas.color.b;
        FadeCanvasColor_Alpha = FadeCanvas.color.a;
        NowFadeCanvasColor_Alpha = FadeCanvasColor_Alpha;
    }

    /// <summary>
    /// 指定したエフェクト群を停止/再開させる
    /// </summary>
    private void PauseEffect()
    {
        if (PauseEffectList != null)
        {
            if (Finish_Flag)
            {
                foreach (ParticleSystem m_Effect in PauseEffectList)
                {
                    // 停止させていたエフェクトを再開
                    m_Effect.Play(true);
                }
            }
            else
            {
                foreach (ParticleSystem m_Effect in PauseEffectList)
                {
                    // 負荷を減らす為、画面暗転中は指定したエフェクトを停止
                    m_Effect.Stop(true, ParticleSystemStopBehavior.StopEmittingAndClear);
                }
            }
        }
    }

    /// <summary>
    /// メッセージデータをセット
    /// </summary>
    private void GetMessageData(Action m_Callback = null)
    {
        if(MessageList != null)
        {
            foreach (Transform Child in MessageList_Parent.transform)
            {
                // 1つずつ表示させるため、一度falseにして追加する
                Child.gameObject.SetActive(false);

                // 表示するクリアメッセージを取得
                MessageList.Add(Child.gameObject);
            }
            m_Callback?.Invoke();
        }
    }

    /// <summary>
    /// FadeCanvasの色をセットする
    /// </summary>
    private void SetFadeCanvasColor()
    {
        FadeCanvas.color = new Color(FadeCanvasColor_Red, FadeCanvasColor_Green, FadeCanvasColor_Blue, NowFadeCanvasColor_Alpha);
    }

    /// <summary>
    /// 指定されたActionがTrueかFalseを返すまで待機させるコルーチン
    /// </summary>
    /// <returns></returns>
    IEnumerator OnStayToTap()
    {
        Debug.Log("タップ待ち");

        // 指定されたデリゲートが True に判定されるまでコルーチンの実行を中断する
        yield return new WaitUntil(Tap);

        // 指定されたデリゲートが False に判定されるまでコルーチンの実行を中断する
        yield return new WaitWhile(Tap);

        // 処理が再開(タップを検知)したらフェードアウト開始
        FadeOut_Flag = true;
    }

    private bool Tap()
    {
        return Input.GetMouseButtonDown(0);
    }

}