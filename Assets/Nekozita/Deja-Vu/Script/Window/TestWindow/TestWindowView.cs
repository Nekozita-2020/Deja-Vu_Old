using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Nekozita
{
    public class TestWindowView : WindowViewBase
    {
        public Action m_OnClickYesButton = null;



        public void OnClickYesButton()
        {
            m_OnClickYesButton?.Invoke();
        }
    }
}