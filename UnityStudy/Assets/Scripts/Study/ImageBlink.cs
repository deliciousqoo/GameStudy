using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ImageBlink : MonoBehaviour
{
    [SerializeField]
    private GameObject blinkObject;

    private Color orgColor;
    private bool check;

    public void Awake()
    {
        check = false;
        orgColor = new Color(1f, 1f, 1f, 1f);
    }

    public void SetBlink()
    {
        if (!check)
        {
            StartCoroutine("Blink", blinkObject);
            check = true;
        }
        else
        {
            StopCoroutine("Blink");
            blinkObject.GetComponent<Image>().color = orgColor;
            check = false;
        }
        
    }

    private IEnumerator Blink(GameObject gameObject)
    {
        Color tempColor = orgColor;

        gameObject.GetComponent<Image>().color = tempColor;
        while (true)
        {
            
            while (gameObject.GetComponent<Image>().color.a > 0f)
            {
                tempColor.a -= 0.1f;
                gameObject.GetComponent<Image>().color = tempColor;
                yield return new WaitForSeconds(0.05f);
            }
            yield return new WaitForSeconds(0.5f);
            while (gameObject.GetComponent<Image>().color.a < 1f)
            {
                tempColor.a += 0.1f;
                gameObject.GetComponent<Image>().color = tempColor;
                yield return new WaitForSeconds(0.05f);
            }
            yield return new WaitForSeconds(0.5f);
        }
    }
}
