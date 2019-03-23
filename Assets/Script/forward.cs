using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class forward : MonoBehaviour
{
    public float ForwardSpeed = 13F;
    
    void Start()
    {

    }
    
    void Update()
    {
        transform.position += transform.forward * Time.deltaTime * ForwardSpeed;
    }

}