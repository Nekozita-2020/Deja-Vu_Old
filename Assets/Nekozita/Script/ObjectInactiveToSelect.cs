using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectInactiveToSelect : MonoBehaviour
{

    public GameObject InactiveTarget;

    void Start()
    {
        
    }
    
    void Update()
    {

    }

    public void OnSelectedInactive()
    {
        InactiveTarget.gameObject.SetActive(false);
    }

}
