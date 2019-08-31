using UnityEngine;
using UnityEngine.UI;

namespace SnapScrollView
{
    public class SnapScrollView : MonoBehaviour
    {

        [SerializeField] SnapScrollRect scrollView;
        [SerializeField] Image[] indicators;

        void Start()
        {
            Application.targetFrameRate = 30;

            scrollView.OnPageChanged += OnIndicatorUpdate;
            scrollView.RefreshPage();
        }
        
        void OnIndicatorUpdate()
        {
            for(var i = 0; i < indicators.Length; i++)
            {
                var a = (i == scrollView.Page) ? 1 : 0.5f;
                indicators[i].color = new Color(1, 1, 1, a);
            }
        }

        public void OnClickClose()
        {
            this.gameObject.SetActive(false);
        }

    }
}