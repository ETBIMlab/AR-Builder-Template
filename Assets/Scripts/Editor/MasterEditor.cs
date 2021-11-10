using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using System;
using System.Reflection;

[CustomEditor(typeof(MasterScript), true), CanEditMultipleObjects]
public class MasterEditor : Editor
{
    GameObject scriptObject;

    #region getting info from the masterscript and initializing serializable properties
    SerializedProperty name;
    SerializedProperty price;
    SerializedProperty deliveryTime;
    SerializedProperty installTime;
    SerializedProperty sustainability;
    SerializedProperty fun;

    SerializedProperty orderable;
    SerializedProperty movable;
    SerializedProperty drillable;
    SerializedProperty disposable;
    SerializedProperty returnable;
    SerializedProperty paintable;
    SerializedProperty textureChangable;
    SerializedProperty snappable;
    //SerializedProperty snappingCoords;
    
    SerializedProperty isView;
    SerializedProperty viewOffset;

    SerializedProperty taggable;
    SerializedProperty canToggleVisibility;

    // Audio
    SerializedProperty hasAudio;
    SerializedProperty grabClip;
    SerializedProperty releaseClip;
    SerializedProperty dragClip;
    SerializedProperty clickClip;
    SerializedProperty orderClip;
    SerializedProperty volume;

    private void OnEnable()
    {
        MasterScript script = (MasterScript) target;
        scriptObject = script.gameObject;

        // Link the SerializedPropertys to the variable 
        name = serializedObject.FindProperty("name");
        price = serializedObject.FindProperty("price");
        deliveryTime = serializedObject.FindProperty("deliveryTime");
        installTime = serializedObject.FindProperty("installTime");
        sustainability = serializedObject.FindProperty("sustainability");

        // Jacob: I believe this is specific to the playhouse... not sure we want it here
        fun = serializedObject.FindProperty("fun");

        orderable = serializedObject.FindProperty("orderable");
        movable = serializedObject.FindProperty("movable");
        drillable = serializedObject.FindProperty("drillable");
        disposable = serializedObject.FindProperty("disposable");
        returnable = serializedObject.FindProperty("returnable");
        paintable = serializedObject.FindProperty("paintable");
        textureChangable = serializedObject.FindProperty("textureChangable");
        snappable = serializedObject.FindProperty("snappable");
        isView = serializedObject.FindProperty("isView");
        viewOffset = serializedObject.FindProperty("viewOffset");
        taggable = serializedObject.FindProperty("taggable");
        canToggleVisibility = serializedObject.FindProperty("canToggleVisibility");

        // Audio
        hasAudio = serializedObject.FindProperty("hasAudio");
        orderClip = serializedObject.FindProperty("orderClip");
        grabClip = serializedObject.FindProperty("grabClip");
        releaseClip = serializedObject.FindProperty("releaseClip");
        dragClip = serializedObject.FindProperty("dragClip");
        clickClip = serializedObject.FindProperty("clickClip");
        volume = serializedObject.FindProperty("volume");

        // initialize default values
        orderClip.objectReferenceValue = Resources.Load("Sounds/cashRegister") as AudioClip;
        grabClip.objectReferenceValue = Resources.Load("Sounds/sound_targetSelected") as AudioClip;
        releaseClip.objectReferenceValue = Resources.Load("Sounds/sound_targetSelected_Correct") as AudioClip;
        dragClip.objectReferenceValue = Resources.Load("Sounds/MRTK_Slate_Release") as AudioClip;
        clickClip.objectReferenceValue = Resources.Load("Sounds/sound_TapDown") as AudioClip;
    }
    #endregion

    public override void OnInspectorGUI()
    {
        serializedObject.Update();
        DisplayFields();

        serializedObject.ApplyModifiedProperties(); // update the info in the actual object
        ApplyBehaviors();
        
    }

    public void DisplayFields()
    {
        EditorGUILayout.PropertyField(name, new GUIContent("Name"));
        EditorGUILayout.PropertyField(sustainability, new GUIContent("Sustainability"));
        EditorGUILayout.PropertyField(fun, new GUIContent("Fun"));

        EditorGUILayout.PropertyField(orderable, new GUIContent("Orderable"));
        if (orderable.boolValue)
        {
            EditorGUILayout.PropertyField(price, new GUIContent("Price"));
            EditorGUILayout.PropertyField(deliveryTime, new GUIContent("Delivery Time"));
            EditorGUILayout.PropertyField(installTime, new GUIContent("Install Time"));
        }

        EditorGUILayout.PropertyField(movable, new GUIContent("Movable"));
        EditorGUILayout.PropertyField(drillable, new GUIContent("Drillable"));
        EditorGUILayout.PropertyField(returnable, new GUIContent("Returnable"));
        EditorGUILayout.PropertyField(paintable, new GUIContent("Paintable"));
        EditorGUILayout.PropertyField(textureChangable, new GUIContent("Texture Changable"));
        EditorGUILayout.PropertyField(snappable, new GUIContent("Snappable"));

        EditorGUILayout.PropertyField(isView, new GUIContent("Is View"));
        if (isView.boolValue)
        {
            EditorGUILayout.PropertyField(viewOffset, new GUIContent("Offset"));
        }

        EditorGUILayout.PropertyField(taggable, new GUIContent("Taggable"));
        EditorGUILayout.PropertyField(canToggleVisibility, new GUIContent("Can Toggle Visibility"));

        EditorGUILayout.PropertyField(hasAudio, new GUIContent("Has Audio"));
        if (hasAudio.boolValue)
        {
            EditorGUILayout.PropertyField(volume, new GUIContent("Volume"));
            if (orderable.boolValue)
            {
                EditorGUILayout.PropertyField(orderClip, new GUIContent("Order Sound"));
            }
            EditorGUILayout.PropertyField(grabClip, new GUIContent("Grab Sound"));
            EditorGUILayout.PropertyField(releaseClip, new GUIContent("Release Sound"));
            EditorGUILayout.PropertyField(dragClip, new GUIContent("Drag Sound"));
            EditorGUILayout.PropertyField(clickClip, new GUIContent("Click Sound"));
        }
    }

    public void ApplyBehaviors()
    {
        if (orderable.boolValue)
        {

        }
        else
        {
            DestroyImmediate(scriptObject.GetComponent<Paintable>());
        }

        if (movable.boolValue)
        {

        }
        else
        {
            DestroyImmediate(scriptObject.GetComponent<Paintable>());
        }

        if (drillable.boolValue)
        {

        }
        else
        {
            DestroyImmediate(scriptObject.GetComponent<Paintable>());
        }

        if (disposable.boolValue)
        {

        }
        else
        {
            DestroyImmediate(scriptObject.GetComponent<Paintable>());
        }

        if (returnable.boolValue)
        {

        }
        else
        {
            DestroyImmediate(scriptObject.GetComponent<Paintable>());
        }


        if (paintable.boolValue)
        {
            if (scriptObject.GetComponent<Paintable>() == null)
            {
                Paintable paintcomponent = scriptObject.AddComponent<Paintable>();
            }
        }
        else 
        {
            DestroyImmediate(scriptObject.GetComponent<Paintable>());
        }

        if (textureChangable.boolValue)
        {

        }
        else
        {

        }

        if (snappable.boolValue)
        {

        }
        else
        {
            
        }

        // Views
        if (isView.boolValue)
        {
            ViewTarget viewComponent = scriptObject.GetComponent<ViewTarget>();
            if (viewComponent == null)
            {
                viewComponent = scriptObject.AddComponent<ViewTarget>();
                viewComponent.viewOffset = new Vector3(0, 0, 0);
            }
            else
            {
                viewComponent.viewOffset = viewOffset.vector3Value;
            }

        }
        else
        {
            DestroyImmediate(scriptObject.GetComponent<ViewTarget>());
        }

        if (taggable.boolValue)
        {

        }
        else
        {
            
        }

        if (canToggleVisibility.boolValue)
        {
            if (scriptObject.GetComponent<CanToggleVisibility>() == null)
                scriptObject.AddComponent<CanToggleVisibility>();
        } else
        {
            DestroyImmediate(scriptObject.GetComponent<CanToggleVisibility>());
        }

        ApplyAudio();
    }

    private void ApplyAudio()
    {
        if (hasAudio.boolValue)
        {
            AudioSource audioSourceComponent = scriptObject.GetComponent<AudioSource>();
            AudioScript audioScriptComponent = scriptObject.GetComponent<AudioScript>();
            if (audioSourceComponent == null)
            {
                audioSourceComponent = scriptObject.AddComponent<AudioSource>();
                audioSourceComponent.playOnAwake = false;
                audioSourceComponent.spatialize = true;
            }
            if (orderable.boolValue)
            {
                audioSourceComponent.clip = orderClip.objectReferenceValue as AudioClip;
            }
            else
            {
                audioSourceComponent.clip = null;
            }

            if (audioScriptComponent == null)
            {
                audioScriptComponent = scriptObject.AddComponent<AudioScript>();
            }
            audioScriptComponent.grabClip = grabClip.objectReferenceValue as AudioClip;
            audioScriptComponent.releaseClip = releaseClip.objectReferenceValue as AudioClip;
            audioScriptComponent.dragClip = dragClip.objectReferenceValue as AudioClip;
            audioScriptComponent.clickClip = clickClip.objectReferenceValue as AudioClip;
        }
        else
        {
            DestroyImmediate(scriptObject.GetComponent<AudioSource>());
            DestroyImmediate(scriptObject.GetComponent<AudioScript>());
        }
    }

    #region Attempts to make ApplyBehaviors() more maintainable
    /*
    private bool ApplyBehavior(MasterProperty prop)
    {
        bool enabled = prop.property.boolValue;
        Type propertyType = typeof(prop.type);

        if (enabled)
        {
            Component component = scriptObject.GetComponent<propertyType>();
        }
    }

    public class MasterProperty
    {
        public SerializedProperty property;
        public Type type;
        public Component component;

        public MasterProperty(SerializedProperty sp, Type t, Component c)
        {
            property = sp;
            type = t;
            component = c;
        }
    }
    */
    #endregion

    #region old code, not used
    //private void UpdateEditor()
    //{
    //    if (objectProperties.snappingCoords == null)
    //    {
    //        objectProperties.snappingCoords = new List<Vector3>();
    //    }

    //    base.DrawDefaultInspector();

    //    // display the different options to choose from
    //    DisplayOrderable();
    //    DisplayBool(ref objectProperties.movable, "Movable");
    //    DisplayBool(ref objectProperties.drillable, "Drillable");
    //    DisplayBool(ref objectProperties.disposable, "Disposable");
    //    DisplayBool(ref objectProperties.returnable, "Returnable");
    //    DisplayBool(ref objectProperties.paintable, "Paintable");
    //    DisplayBool(ref objectProperties.textureChangable, "Texture Changable");
    //    DisplaySnappableToOtherObjects();

    //    ApplyProperties();

    //    // update the object properties based on what the user entered
    //    ((MasterScript)target).information = objectProperties;

    //    Debug.Log(objectProperties.orderable.ToString());
    //    Debug.Log(((MasterScript)target).information.orderable.ToString());
    //}

    //private void ApplyProperties()
    //{
    //    //Debug.Log("in ApplyProperties " + ((MasterScript) target).ToString());
    //    Object prefabObj = PrefabUtility.GetCorrespondingObjectFromSource((MasterScript)target);
    //    if ( prefabObj != null )
    //    {
    //        Debug.Log("not null! " + prefabObj.ToString());
    //    }
    //    //string prefabPath = AssetDatabase.GetAssetPath(prefabObj);
    //    //Debug.Log(prefabPath);
    //    //PrefabUtility.ApplyAddedComponent(typeof(Paintable), prefabPath, InteractionMode.UserAction);
    //}

    //private void DisplayOrderable()
    //{
    //    DisplayBool(ref objectProperties.orderable, "Orderable");

    //    float defaultLabelWidth = 150f;

    //    if (objectProperties.orderable)
    //    {
    //        // name
    //        GUILayout.BeginHorizontal();
    //        GUILayout.Label("\tName", GUILayout.Width(defaultLabelWidth));
    //        objectProperties.orderingInfo.name = GUILayout.TextField(objectProperties.orderingInfo.name);
    //        GUILayout.EndHorizontal();

    //        // price
    //        GUILayout.BeginHorizontal();
    //        GUILayout.Label("\tPrice", GUILayout.Width(defaultLabelWidth));
    //        objectProperties.orderingInfo.price = EditorGUILayout.DoubleField(objectProperties.orderingInfo.price);
    //        GUILayout.EndHorizontal();

    //        // delivery time
    //        GUILayout.BeginHorizontal();
    //        GUILayout.Label("\tDelivery Time", GUILayout.Width(defaultLabelWidth));
    //        objectProperties.orderingInfo.deliveryTime = EditorGUILayout.IntField(objectProperties.orderingInfo.deliveryTime);
    //        GUILayout.EndHorizontal();

    //        // install time
    //        GUILayout.BeginHorizontal();
    //        GUILayout.Label("\tInstall Time", GUILayout.Width(defaultLabelWidth));
    //        objectProperties.orderingInfo.instalTime = EditorGUILayout.IntField(objectProperties.orderingInfo.instalTime);
    //        GUILayout.EndHorizontal();

    //        // sustainability
    //        GUILayout.BeginHorizontal();
    //        GUILayout.Label("\tSustainability", GUILayout.Width(defaultLabelWidth));
    //        objectProperties.orderingInfo.sustainability = EditorGUILayout.DoubleField(objectProperties.orderingInfo.sustainability);
    //        GUILayout.EndHorizontal();

    //        // fun
    //        GUILayout.BeginHorizontal();
    //        GUILayout.Label("\tFun", GUILayout.Width(defaultLabelWidth));
    //        objectProperties.orderingInfo.fun = EditorGUILayout.IntField(objectProperties.orderingInfo.fun);
    //        GUILayout.EndHorizontal();

    //        // obj - EditorGUILayout.ObjectField?
    //    }
    //}

    //private void DisplayBool(ref bool property, string label)
    //{
    //    GUILayout.BeginHorizontal();
    //    property = GUILayout.Toggle(property, label);
    //    GUILayout.EndHorizontal();
    //}

    //private void DisplaySnappableToOtherObjects()
    //{
    //    DisplayBool(ref objectProperties.snappable, "Snappable");

    //    if (objectProperties.snappable)
    //    {
    //        GUILayout.BeginHorizontal();
    //        GUILayout.Label("\tSnapping Coordinates:", GUILayout.Width(250f));
    //        if ( GUILayout.Button("Add New Coordinate") )
    //        {
    //            objectProperties.snappingCoords.Add(new Vector3(0f, 0f, 0f));
    //        }
    //        GUILayout.EndHorizontal();

    //        for ( int i = 0; i < objectProperties.snappingCoords.Count; i++ )
    //        {
    //            GUILayout.BeginHorizontal();
    //            string label = "\tCoordinate " + i.ToString();
    //            objectProperties.snappingCoords[i] = EditorGUILayout.Vector3Field(label, objectProperties.snappingCoords[i]);
    //            if ( GUILayout.Button("Remove", GUILayout.Width(75f)) )
    //            {
    //                objectProperties.snappingCoords.Remove(objectProperties.snappingCoords[i]);
    //            }
    //            GUILayout.EndHorizontal();
    //        }
    //    }
    //    else
    //    {
    //        objectProperties.snappingCoords.Clear();
    //    }
    //}
    #endregion
}