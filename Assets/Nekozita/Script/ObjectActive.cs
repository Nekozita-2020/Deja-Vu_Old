using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectActive : MonoBehaviour
{

    void Start()
    {

    }
    
    void Update()
    {

    }

    public void OnObjectActive()
    {
        this.gameObject.SetActive(true);
    }

}
