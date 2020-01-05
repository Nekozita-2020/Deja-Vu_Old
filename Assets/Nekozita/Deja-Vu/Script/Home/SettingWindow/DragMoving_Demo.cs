using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

/// <summary>
/// セッティングウインドウでは移動制限を設定したいから継承させて使ってる
/// </summary>
public class DragMoving_Demo : DragMoving
{

    public void OnDrag_Demo()
    {
        var x = Input.GetAxis("Mouse X");
        var y = Input.GetAxis("Mouse Y");

        transform.position = new Vector3
            (Mathf.Clamp(transform.position.x +
            (x * MovementSensitivity), DataStore.MovementRange.LimitLeft, DataStore.MovementRange.LimitRight),
            Mathf.Clamp(transform.position.y +
            (y * MovementSensitivity), DataStore.MovementRange.LimitBottom + 4, DataStore.MovementRange.LimitTop),
            transform.position.z);
    }

}
