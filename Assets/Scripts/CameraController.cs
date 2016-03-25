using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {

	private Vector3 offset;
	private Transform cameraTransform;

	void Start () {
		cameraTransform = Camera.main.transform;
		offset = cameraTransform.position - transform.position;
	}

	// Update is called once per frame
	void Update () {
		Vector3 newPos = cameraTransform.position;
		newPos.x = transform.position.x + offset.x;
		newPos.y = transform.position.y + offset.y;
		newPos.z = transform.position.z + offset.z;
		cameraTransform.position = newPos;
	}
}
