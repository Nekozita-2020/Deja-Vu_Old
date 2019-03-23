using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; //パネルのイメージを操作するのに必要

public class ClearMessageController : MonoBehaviour
{
    public ParticleSystem ClearPoint; // 負荷を減らす為に見えない間は非表示


    float fadeSpeed = 0.02f;        //透明度が変わるスピードを管理
    float red, green, blue, alfa;   //パネルの色、不透明度を管理

    public bool isFadeOut = false;  //フェードアウト処理の開始、完了を管理するフラグ
    public bool isFadeIn = false;   //フェードイン処理の開始、完了を管理するフラグ

    public Text[] ClearMessage; // クリアメッセージのオブジェクト
    Text ClearText;                //透明度を変更するテキスト
    int i;

    void Start()
    {
        i = 0;
        ClearText = ClearMessage[i].GetComponent<Text>();

        red = ClearText.color.r;
        green = ClearText.color.g;
        blue = ClearText.color.b;
        alfa = ClearText.color.a;
    }

    void Update()
    {
        if (isFadeIn)
        {
            StartTextFadeIn();
        }

        if (isFadeOut)
        {
            StartTextFadeOut();
        }
    }

    void StartTextFadeIn()
    {
        // 負荷を減らす為、画面暗転中はクリアポイントエフェクトを停止
        this.ClearPoint.Stop(true, ParticleSystemStopBehavior.StopEmitting);

        alfa += fadeSpeed;
        SetAlpha();
        if (alfa >= 1)
        {
            this.isFadeIn = false;

            // コルーチンでタッチ待ち
            StartCoroutine("OnTapStay");
        }
    }

    void StartTextFadeOut()
    {
        alfa -= fadeSpeed;
        SetAlpha();
        if (alfa <= 0)
        {
            isFadeOut = false;
            i = i + 1;

            if (ClearMessage.Length <= i)
            {
                this.isFadeIn = false;
                // 最後のクリアテキストがフェードアウトしたら画面を明るくしていく
                this.ClearPoint.Play(true);
                this.gameObject.GetComponent<FadeController>().isFadeIn = true;
                return;
            }
            else
            {
                // 次のテキスト情報をセット
                ClearText = ClearMessage[i].GetComponent<Text>();

                red = ClearText.color.r;
                green = ClearText.color.g;
                blue = ClearText.color.b;
                alfa = ClearText.color.a;

                this.isFadeIn = true;
            }
        }
    }

    void SetAlpha()
    {
        // フェードアウトの色を設定
        ClearText.color = new Color(red, green, blue, alfa);
    }

    IEnumerator OnTapStay()
    {
        Debug.Log("タップ待ち");

        yield return new WaitUntil(Tap);
        yield return new WaitWhile(Tap);
        isFadeOut = true;
    }

    bool Tap()
    {
        return Input.anyKeyDown;
    }

}