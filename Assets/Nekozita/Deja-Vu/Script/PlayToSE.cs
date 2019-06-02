using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayToSE : MonoBehaviour
{

    private AudioSource AudioSource;
    public AudioClip SE_A, SE_B, SE_C;

    void Start()
    {
        AudioSource = this.GetComponent<AudioSource>();
    }
    
    void Update()
    {
        
    }

    public void OnSoundPlay_A()
    {
        AudioSource.PlayOneShot(SE_A);
    }

    public void OnSoundPlay_B()
    {
        AudioSource.PlayOneShot(SE_B);
    }

    public void OnSoundPlay_C()
    {
        AudioSource.PlayOneShot(SE_C);
    }

}
