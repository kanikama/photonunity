#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t2443397041;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Pho2443397041.h"

#pragma once
// ExitGames.Client.Photon.Chat.ChatChannel[]
struct ChatChannelU5BU5D_t1223054956  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) ChatChannel_t2443397041 * m_Items[1];

public:
	inline ChatChannel_t2443397041 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ChatChannel_t2443397041 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ChatChannel_t2443397041 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
