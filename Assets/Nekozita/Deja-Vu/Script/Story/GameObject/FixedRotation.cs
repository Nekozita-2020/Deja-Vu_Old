using UnityEngine;
using System.Collections;

public class FixedRotation : MonoBehaviour
{
    [Header("固定する軸")]
    [SerializeField] private bool Axis_X = false;
    [SerializeField] private bool Axis_Y = false;
    [SerializeField] private bool Axis_Z = false;

    private void Update()
    {
        if (Axis_X) this.transform.rotation = Quaternion.Euler(0,
            this.transform.rotation.y, this.transform.rotation.z);
        if (Axis_Y) this.transform.rotation = Quaternion.Euler(this.transform.rotation.x,
            0, this.transform.rotation.z);
        if (Axis_Z) this.transform.rotation = Quaternion.Euler(this.transform.rotation.x,
            this.transform.rotation.y, 0);
    }
}