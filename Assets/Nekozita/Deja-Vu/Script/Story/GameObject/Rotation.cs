using UnityEngine;
using System.Collections;

public class Rotation : MonoBehaviour
{
    [Header("回転軸")]
    [SerializeField] private bool Axis_X = false;
    [SerializeField] private bool Axis_Y = false;
    [SerializeField] private bool Axis_Z = false;

    [Header("回転方向 True:時計回り Flase:反時計回り")]
    [SerializeField] private bool IsClockwise = true;

    [Header("1秒間に回転させる角度")]
    [SerializeField] private int Angle;

    private void FixedUpdate()
    {
        if (IsClockwise)
        {
            if (Axis_X) this.transform.Rotate(new Vector3(Angle, 0, 0) * Time.deltaTime, Space.Self);
            if (Axis_Y) this.transform.Rotate(new Vector3(0, Angle, 0) * Time.deltaTime, Space.Self);
            if (Axis_Z) this.transform.Rotate(new Vector3(0, 0, Angle) * Time.deltaTime, Space.Self);

        }
        else
        {
            if (Axis_X) this.transform.Rotate(new Vector3(-Angle, 0, 0) * Time.deltaTime, Space.Self);
            if (Axis_Y) this.transform.Rotate(new Vector3(0, -Angle, 0) * Time.deltaTime, Space.Self);
            if (Axis_Z) this.transform.Rotate(new Vector3(0, 0, -Angle) * Time.deltaTime, Space.Self);
        }
    }
}