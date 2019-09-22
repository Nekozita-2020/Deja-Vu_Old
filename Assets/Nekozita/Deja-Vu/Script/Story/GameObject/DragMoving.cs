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

    [Header("移動範囲")]
    [SerializeField] public float LimitTop = 10.0f;
    [SerializeField] public float LimitBottom = -10.0f;
    [SerializeField] public float LimitRight = 10.0f;
    [SerializeField] public float LimitLeft = -10.0f;

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
            (x * MovementSensitivity), LimitLeft, LimitRight),
            Mathf.Clamp(transform.position.y +
            (y * MovementSensitivity), LimitBottom, LimitTop),
            transform.position.z);
    }

}
