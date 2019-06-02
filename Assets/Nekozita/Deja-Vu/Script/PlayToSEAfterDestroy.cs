using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayToSEAfterDestroy : MonoBehaviour
{

    public AudioClip PlaySE;

    void Start()
    {
        
    }
    
    void Update()
    {
        
    }

    public void OnPlaySE()
    {
        // オブジェクト(AudioSource)が破壊されてもSEが鳴る
        AudioSource.PlayClipAtPoint(PlaySE, this.transform.position);
    }

}
