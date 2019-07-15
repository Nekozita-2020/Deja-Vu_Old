using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SettingWindow : WindowBase
{

	SettingWindowView View;



	protected override void SettingView()
	{
		base.SettingView();

		View = m_View as SettingWindowView;
		View.m_ClickApplyButton = OnClickApplyButton;

        View.MovementSensitivity_Value = PlayerPrefs.GetFloat("MovementSensitivity", 0.5F);
        View.Slider_MovementSensitivity.value = View.MovementSensitivity_Value;
    }

    private void Start()
    {
        // グレープを表示させる
        var Grape_obj = ObjectManager.Instance.OnPrefabLoad(ResourcesPath.PREFAB_GRAPE);

        // グレープをSettingWindowの子オブジェクトにする
        Grape_obj.transform.parent = this.gameObject.transform;
    }

    public void OnClickApplyButton()
	{
        // 操作感度を設定する
        PlayerPrefs.SetFloat("MovementSensitivity", View.Slider_MovementSensitivity.value);
        PlayerPrefs.Save();
    }

}
