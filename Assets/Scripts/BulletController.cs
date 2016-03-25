using UnityEngine;
using System.Collections;

public class BulletController : MonoBehaviour {

	// Use this for initialization
	void Start () {
		GetComponent<Rigidbody> ().velocity = transform.forward * 1;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
