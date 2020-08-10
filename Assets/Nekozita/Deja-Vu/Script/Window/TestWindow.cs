using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

namespace Nekozita
{
    public class TestWindow : WindowBase<TestWindow>
    {
        [SerializeField] private Text m_Text = null;

        protected override void Init()
        {
            base.Init();

            if (m_DataPack != null)
            {
                var m_Data = m_DataPack as TestDataPack;
                m_Text.text = m_Data.m_Text;
            }
        }
    }
}