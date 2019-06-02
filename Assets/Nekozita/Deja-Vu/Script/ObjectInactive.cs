using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectInactive : MonoBehaviour
{

    void Start()
    {

    }
    
    void Update()
    {

    }

    public void OnObjectInactive()
    {
        this.gameObject.SetActive(false);
    }

}
