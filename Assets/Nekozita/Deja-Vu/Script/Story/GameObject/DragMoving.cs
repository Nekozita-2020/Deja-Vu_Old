using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

/// <summary>
/// オブジェクトをドラッグで動かす(X軸,Y軸 & 移動制限を指定)
/// </summary>
public class DragMoving : MonoBehaviour
{

    [Header("操作感度")]
    [SerializeField] public float MovementSensitivity = 0.5f;



    void Start()
    {
        MovementSensitivity = PlayerPrefs.GetFloat("MovementSensitivity", 0.5f);
    }

    public void OnDrag()
    {
        var x = Input.GetAxis("Mouse X");
        var y = Input.GetAxis("Mouse Y");

        transform.position = new Vector3
            (Mathf.Clamp(transform.position.x +
            (x * MovementSensitivity), DataStore.MovementRange.LimitLeft, DataStore.MovementRange.LimitRight),
            Mathf.Clamp(transform.position.y +
            (y * MovementSensitivity), DataStore.MovementRange.LimitBottom, DataStore.MovementRange.LimitTop),
            transform.position.z);
    }

}
