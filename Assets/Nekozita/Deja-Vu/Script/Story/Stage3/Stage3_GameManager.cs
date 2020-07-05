using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Nekozita
{
    public class Stage3_GameManager : StageGameManagerBase
    {
        [SerializeField] private Text m_ScoreNum = null;
        [SerializeField] private GameObject m_ClearPoint = null;
        [SerializeField] private List<NumberBox> m_NumberBoxes = new List<NumberBox>();
        [SerializeField] private GameObject m_ReturnPoint = null;

        private int m_ClearScore = 10;



        protected override void SetCallBack()
        {
            base.SetCallBack();

            // ナンバーボックス取得時のコールバックを設定
            foreach (var _NumberBox in m_NumberBoxes)
            {
                _NumberBox.m_CallBack =
                    (_GetScore) =>
                    {
                        int m_NowScore = ScoreAdd(_GetScore);
                        ScoreCheck(m_NowScore);
                    };
            }
        }

        protected override void Init()
        {
            base.Init();

            // BGMを消す
            SoundManager.Instance.StopBGM();
        }

        private int ScoreAdd(int _Num)
        {
            int m_NowScore = int.Parse(m_ScoreNum.text) + _Num;
            m_ScoreNum.text = m_NowScore.ToString();
            return m_NowScore;
        }

        private void ScoreCheck(int _NowScore)
        {
            // 現在のスコアが設定したクリアスコアと一致した時クリア可能とする
            if (_NowScore == m_ClearScore)
            {
                // リターンポイントを消してループさせないようにする
                m_ReturnPoint.SetActive(false);

                // クリアポイントを出してクリアできる状態にする
                m_ClearPoint.SetActive(true);
            }
            else
                m_ClearPoint.SetActive(false);
        }
    }
}