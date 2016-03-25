using UnityEngine;
using System.Collections;

public class PhotonManager : Photon.MonoBehaviour {

	public string objectName;

	void Start () {
		// PhotonNetworkに接続 ver指定     
		PhotonNetwork.ConnectUsingSettings("1.0");

		// 更新間隔の設定 30回/sec 
		PhotonNetwork.sendRate = 30;

		// ロビーの設定を無視してルームに入室
		PhotonNetwork.PhotonServerSettings.JoinLobby = false;
		//		PhotonNetwork.autoJoinLobby(false);
	}

	void OnConnectedToMaster(){
		// ランダムなルームに入室
		// 直接ロビーにつなぐ設定じゃなければこっち
		PhotonNetwork.JoinRandomRoom();
	} 

	void OnJoinedLoby(){
		// ランダムなルームに入室
		PhotonNetwork.JoinRandomRoom();
	}

	void OnPhotonRandomJoinFailed(){
		// ランダムなルームが見つからなかったらルームを作成 部屋名は特に設定しない
		PhotonNetwork.CreateRoom(null);
	}

	void OnJoinedRoom(){
		PhotonNetwork.Instantiate(objectName, Vector3.zero, Quaternion.identity, 0);
		//		Instantiate (playerController, new Vector3 (75, 75, 0), Quaternion.identity);
	}

	void OnGUI(){
		GUILayout.Label(PhotonNetwork.connectionStateDetailed.ToString());
	}
}
