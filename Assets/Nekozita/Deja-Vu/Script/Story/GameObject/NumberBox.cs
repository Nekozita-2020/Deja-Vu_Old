using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class NumberBox : MonoBehaviour
{
    [SerializeField] private int m_Number = 0;
    public Action<int> m_CallBack = null;

    // このアイテムを取得した時のエフェクト
    [SerializeField] ParticleSystem m_GetItemEffect = null;



    private void OnTriggerEnter(Collider m_Collision)
    {
        this.m_CallBack?.Invoke(m_Number);

        // このアイテムが取得された時の処理
        OnAcquiredItem();
    }

    /// <summary>
    /// このアイテムが取得された時の処理
    /// </summary>
    private void OnAcquiredItem()
    {
        OnEffectPlay(this.m_GetItemEffect);
        SoundManager.Instance.PlaySE(ResourcesPath.AUDIO_SE_DESTROY_SOUND);
    }

    private void OnEffectPlay(ParticleSystem _TargetEffect)
    {
        Instantiate(_TargetEffect, this.transform.position, Quaternion.identity);
    }
}
