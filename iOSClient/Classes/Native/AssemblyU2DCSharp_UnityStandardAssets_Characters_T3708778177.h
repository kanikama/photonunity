#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter
struct ThirdPersonCharacter_t3086111704;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl
struct  ThirdPersonUserControl_t3708778177  : public MonoBehaviour_t4025988718
{
public:
	// UnityStandardAssets.Characters.ThirdPerson.ThirdPersonCharacter UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_Character
	ThirdPersonCharacter_t3086111704 * ___m_Character_3;
	// UnityEngine.Vector3 UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_Move
	Vector3_t3525329789  ___m_Move_4;
	// System.Boolean UnityStandardAssets.Characters.ThirdPerson.ThirdPersonUserControl::m_Jump
	bool ___m_Jump_5;

public:
	inline static int32_t get_offset_of_m_Character_3() { return static_cast<int32_t>(offsetof(ThirdPersonUserControl_t3708778177, ___m_Character_3)); }
	inline ThirdPersonCharacter_t3086111704 * get_m_Character_3() const { return ___m_Character_3; }
	inline ThirdPersonCharacter_t3086111704 ** get_address_of_m_Character_3() { return &___m_Character_3; }
	inline void set_m_Character_3(ThirdPersonCharacter_t3086111704 * value)
	{
		___m_Character_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_Character_3, value);
	}

	inline static int32_t get_offset_of_m_Move_4() { return static_cast<int32_t>(offsetof(ThirdPersonUserControl_t3708778177, ___m_Move_4)); }
	inline Vector3_t3525329789  get_m_Move_4() const { return ___m_Move_4; }
	inline Vector3_t3525329789 * get_address_of_m_Move_4() { return &___m_Move_4; }
	inline void set_m_Move_4(Vector3_t3525329789  value)
	{
		___m_Move_4 = value;
	}

	inline static int32_t get_offset_of_m_Jump_5() { return static_cast<int32_t>(offsetof(ThirdPersonUserControl_t3708778177, ___m_Jump_5)); }
	inline bool get_m_Jump_5() const { return ___m_Jump_5; }
	inline bool* get_address_of_m_Jump_5() { return &___m_Jump_5; }
	inline void set_m_Jump_5(bool value)
	{
		___m_Jump_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
