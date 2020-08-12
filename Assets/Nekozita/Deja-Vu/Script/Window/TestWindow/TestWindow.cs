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



        protected override void Init()
        {
            base.Init();

            // Viewのセッティング
            var View = m_View as TestWindowView;
            if (View == null)
                return;

            if (m_DataPack != null)
            {
                var m_Data = m_DataPack as TestDataPack;
                m_Text.text = m_Data.m_Text;
            }
        }
    }
}