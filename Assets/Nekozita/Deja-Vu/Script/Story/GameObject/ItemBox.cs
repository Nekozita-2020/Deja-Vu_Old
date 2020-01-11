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

        // ボックスを消して取得エフェクトを出す
    }

}
