using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateAround : MonoBehaviour
{
	// 中心
	[SerializeField] private Transform m_Target = null;

	// 半径
	[SerializeField] private float m_Radius = 1.0f;

	// 角度
	[SerializeField] private float m_Angle = 0;



    private void Start()
    {
		// 初期位置
		this.transform.position = new Vector3(m_Target.position.x,
            m_Target.position.y, m_Target.position.z);
	}

	private void Update()
	{
		m_Angle += Time.deltaTime;
		this.transform.position = new Vector3(Mathf.Sin(m_Angle) * m_Radius,
            Mathf.Cos(m_Angle) * m_Radius, m_Target.position.z);
	}
}