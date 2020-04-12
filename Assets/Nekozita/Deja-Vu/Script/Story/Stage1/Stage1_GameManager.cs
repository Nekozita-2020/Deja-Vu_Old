using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Stage1_GameManager : StageGameManagerBase
{
    public List<CollisionSensor> TriggerAreaList = null;
    private Forward m_Forward = null;


    protected override void SetCallBack()
    {
        base.SetCallBack();

        foreach(var item in TriggerAreaList)
        {
            item.m_ColliderCallBack = OnAcceleration_Grape;
        }
    }

    protected override void Init()
    {
        base.Init();

        // グレープのForwardをセット
        m_Forward = Grape.GetComponent<Forward>();
    }

    /// <summary>
    /// グレープを加速させる
    /// </summary>
    private void OnAcceleration_Grape(Collider m_Collision)
    {
        if(m_Collision.gameObject.name == "Grape")
        {
            m_Forward.ForwardSpeed += 10.0f;
        }
    }

}
