struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 87 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//6. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//7. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//8. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//9. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//10. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//11. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//12. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//13. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//14. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//15. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//16. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//17. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//18. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//19. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//20. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//21. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//22. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//23. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//24. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//25. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//26. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//27. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//28. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//29. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//30. CapsuleCollider
	void RegisterClass_CapsuleCollider();
	RegisterClass_CapsuleCollider();

	//31. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//32. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//33. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//34. NavMeshAgent
	void RegisterClass_NavMeshAgent();
	RegisterClass_NavMeshAgent();

	//35. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//36. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//37. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//38. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//39. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//40. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//41. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//42. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//43. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//44. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//45. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//46. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//47. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//48. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//49. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//50. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//51. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//52. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//53. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//54. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//55. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//56. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//57. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//58. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//59. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//60. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//61. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//62. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//63. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//64. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//65. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//66. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//67. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//68. Avatar
	void RegisterClass_Avatar();
	RegisterClass_Avatar();

	//69. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//70. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//71. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//72. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//73. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//74. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//75. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//76. NavMeshAreas
	void RegisterClass_NavMeshAreas();
	RegisterClass_NavMeshAreas();

	//77. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//78. PhysicMaterial
	void RegisterClass_PhysicMaterial();
	RegisterClass_PhysicMaterial();

	//79. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//80. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//81. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//82. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//83. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//84. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//85. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//86. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
