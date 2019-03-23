using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectOfChildInactiveToSelect : MonoBehaviour
{

    public GameObject ParentObject;
    private GameObject ChildObject;

    void Start()
    {
        
    }
    
    void Update()
    {

    }

    public void OnSelectedChildInactive(string ChildName)
    {
        ChildObject = ParentObject.transform.Find(ChildName).gameObject;
        ChildObject.gameObject.SetActive(false);
    }

}
