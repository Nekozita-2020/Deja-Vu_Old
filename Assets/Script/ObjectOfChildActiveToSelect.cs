using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectOfChildActiveToSelect : MonoBehaviour
{

    public GameObject ParentObject;
    private GameObject ChildObject;
    public string NowActiveObjectName;

    void Start()
    {
        
    }
    
    void Update()
    {

    }

    public void OnSelectedChildActive(string ChildName)
    {
        NowActiveObjectName = ChildName;
        ChildObject = ParentObject.transform.Find(ChildName).gameObject;
        ChildObject.gameObject.SetActive(true);
    }

}
