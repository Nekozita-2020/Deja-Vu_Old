using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Nekozita
{
    public class TestWindow : WindowBase
    {
        [SerializeField] private Text m_Text = null;

        // Type
        protected override Type m_ScriptView => typeof(TestWindowView);

        TestDataPack m_TestDataPack = null;



        protected override void Init()
        {
            base.Init();

            // Viewのセッティング
            var m_View = m_ViewBase as TestWindowView;
            if (m_View == null)
                return;

            // 引き継ぎデータがあればここでセット
            if (m_DataPack != null)
            {
                m_TestDataPack = m_DataPack as TestDataPack;
            }

            // View側のコールバックをセット
            m_View.m_OnClickYesButton = OnClickYesButton;

            // ここから先は個別の処理に移る
            this.OnSetText();
        }

        private void OnSetText()
        {
            m_Text.text = m_TestDataPack.m_Text;
        }

        private void OnClickYesButton()
        {
            Debug.Log("クリックを検知");
        }
    }
}