using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectActiveToSelect : MonoBehaviour
{

    public GameObject ActiveTarget;

    void Start()
    {
        
    }
    
    void Update()
    {

    }

    public void OnSelectedActive()
    {
        ActiveTarget.gameObject.SetActive(true);
    }

}
