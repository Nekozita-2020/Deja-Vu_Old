using UnityEngine;
using System.Collections;

public class DoubleTapSencer : MonoBehaviour
{
    // タップ開始時のフラグ用
    private bool IsDoubleTapStart;

    // タップ開始からの累積時間
    private float DoubleTapTime;

    void Update()
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
                    // GameDirectorにダブルタップを伝える
                    this.GetComponent<DoubleTapActionController>().OnDoubleTap();

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
            // タップされたら判定開始
            if (Input.GetMouseButtonDown(0))
            {
                IsDoubleTapStart = true;
            }
        }
    }

}