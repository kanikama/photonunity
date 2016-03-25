using System;
using UnityEngine;
using UnityStandardAssets.CrossPlatformInput;

namespace UnityStandardAssets.Characters.ThirdPerson
{
    [RequireComponent(typeof (ThirdPersonCharacter))]
    public class ThirdPersonUserControl : Photon.MonoBehaviour
    {
        private ThirdPersonCharacter m_Character; // A reference to the ThirdPersonCharacter on the object
        private Vector3 m_Move;
        private bool m_Jump;                      // the world-relative desired move direction, calculated from the camForward and user input.
		private float m_FireDelay;

        private void Start()
        {
			if (photonView.isMine) {
				GetComponent<CameraController> ().enabled = true;

				m_Character = GetComponent<ThirdPersonCharacter> ();
				m_FireDelay = 0.0f;
			} else {
				GetComponent<CameraController> ().enabled = false;
			}
        }


        private void Update()
        {
            if (!m_Jump)
            {
                m_Jump = CrossPlatformInputManager.GetButtonDown("Jump");
            }
        }


        // Fixed update is called in sync with physics
        private void FixedUpdate()
        {
            // read inputs
			float h = 0;
			float v = 0;
			bool crouch = false;

			if (photonView.isMine) {
				m_FireDelay += Time.deltaTime;

				h = CrossPlatformInputManager.GetAxis("Horizontal");
				v = CrossPlatformInputManager.GetAxis("Vertical");
				crouch = Input.GetKey(KeyCode.C);

				if (CrossPlatformInputManager.GetButtonDown ("Fire")) {
					Fire ();
				}

				if (CrossPlatformInputManager.GetButtonDown ("B")) {
				}
			}

            m_Move = v*Vector3.forward + h*Vector3.right;

			// pass all parameters to the character control script
            m_Character.Move(m_Move, crouch, m_Jump);
            m_Jump = false;
        }

		private void Fire(){
//			if (m_FireDelay < 1.0f)
//				return;

			Vector3 position = transform.position;
			position.x += transform.forward.x * 1.0f;
			position.y += 1.0f;
			position.z += transform.forward.z * 1.0f;

			m_FireDelay = 0.0f;
			PhotonNetwork.Instantiate ("Bullet", position, transform.rotation, 0);
		}
    }
}
