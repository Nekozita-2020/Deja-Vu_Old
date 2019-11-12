using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomSetPosition : MonoBehaviour
{
	[Header("ランダム配置する軸")]
	[SerializeField] private bool Axis_X = false;
	[SerializeField] private bool Axis_Y = false;
	[SerializeField] private bool Axis_Z = false;

    [Header("ランダム配置する幅")]
    [SerializeField] private float Width = 0.0f;

    private void Start()
    {
        OnRandomSetPosition();
    }

    private void OnRandomSetPosition()
    {
        float RandomWidth = Random.Range(-Width, Width);

        if (Axis_X)
        {
            this.transform.localPosition = new Vector3(RandomWidth,
                this.transform.localPosition.y, this.transform.localPosition.z);
        }
        if (Axis_Y)
        {
            this.transform.localPosition = new Vector3(this.transform.localPosition.x,
                RandomWidth, this.transform.localPosition.z);
        }
        if (Axis_Z)
        {
            this.transform.localPosition = new Vector3(this.transform.localPosition.x,
                this.transform.localPosition.y, RandomWidth);
        }
    }
}
