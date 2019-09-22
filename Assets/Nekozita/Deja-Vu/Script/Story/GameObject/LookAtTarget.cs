using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LookAtTarget : MonoBehaviour
{

    // 常に向き続けるターゲット
    [SerializeField] public Transform DefoultTarget = null;



    private void Update()
    {
        if (DefoultTarget != null)
        {
            // デフォルトターゲットが指定されていればそれを向き続ける
            transform.LookAt(DefoultTarget);
        }
    }

    /// <summary>
    /// 外部から指定してセットする時用
    /// </summary>
    /// <param name="m_Target"></param>
    public void SetTarget(Transform m_Target)
    {
        transform.LookAt(m_Target);
    }

}
