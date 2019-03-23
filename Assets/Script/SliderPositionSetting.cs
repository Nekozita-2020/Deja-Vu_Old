using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SliderPositionSetting : MonoBehaviour
{
    public Slider Slider_MovementSensitivity;
    private float MovementSensitivity_Value;

    void Start()
    {
        MovementSensitivity_Value = PlayerPrefs.GetFloat("MovementSensitivity", 0.5F);
        Slider_MovementSensitivity.GetComponent<Slider>().value = MovementSensitivity_Value;
    }
    
    void Update()
    {
        
    }

    public void OnApply()
    {
        PlayerPrefs.SetFloat("MovementSensitivity", Slider_MovementSensitivity.value);
    }

}
