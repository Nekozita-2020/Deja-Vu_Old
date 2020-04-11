using UnityEngine;
using System.Collections;

public class Rotation : MonoBehaviour
{
    [Header("中心座標と微調整")]
    [SerializeField] private Transform m_Centor = null;
    [SerializeField] private float AdjustPosition_X = 0, AdjustPosition_Y = 0;

    [Header("回転速度")]
    [SerializeField] private bool RamdomSpeed = false;
    [SerializeField] private float RamdomLow = 1.0f;
    [SerializeField] private float RamdomUpper = 3.0f;
    private float speed = 1.0f;

    [Header("回転方向 True:時計回り Flase:反時計回り")]
    [SerializeField] private bool IsClockwise = true;



    private void Start()
    {
        // ランダムフラグがOnならspeedを更新
        if (RamdomSpeed)
        {
            speed = Random.Range(RamdomLow, RamdomUpper);
        }
    }

    private void FixedUpdate()
    {
        float Adjust_X = m_Centor.position.x + AdjustPosition_X;
        float Adjust_Y = m_Centor.position.y + AdjustPosition_Y;
        Vector3 Adjust_Centor = new Vector3(Adjust_X, Adjust_Y);

        if (IsClockwise)
            this.transform.RotateAround(Adjust_Centor, Vector3.forward, speed);
        else
            this.transform.RotateAround(Adjust_Centor, Vector3.forward, -speed);
    }
}