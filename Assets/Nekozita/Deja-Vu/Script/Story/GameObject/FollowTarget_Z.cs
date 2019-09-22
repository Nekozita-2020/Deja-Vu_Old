using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// ターゲットオブジェクトにZ座標のみ追従させる
/// </summary>
public class FollowTarget_Z : MonoBehaviour
{

    // ターゲットオブジェクトの Transform を格納する変数
    public Transform target;

    // ターゲットオブジェクトの座標からオフセットする値
    public float offset;

    // ゲーム実行中の処理（Update処理後）
    private void LateUpdate()
    {
        // オブジェクトの座標を変数 pos に格納
        Vector3 pos = transform.position;

        // ターゲットオブジェクトのY座標に変数 offset のオフセット値を加えて
        // 変数 posのY座標に代入
        pos.z = target.position.z + offset;
        // 変数 pos の値をオブジェクト座標に格納
        transform.position = pos;
    }

}