using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class StoryWindowView : WindowViewBase
{

    public Action m_ClickStartButton = null;


    public void OnClickStartButton()
    {
        m_ClickStartButton?.Invoke();
    }
    
}
