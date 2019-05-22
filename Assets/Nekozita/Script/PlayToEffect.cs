using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayToEffect : MonoBehaviour
{

    public ParticleSystem Effect_A, Effect_B, Effect_C;

    void Start()
    {

    }

    void Update()
    {

    }

    public void OnEffectPlay_A()
    {
        Instantiate(Effect_A, this.transform.position, Quaternion.identity);
    }

    public void OnEffectPlay_B()
    {
        Instantiate(Effect_B, this.transform.position, Quaternion.identity);
    }

    public void OnEffectPlay_C()
    {
        Instantiate(Effect_C, this.transform.position, Quaternion.identity);
    }

}
