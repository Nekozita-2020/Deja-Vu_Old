using UnityEngine;
using System;
using System.Collections;

public class DoubleTapSencer : MonoBehaviour
{

    // ダブルタップを検知した時のコールバック
    public Action OnDoubleTap;

    // タップ開始時のフラグ用
    private bool IsDoubleTapStart;

    // タップ開始からの累積時間
    private float DoubleTapTime;



    public void OnDoubleTapCheckStart()
    {
        IsDoubleTapStart = true;
    }

    private void FixedUpdate()
    {
        if (IsDoubleTapStart)
        {
            DoubleTapTime += Time.deltaTime;

            // 1度目のタップから判定時間「0.5秒」以内
            if (DoubleTapTime < 0.5f)
            {
                // 1度目のタップから0.5秒以内に再度クリック(=ダブルタップ)
                if (Input.GetMouseButtonDown(0))
                {
                    // タブルタップを検知
                    OnDoubleTap?.Invoke();

                    // 初期化
                    IsDoubleTapStart = false;
                    DoubleTapTime = 0.0f;
                }
            }
            else
            {
                // 初期化
                IsDoubleTapStart = false;
                DoubleTapTime = 0.0f;
            }
        }
        else
        {
            // 初期化
            IsDoubleTapStart = false;
            DoubleTapTime = 0.0f;
        }
    }

}