using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MasterScript : MonoBehaviour
{
    #region information about the object that will be modified by the editor script
    public string name;
    public double price;
    public int deliveryTime;
    public int installTime;
    public double sustainability;
    public int fun;

    public bool orderable;
    public bool movable;
    public bool drillable;
    public bool disposable;
    public bool returnable;
    public bool paintable;
    public bool textureChangable;
    public bool snappable;
    //public List<Vector3> snappingCoords;
    public bool isView;
    public bool taggable;

    public bool hasAudio;
    public AudioClip orderClip;
    public AudioClip grabClip;
    public AudioClip releaseClip;
    public AudioClip dragClip;
    public AudioClip clickClip;
    public float volume = 1F;
    #endregion

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
