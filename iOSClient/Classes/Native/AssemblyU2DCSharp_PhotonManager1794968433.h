#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonManager
struct  PhotonManager_t1794968433  : public MonoBehaviour_t4025988718
{
public:
	// System.String PhotonManager::objectName
	String_t* ___objectName_3;

public:
	inline static int32_t get_offset_of_objectName_3() { return static_cast<int32_t>(offsetof(PhotonManager_t1794968433, ___objectName_3)); }
	inline String_t* get_objectName_3() const { return ___objectName_3; }
	inline String_t** get_address_of_objectName_3() { return &___objectName_3; }
	inline void set_objectName_3(String_t* value)
	{
		___objectName_3 = value;
		Il2CppCodeGenWriteBarrier(&___objectName_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
