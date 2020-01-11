using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ItemBox : MonoBehaviour
{
    public Image m_ItemImage = null;
    public Action<Collider> m_CallBack = null;

    // このアイテムを取得した時のエフェクト
    [SerializeField] ParticleSystem m_GetItemEffect = null;



    private void OnTriggerEnter(Collider m_Collision)
    {
        this.m_CallBack?.Invoke(m_Collision);

        if(m_Collision.gameObject.tag == "Grape")
        {
            // このアイテムが取得された時の処理
            OnAcquiredItem();
        }
    }

    /// <summary>
    /// このアイテムが取得された時の処理
    /// </summary>
    private void OnAcquiredItem()
    {
        OnEffectPlay(this.m_GetItemEffect);
        SoundManager.Instance.PlaySE(ResourcesPath.AUDIO_SE_DESTROY_SOUND);
        OnDestroy();
    }

    private void OnEffectPlay(ParticleSystem _TargetEffect)
    {
        Instantiate(_TargetEffect, this.transform.position, Quaternion.identity);
    }

    private void OnDestroy()
    {
        Destroy(this.gameObject);
    }
}
