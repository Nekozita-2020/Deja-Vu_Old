using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class UIMessageController : MonoBehaviour
{

    // UIMessageの背景
    [SerializeField] private Image BackGroundImage = null;

    // 画面の蓋
    [SerializeField] private Image FadeImage = null;

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

    // FadeImageの色情報
    private float FadeImageColor_Red, FadeImageColor_Green, FadeImageColor_Blue, FadeImageColor_Alpha;

    // 実際に変化させるFadeImageのアルファ値
    private float NowFadeImageColor_Alpha;

        // タップしたかのフラグ
    private bool TapFlag = false;

    // ドラッグしたかのフラグ
    private bool DragFlag = false;



    void Start()
    {
        // メッセージがあれば処理を始めるが、無ければ自身を非表示にして何もせず終了
        if (0 < MessageList_Parent.transform.childCount)
        {
            // 表示するメッセージデータをセットする(全データの取得まで待ってる)
            GetMessageData(() =>
            {

                // 最初のメッセージを表示する
                MessageList[NowMessageNum].SetActive(true);

                // フェードイン開始
                FadeIn_Flag = true;
            });
        }
        else
        {
            // 自身を非表示にして終了
            this.gameObject.SetActive(false);
            return;
        }

        // もしバックグラウンドが非表示なら表示させる
        if (!BackGroundImage.gameObject.activeInHierarchy) BackGroundImage.gameObject.SetActive(true);

        // FadeImageの色情報(アルファ値を含む)を取得
        GetFadeImageColor();

        // 指定したエフェクト群を停止させる
        PauseEffect();
    }

    void Update()
    {
        // フェードイン/アウトのフラグがどちらかtrueの処理
        if(FadeIn_Flag || FadeOut_Flag)
        {
            if (FadeIn_Flag)
            {
                // アルファ値を減らす
                NowFadeImageColor_Alpha -= Time.deltaTime / FadeTime;

                if (NowFadeImageColor_Alpha <= 0.0f)
                {
                    // フェードイン終了
                    FadeIn_Flag = false;

                    if (Finish_Flag)
                    {
                        // 開始時に準備するし後処理は要らないかも？
                        // AfterCare();

                        // エフェクトを再開
                        PauseEffect();

                        // 自身を非表示にして終了
                        this.gameObject.SetActive(false);
                        return;
                    }
                    else
                    {
                        // コルーチンでタッチ待ち
                        StartCoroutine("OnStayToTap");
                    }
                }
            }
            else if (FadeOut_Flag)
            {
                // アルファ値を増やす
                NowFadeImageColor_Alpha += Time.deltaTime / FadeTime;

                if (1.0F <= NowFadeImageColor_Alpha)
                {
                    // フェードアウト終了
                    FadeOut_Flag = false;

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
                        BackGroundImage.gameObject.SetActive(false);

                        // 終了フラグを立てる
                        Finish_Flag = true;

                        // フェードインを開始
                        FadeIn_Flag = true;
                    }
                }
            }

            // FadeImageの色をセットする
            SetFadeImageColor();

            // タップフラグを戻す
            TapFlag = false;
        }
    }

    /// <summary>
    /// 後処理する
    /// </summary>
    private void AfterCare()
    {
        BackGroundImage.gameObject.SetActive(true);
        FadeImage.color = new Color(FadeImageColor_Red, FadeImageColor_Green, FadeImageColor_Blue, FadeImageColor_Alpha);
    }

    /// <summary>
    /// FadeImageの色情報(アルファ値を含む)を取得
    /// </summary>
    private void GetFadeImageColor()
    {
        FadeImageColor_Red = FadeImage.color.r;
        FadeImageColor_Green = FadeImage.color.g;
        FadeImageColor_Blue = FadeImage.color.b;
        FadeImageColor_Alpha = FadeImage.color.a;
        NowFadeImageColor_Alpha = FadeImageColor_Alpha;
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
    /// メッセージデータを取得
    /// </summary>
    private void GetMessageData(Action m_Callback = null)
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

    /// <summary>
    /// FadeImageの色をセットする
    /// </summary>
    private void SetFadeImageColor()
    {
        FadeImage.color = new Color(FadeImageColor_Red, FadeImageColor_Green, FadeImageColor_Blue, NowFadeImageColor_Alpha);
    }

    /// <summary>
    /// 指定されたデリゲートがTrueかFalseを返すまで待機させるコルーチン
    /// </summary>
    /// <returns></returns>
    IEnumerator OnStayToTap()
    {
        // Debug.Log("タップ待ち");

        // 指定されたデリゲートがTrueに判定されるまでコルーチンの実行を中断する
        yield return new WaitUntil(Tap);

        TapFlag = false;

        // 指定されたデリゲートが"Trueに判定されている間"(=Falseになるまで)コルーチンの実行を中断する
        // yield return new WaitWhile(Tap);

        // 処理が再開(タップを検知)したらフェードアウト開始
        FadeOut_Flag = true;
    }

    public void OnTapEvent()
    {
        if (DragFlag == false)
        {
            TapFlag = true;
            Tap();
        }
        DragFlag = false;
    }

    public void OnDragEvent()
    {
        DragFlag = true;
        TapFlag = false;
    }

    private bool Tap()
    {
        // return Input.GetMouseButtonDown(0);
        return TapFlag;
    }

}