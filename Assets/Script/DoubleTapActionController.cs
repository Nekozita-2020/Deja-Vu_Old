using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DoubleTapActionController : MonoBehaviour
{

    private GameObject Grape;

    void Start()
    {
        Grape = GameObject.Find("Grape");
    }

    void Update()
    {
        
    }

    public void OnDoubleTap()
    {
        Grape.GetComponent<TagToChange>().OnTagChange();
        Grape.GetComponent<EffectColorChange>().OnColorChange();
        Grape.GetComponent<PlayToSE>().OnSoundPlay_A();
    }

}
