using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SettingToApply : MonoBehaviour
{
    public Slider Slider_MovementSensitivity;

    void Start()
    {
        Slider_MovementSensitivity.GetComponent<Slider>();
    }
    
    public void OnClickApplyButton()
    {
        PlayerPrefs.SetFloat("MovementSensitivity", Slider_MovementSensitivity.value);
        PlayerPrefs.Save();
    }

}
