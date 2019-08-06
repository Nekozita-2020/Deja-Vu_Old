using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class DragAction : MonoBehaviour
{

    [Header("操作感度")]
    [SerializeField] private float MovementSensitivity = 0.5f;
    
    void Start()
    {
        MovementSensitivity = PlayerPrefs.GetFloat("MovementSensitivity", 0.5f);
    }

    public void OnDrag()
    {
        var x = Input.GetAxis("Mouse X");
        var y = Input.GetAxis("Mouse Y");
        var Direction = new Vector3(x, y, 0);

        transform.position += MovementSensitivity * Direction;

        // 左右の壁抜け防止
        if (this.transform.position.x < -2.0)
        {
            this.transform.position = new Vector3(-2.0f, this.transform.position.y, this.transform.position.z);
        }
        else if (2.0 < this.transform.position.x)
        {
            this.transform.position = new Vector3(2.0f, this.transform.position.y, this.transform.position.z);
        }

        // 上下の壁抜け防止
        if (this.transform.position.y < 0.0)
        {
            this.transform.position = new Vector3(this.transform.position.x, 0.0f, this.transform.position.z);
        }
        else if (6.7 < this.transform.position.y)
        {
            this.transform.position = new Vector3(this.transform.position.x, 6.7f, this.transform.position.z);
        }
    }

}
