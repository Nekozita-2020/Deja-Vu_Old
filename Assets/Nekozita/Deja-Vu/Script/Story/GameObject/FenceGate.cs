using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class FenceGate : MonoBehaviour
{
    // 所持アイテムリスト
    [NonSerialized] public List<Image> m_Belongings = new List<Image>();

    // ゲートを開くための条件アイテムリスト
    [NonSerialized] public List<Sprite> m_SeekItemList = new List<Sprite>();



    private void OnTriggerEnter(Collider _Collision)
    {
        GateOpenCheck();
    }

    private void GateOpenCheck()
    {
        for(int i = 0; i < m_SeekItemList.Count; i++)
        {
            // 目標アイテムと一致しなければ、ゲートを開ける処理は行わない
            if (m_Belongings[i].sprite == null ||
                !m_SeekItemList.Contains(m_Belongings[i].sprite))
                return;
        }
        GateOpen();
    }

    private void GateOpen()
    {
        this.GetComponent<Animator>().Play("Take 001");
    }
}