#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>
struct KeyCollection_tCFA1A910066236156BCAB78D25ADCAC725EE054B;
// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>
struct KeyCollection_tE38E8CA5A5DAD8EDFE46CBE8440DE1FB77D92EAB;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap,System.Collections.DictionaryEntry>
struct Transform_1_t93328C3C49ADDB2CE97434532C3470E2F326DC11;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain,System.Collections.DictionaryEntry>
struct Transform_1_t8CA077915077F02D4B6206DE74B3326D4AF9B861;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tF5BA1D0A4DCFDBD8F491243C61DDF399DB893D78;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>
struct Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753;
// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>
struct Dictionary_2_tBB2C642570287E4BC395E9BF153816EC1B7FE591;
// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>
struct Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t3230DBFFA468009DB20C200A718343B79AFDE7A5;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord>
struct IEqualityComparer_1_tCE66213A2A27F14F33013B7B8304271217217141;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD;
// System.DelegateData
struct DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9;
// System.IAsyncResult
struct IAsyncResult_tDA33C24465239FB383C4C2CDAAC43B9AD3CB7F05;
// System.Int32[]
struct Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2;
// System.String
struct String_t;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey0
struct U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA;
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey1
struct U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5;
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainGroups
struct TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5;
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap
struct TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C;
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/<CreateFromPlacement>c__AnonStorey0
struct U3CCreateFromPlacementU3Ec__AnonStorey0_t785BD4BDC25E101807FE78EE2D72D5954E42248C;
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter
struct TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B;
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord[]
struct TileCoordU5BU5D_t5C91F6A2350FCA55BAD893C1C4ECAF553A8070F7;
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap[]
struct TerrainMapU5BU5D_t441BCA567805A88C78D03D9B7C42090D2B056E10;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Terrain
struct Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943;
// UnityEngine.TerrainData
struct TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2;
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;

extern RuntimeClass* Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
extern RuntimeClass* TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var;
extern RuntimeClass* TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B_il2cpp_TypeInfo_var;
extern RuntimeClass* TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5_il2cpp_TypeInfo_var;
extern RuntimeClass* TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5_il2cpp_TypeInfo_var;
extern RuntimeClass* U3CCreateFromPlacementU3Ec__AnonStorey0_t785BD4BDC25E101807FE78EE2D72D5954E42248C_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Dictionary_2_Add_m8A2F763FE35F12CE5C6B4EBDC8F490F2432721F0_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_Add_mDBC40F15D74AA100E4FD3F5B7B015C453E35FC7F_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_ContainsKey_m7BB92DEC475ECE3BB42DA835F9B2C568E81DCFD7_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_m6A761440C852EBB50A6DDEF89E54A0BDA6805287_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_GetEnumerator_mA00DFEC8FD1C165B6E30BA0DE649CD91C9F61171_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_TryGetValue_m5BB81EB3FE81C41FFF7B7764770B64EEB214ED2D_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_m4D0EF0F749453F91361A51A6C9C5C479B334ACF7_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2__ctor_mDF4242C91427656B19BE65AF67E6430A5E151931_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m25627A54AA38F254FE2F74C4BB3EC5D240A69C8A_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Count_m5872BC43117B310319C83B09F904FC7B215F176F_RuntimeMethod_var;
extern const RuntimeMethod* Dictionary_2_get_Keys_m6378916440BB5F09FDDC61026EB9E31F5BC8A9E1_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m067256608E0BBFBDA5B21F43D4590D6E04B8E347_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_mD5F040333E587932006B9E50ADD27381E6F2AA4D_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_mF1519A4909AF7C75314D829591E9B096E275215B_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m25382F4DAE18791D44400CA8FD709589AE89E66D_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_mA095EEA83D1389075851A35D0CBDA713A34C2F7C_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_mED5A978C87AD73E54C6A8BE05D98339C44875192_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m253335A3521452DF3D85BFB9EFEA45F1F661D72F_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m34348C5A639EBCAE828B3DBA655423086EE285A8_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_mB84DB5A32BBDC3FBFB6E3419E2EE70128E320FE4_RuntimeMethod_var;
extern const RuntimeMethod* KeyCollection_GetEnumerator_mB9D02C9BC28992C54914385A9ADB8B31645D8C29_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m074DC0DF87A0EC210E1FAD5B15D67DC7ADC7BCB8_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m187E30244CD96C3D6A8F53AE69ABE9846E42A9BE_RuntimeMethod_var;
extern const RuntimeMethod* KeyValuePair_2_get_Value_mF4D8A7CFC178117B78DCC6C4E27B048F0ECD9F80_RuntimeMethod_var;
extern const RuntimeMethod* U3CCollectTerrainsU3Ec__AnonStorey0_U3CU3Em__0_m0418EA03389352CE3F87CE3DBA08684EA0EB61DE_RuntimeMethod_var;
extern const RuntimeMethod* U3CCreateFromPlacementU3Ec__AnonStorey0_U3CU3Em__0_mEBF20C4D3529F9398B0B84966426693E991F7B8B_RuntimeMethod_var;
extern const uint32_t TerrainData__cctor_mB579F93C53A8F85C72D7AA2C6A266DA7F0D066C5_MetadataUsageId;
extern const uint32_t TerrainData__ctor_mEF24945C9BBDA5CAFE4A1C453649B86D79DD87AF_MetadataUsageId;
extern const uint32_t TerrainGroups__ctor_mCC684EF011C9EBA10D335C5BBC2A7B742CB1D940_MetadataUsageId;
extern const uint32_t TerrainMap_AddTerrainInternal_m2E4B99FEC2C6D4BCC6CFF0E58F0D1E70E254B4C2_MetadataUsageId;
extern const uint32_t TerrainMap_CreateFromPlacement_m2CFB7C0DD0890EBA733486F6CFF67B15471A6B57_MetadataUsageId;
extern const uint32_t TerrainMap_CreateFromPlacement_mB23A40ABF3A46620F82C489D749EABEA1EDF27B2_MetadataUsageId;
extern const uint32_t TerrainMap_GetTerrain_m2580E4949922965E6B2F1EF0AF7669D3EEE5E635_MetadataUsageId;
extern const uint32_t TerrainMap_TryToAddTerrain_m7F845FD1237F4342EAA377F5B8B078C93F0B2862_MetadataUsageId;
extern const uint32_t TerrainMap_ValidateTerrain_m7B0154421B22B18D420FF7AB3179887AFCB320AB_MetadataUsageId;
extern const uint32_t TerrainMap_Validate_m31FE625EC81CDED0369413935CD78F355677237A_MetadataUsageId;
extern const uint32_t TerrainMap__ctor_m7BC19CC1FA417F6D152B8E290AAD9990DB81E81A_MetadataUsageId;
extern const uint32_t TerrainUtility_AutoConnect_m43FD8F195A874A511293784F8029C22AB30A428E_MetadataUsageId;
extern const uint32_t TerrainUtility_CollectTerrains_m1980638C0C744F59EF15670092FFA1CA9BDA9467_MetadataUsageId;

struct TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE;


#ifndef U3CMODULEU3E_TF1895192DB0786D7B32E637E7538ADA625D10FB5_H
#define U3CMODULEU3E_TF1895192DB0786D7B32E637E7538ADA625D10FB5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF1895192DB0786D7B32E637E7538ADA625D10FB5 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_TF1895192DB0786D7B32E637E7538ADA625D10FB5_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef KEYCOLLECTION_TE38E8CA5A5DAD8EDFE46CBE8440DE1FB77D92EAB_H
#define KEYCOLLECTION_TE38E8CA5A5DAD8EDFE46CBE8440DE1FB77D92EAB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>
struct  KeyCollection_tE38E8CA5A5DAD8EDFE46CBE8440DE1FB77D92EAB  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_tE38E8CA5A5DAD8EDFE46CBE8440DE1FB77D92EAB, ___dictionary_0)); }
	inline Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCOLLECTION_TE38E8CA5A5DAD8EDFE46CBE8440DE1FB77D92EAB_H
#ifndef DICTIONARY_2_T651CE851D569289A981D44DC5543BEA956206753_H
#define DICTIONARY_2_T651CE851D569289A981D44DC5543BEA956206753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>
struct  Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	TerrainMapU5BU5D_t441BCA567805A88C78D03D9B7C42090D2B056E10* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___table_4)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___linkSlots_5)); }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___keySlots_6)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_keySlots_6() const { return ___keySlots_6; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___valueSlots_7)); }
	inline TerrainMapU5BU5D_t441BCA567805A88C78D03D9B7C42090D2B056E10* get_valueSlots_7() const { return ___valueSlots_7; }
	inline TerrainMapU5BU5D_t441BCA567805A88C78D03D9B7C42090D2B056E10** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(TerrainMapU5BU5D_t441BCA567805A88C78D03D9B7C42090D2B056E10* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___serialization_info_13)); }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t93328C3C49ADDB2CE97434532C3470E2F326DC11 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t93328C3C49ADDB2CE97434532C3470E2F326DC11 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t93328C3C49ADDB2CE97434532C3470E2F326DC11 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t93328C3C49ADDB2CE97434532C3470E2F326DC11 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_T651CE851D569289A981D44DC5543BEA956206753_H
#ifndef DICTIONARY_2_TEB34CAE1B4D0E725777A5B9D419AF51BE918C30C_H
#define DICTIONARY_2_TEB34CAE1B4D0E725777A5B9D419AF51BE918C30C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>
struct  Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	TileCoordU5BU5D_t5C91F6A2350FCA55BAD893C1C4ECAF553A8070F7* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	RuntimeObject* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;

public:
	inline static int32_t get_offset_of_table_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C, ___table_4)); }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* get_table_4() const { return ___table_4; }
	inline Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074** get_address_of_table_4() { return &___table_4; }
	inline void set_table_4(Int32U5BU5D_t20AF77B812DFA3168922AE8F35FB9FD20D7EA074* value)
	{
		___table_4 = value;
		Il2CppCodeGenWriteBarrier((&___table_4), value);
	}

	inline static int32_t get_offset_of_linkSlots_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C, ___linkSlots_5)); }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* get_linkSlots_5() const { return ___linkSlots_5; }
	inline LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD** get_address_of_linkSlots_5() { return &___linkSlots_5; }
	inline void set_linkSlots_5(LinkU5BU5D_tA58A56CD6B5AD6B2DF5F4934A46CEC9F681B71AD* value)
	{
		___linkSlots_5 = value;
		Il2CppCodeGenWriteBarrier((&___linkSlots_5), value);
	}

	inline static int32_t get_offset_of_keySlots_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C, ___keySlots_6)); }
	inline TileCoordU5BU5D_t5C91F6A2350FCA55BAD893C1C4ECAF553A8070F7* get_keySlots_6() const { return ___keySlots_6; }
	inline TileCoordU5BU5D_t5C91F6A2350FCA55BAD893C1C4ECAF553A8070F7** get_address_of_keySlots_6() { return &___keySlots_6; }
	inline void set_keySlots_6(TileCoordU5BU5D_t5C91F6A2350FCA55BAD893C1C4ECAF553A8070F7* value)
	{
		___keySlots_6 = value;
		Il2CppCodeGenWriteBarrier((&___keySlots_6), value);
	}

	inline static int32_t get_offset_of_valueSlots_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C, ___valueSlots_7)); }
	inline TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* get_valueSlots_7() const { return ___valueSlots_7; }
	inline TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE** get_address_of_valueSlots_7() { return &___valueSlots_7; }
	inline void set_valueSlots_7(TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* value)
	{
		___valueSlots_7 = value;
		Il2CppCodeGenWriteBarrier((&___valueSlots_7), value);
	}

	inline static int32_t get_offset_of_touchedSlots_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C, ___touchedSlots_8)); }
	inline int32_t get_touchedSlots_8() const { return ___touchedSlots_8; }
	inline int32_t* get_address_of_touchedSlots_8() { return &___touchedSlots_8; }
	inline void set_touchedSlots_8(int32_t value)
	{
		___touchedSlots_8 = value;
	}

	inline static int32_t get_offset_of_emptySlot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C, ___emptySlot_9)); }
	inline int32_t get_emptySlot_9() const { return ___emptySlot_9; }
	inline int32_t* get_address_of_emptySlot_9() { return &___emptySlot_9; }
	inline void set_emptySlot_9(int32_t value)
	{
		___emptySlot_9 = value;
	}

	inline static int32_t get_offset_of_count_10() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C, ___count_10)); }
	inline int32_t get_count_10() const { return ___count_10; }
	inline int32_t* get_address_of_count_10() { return &___count_10; }
	inline void set_count_10(int32_t value)
	{
		___count_10 = value;
	}

	inline static int32_t get_offset_of_threshold_11() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C, ___threshold_11)); }
	inline int32_t get_threshold_11() const { return ___threshold_11; }
	inline int32_t* get_address_of_threshold_11() { return &___threshold_11; }
	inline void set_threshold_11(int32_t value)
	{
		___threshold_11 = value;
	}

	inline static int32_t get_offset_of_hcp_12() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C, ___hcp_12)); }
	inline RuntimeObject* get_hcp_12() const { return ___hcp_12; }
	inline RuntimeObject** get_address_of_hcp_12() { return &___hcp_12; }
	inline void set_hcp_12(RuntimeObject* value)
	{
		___hcp_12 = value;
		Il2CppCodeGenWriteBarrier((&___hcp_12), value);
	}

	inline static int32_t get_offset_of_serialization_info_13() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C, ___serialization_info_13)); }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * get_serialization_info_13() const { return ___serialization_info_13; }
	inline SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 ** get_address_of_serialization_info_13() { return &___serialization_info_13; }
	inline void set_serialization_info_13(SerializationInfo_t778922F6A5AACC38C8F326D3338A91D6D72B11E2 * value)
	{
		___serialization_info_13 = value;
		Il2CppCodeGenWriteBarrier((&___serialization_info_13), value);
	}

	inline static int32_t get_offset_of_generation_14() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C, ___generation_14)); }
	inline int32_t get_generation_14() const { return ___generation_14; }
	inline int32_t* get_address_of_generation_14() { return &___generation_14; }
	inline void set_generation_14(int32_t value)
	{
		___generation_14 = value;
	}
};

struct Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t8CA077915077F02D4B6206DE74B3326D4AF9B861 * ___U3CU3Ef__amU24cacheB_15;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cacheB_15() { return static_cast<int32_t>(offsetof(Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C_StaticFields, ___U3CU3Ef__amU24cacheB_15)); }
	inline Transform_1_t8CA077915077F02D4B6206DE74B3326D4AF9B861 * get_U3CU3Ef__amU24cacheB_15() const { return ___U3CU3Ef__amU24cacheB_15; }
	inline Transform_1_t8CA077915077F02D4B6206DE74B3326D4AF9B861 ** get_address_of_U3CU3Ef__amU24cacheB_15() { return &___U3CU3Ef__amU24cacheB_15; }
	inline void set_U3CU3Ef__amU24cacheB_15(Transform_1_t8CA077915077F02D4B6206DE74B3326D4AF9B861 * value)
	{
		___U3CU3Ef__amU24cacheB_15 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__amU24cacheB_15), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARY_2_TEB34CAE1B4D0E725777A5B9D419AF51BE918C30C_H
#ifndef VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#define VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_marshaled_com
{
};
#endif // VALUETYPE_T1810BD84E0FDB5D3A7CD34286A5B22F343995C9C_H
#ifndef TERRAINUTILITY_T82C295A06EAAEA3D755971EBE55084B993C7FC7B_H
#define TERRAINUTILITY_T82C295A06EAAEA3D755971EBE55084B993C7FC7B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility
struct  TerrainUtility_t82C295A06EAAEA3D755971EBE55084B993C7FC7B  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAINUTILITY_T82C295A06EAAEA3D755971EBE55084B993C7FC7B_H
#ifndef U3CCOLLECTTERRAINSU3EC__ANONSTOREY0_T4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA_H
#define U3CCOLLECTTERRAINSU3EC__ANONSTOREY0_T4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey0
struct  U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA  : public RuntimeObject
{
public:
	// UnityEngine.Terrain UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey0::t
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___t_0;
	// UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey1 UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey0::<>f__ref$1
	U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5 * ___U3CU3Ef__refU241_1;

public:
	inline static int32_t get_offset_of_t_0() { return static_cast<int32_t>(offsetof(U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA, ___t_0)); }
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * get_t_0() const { return ___t_0; }
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 ** get_address_of_t_0() { return &___t_0; }
	inline void set_t_0(Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * value)
	{
		___t_0 = value;
		Il2CppCodeGenWriteBarrier((&___t_0), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU241_1() { return static_cast<int32_t>(offsetof(U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA, ___U3CU3Ef__refU241_1)); }
	inline U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5 * get_U3CU3Ef__refU241_1() const { return ___U3CU3Ef__refU241_1; }
	inline U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5 ** get_address_of_U3CU3Ef__refU241_1() { return &___U3CU3Ef__refU241_1; }
	inline void set_U3CU3Ef__refU241_1(U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5 * value)
	{
		___U3CU3Ef__refU241_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__refU241_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCOLLECTTERRAINSU3EC__ANONSTOREY0_T4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA_H
#ifndef U3CCOLLECTTERRAINSU3EC__ANONSTOREY1_T41DA2A02D290EE5FEF14389A4391CBC1E3E622A5_H
#define U3CCOLLECTTERRAINSU3EC__ANONSTOREY1_T41DA2A02D290EE5FEF14389A4391CBC1E3E622A5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey1
struct  U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey1::onlyAutoConnectedTerrains
	bool ___onlyAutoConnectedTerrains_0;

public:
	inline static int32_t get_offset_of_onlyAutoConnectedTerrains_0() { return static_cast<int32_t>(offsetof(U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5, ___onlyAutoConnectedTerrains_0)); }
	inline bool get_onlyAutoConnectedTerrains_0() const { return ___onlyAutoConnectedTerrains_0; }
	inline bool* get_address_of_onlyAutoConnectedTerrains_0() { return &___onlyAutoConnectedTerrains_0; }
	inline void set_onlyAutoConnectedTerrains_0(bool value)
	{
		___onlyAutoConnectedTerrains_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCOLLECTTERRAINSU3EC__ANONSTOREY1_T41DA2A02D290EE5FEF14389A4391CBC1E3E622A5_H
#ifndef U3CCREATEFROMPLACEMENTU3EC__ANONSTOREY0_T785BD4BDC25E101807FE78EE2D72D5954E42248C_H
#define U3CCREATEFROMPLACEMENTU3EC__ANONSTOREY0_T785BD4BDC25E101807FE78EE2D72D5954E42248C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/<CreateFromPlacement>c__AnonStorey0
struct  U3CCreateFromPlacementU3Ec__AnonStorey0_t785BD4BDC25E101807FE78EE2D72D5954E42248C  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/<CreateFromPlacement>c__AnonStorey0::groupID
	int32_t ___groupID_0;

public:
	inline static int32_t get_offset_of_groupID_0() { return static_cast<int32_t>(offsetof(U3CCreateFromPlacementU3Ec__AnonStorey0_t785BD4BDC25E101807FE78EE2D72D5954E42248C, ___groupID_0)); }
	inline int32_t get_groupID_0() const { return ___groupID_0; }
	inline int32_t* get_address_of_groupID_0() { return &___groupID_0; }
	inline void set_groupID_0(int32_t value)
	{
		___groupID_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CCREATEFROMPLACEMENTU3EC__ANONSTOREY0_T785BD4BDC25E101807FE78EE2D72D5954E42248C_H
#ifndef BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#define BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t92E4792324DA9B716F339A3B965A14965E99A4EF_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T92E4792324DA9B716F339A3B965A14965E99A4EF_H
#ifndef KEYVALUEPAIR_2_TC1FD9633618D9B27E2552BBAD347EC14A6C07C2C_H
#define KEYVALUEPAIR_2_TC1FD9633618D9B27E2552BBAD347EC14A6C07C2C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_TC1FD9633618D9B27E2552BBAD347EC14A6C07C2C_H
#ifndef KEYVALUEPAIR_2_T66F6496942DCFC8D590F8DA04910990C5DA39574_H
#define KEYVALUEPAIR_2_T66F6496942DCFC8D590F8DA04910990C5DA39574_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>
struct  KeyValuePair_2_t66F6496942DCFC8D590F8DA04910990C5DA39574 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t66F6496942DCFC8D590F8DA04910990C5DA39574, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t66F6496942DCFC8D590F8DA04910990C5DA39574, ___value_1)); }
	inline TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * get_value_1() const { return ___value_1; }
	inline TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T66F6496942DCFC8D590F8DA04910990C5DA39574_H
#ifndef ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#define ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF  : public ValueType_t1810BD84E0FDB5D3A7CD34286A5B22F343995C9C
{
public:

public:
};

struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t5AAC444DFCAA78411386665A25FE3CD3169879EF_marshaled_com
{
};
#endif // ENUM_T5AAC444DFCAA78411386665A25FE3CD3169879EF_H
#ifndef INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#define INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_tC16F64335CE8B56D99229DE94BB3A876ED55FE87, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_TC16F64335CE8B56D99229DE94BB3A876ED55FE87_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#define SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_TF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_H
#ifndef VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#define VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_tDB81A15FA2AB53E2401A76B745D215397B29F783 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_TDB81A15FA2AB53E2401A76B745D215397B29F783_H
#ifndef TERRAINGROUPS_T88B87E7C8DA6A97E904D74167C43D631796ECBC5_H
#define TERRAINGROUPS_T88B87E7C8DA6A97E904D74167C43D631796ECBC5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainGroups
struct  TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5  : public Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAINGROUPS_T88B87E7C8DA6A97E904D74167C43D631796ECBC5_H
#ifndef TILECOORD_T51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA_H
#define TILECOORD_T51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord
struct  TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA 
{
public:
	// System.Int32 UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord::tileX
	int32_t ___tileX_0;
	// System.Int32 UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord::tileZ
	int32_t ___tileZ_1;

public:
	inline static int32_t get_offset_of_tileX_0() { return static_cast<int32_t>(offsetof(TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA, ___tileX_0)); }
	inline int32_t get_tileX_0() const { return ___tileX_0; }
	inline int32_t* get_address_of_tileX_0() { return &___tileX_0; }
	inline void set_tileX_0(int32_t value)
	{
		___tileX_0 = value;
	}

	inline static int32_t get_offset_of_tileZ_1() { return static_cast<int32_t>(offsetof(TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA, ___tileZ_1)); }
	inline int32_t get_tileZ_1() const { return ___tileZ_1; }
	inline int32_t* get_address_of_tileZ_1() { return &___tileZ_1; }
	inline void set_tileZ_1(int32_t value)
	{
		___tileZ_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TILECOORD_T51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA_H
#ifndef VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#define VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_TA85D2DD88578276CA8A8796756458277E72D073D_H
#ifndef VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#define VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_TDCF05E21F632FE2BA260C06E0D10CA81513E6720_H
#ifndef ENUMERATOR_T72A8231827DB93FC8B25F08FF066377F7B773DA1_H
#define ENUMERATOR_T72A8231827DB93FC8B25F08FF066377F7B773DA1_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct  Enumerator_t72A8231827DB93FC8B25F08FF066377F7B773DA1 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tF5BA1D0A4DCFDBD8F491243C61DDF399DB893D78 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t72A8231827DB93FC8B25F08FF066377F7B773DA1, ___dictionary_0)); }
	inline Dictionary_2_tF5BA1D0A4DCFDBD8F491243C61DDF399DB893D78 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF5BA1D0A4DCFDBD8F491243C61DDF399DB893D78 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF5BA1D0A4DCFDBD8F491243C61DDF399DB893D78 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t72A8231827DB93FC8B25F08FF066377F7B773DA1, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t72A8231827DB93FC8B25F08FF066377F7B773DA1, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t72A8231827DB93FC8B25F08FF066377F7B773DA1, ___current_3)); }
	inline KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T72A8231827DB93FC8B25F08FF066377F7B773DA1_H
#ifndef ENUMERATOR_T5CAB4B85782B849B0F05E35FFAED39CF4A78598B_H
#define ENUMERATOR_T5CAB4B85782B849B0F05E35FFAED39CF4A78598B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>
struct  Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t66F6496942DCFC8D590F8DA04910990C5DA39574  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B, ___dictionary_0)); }
	inline Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B, ___current_3)); }
	inline KeyValuePair_2_t66F6496942DCFC8D590F8DA04910990C5DA39574  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t66F6496942DCFC8D590F8DA04910990C5DA39574 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t66F6496942DCFC8D590F8DA04910990C5DA39574  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T5CAB4B85782B849B0F05E35FFAED39CF4A78598B_H
#ifndef KEYVALUEPAIR_2_T198F3EF99C5CB706B8E678896CA900035FACF342_H
#define KEYVALUEPAIR_2_T198F3EF99C5CB706B8E678896CA900035FACF342_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>
struct  KeyValuePair_2_t198F3EF99C5CB706B8E678896CA900035FACF342 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t198F3EF99C5CB706B8E678896CA900035FACF342, ___key_0)); }
	inline TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  get_key_0() const { return ___key_0; }
	inline TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t198F3EF99C5CB706B8E678896CA900035FACF342, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T198F3EF99C5CB706B8E678896CA900035FACF342_H
#ifndef KEYVALUEPAIR_2_T1042B27C0272463F95B4736D997596598DFACDF2_H
#define KEYVALUEPAIR_2_T1042B27C0272463F95B4736D997596598DFACDF2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>
struct  KeyValuePair_2_t1042B27C0272463F95B4736D997596598DFACDF2 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1042B27C0272463F95B4736D997596598DFACDF2, ___key_0)); }
	inline TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  get_key_0() const { return ___key_0; }
	inline TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1042B27C0272463F95B4736D997596598DFACDF2, ___value_1)); }
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * get_value_1() const { return ___value_1; }
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1042B27C0272463F95B4736D997596598DFACDF2_H
#ifndef DELEGATE_T_H
#define DELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_8)); }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * get_data_8() const { return ___data_8; }
	inline DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T_H
#ifndef ERRORCODE_TCC2BF2B1CF6C6645A76C1DEE65D4AA4A527FEC7A_H
#define ERRORCODE_TCC2BF2B1CF6C6645A76C1DEE65D4AA4A527FEC7A_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/ErrorCode
struct  ErrorCode_tCC2BF2B1CF6C6645A76C1DEE65D4AA4A527FEC7A 
{
public:
	// System.Int32 UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/ErrorCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ErrorCode_tCC2BF2B1CF6C6645A76C1DEE65D4AA4A527FEC7A, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERRORCODE_TCC2BF2B1CF6C6645A76C1DEE65D4AA4A527FEC7A_H
#ifndef OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#define OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_TAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_H
#ifndef BOUNDARYVALUETYPE_TAD21AC67F7D3AC4FF445A0D6002E7914F07000EA_H
#define BOUNDARYVALUETYPE_TAD21AC67F7D3AC4FF445A0D6002E7914F07000EA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TerrainData/BoundaryValueType
struct  BoundaryValueType_tAD21AC67F7D3AC4FF445A0D6002E7914F07000EA 
{
public:
	// System.Int32 UnityEngine.TerrainData/BoundaryValueType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BoundaryValueType_tAD21AC67F7D3AC4FF445A0D6002E7914F07000EA, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDARYVALUETYPE_TAD21AC67F7D3AC4FF445A0D6002E7914F07000EA_H
#ifndef ENUMERATOR_T2EDE6E26336E2877DCC9EE6FEB16C78BB83848B4_H
#define ENUMERATOR_T2EDE6E26336E2877DCC9EE6FEB16C78BB83848B4_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>
struct  Enumerator_t2EDE6E26336E2877DCC9EE6FEB16C78BB83848B4 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBB2C642570287E4BC395E9BF153816EC1B7FE591 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t198F3EF99C5CB706B8E678896CA900035FACF342  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t2EDE6E26336E2877DCC9EE6FEB16C78BB83848B4, ___dictionary_0)); }
	inline Dictionary_2_tBB2C642570287E4BC395E9BF153816EC1B7FE591 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBB2C642570287E4BC395E9BF153816EC1B7FE591 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBB2C642570287E4BC395E9BF153816EC1B7FE591 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2EDE6E26336E2877DCC9EE6FEB16C78BB83848B4, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t2EDE6E26336E2877DCC9EE6FEB16C78BB83848B4, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2EDE6E26336E2877DCC9EE6FEB16C78BB83848B4, ___current_3)); }
	inline KeyValuePair_2_t198F3EF99C5CB706B8E678896CA900035FACF342  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t198F3EF99C5CB706B8E678896CA900035FACF342 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t198F3EF99C5CB706B8E678896CA900035FACF342  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2EDE6E26336E2877DCC9EE6FEB16C78BB83848B4_H
#ifndef ENUMERATOR_T29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8_H
#define ENUMERATOR_T29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>
struct  Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::stamp
	int32_t ___stamp_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t1042B27C0272463F95B4736D997596598DFACDF2  ___current_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8, ___dictionary_0)); }
	inline Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___dictionary_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_stamp_2() { return static_cast<int32_t>(offsetof(Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8, ___stamp_2)); }
	inline int32_t get_stamp_2() const { return ___stamp_2; }
	inline int32_t* get_address_of_stamp_2() { return &___stamp_2; }
	inline void set_stamp_2(int32_t value)
	{
		___stamp_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8, ___current_3)); }
	inline KeyValuePair_2_t1042B27C0272463F95B4736D997596598DFACDF2  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t1042B27C0272463F95B4736D997596598DFACDF2 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t1042B27C0272463F95B4736D997596598DFACDF2  value)
	{
		___current_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8_H
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
#ifndef COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#define COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T05064EF382ABCAF4B8C94F8A350EA85184C26621_H
#ifndef TERRAINMAP_T8D09DC412F632DAB9EA8FB7A11A34EB7464D547C_H
#define TERRAINMAP_T8D09DC412F632DAB9EA8FB7A11A34EB7464D547C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap
struct  TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::m_patchSize
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_patchSize_0;
	// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/ErrorCode UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::m_errorCode
	int32_t ___m_errorCode_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain> UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::m_terrainTiles
	Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * ___m_terrainTiles_2;

public:
	inline static int32_t get_offset_of_m_patchSize_0() { return static_cast<int32_t>(offsetof(TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C, ___m_patchSize_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_patchSize_0() const { return ___m_patchSize_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_patchSize_0() { return &___m_patchSize_0; }
	inline void set_m_patchSize_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_patchSize_0 = value;
	}

	inline static int32_t get_offset_of_m_errorCode_1() { return static_cast<int32_t>(offsetof(TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C, ___m_errorCode_1)); }
	inline int32_t get_m_errorCode_1() const { return ___m_errorCode_1; }
	inline int32_t* get_address_of_m_errorCode_1() { return &___m_errorCode_1; }
	inline void set_m_errorCode_1(int32_t value)
	{
		___m_errorCode_1 = value;
	}

	inline static int32_t get_offset_of_m_terrainTiles_2() { return static_cast<int32_t>(offsetof(TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C, ___m_terrainTiles_2)); }
	inline Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * get_m_terrainTiles_2() const { return ___m_terrainTiles_2; }
	inline Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C ** get_address_of_m_terrainTiles_2() { return &___m_terrainTiles_2; }
	inline void set_m_terrainTiles_2(Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * value)
	{
		___m_terrainTiles_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_terrainTiles_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAINMAP_T8D09DC412F632DAB9EA8FB7A11A34EB7464D547C_H
#ifndef TERRAINDATA_T9D44396901570930AFE428DAC19ABE0C1477CFE2_H
#define TERRAINDATA_T9D44396901570930AFE428DAC19ABE0C1477CFE2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TerrainData
struct  TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

struct TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields
{
public:
	// System.Int32 UnityEngine.TerrainData::k_MaximumResolution
	int32_t ___k_MaximumResolution_4;
	// System.Int32 UnityEngine.TerrainData::k_MinimumDetailResolutionPerPatch
	int32_t ___k_MinimumDetailResolutionPerPatch_5;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailResolutionPerPatch
	int32_t ___k_MaximumDetailResolutionPerPatch_6;
	// System.Int32 UnityEngine.TerrainData::k_MaximumDetailPatchCount
	int32_t ___k_MaximumDetailPatchCount_7;
	// System.Int32 UnityEngine.TerrainData::k_MinimumAlphamapResolution
	int32_t ___k_MinimumAlphamapResolution_8;
	// System.Int32 UnityEngine.TerrainData::k_MaximumAlphamapResolution
	int32_t ___k_MaximumAlphamapResolution_9;
	// System.Int32 UnityEngine.TerrainData::k_MinimumBaseMapResolution
	int32_t ___k_MinimumBaseMapResolution_10;
	// System.Int32 UnityEngine.TerrainData::k_MaximumBaseMapResolution
	int32_t ___k_MaximumBaseMapResolution_11;

public:
	inline static int32_t get_offset_of_k_MaximumResolution_4() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MaximumResolution_4)); }
	inline int32_t get_k_MaximumResolution_4() const { return ___k_MaximumResolution_4; }
	inline int32_t* get_address_of_k_MaximumResolution_4() { return &___k_MaximumResolution_4; }
	inline void set_k_MaximumResolution_4(int32_t value)
	{
		___k_MaximumResolution_4 = value;
	}

	inline static int32_t get_offset_of_k_MinimumDetailResolutionPerPatch_5() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MinimumDetailResolutionPerPatch_5)); }
	inline int32_t get_k_MinimumDetailResolutionPerPatch_5() const { return ___k_MinimumDetailResolutionPerPatch_5; }
	inline int32_t* get_address_of_k_MinimumDetailResolutionPerPatch_5() { return &___k_MinimumDetailResolutionPerPatch_5; }
	inline void set_k_MinimumDetailResolutionPerPatch_5(int32_t value)
	{
		___k_MinimumDetailResolutionPerPatch_5 = value;
	}

	inline static int32_t get_offset_of_k_MaximumDetailResolutionPerPatch_6() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MaximumDetailResolutionPerPatch_6)); }
	inline int32_t get_k_MaximumDetailResolutionPerPatch_6() const { return ___k_MaximumDetailResolutionPerPatch_6; }
	inline int32_t* get_address_of_k_MaximumDetailResolutionPerPatch_6() { return &___k_MaximumDetailResolutionPerPatch_6; }
	inline void set_k_MaximumDetailResolutionPerPatch_6(int32_t value)
	{
		___k_MaximumDetailResolutionPerPatch_6 = value;
	}

	inline static int32_t get_offset_of_k_MaximumDetailPatchCount_7() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MaximumDetailPatchCount_7)); }
	inline int32_t get_k_MaximumDetailPatchCount_7() const { return ___k_MaximumDetailPatchCount_7; }
	inline int32_t* get_address_of_k_MaximumDetailPatchCount_7() { return &___k_MaximumDetailPatchCount_7; }
	inline void set_k_MaximumDetailPatchCount_7(int32_t value)
	{
		___k_MaximumDetailPatchCount_7 = value;
	}

	inline static int32_t get_offset_of_k_MinimumAlphamapResolution_8() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MinimumAlphamapResolution_8)); }
	inline int32_t get_k_MinimumAlphamapResolution_8() const { return ___k_MinimumAlphamapResolution_8; }
	inline int32_t* get_address_of_k_MinimumAlphamapResolution_8() { return &___k_MinimumAlphamapResolution_8; }
	inline void set_k_MinimumAlphamapResolution_8(int32_t value)
	{
		___k_MinimumAlphamapResolution_8 = value;
	}

	inline static int32_t get_offset_of_k_MaximumAlphamapResolution_9() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MaximumAlphamapResolution_9)); }
	inline int32_t get_k_MaximumAlphamapResolution_9() const { return ___k_MaximumAlphamapResolution_9; }
	inline int32_t* get_address_of_k_MaximumAlphamapResolution_9() { return &___k_MaximumAlphamapResolution_9; }
	inline void set_k_MaximumAlphamapResolution_9(int32_t value)
	{
		___k_MaximumAlphamapResolution_9 = value;
	}

	inline static int32_t get_offset_of_k_MinimumBaseMapResolution_10() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MinimumBaseMapResolution_10)); }
	inline int32_t get_k_MinimumBaseMapResolution_10() const { return ___k_MinimumBaseMapResolution_10; }
	inline int32_t* get_address_of_k_MinimumBaseMapResolution_10() { return &___k_MinimumBaseMapResolution_10; }
	inline void set_k_MinimumBaseMapResolution_10(int32_t value)
	{
		___k_MinimumBaseMapResolution_10 = value;
	}

	inline static int32_t get_offset_of_k_MaximumBaseMapResolution_11() { return static_cast<int32_t>(offsetof(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields, ___k_MaximumBaseMapResolution_11)); }
	inline int32_t get_k_MaximumBaseMapResolution_11() const { return ___k_MaximumBaseMapResolution_11; }
	inline int32_t* get_address_of_k_MaximumBaseMapResolution_11() { return &___k_MaximumBaseMapResolution_11; }
	inline void set_k_MaximumBaseMapResolution_11(int32_t value)
	{
		___k_MaximumBaseMapResolution_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAINDATA_T9D44396901570930AFE428DAC19ABE0C1477CFE2_H
#ifndef ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#define ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T74ABD1277F711E7FBDCB00E169A63DEFD39E86A2_H
#ifndef ENUMERATOR_T0DC3BBA5793B11A8C80B91E444D9364F648D3CC0_H
#define ENUMERATOR_T0DC3BBA5793B11A8C80B91E444D9364F648D3CC0_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>
struct  Enumerator_t0DC3BBA5793B11A8C80B91E444D9364F648D3CC0 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::host_enumerator
	Enumerator_t2EDE6E26336E2877DCC9EE6FEB16C78BB83848B4  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_t0DC3BBA5793B11A8C80B91E444D9364F648D3CC0, ___host_enumerator_0)); }
	inline Enumerator_t2EDE6E26336E2877DCC9EE6FEB16C78BB83848B4  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t2EDE6E26336E2877DCC9EE6FEB16C78BB83848B4 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t2EDE6E26336E2877DCC9EE6FEB16C78BB83848B4  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T0DC3BBA5793B11A8C80B91E444D9364F648D3CC0_H
#ifndef ENUMERATOR_TC227AD4879B6DF12FD67520BE6891D0106F2A639_H
#define ENUMERATOR_TC227AD4879B6DF12FD67520BE6891D0106F2A639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>
struct  Enumerator_tC227AD4879B6DF12FD67520BE6891D0106F2A639 
{
public:
	// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::host_enumerator
	Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8  ___host_enumerator_0;

public:
	inline static int32_t get_offset_of_host_enumerator_0() { return static_cast<int32_t>(offsetof(Enumerator_tC227AD4879B6DF12FD67520BE6891D0106F2A639, ___host_enumerator_0)); }
	inline Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8  get_host_enumerator_0() const { return ___host_enumerator_0; }
	inline Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8 * get_address_of_host_enumerator_0() { return &___host_enumerator_0; }
	inline void set_host_enumerator_0(Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8  value)
	{
		___host_enumerator_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_TC227AD4879B6DF12FD67520BE6891D0106F2A639_H
#ifndef BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#define BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_TBDC7E9C3C898AD8348891B82D3E345801D920CA8_H
#ifndef TERRAINFILTER_T02BF9FBD8E61763D1D8484B34936B36B1046C66B_H
#define TERRAINFILTER_T02BF9FBD8E61763D1D8484B34936B36B1046C66B_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter
struct  TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAINFILTER_T02BF9FBD8E61763D1D8484B34936B36B1046C66B_H
#ifndef TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#define TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_TBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA_H
#ifndef TERRAIN_T0BF7371FA90643325F50A87C7894D7BEBBE08943_H
#define TERRAIN_T0BF7371FA90643325F50A87C7894D7BEBBE08943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Terrain
struct  Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERRAIN_T0BF7371FA90643325F50A87C7894D7BEBBE08943_H
// UnityEngine.Terrain[]
struct TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * m_Items[1];

public:
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mEA17439EB85F7F5A9BFB82AC827B949FCC488937_gshared (Dictionary_2_tF5BA1D0A4DCFDBD8F491243C61DDF399DB893D78 * __this, int32_t p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_mA4F2D6DB56CF8BEF4BB6E89EEB83243714137076_gshared (Dictionary_2_tF5BA1D0A4DCFDBD8F491243C61DDF399DB893D78 * __this, int32_t p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m9D65E6A6C4EF55747B218F64ADDD6B3633BDD59D_gshared (Dictionary_2_tF5BA1D0A4DCFDBD8F491243C61DDF399DB893D78 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t72A8231827DB93FC8B25F08FF066377F7B773DA1  Dictionary_2_GetEnumerator_mD7D3667E0C2C4375B188D9AB5B1E639B780E06D2_gshared (Dictionary_2_tF5BA1D0A4DCFDBD8F491243C61DDF399DB893D78 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C  Enumerator_get_Current_m910F21E4440409EDAB15C7315D5BE4B4978C90EA_gshared (Enumerator_t72A8231827DB93FC8B25F08FF066377F7B773DA1 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR int32_t KeyValuePair_2_get_Key_mF2222972FF6763CE3306C1A318CB8C804C74A2B0_gshared (KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m3ABCC740085F64D6034C00060C73B3C59DC6DEDC_gshared (KeyValuePair_2_tC1FD9633618D9B27E2552BBAD347EC14A6C07C2C * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t2EDE6E26336E2877DCC9EE6FEB16C78BB83848B4  Dictionary_2_GetEnumerator_mE5E041C98D06C80CCD4494BB27987DEC124D3F26_gshared (Dictionary_2_tBB2C642570287E4BC395E9BF153816EC1B7FE591 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR KeyValuePair_2_t198F3EF99C5CB706B8E678896CA900035FACF342  Enumerator_get_Current_mF7E1CEF14E24BD37E08E9E14FC2F51009C501F4D_gshared (Enumerator_t2EDE6E26336E2877DCC9EE6FEB16C78BB83848B4 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::get_Key()
extern "C" IL2CPP_METHOD_ATTR TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  KeyValuePair_2_get_Key_mF08DCBB99B6C2A37F48D92E033E803F4A8AC4A94_gshared (KeyValuePair_2_t198F3EF99C5CB706B8E678896CA900035FACF342 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mB10130DBDA414164BBDDAACF4AC83860CBDE9E92_gshared (Enumerator_t2EDE6E26336E2877DCC9EE6FEB16C78BB83848B4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m16F12C2BA06F87B1B7124F8EE6C3DEF23E60A62F_gshared (Enumerator_t2EDE6E26336E2877DCC9EE6FEB16C78BB83848B4 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m9E8C232CFA906EF179FD7371D34E9EC40FC039FA_gshared (Enumerator_t72A8231827DB93FC8B25F08FF066377F7B773DA1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m18919162958478F0D309A62927542FB79001230C_gshared (Enumerator_t72A8231827DB93FC8B25F08FF066377F7B773DA1 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mBFF4C9B146607B7C65AC7E902422A69E86DEB4C4_gshared (Dictionary_2_tF5BA1D0A4DCFDBD8F491243C61DDF399DB893D78 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m0F35082D934696E1B42167D73BA26BDF6AFAE69D_gshared (Dictionary_2_tBB2C642570287E4BC395E9BF153816EC1B7FE591 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::TryGetValue(!0,!1&)
extern "C" IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m66AC7FA5AADBEBEB73A8FBF687E5E38A40EE855D_gshared (Dictionary_2_tBB2C642570287E4BC395E9BF153816EC1B7FE591 * __this, TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  p0, RuntimeObject ** p1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::get_Count()
extern "C" IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mFE793D7CA117D57EA070A512E35A149F34EE7846_gshared (Dictionary_2_tBB2C642570287E4BC395E9BF153816EC1B7FE591 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::Add(!0,!1)
extern "C" IL2CPP_METHOD_ATTR void Dictionary_2_Add_mDA7D28EFAEA19C98199964E5A8FBE563ACD7B0F3_gshared (Dictionary_2_tBB2C642570287E4BC395E9BF153816EC1B7FE591 * __this, TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  p0, RuntimeObject * p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::get_Keys()
extern "C" IL2CPP_METHOD_ATTR KeyCollection_tCFA1A910066236156BCAB78D25ADCAC725EE054B * Dictionary_2_get_Keys_m81E103C146AAACC25C3FA5066424C5AF6044A230_gshared (Dictionary_2_tBB2C642570287E4BC395E9BF153816EC1B7FE591 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::GetEnumerator()
extern "C" IL2CPP_METHOD_ATTR Enumerator_t0DC3BBA5793B11A8C80B91E444D9364F648D3CC0  KeyCollection_GetEnumerator_m86F0E34A89EDD75836F0E4B879F166E48A5D7E2A_gshared (KeyCollection_tCFA1A910066236156BCAB78D25ADCAC725EE054B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::get_Current()
extern "C" IL2CPP_METHOD_ATTR TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  Enumerator_get_Current_m81C12C43F388669C36A796329DB78C5AA49153FD_gshared (Enumerator_t0DC3BBA5793B11A8C80B91E444D9364F648D3CC0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mDDDB9B29FE72721DC8D98BA8515B8718F2114DCB_gshared (Enumerator_t0DC3BBA5793B11A8C80B91E444D9364F648D3CC0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,System.Object>::Dispose()
extern "C" IL2CPP_METHOD_ATTR void Enumerator_Dispose_m23AD20F6002019374EE0CC9C2D1320D20DC3DE92_gshared (Enumerator_t0DC3BBA5793B11A8C80B91E444D9364F648D3CC0 * __this, const RuntimeMethod* method);

// UnityEngine.Terrain[] UnityEngine.Terrain::get_activeTerrains()
extern "C" IL2CPP_METHOD_ATTR TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA (const RuntimeMethod* method);
// System.Void UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)
extern "C" IL2CPP_METHOD_ATTR void Terrain_SetNeighbors_mA28EDA87B310AE170885473F6168B18849B55356 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___left0, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___top1, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___right2, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___bottom3, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCollectTerrainsU3Ec__AnonStorey1__ctor_m17577E04A799151323404D646A9F988C085E7794 (U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility::HasValidTerrains()
extern "C" IL2CPP_METHOD_ATTR bool TerrainUtility_HasValidTerrains_m1E41C13C6ADCA00BB57A79651C0CD9FCEFE05EA3 (const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainGroups::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TerrainGroups__ctor_mCC684EF011C9EBA10D335C5BBC2A7B742CB1D940 (TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCollectTerrainsU3Ec__AnonStorey0__ctor_m32C93B963B7A5FCA39B72198408656E1568D8BFA (U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Terrain::get_allowAutoConnect()
extern "C" IL2CPP_METHOD_ATTR bool Terrain_get_allowAutoConnect_m0968C0D1D5628726A19734808D1E37C44CA4F146 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Terrain::get_groupingID()
extern "C" IL2CPP_METHOD_ATTR int32_t Terrain_get_groupingID_mF2A964B8B4B049E4E443782AA951C4E85C6EC132 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m7BB92DEC475ECE3BB42DA835F9B2C568E81DCFD7 (Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753 * __this, int32_t p0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mEA17439EB85F7F5A9BFB82AC827B949FCC488937_gshared)(__this, p0, method);
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TerrainFilter__ctor_m60B330ACE5AE8B4833AFB8D9BB095D6783DB2F1E (TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::CreateFromPlacement(UnityEngine.Terrain,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * TerrainMap_CreateFromPlacement_mB23A40ABF3A46620F82C489D749EABEA1EDF27B2 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___originTerrain0, TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * ___filter1, bool ___fullValidation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::Add(!0,!1)
inline void Dictionary_2_Add_mDBC40F15D74AA100E4FD3F5B7B015C453E35FC7F (Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753 * __this, int32_t p0, TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753 *, int32_t, TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C *, const RuntimeMethod*))Dictionary_2_Add_mA4F2D6DB56CF8BEF4BB6E89EEB83243714137076_gshared)(__this, p0, p1, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::get_Count()
inline int32_t Dictionary_2_get_Count_m25627A54AA38F254FE2F74C4BB3EC5D240A69C8A (Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753 *, const RuntimeMethod*))Dictionary_2_get_Count_m9D65E6A6C4EF55747B218F64ADDD6B3633BDD59D_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility::ClearConnectivity()
extern "C" IL2CPP_METHOD_ATTR void TerrainUtility_ClearConnectivity_mC60E6D3178548AFDCF76483F99E4BB6F831FC3F5 (const RuntimeMethod* method);
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainGroups UnityEngine.Experimental.TerrainAPI.TerrainUtility::CollectTerrains(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * TerrainUtility_CollectTerrains_m1980638C0C744F59EF15670092FFA1CA9BDA9467 (bool ___onlyAutoConnectedTerrains0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::GetEnumerator()
inline Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B  Dictionary_2_GetEnumerator_mA00DFEC8FD1C165B6E30BA0DE649CD91C9F61171 (Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B  (*) (Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mD7D3667E0C2C4375B188D9AB5B1E639B780E06D2_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::get_Current()
inline KeyValuePair_2_t66F6496942DCFC8D590F8DA04910990C5DA39574  Enumerator_get_Current_m34348C5A639EBCAE828B3DBA655423086EE285A8 (Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t66F6496942DCFC8D590F8DA04910990C5DA39574  (*) (Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B *, const RuntimeMethod*))Enumerator_get_Current_m910F21E4440409EDAB15C7315D5BE4B4978C90EA_gshared)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::get_Key()
inline int32_t KeyValuePair_2_get_Key_m074DC0DF87A0EC210E1FAD5B15D67DC7ADC7BCB8 (KeyValuePair_2_t66F6496942DCFC8D590F8DA04910990C5DA39574 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (KeyValuePair_2_t66F6496942DCFC8D590F8DA04910990C5DA39574 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mF2222972FF6763CE3306C1A318CB8C804C74A2B0_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::get_Value()
inline TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * KeyValuePair_2_get_Value_mF4D8A7CFC178117B78DCC6C4E27B048F0ECD9F80 (KeyValuePair_2_t66F6496942DCFC8D590F8DA04910990C5DA39574 * __this, const RuntimeMethod* method)
{
	return ((  TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * (*) (KeyValuePair_2_t66F6496942DCFC8D590F8DA04910990C5DA39574 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3ABCC740085F64D6034C00060C73B3C59DC6DEDC_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::GetEnumerator()
inline Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8  Dictionary_2_GetEnumerator_m6A761440C852EBB50A6DDEF89E54A0BDA6805287 (Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8  (*) (Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mE5E041C98D06C80CCD4494BB27987DEC124D3F26_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::get_Current()
inline KeyValuePair_2_t1042B27C0272463F95B4736D997596598DFACDF2  Enumerator_get_Current_m253335A3521452DF3D85BFB9EFEA45F1F661D72F (Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t1042B27C0272463F95B4736D997596598DFACDF2  (*) (Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8 *, const RuntimeMethod*))Enumerator_get_Current_mF7E1CEF14E24BD37E08E9E14FC2F51009C501F4D_gshared)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::get_Key()
inline TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  KeyValuePair_2_get_Key_m187E30244CD96C3D6A8F53AE69ABE9846E42A9BE (KeyValuePair_2_t1042B27C0272463F95B4736D997596598DFACDF2 * __this, const RuntimeMethod* method)
{
	return ((  TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  (*) (KeyValuePair_2_t1042B27C0272463F95B4736D997596598DFACDF2 *, const RuntimeMethod*))KeyValuePair_2_get_Key_mF08DCBB99B6C2A37F48D92E033E803F4A8AC4A94_gshared)(__this, method);
}
// UnityEngine.Terrain UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::GetTerrain(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * TerrainMap_GetTerrain_m2580E4949922965E6B2F1EF0AF7669D3EEE5E635 (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::MoveNext()
inline bool Enumerator_MoveNext_mED5A978C87AD73E54C6A8BE05D98339C44875192 (Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8 *, const RuntimeMethod*))Enumerator_MoveNext_mB10130DBDA414164BBDDAACF4AC83860CBDE9E92_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::Dispose()
inline void Enumerator_Dispose_m067256608E0BBFBDA5B21F43D4590D6E04B8E347 (Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8 *, const RuntimeMethod*))Enumerator_Dispose_m16F12C2BA06F87B1B7124F8EE6C3DEF23E60A62F_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::MoveNext()
inline bool Enumerator_MoveNext_m25382F4DAE18791D44400CA8FD709589AE89E66D (Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B *, const RuntimeMethod*))Enumerator_MoveNext_m9E8C232CFA906EF179FD7371D34E9EC40FC039FA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::Dispose()
inline void Enumerator_Dispose_mF1519A4909AF7C75314D829591E9B096E275215B (Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B *, const RuntimeMethod*))Enumerator_Dispose_m18919162958478F0D309A62927542FB79001230C_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap>::.ctor()
inline void Dictionary_2__ctor_mDF4242C91427656B19BE65AF67E6430A5E151931 (Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t651CE851D569289A981D44DC5543BEA956206753 *, const RuntimeMethod*))Dictionary_2__ctor_mBFF4C9B146607B7C65AC7E902422A69E86DEB4C4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::.ctor()
inline void Dictionary_2__ctor_m4D0EF0F749453F91361A51A6C9C5C479B334ACF7 (Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C *, const RuntimeMethod*))Dictionary_2__ctor_m0F35082D934696E1B42167D73BA26BDF6AFAE69D_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TileCoord__ctor_mAA64B48F381F5DCBB58B7EA137AD4073076177ED (TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA * __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m5BB81EB3FE81C41FFF7B7764770B64EEB214ED2D (Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * __this, TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  p0, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 ** p1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C *, TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA , Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m66AC7FA5AADBEBEB73A8FBF687E5E38A40EE855D_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/<CreateFromPlacement>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateFromPlacementU3Ec__AnonStorey0__ctor_m3B1222C40246C2D8723246F3195A93F306249D48 (U3CCreateFromPlacementU3Ec__AnonStorey0_t785BD4BDC25E101807FE78EE2D72D5954E42248C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
extern "C" IL2CPP_METHOD_ATTR TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C" IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51 (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float p0, float p1, const RuntimeMethod* method);
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::CreateFromPlacement(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * TerrainMap_CreateFromPlacement_m2CFB7C0DD0890EBA733486F6CFF67B15471A6B57 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___gridOrigin0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___gridSize1, TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * ___filter2, bool ___fullValidation3, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TerrainMap__ctor_m7BC19CC1FA417F6D152B8E290AAD9990DB81E81A (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter::Invoke(UnityEngine.Terrain)
extern "C" IL2CPP_METHOD_ATTR bool TerrainFilter_Invoke_mB9F861A5CB34474898F150197A7F7CB90AFB1AF9 (TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041 (float p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::TryToAddTerrain(System.Int32,System.Int32,UnityEngine.Terrain)
extern "C" IL2CPP_METHOD_ATTR bool TerrainMap_TryToAddTerrain_m7F845FD1237F4342EAA377F5B8B078C93F0B2862 (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, int32_t ___tileX0, int32_t ___tileZ1, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain2, const RuntimeMethod* method);
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/ErrorCode UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::Validate()
extern "C" IL2CPP_METHOD_ATTR int32_t TerrainMap_Validate_m31FE625EC81CDED0369413935CD78F355677237A (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::get_Count()
inline int32_t Dictionary_2_get_Count_m5872BC43117B310319C83B09F904FC7B215F176F (Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C *, const RuntimeMethod*))Dictionary_2_get_Count_mFE793D7CA117D57EA070A512E35A149F34EE7846_gshared)(__this, method);
}
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::Add(!0,!1)
inline void Dictionary_2_Add_m8A2F763FE35F12CE5C6B4EBDC8F490F2432721F0 (Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * __this, TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  p0, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * p1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C *, TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA , Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, const RuntimeMethod*))Dictionary_2_Add_mDA7D28EFAEA19C98199964E5A8FBE563ACD7B0F3_gshared)(__this, p0, p1, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p1, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::AddTerrainInternal(System.Int32,System.Int32,UnityEngine.Terrain)
extern "C" IL2CPP_METHOD_ATTR void TerrainMap_AddTerrainInternal_m2E4B99FEC2C6D4BCC6CFF0E58F0D1E70E254B4C2 (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, int32_t ___x0, int32_t ___z1, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C" IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR bool Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E (float p0, float p1, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::get_Keys()
inline KeyCollection_tE38E8CA5A5DAD8EDFE46CBE8440DE1FB77D92EAB * Dictionary_2_get_Keys_m6378916440BB5F09FDDC61026EB9E31F5BC8A9E1 (Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tE38E8CA5A5DAD8EDFE46CBE8440DE1FB77D92EAB * (*) (Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C *, const RuntimeMethod*))Dictionary_2_get_Keys_m81E103C146AAACC25C3FA5066424C5AF6044A230_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::GetEnumerator()
inline Enumerator_tC227AD4879B6DF12FD67520BE6891D0106F2A639  KeyCollection_GetEnumerator_mB9D02C9BC28992C54914385A9ADB8B31645D8C29 (KeyCollection_tE38E8CA5A5DAD8EDFE46CBE8440DE1FB77D92EAB * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC227AD4879B6DF12FD67520BE6891D0106F2A639  (*) (KeyCollection_tE38E8CA5A5DAD8EDFE46CBE8440DE1FB77D92EAB *, const RuntimeMethod*))KeyCollection_GetEnumerator_m86F0E34A89EDD75836F0E4B879F166E48A5D7E2A_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::get_Current()
inline TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  Enumerator_get_Current_mB84DB5A32BBDC3FBFB6E3419E2EE70128E320FE4 (Enumerator_tC227AD4879B6DF12FD67520BE6891D0106F2A639 * __this, const RuntimeMethod* method)
{
	return ((  TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  (*) (Enumerator_tC227AD4879B6DF12FD67520BE6891D0106F2A639 *, const RuntimeMethod*))Enumerator_get_Current_m81C12C43F388669C36A796329DB78C5AA49153FD_gshared)(__this, method);
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::ValidateTerrain(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TerrainMap_ValidateTerrain_m7B0154421B22B18D420FF7AB3179887AFCB320AB (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::MoveNext()
inline bool Enumerator_MoveNext_mA095EEA83D1389075851A35D0CBDA713A34C2F7C (Enumerator_tC227AD4879B6DF12FD67520BE6891D0106F2A639 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC227AD4879B6DF12FD67520BE6891D0106F2A639 *, const RuntimeMethod*))Enumerator_MoveNext_mDDDB9B29FE72721DC8D98BA8515B8718F2114DCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord,UnityEngine.Terrain>::Dispose()
inline void Enumerator_Dispose_mD5F040333E587932006B9E50ADD27381E6F2AA4D (Enumerator_tC227AD4879B6DF12FD67520BE6891D0106F2A639 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC227AD4879B6DF12FD67520BE6891D0106F2A639 *, const RuntimeMethod*))Enumerator_Dispose_m23AD20F6002019374EE0CC9C2D1320D20DC3DE92_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Behaviour__ctor_m409AEC21511ACF9A4CC0654DF4B8253E0D81D22C (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)
extern "C" IL2CPP_METHOD_ATTR void TerrainData_Internal_Create_m02C792919F391601D1EE4CF6DF70182FBD646F16 (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * ___terrainData0, const RuntimeMethod* method);
// System.Void UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void TerrainData_get_size_Injected_mF6DEEE266FBF9CEC3AF2B6B77593B9704B299A68 (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method);
// System.Int32 UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t TerrainData_GetBoundaryValue_m3E5DD81838828B30372AC5E200CE86B607C729AB (int32_t ___type0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility::HasValidTerrains()
extern "C" IL2CPP_METHOD_ATTR bool TerrainUtility_HasValidTerrains_m1E41C13C6ADCA00BB57A79651C0CD9FCEFE05EA3 (const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_0 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_1 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length))))) > ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001e;
	}

IL_001e:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility::ClearConnectivity()
extern "C" IL2CPP_METHOD_ATTR void TerrainUtility_ClearConnectivity_mC60E6D3178548AFDCF76483F99E4BB6F831FC3F5 (const RuntimeMethod* method)
{
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_0 = NULL;
	TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* V_1 = NULL;
	int32_t V_2 = 0;
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_0 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		V_1 = L_0;
		V_2 = 0;
		goto IL_0021;
	}

IL_000f:
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = L_4;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_5 = V_0;
		NullCheck(L_5);
		Terrain_SetNeighbors_mA28EDA87B310AE170885473F6168B18849B55356(L_5, (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *)NULL, (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *)NULL, (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *)NULL, (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *)NULL, /*hidden argument*/NULL);
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0021:
	{
		int32_t L_7 = V_2;
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_8 = V_1;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_000f;
		}
	}
	{
		return;
	}
}
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainGroups UnityEngine.Experimental.TerrainAPI.TerrainUtility::CollectTerrains(System.Boolean)
extern "C" IL2CPP_METHOD_ATTR TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * TerrainUtility_CollectTerrains_m1980638C0C744F59EF15670092FFA1CA9BDA9467 (bool ___onlyAutoConnectedTerrains0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainUtility_CollectTerrains_m1980638C0C744F59EF15670092FFA1CA9BDA9467_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5 * V_0 = NULL;
	TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * V_1 = NULL;
	TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * V_2 = NULL;
	TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* V_3 = NULL;
	int32_t V_4 = 0;
	U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA * V_5 = NULL;
	TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * V_6 = NULL;
	TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * G_B16_0 = NULL;
	{
		U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5 * L_0 = (U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5 *)il2cpp_codegen_object_new(U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5_il2cpp_TypeInfo_var);
		U3CCollectTerrainsU3Ec__AnonStorey1__ctor_m17577E04A799151323404D646A9F988C085E7794(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5 * L_1 = V_0;
		bool L_2 = ___onlyAutoConnectedTerrains0;
		NullCheck(L_1);
		L_1->set_onlyAutoConnectedTerrains_0(L_2);
		bool L_3 = TerrainUtility_HasValidTerrains_m1E41C13C6ADCA00BB57A79651C0CD9FCEFE05EA3(/*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		V_1 = (TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 *)NULL;
		goto IL_00e9;
	}

IL_001f:
	{
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_4 = (TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 *)il2cpp_codegen_object_new(TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5_il2cpp_TypeInfo_var);
		TerrainGroups__ctor_mCC684EF011C9EBA10D335C5BBC2A7B742CB1D940(L_4, /*hidden argument*/NULL);
		V_2 = L_4;
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_5 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		V_3 = L_5;
		V_4 = 0;
		goto IL_00c7;
	}

IL_0034:
	{
		U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA * L_6 = (U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA *)il2cpp_codegen_object_new(U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA_il2cpp_TypeInfo_var);
		U3CCollectTerrainsU3Ec__AnonStorey0__ctor_m32C93B963B7A5FCA39B72198408656E1568D8BFA(L_6, /*hidden argument*/NULL);
		V_5 = L_6;
		U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA * L_7 = V_5;
		U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5 * L_8 = V_0;
		NullCheck(L_7);
		L_7->set_U3CU3Ef__refU241_1(L_8);
		U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA * L_9 = V_5;
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_10 = V_3;
		int32_t L_11 = V_4;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		L_9->set_t_0(L_13);
		U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5 * L_14 = V_0;
		NullCheck(L_14);
		bool L_15 = L_14->get_onlyAutoConnectedTerrains_0();
		if (!L_15)
		{
			goto IL_0070;
		}
	}
	{
		U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA * L_16 = V_5;
		NullCheck(L_16);
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_17 = L_16->get_t_0();
		NullCheck(L_17);
		bool L_18 = Terrain_get_allowAutoConnect_m0968C0D1D5628726A19734808D1E37C44CA4F146(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0070;
		}
	}
	{
		goto IL_00c1;
	}

IL_0070:
	{
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_19 = V_2;
		U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA * L_20 = V_5;
		NullCheck(L_20);
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_21 = L_20->get_t_0();
		NullCheck(L_21);
		int32_t L_22 = Terrain_get_groupingID_mF2A964B8B4B049E4E443782AA951C4E85C6EC132(L_21, /*hidden argument*/NULL);
		NullCheck(L_19);
		bool L_23 = Dictionary_2_ContainsKey_m7BB92DEC475ECE3BB42DA835F9B2C568E81DCFD7(L_19, L_22, /*hidden argument*/Dictionary_2_ContainsKey_m7BB92DEC475ECE3BB42DA835F9B2C568E81DCFD7_RuntimeMethod_var);
		if (L_23)
		{
			goto IL_00c0;
		}
	}
	{
		U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA * L_24 = V_5;
		NullCheck(L_24);
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_25 = L_24->get_t_0();
		U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA * L_26 = V_5;
		TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * L_27 = (TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B *)il2cpp_codegen_object_new(TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B_il2cpp_TypeInfo_var);
		TerrainFilter__ctor_m60B330ACE5AE8B4833AFB8D9BB095D6783DB2F1E(L_27, L_26, (intptr_t)((intptr_t)U3CCollectTerrainsU3Ec__AnonStorey0_U3CU3Em__0_m0418EA03389352CE3F87CE3DBA08684EA0EB61DE_RuntimeMethod_var), /*hidden argument*/NULL);
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_28 = TerrainMap_CreateFromPlacement_mB23A40ABF3A46620F82C489D749EABEA1EDF27B2(L_25, L_27, (bool)1, /*hidden argument*/NULL);
		V_6 = L_28;
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_29 = V_6;
		if (!L_29)
		{
			goto IL_00bf;
		}
	}
	{
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_30 = V_2;
		U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA * L_31 = V_5;
		NullCheck(L_31);
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_32 = L_31->get_t_0();
		NullCheck(L_32);
		int32_t L_33 = Terrain_get_groupingID_mF2A964B8B4B049E4E443782AA951C4E85C6EC132(L_32, /*hidden argument*/NULL);
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_34 = V_6;
		NullCheck(L_30);
		Dictionary_2_Add_mDBC40F15D74AA100E4FD3F5B7B015C453E35FC7F(L_30, L_33, L_34, /*hidden argument*/Dictionary_2_Add_mDBC40F15D74AA100E4FD3F5B7B015C453E35FC7F_RuntimeMethod_var);
	}

IL_00bf:
	{
	}

IL_00c0:
	{
	}

IL_00c1:
	{
		int32_t L_35 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1));
	}

IL_00c7:
	{
		int32_t L_36 = V_4;
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_37 = V_3;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_37)->max_length)))))))
		{
			goto IL_0034;
		}
	}
	{
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_38 = V_2;
		NullCheck(L_38);
		int32_t L_39 = Dictionary_2_get_Count_m25627A54AA38F254FE2F74C4BB3EC5D240A69C8A(L_38, /*hidden argument*/Dictionary_2_get_Count_m25627A54AA38F254FE2F74C4BB3EC5D240A69C8A_RuntimeMethod_var);
		if (!L_39)
		{
			goto IL_00e2;
		}
	}
	{
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_40 = V_2;
		G_B16_0 = L_40;
		goto IL_00e3;
	}

IL_00e2:
	{
		G_B16_0 = ((TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 *)(NULL));
	}

IL_00e3:
	{
		V_1 = G_B16_0;
		goto IL_00e9;
	}

IL_00e9:
	{
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_41 = V_1;
		return L_41;
	}
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility::AutoConnect()
extern "C" IL2CPP_METHOD_ATTR void TerrainUtility_AutoConnect_m43FD8F195A874A511293784F8029C22AB30A428E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainUtility_AutoConnect_m43FD8F195A874A511293784F8029C22AB30A428E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * V_0 = NULL;
	KeyValuePair_2_t66F6496942DCFC8D590F8DA04910990C5DA39574  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * V_4 = NULL;
	KeyValuePair_2_t1042B27C0272463F95B4736D997596598DFACDF2  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8  V_6;
	memset(&V_6, 0, sizeof(V_6));
	TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_8 = NULL;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_9 = NULL;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_10 = NULL;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_11 = NULL;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_12 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = TerrainUtility_HasValidTerrains_m1E41C13C6ADCA00BB57A79651C0CD9FCEFE05EA3(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_013f;
	}

IL_0010:
	{
		TerrainUtility_ClearConnectivity_mC60E6D3178548AFDCF76483F99E4BB6F831FC3F5(/*hidden argument*/NULL);
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_1 = TerrainUtility_CollectTerrains_m1980638C0C744F59EF15670092FFA1CA9BDA9467((bool)1, /*hidden argument*/NULL);
		V_0 = L_1;
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_2 = V_0;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		goto IL_013f;
	}

IL_0027:
	{
		TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * L_3 = V_0;
		NullCheck(L_3);
		Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B  L_4 = Dictionary_2_GetEnumerator_mA00DFEC8FD1C165B6E30BA0DE649CD91C9F61171(L_3, /*hidden argument*/Dictionary_2_GetEnumerator_mA00DFEC8FD1C165B6E30BA0DE649CD91C9F61171_RuntimeMethod_var);
		V_2 = L_4;
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0120;
		}

IL_0034:
		{
			KeyValuePair_2_t66F6496942DCFC8D590F8DA04910990C5DA39574  L_5 = Enumerator_get_Current_m34348C5A639EBCAE828B3DBA655423086EE285A8((Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B *)(&V_2), /*hidden argument*/Enumerator_get_Current_m34348C5A639EBCAE828B3DBA655423086EE285A8_RuntimeMethod_var);
			V_1 = L_5;
			int32_t L_6 = KeyValuePair_2_get_Key_m074DC0DF87A0EC210E1FAD5B15D67DC7ADC7BCB8((KeyValuePair_2_t66F6496942DCFC8D590F8DA04910990C5DA39574 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m074DC0DF87A0EC210E1FAD5B15D67DC7ADC7BCB8_RuntimeMethod_var);
			V_3 = L_6;
			TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_7 = KeyValuePair_2_get_Value_mF4D8A7CFC178117B78DCC6C4E27B048F0ECD9F80((KeyValuePair_2_t66F6496942DCFC8D590F8DA04910990C5DA39574 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_mF4D8A7CFC178117B78DCC6C4E27B048F0ECD9F80_RuntimeMethod_var);
			V_4 = L_7;
			TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_8 = V_4;
			NullCheck(L_8);
			Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * L_9 = L_8->get_m_terrainTiles_2();
			NullCheck(L_9);
			Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8  L_10 = Dictionary_2_GetEnumerator_m6A761440C852EBB50A6DDEF89E54A0BDA6805287(L_9, /*hidden argument*/Dictionary_2_GetEnumerator_m6A761440C852EBB50A6DDEF89E54A0BDA6805287_RuntimeMethod_var);
			V_6 = L_10;
		}

IL_005d:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0100;
			}

IL_0062:
			{
				KeyValuePair_2_t1042B27C0272463F95B4736D997596598DFACDF2  L_11 = Enumerator_get_Current_m253335A3521452DF3D85BFB9EFEA45F1F661D72F((Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8 *)(&V_6), /*hidden argument*/Enumerator_get_Current_m253335A3521452DF3D85BFB9EFEA45F1F661D72F_RuntimeMethod_var);
				V_5 = L_11;
				TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_12 = KeyValuePair_2_get_Key_m187E30244CD96C3D6A8F53AE69ABE9846E42A9BE((KeyValuePair_2_t1042B27C0272463F95B4736D997596598DFACDF2 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Key_m187E30244CD96C3D6A8F53AE69ABE9846E42A9BE_RuntimeMethod_var);
				V_7 = L_12;
				TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_13 = V_4;
				int32_t L_14 = (&V_7)->get_tileX_0();
				int32_t L_15 = (&V_7)->get_tileZ_1();
				NullCheck(L_13);
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_16 = TerrainMap_GetTerrain_m2580E4949922965E6B2F1EF0AF7669D3EEE5E635(L_13, L_14, L_15, /*hidden argument*/NULL);
				V_8 = L_16;
				TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_17 = V_4;
				int32_t L_18 = (&V_7)->get_tileX_0();
				int32_t L_19 = (&V_7)->get_tileZ_1();
				NullCheck(L_17);
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_20 = TerrainMap_GetTerrain_m2580E4949922965E6B2F1EF0AF7669D3EEE5E635(L_17, ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1)), L_19, /*hidden argument*/NULL);
				V_9 = L_20;
				TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_21 = V_4;
				int32_t L_22 = (&V_7)->get_tileX_0();
				int32_t L_23 = (&V_7)->get_tileZ_1();
				NullCheck(L_21);
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_24 = TerrainMap_GetTerrain_m2580E4949922965E6B2F1EF0AF7669D3EEE5E635(L_21, ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1)), L_23, /*hidden argument*/NULL);
				V_10 = L_24;
				TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_25 = V_4;
				int32_t L_26 = (&V_7)->get_tileX_0();
				int32_t L_27 = (&V_7)->get_tileZ_1();
				NullCheck(L_25);
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_28 = TerrainMap_GetTerrain_m2580E4949922965E6B2F1EF0AF7669D3EEE5E635(L_25, L_26, ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)), /*hidden argument*/NULL);
				V_11 = L_28;
				TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_29 = V_4;
				int32_t L_30 = (&V_7)->get_tileX_0();
				int32_t L_31 = (&V_7)->get_tileZ_1();
				NullCheck(L_29);
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_32 = TerrainMap_GetTerrain_m2580E4949922965E6B2F1EF0AF7669D3EEE5E635(L_29, L_30, ((int32_t)il2cpp_codegen_subtract((int32_t)L_31, (int32_t)1)), /*hidden argument*/NULL);
				V_12 = L_32;
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_33 = V_8;
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_34 = V_9;
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_35 = V_11;
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_36 = V_10;
				Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_37 = V_12;
				NullCheck(L_33);
				Terrain_SetNeighbors_mA28EDA87B310AE170885473F6168B18849B55356(L_33, L_34, L_35, L_36, L_37, /*hidden argument*/NULL);
			}

IL_0100:
			{
				bool L_38 = Enumerator_MoveNext_mED5A978C87AD73E54C6A8BE05D98339C44875192((Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8 *)(&V_6), /*hidden argument*/Enumerator_MoveNext_mED5A978C87AD73E54C6A8BE05D98339C44875192_RuntimeMethod_var);
				if (L_38)
				{
					goto IL_0062;
				}
			}

IL_010c:
			{
				IL2CPP_LEAVE(0x11F, FINALLY_0111);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0111;
		}

FINALLY_0111:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m067256608E0BBFBDA5B21F43D4590D6E04B8E347((Enumerator_t29B808F8AC6D4B77DE3720AC4C08C0A71E500BB8 *)(&V_6), /*hidden argument*/Enumerator_Dispose_m067256608E0BBFBDA5B21F43D4590D6E04B8E347_RuntimeMethod_var);
			IL2CPP_END_FINALLY(273)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(273)
		{
			IL2CPP_JUMP_TBL(0x11F, IL_011f)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_011f:
		{
		}

IL_0120:
		{
			bool L_39 = Enumerator_MoveNext_m25382F4DAE18791D44400CA8FD709589AE89E66D((Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m25382F4DAE18791D44400CA8FD709589AE89E66D_RuntimeMethod_var);
			if (L_39)
			{
				goto IL_0034;
			}
		}

IL_012c:
		{
			IL2CPP_LEAVE(0x13F, FINALLY_0131);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0131;
	}

FINALLY_0131:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mF1519A4909AF7C75314D829591E9B096E275215B((Enumerator_t5CAB4B85782B849B0F05E35FFAED39CF4A78598B *)(&V_2), /*hidden argument*/Enumerator_Dispose_mF1519A4909AF7C75314D829591E9B096E275215B_RuntimeMethod_var);
		IL2CPP_END_FINALLY(305)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(305)
	{
		IL2CPP_JUMP_TBL(0x13F, IL_013f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_013f:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCollectTerrainsU3Ec__AnonStorey0__ctor_m32C93B963B7A5FCA39B72198408656E1568D8BFA (U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey0::<>m__0(UnityEngine.Terrain)
extern "C" IL2CPP_METHOD_ATTR bool U3CCollectTerrainsU3Ec__AnonStorey0_U3CU3Em__0_m0418EA03389352CE3F87CE3DBA08684EA0EB61DE (U3CCollectTerrainsU3Ec__AnonStorey0_t4BCCA12171A915F3BCE4B2B0F9A4EBD484BC78CA * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___x0, const RuntimeMethod* method)
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1 = Terrain_get_groupingID_mF2A964B8B4B049E4E443782AA951C4E85C6EC132(L_0, /*hidden argument*/NULL);
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_2 = __this->get_t_0();
		NullCheck(L_2);
		int32_t L_3 = Terrain_get_groupingID_mF2A964B8B4B049E4E443782AA951C4E85C6EC132(L_2, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_3))))
		{
			goto IL_0037;
		}
	}
	{
		U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5 * L_4 = __this->get_U3CU3Ef__refU241_1();
		NullCheck(L_4);
		bool L_5 = L_4->get_onlyAutoConnectedTerrains_0();
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_6 = ___x0;
		NullCheck(L_6);
		bool L_7 = Terrain_get_allowAutoConnect_m0968C0D1D5628726A19734808D1E37C44CA4F146(L_6, /*hidden argument*/NULL);
		G_B4_0 = ((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0032;
	}

IL_0031:
	{
		G_B4_0 = 0;
	}

IL_0032:
	{
		G_B6_0 = ((((int32_t)G_B4_0) == ((int32_t)0))? 1 : 0);
		goto IL_0038;
	}

IL_0037:
	{
		G_B6_0 = 0;
	}

IL_0038:
	{
		V_0 = (bool)G_B6_0;
		goto IL_003e;
	}

IL_003e:
	{
		bool L_8 = V_0;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/<CollectTerrains>c__AnonStorey1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCollectTerrainsU3Ec__AnonStorey1__ctor_m17577E04A799151323404D646A9F988C085E7794 (U3CCollectTerrainsU3Ec__AnonStorey1_t41DA2A02D290EE5FEF14389A4391CBC1E3E622A5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainGroups::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TerrainGroups__ctor_mCC684EF011C9EBA10D335C5BBC2A7B742CB1D940 (TerrainGroups_t88B87E7C8DA6A97E904D74167C43D631796ECBC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainGroups__ctor_mCC684EF011C9EBA10D335C5BBC2A7B742CB1D940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2__ctor_mDF4242C91427656B19BE65AF67E6430A5E151931(__this, /*hidden argument*/Dictionary_2__ctor_mDF4242C91427656B19BE65AF67E6430A5E151931_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TerrainMap__ctor_m7BC19CC1FA417F6D152B8E290AAD9990DB81E81A (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainMap__ctor_m7BC19CC1FA417F6D152B8E290AAD9990DB81E81A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		__this->set_m_errorCode_1(0);
		Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * L_0 = (Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C *)il2cpp_codegen_object_new(Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m4D0EF0F749453F91361A51A6C9C5C479B334ACF7(L_0, /*hidden argument*/Dictionary_2__ctor_m4D0EF0F749453F91361A51A6C9C5C479B334ACF7_RuntimeMethod_var);
		__this->set_m_terrainTiles_2(L_0);
		return;
	}
}
// UnityEngine.Terrain UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::GetTerrain(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * TerrainMap_GetTerrain_m2580E4949922965E6B2F1EF0AF7669D3EEE5E635 (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainMap_GetTerrain_m2580E4949922965E6B2F1EF0AF7669D3EEE5E635_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_0 = NULL;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_1 = NULL;
	{
		V_0 = (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *)NULL;
		Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * L_0 = __this->get_m_terrainTiles_2();
		int32_t L_1 = ___tileX0;
		int32_t L_2 = ___tileZ1;
		TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_3;
		memset(&L_3, 0, sizeof(L_3));
		TileCoord__ctor_mAA64B48F381F5DCBB58B7EA137AD4073076177ED((&L_3), L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_TryGetValue_m5BB81EB3FE81C41FFF7B7764770B64EEB214ED2D(L_0, L_3, (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m5BB81EB3FE81C41FFF7B7764770B64EEB214ED2D_RuntimeMethod_var);
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_4 = V_0;
		V_1 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_5 = V_1;
		return L_5;
	}
}
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::CreateFromPlacement(UnityEngine.Terrain,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * TerrainMap_CreateFromPlacement_mB23A40ABF3A46620F82C489D749EABEA1EDF27B2 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___originTerrain0, TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * ___filter1, bool ___fullValidation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainMap_CreateFromPlacement_mB23A40ABF3A46620F82C489D749EABEA1EDF27B2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CCreateFromPlacementU3Ec__AnonStorey0_t785BD4BDC25E101807FE78EE2D72D5954E42248C * V_0 = NULL;
	TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * V_1 = NULL;
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset(&V_7, 0, sizeof(V_7));
	float V_8 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_9;
	memset(&V_9, 0, sizeof(V_9));
	{
		U3CCreateFromPlacementU3Ec__AnonStorey0_t785BD4BDC25E101807FE78EE2D72D5954E42248C * L_0 = (U3CCreateFromPlacementU3Ec__AnonStorey0_t785BD4BDC25E101807FE78EE2D72D5954E42248C *)il2cpp_codegen_object_new(U3CCreateFromPlacementU3Ec__AnonStorey0_t785BD4BDC25E101807FE78EE2D72D5954E42248C_il2cpp_TypeInfo_var);
		U3CCreateFromPlacementU3Ec__AnonStorey0__ctor_m3B1222C40246C2D8723246F3195A93F306249D48(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_1 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_2 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		NullCheck(L_2);
		if (!(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_3 = ___originTerrain0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0030;
		}
	}

IL_0029:
	{
		V_1 = (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C *)NULL;
		goto IL_00dc;
	}

IL_0030:
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_5 = ___originTerrain0;
		NullCheck(L_5);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_6 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_6, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		V_1 = (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C *)NULL;
		goto IL_00dc;
	}

IL_0048:
	{
		U3CCreateFromPlacementU3Ec__AnonStorey0_t785BD4BDC25E101807FE78EE2D72D5954E42248C * L_8 = V_0;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_9 = ___originTerrain0;
		NullCheck(L_9);
		int32_t L_10 = Terrain_get_groupingID_mF2A964B8B4B049E4E443782AA951C4E85C6EC132(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set_groupID_0(L_10);
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_11 = ___originTerrain0;
		NullCheck(L_11);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_12, /*hidden argument*/NULL);
		V_3 = L_13;
		float L_14 = (&V_3)->get_x_2();
		V_2 = L_14;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_15 = ___originTerrain0;
		NullCheck(L_15);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_16, /*hidden argument*/NULL);
		V_5 = L_17;
		float L_18 = (&V_5)->get_z_4();
		V_4 = L_18;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_19 = ___originTerrain0;
		NullCheck(L_19);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_20 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51(L_20, /*hidden argument*/NULL);
		V_7 = L_21;
		float L_22 = (&V_7)->get_x_2();
		V_6 = L_22;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_23 = ___originTerrain0;
		NullCheck(L_23);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_24 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51(L_24, /*hidden argument*/NULL);
		V_9 = L_25;
		float L_26 = (&V_9)->get_z_4();
		V_8 = L_26;
		TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * L_27 = ___filter1;
		if (L_27)
		{
			goto IL_00be;
		}
	}
	{
		U3CCreateFromPlacementU3Ec__AnonStorey0_t785BD4BDC25E101807FE78EE2D72D5954E42248C * L_28 = V_0;
		TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * L_29 = (TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B *)il2cpp_codegen_object_new(TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B_il2cpp_TypeInfo_var);
		TerrainFilter__ctor_m60B330ACE5AE8B4833AFB8D9BB095D6783DB2F1E(L_29, L_28, (intptr_t)((intptr_t)U3CCreateFromPlacementU3Ec__AnonStorey0_U3CU3Em__0_mEBF20C4D3529F9398B0B84966426693E991F7B8B_RuntimeMethod_var), /*hidden argument*/NULL);
		___filter1 = L_29;
	}

IL_00be:
	{
		float L_30 = V_2;
		float L_31 = V_4;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_32;
		memset(&L_32, 0, sizeof(L_32));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_32), L_30, L_31, /*hidden argument*/NULL);
		float L_33 = V_6;
		float L_34 = V_8;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_35;
		memset(&L_35, 0, sizeof(L_35));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_35), L_33, L_34, /*hidden argument*/NULL);
		TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * L_36 = ___filter1;
		bool L_37 = ___fullValidation2;
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_38 = TerrainMap_CreateFromPlacement_m2CFB7C0DD0890EBA733486F6CFF67B15471A6B57(L_32, L_35, L_36, L_37, /*hidden argument*/NULL);
		V_1 = L_38;
		goto IL_00dc;
	}

IL_00dc:
	{
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_39 = V_1;
		return L_39;
	}
}
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::CreateFromPlacement(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter,System.Boolean)
extern "C" IL2CPP_METHOD_ATTR TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * TerrainMap_CreateFromPlacement_m2CFB7C0DD0890EBA733486F6CFF67B15471A6B57 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___gridOrigin0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___gridSize1, TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * ___filter2, bool ___fullValidation3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainMap_CreateFromPlacement_m2CFB7C0DD0890EBA733486F6CFF67B15471A6B57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * V_0 = NULL;
	TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_4 = NULL;
	TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* V_5 = NULL;
	int32_t V_6 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset(&V_7, 0, sizeof(V_7));
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * G_B17_0 = NULL;
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_0 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_1 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		NullCheck(L_1);
		if ((((int32_t)((int32_t)(((RuntimeArray *)L_1)->max_length)))))
		{
			goto IL_001e;
		}
	}

IL_0017:
	{
		V_0 = (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C *)NULL;
		goto IL_010c;
	}

IL_001e:
	{
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_2 = (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C *)il2cpp_codegen_object_new(TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C_il2cpp_TypeInfo_var);
		TerrainMap__ctor_m7BC19CC1FA417F6D152B8E290AAD9990DB81E81A(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&___gridSize1)->get_x_0();
		V_2 = ((float)((float)(1.0f)/(float)L_3));
		float L_4 = (&___gridSize1)->get_y_1();
		V_3 = ((float)((float)(1.0f)/(float)L_4));
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_5 = Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA(/*hidden argument*/NULL);
		V_5 = L_5;
		V_6 = 0;
		goto IL_00d6;
	}

IL_0050:
	{
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_6 = V_5;
		int32_t L_7 = V_6;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = L_9;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_10 = V_4;
		NullCheck(L_10);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_11 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_11, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_00d0;
	}

IL_006f:
	{
		TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * L_13 = ___filter2;
		if (!L_13)
		{
			goto IL_0082;
		}
	}
	{
		TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * L_14 = ___filter2;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_15 = V_4;
		NullCheck(L_14);
		bool L_16 = TerrainFilter_Invoke_mB9F861A5CB34474898F150197A7F7CB90AFB1AF9(L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00cf;
		}
	}

IL_0082:
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_17 = V_4;
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_18, /*hidden argument*/NULL);
		V_7 = L_19;
		float L_20 = (&V_7)->get_x_2();
		float L_21 = (&___gridOrigin0)->get_x_0();
		float L_22 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_23 = Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_20, (float)L_21)), (float)L_22)), /*hidden argument*/NULL);
		V_8 = L_23;
		float L_24 = (&V_7)->get_z_4();
		float L_25 = (&___gridOrigin0)->get_y_1();
		float L_26 = V_3;
		int32_t L_27 = Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_24, (float)L_25)), (float)L_26)), /*hidden argument*/NULL);
		V_9 = L_27;
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_28 = V_1;
		int32_t L_29 = V_8;
		int32_t L_30 = V_9;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_31 = V_4;
		NullCheck(L_28);
		TerrainMap_TryToAddTerrain_m7F845FD1237F4342EAA377F5B8B078C93F0B2862(L_28, L_29, L_30, L_31, /*hidden argument*/NULL);
	}

IL_00cf:
	{
	}

IL_00d0:
	{
		int32_t L_32 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00d6:
	{
		int32_t L_33 = V_6;
		TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* L_34 = V_5;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_34)->max_length)))))))
		{
			goto IL_0050;
		}
	}
	{
		bool L_35 = ___fullValidation3;
		if (!L_35)
		{
			goto IL_00ee;
		}
	}
	{
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_36 = V_1;
		NullCheck(L_36);
		TerrainMap_Validate_m31FE625EC81CDED0369413935CD78F355677237A(L_36, /*hidden argument*/NULL);
	}

IL_00ee:
	{
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_37 = V_1;
		NullCheck(L_37);
		Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * L_38 = L_37->get_m_terrainTiles_2();
		NullCheck(L_38);
		int32_t L_39 = Dictionary_2_get_Count_m5872BC43117B310319C83B09F904FC7B215F176F(L_38, /*hidden argument*/Dictionary_2_get_Count_m5872BC43117B310319C83B09F904FC7B215F176F_RuntimeMethod_var);
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_0105;
		}
	}
	{
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_40 = V_1;
		G_B17_0 = L_40;
		goto IL_0106;
	}

IL_0105:
	{
		G_B17_0 = ((TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C *)(NULL));
	}

IL_0106:
	{
		V_0 = G_B17_0;
		goto IL_010c;
	}

IL_010c:
	{
		TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * L_41 = V_0;
		return L_41;
	}
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::AddTerrainInternal(System.Int32,System.Int32,UnityEngine.Terrain)
extern "C" IL2CPP_METHOD_ATTR void TerrainMap_AddTerrainInternal_m2E4B99FEC2C6D4BCC6CFF0E58F0D1E70E254B4C2 (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, int32_t ___x0, int32_t ___z1, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainMap_AddTerrainInternal_m2E4B99FEC2C6D4BCC6CFF0E58F0D1E70E254B4C2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * L_0 = __this->get_m_terrainTiles_2();
		NullCheck(L_0);
		int32_t L_1 = Dictionary_2_get_Count_m5872BC43117B310319C83B09F904FC7B215F176F(L_0, /*hidden argument*/Dictionary_2_get_Count_m5872BC43117B310319C83B09F904FC7B215F176F_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0027;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_2 = ___terrain2;
		NullCheck(L_2);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_3 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51(L_3, /*hidden argument*/NULL);
		__this->set_m_patchSize_0(L_4);
		goto IL_0054;
	}

IL_0027:
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_5 = ___terrain2;
		NullCheck(L_5);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_6 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51(L_6, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = __this->get_m_patchSize_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		bool L_9 = Vector3_op_Inequality_mFEEAA4C4BF743FB5B8A47FF4967A5E2C73273D6E(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		int32_t L_10 = __this->get_m_errorCode_1();
		__this->set_m_errorCode_1(((int32_t)((int32_t)L_10|(int32_t)4)));
	}

IL_0053:
	{
	}

IL_0054:
	{
		Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * L_11 = __this->get_m_terrainTiles_2();
		int32_t L_12 = ___x0;
		int32_t L_13 = ___z1;
		TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_14;
		memset(&L_14, 0, sizeof(L_14));
		TileCoord__ctor_mAA64B48F381F5DCBB58B7EA137AD4073076177ED((&L_14), L_12, L_13, /*hidden argument*/NULL);
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_15 = ___terrain2;
		NullCheck(L_11);
		Dictionary_2_Add_m8A2F763FE35F12CE5C6B4EBDC8F490F2432721F0(L_11, L_14, L_15, /*hidden argument*/Dictionary_2_Add_m8A2F763FE35F12CE5C6B4EBDC8F490F2432721F0_RuntimeMethod_var);
		return;
	}
}
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::TryToAddTerrain(System.Int32,System.Int32,UnityEngine.Terrain)
extern "C" IL2CPP_METHOD_ATTR bool TerrainMap_TryToAddTerrain_m7F845FD1237F4342EAA377F5B8B078C93F0B2862 (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, int32_t ___tileX0, int32_t ___tileZ1, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainMap_TryToAddTerrain_m7F845FD1237F4342EAA377F5B8B078C93F0B2862_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_1 = NULL;
	bool V_2 = false;
	{
		V_0 = (bool)0;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_0 = ___terrain2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_2 = ___tileX0;
		int32_t L_3 = ___tileZ1;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_4 = TerrainMap_GetTerrain_m2580E4949922965E6B2F1EF0AF7669D3EEE5E635(__this, L_2, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_7 = V_1;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_8 = ___terrain2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_10 = __this->get_m_errorCode_1();
		__this->set_m_errorCode_1(((int32_t)((int32_t)L_10|(int32_t)1)));
	}

IL_0042:
	{
		goto IL_0055;
	}

IL_0048:
	{
		int32_t L_11 = ___tileX0;
		int32_t L_12 = ___tileZ1;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_13 = ___terrain2;
		TerrainMap_AddTerrainInternal_m2E4B99FEC2C6D4BCC6CFF0E58F0D1E70E254B4C2(__this, L_11, L_12, L_13, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_0055:
	{
	}

IL_0056:
	{
		bool L_14 = V_0;
		V_2 = L_14;
		goto IL_005d;
	}

IL_005d:
	{
		bool L_15 = V_2;
		return L_15;
	}
}
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::ValidateTerrain(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TerrainMap_ValidateTerrain_m7B0154421B22B18D420FF7AB3179887AFCB320AB (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainMap_ValidateTerrain_m7B0154421B22B18D420FF7AB3179887AFCB320AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_0 = NULL;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_1 = NULL;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_2 = NULL;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_3 = NULL;
	Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * V_4 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_15;
	memset(&V_15, 0, sizeof(V_15));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_16;
	memset(&V_16, 0, sizeof(V_16));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_17;
	memset(&V_17, 0, sizeof(V_17));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_18;
	memset(&V_18, 0, sizeof(V_18));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_19;
	memset(&V_19, 0, sizeof(V_19));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_20;
	memset(&V_20, 0, sizeof(V_20));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_21;
	memset(&V_21, 0, sizeof(V_21));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_22;
	memset(&V_22, 0, sizeof(V_22));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_23;
	memset(&V_23, 0, sizeof(V_23));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_24;
	memset(&V_24, 0, sizeof(V_24));
	{
		int32_t L_0 = ___tileX0;
		int32_t L_1 = ___tileZ1;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_2 = TerrainMap_GetTerrain_m2580E4949922965E6B2F1EF0AF7669D3EEE5E635(__this, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_02a3;
		}
	}
	{
		int32_t L_5 = ___tileX0;
		int32_t L_6 = ___tileZ1;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_7 = TerrainMap_GetTerrain_m2580E4949922965E6B2F1EF0AF7669D3EEE5E635(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		int32_t L_8 = ___tileX0;
		int32_t L_9 = ___tileZ1;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_10 = TerrainMap_GetTerrain_m2580E4949922965E6B2F1EF0AF7669D3EEE5E635(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)), L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		int32_t L_11 = ___tileX0;
		int32_t L_12 = ___tileZ1;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_13 = TerrainMap_GetTerrain_m2580E4949922965E6B2F1EF0AF7669D3EEE5E635(__this, L_11, ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_13;
		int32_t L_14 = ___tileX0;
		int32_t L_15 = ___tileZ1;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_16 = TerrainMap_GetTerrain_m2580E4949922965E6B2F1EF0AF7669D3EEE5E635(__this, L_14, ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_16;
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_17 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_18 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00db;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_19 = V_0;
		NullCheck(L_19);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_20, /*hidden argument*/NULL);
		V_5 = L_21;
		float L_22 = (&V_5)->get_x_2();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_23 = V_1;
		NullCheck(L_23);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_24, /*hidden argument*/NULL);
		V_6 = L_25;
		float L_26 = (&V_6)->get_x_2();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_27 = V_1;
		NullCheck(L_27);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_28 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51(L_28, /*hidden argument*/NULL);
		V_7 = L_29;
		float L_30 = (&V_7)->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_31 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_22, ((float)il2cpp_codegen_add((float)L_26, (float)L_30)), /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_00ca;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_32 = V_0;
		NullCheck(L_32);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_33 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_33, /*hidden argument*/NULL);
		V_8 = L_34;
		float L_35 = (&V_8)->get_z_4();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_36 = V_1;
		NullCheck(L_36);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_37 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_37, /*hidden argument*/NULL);
		V_9 = L_38;
		float L_39 = (&V_9)->get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_40 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_35, L_39, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_00da;
		}
	}

IL_00ca:
	{
		int32_t L_41 = __this->get_m_errorCode_1();
		__this->set_m_errorCode_1(((int32_t)((int32_t)L_41|(int32_t)8)));
	}

IL_00da:
	{
	}

IL_00db:
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_42 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_43 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0171;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_44 = V_0;
		NullCheck(L_44);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_45 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_45, /*hidden argument*/NULL);
		V_10 = L_46;
		float L_47 = (&V_10)->get_x_2();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_48 = V_0;
		NullCheck(L_48);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_49 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51(L_49, /*hidden argument*/NULL);
		V_11 = L_50;
		float L_51 = (&V_11)->get_x_2();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_52 = V_2;
		NullCheck(L_52);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_53 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_52, /*hidden argument*/NULL);
		NullCheck(L_53);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_53, /*hidden argument*/NULL);
		V_12 = L_54;
		float L_55 = (&V_12)->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_56 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(((float)il2cpp_codegen_add((float)L_47, (float)L_51)), L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0160;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_57 = V_0;
		NullCheck(L_57);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_58 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_57, /*hidden argument*/NULL);
		NullCheck(L_58);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_59 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_58, /*hidden argument*/NULL);
		V_13 = L_59;
		float L_60 = (&V_13)->get_z_4();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_61 = V_2;
		NullCheck(L_61);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_62 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_61, /*hidden argument*/NULL);
		NullCheck(L_62);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_63 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_62, /*hidden argument*/NULL);
		V_14 = L_63;
		float L_64 = (&V_14)->get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_65 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_60, L_64, /*hidden argument*/NULL);
		if (L_65)
		{
			goto IL_0170;
		}
	}

IL_0160:
	{
		int32_t L_66 = __this->get_m_errorCode_1();
		__this->set_m_errorCode_1(((int32_t)((int32_t)L_66|(int32_t)8)));
	}

IL_0170:
	{
	}

IL_0171:
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_67 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_68 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_67, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_0207;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_69 = V_0;
		NullCheck(L_69);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_70 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_69, /*hidden argument*/NULL);
		NullCheck(L_70);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_71 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_70, /*hidden argument*/NULL);
		V_15 = L_71;
		float L_72 = (&V_15)->get_x_2();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_73 = V_3;
		NullCheck(L_73);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_74 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_73, /*hidden argument*/NULL);
		NullCheck(L_74);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_75 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_74, /*hidden argument*/NULL);
		V_16 = L_75;
		float L_76 = (&V_16)->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_77 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_72, L_76, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_01f6;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_78 = V_0;
		NullCheck(L_78);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_79 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_78, /*hidden argument*/NULL);
		NullCheck(L_79);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_80 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_79, /*hidden argument*/NULL);
		V_17 = L_80;
		float L_81 = (&V_17)->get_z_4();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_82 = V_0;
		NullCheck(L_82);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_83 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_82, /*hidden argument*/NULL);
		NullCheck(L_83);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_84 = TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51(L_83, /*hidden argument*/NULL);
		V_18 = L_84;
		float L_85 = (&V_18)->get_z_4();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_86 = V_3;
		NullCheck(L_86);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_87 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_86, /*hidden argument*/NULL);
		NullCheck(L_87);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_88 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_87, /*hidden argument*/NULL);
		V_19 = L_88;
		float L_89 = (&V_19)->get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_90 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(((float)il2cpp_codegen_add((float)L_81, (float)L_85)), L_89, /*hidden argument*/NULL);
		if (L_90)
		{
			goto IL_0206;
		}
	}

IL_01f6:
	{
		int32_t L_91 = __this->get_m_errorCode_1();
		__this->set_m_errorCode_1(((int32_t)((int32_t)L_91|(int32_t)8)));
	}

IL_0206:
	{
	}

IL_0207:
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_92 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_93 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_92, /*hidden argument*/NULL);
		if (!L_93)
		{
			goto IL_02a1;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_94 = V_0;
		NullCheck(L_94);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_95 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_94, /*hidden argument*/NULL);
		NullCheck(L_95);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_96 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_95, /*hidden argument*/NULL);
		V_20 = L_96;
		float L_97 = (&V_20)->get_x_2();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_98 = V_4;
		NullCheck(L_98);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_99 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_98, /*hidden argument*/NULL);
		NullCheck(L_99);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_100 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_99, /*hidden argument*/NULL);
		V_21 = L_100;
		float L_101 = (&V_21)->get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_102 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_97, L_101, /*hidden argument*/NULL);
		if (!L_102)
		{
			goto IL_0290;
		}
	}
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_103 = V_0;
		NullCheck(L_103);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_104 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_103, /*hidden argument*/NULL);
		NullCheck(L_104);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_105 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_104, /*hidden argument*/NULL);
		V_22 = L_105;
		float L_106 = (&V_22)->get_z_4();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_107 = V_4;
		NullCheck(L_107);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_108 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_107, /*hidden argument*/NULL);
		NullCheck(L_108);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_109 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_108, /*hidden argument*/NULL);
		V_23 = L_109;
		float L_110 = (&V_23)->get_z_4();
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_111 = V_4;
		NullCheck(L_111);
		TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * L_112 = Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2(L_111, /*hidden argument*/NULL);
		NullCheck(L_112);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_113 = TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51(L_112, /*hidden argument*/NULL);
		V_24 = L_113;
		float L_114 = (&V_24)->get_z_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		bool L_115 = Mathf_Approximately_m91AF00403E0D2DEA1AAE68601AD218CFAD70DF7E(L_106, ((float)il2cpp_codegen_add((float)L_110, (float)L_114)), /*hidden argument*/NULL);
		if (L_115)
		{
			goto IL_02a0;
		}
	}

IL_0290:
	{
		int32_t L_116 = __this->get_m_errorCode_1();
		__this->set_m_errorCode_1(((int32_t)((int32_t)L_116|(int32_t)8)));
	}

IL_02a0:
	{
	}

IL_02a1:
	{
	}

IL_02a3:
	{
		return;
	}
}
// UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/ErrorCode UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap::Validate()
extern "C" IL2CPP_METHOD_ATTR int32_t TerrainMap_Validate_m31FE625EC81CDED0369413935CD78F355677237A (TerrainMap_t8D09DC412F632DAB9EA8FB7A11A34EB7464D547C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainMap_Validate_m31FE625EC81CDED0369413935CD78F355677237A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Enumerator_tC227AD4879B6DF12FD67520BE6891D0106F2A639  V_1;
	memset(&V_1, 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = -1;
	NO_UNUSED_WARNING (__leave_target);
	{
		Dictionary_2_tEB34CAE1B4D0E725777A5B9D419AF51BE918C30C * L_0 = __this->get_m_terrainTiles_2();
		NullCheck(L_0);
		KeyCollection_tE38E8CA5A5DAD8EDFE46CBE8440DE1FB77D92EAB * L_1 = Dictionary_2_get_Keys_m6378916440BB5F09FDDC61026EB9E31F5BC8A9E1(L_0, /*hidden argument*/Dictionary_2_get_Keys_m6378916440BB5F09FDDC61026EB9E31F5BC8A9E1_RuntimeMethod_var);
		NullCheck(L_1);
		Enumerator_tC227AD4879B6DF12FD67520BE6891D0106F2A639  L_2 = KeyCollection_GetEnumerator_mB9D02C9BC28992C54914385A9ADB8B31645D8C29(L_1, /*hidden argument*/KeyCollection_GetEnumerator_mB9D02C9BC28992C54914385A9ADB8B31645D8C29_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0036;
		}

IL_0018:
		{
			TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA  L_3 = Enumerator_get_Current_mB84DB5A32BBDC3FBFB6E3419E2EE70128E320FE4((Enumerator_tC227AD4879B6DF12FD67520BE6891D0106F2A639 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mB84DB5A32BBDC3FBFB6E3419E2EE70128E320FE4_RuntimeMethod_var);
			V_0 = L_3;
			int32_t L_4 = (&V_0)->get_tileX_0();
			int32_t L_5 = (&V_0)->get_tileZ_1();
			TerrainMap_ValidateTerrain_m7B0154421B22B18D420FF7AB3179887AFCB320AB(__this, L_4, L_5, /*hidden argument*/NULL);
		}

IL_0036:
		{
			bool L_6 = Enumerator_MoveNext_mA095EEA83D1389075851A35D0CBDA713A34C2F7C((Enumerator_tC227AD4879B6DF12FD67520BE6891D0106F2A639 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mA095EEA83D1389075851A35D0CBDA713A34C2F7C_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_0018;
			}
		}

IL_0042:
		{
			IL2CPP_LEAVE(0x55, FINALLY_0047);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0047;
	}

FINALLY_0047:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD5F040333E587932006B9E50ADD27381E6F2AA4D((Enumerator_tC227AD4879B6DF12FD67520BE6891D0106F2A639 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mD5F040333E587932006B9E50ADD27381E6F2AA4D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(71)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(71)
	{
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0055:
	{
		int32_t L_7 = __this->get_m_errorCode_1();
		V_2 = L_7;
		goto IL_0061;
	}

IL_0061:
	{
		int32_t L_8 = V_2;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/<CreateFromPlacement>c__AnonStorey0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CCreateFromPlacementU3Ec__AnonStorey0__ctor_m3B1222C40246C2D8723246F3195A93F306249D48 (U3CCreateFromPlacementU3Ec__AnonStorey0_t785BD4BDC25E101807FE78EE2D72D5954E42248C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/<CreateFromPlacement>c__AnonStorey0::<>m__0(UnityEngine.Terrain)
extern "C" IL2CPP_METHOD_ATTR bool U3CCreateFromPlacementU3Ec__AnonStorey0_U3CU3Em__0_mEBF20C4D3529F9398B0B84966426693E991F7B8B (U3CCreateFromPlacementU3Ec__AnonStorey0_t785BD4BDC25E101807FE78EE2D72D5954E42248C * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___x0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1 = Terrain_get_groupingID_mF2A964B8B4B049E4E443782AA951C4E85C6EC132(L_0, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_groupID_0();
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		goto IL_0014;
	}

IL_0014:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void TerrainFilter__ctor_m60B330ACE5AE8B4833AFB8D9BB095D6783DB2F1E (TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter::Invoke(UnityEngine.Terrain)
extern "C" IL2CPP_METHOD_ATTR bool TerrainFilter_Invoke_mB9F861A5CB34474898F150197A7F7CB90AFB1AF9 (TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain0, const RuntimeMethod* method)
{
	bool result = false;
	if(__this->get_prev_9() != NULL)
	{
		TerrainFilter_Invoke_mB9F861A5CB34474898F150197A7F7CB90AFB1AF9((TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B *)__this->get_prev_9(), ___terrain0, method);
	}
	Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
	RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
	RuntimeObject* targetThis = __this->get_m_target_2();
	if (!il2cpp_codegen_method_is_virtual(targetMethod))
	{
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
	}
	bool ___methodIsStatic = MethodIsStatic(targetMethod);
	int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
	if (___methodIsStatic)
	{
		if (___parameterCount == 1)
		{
			// open
			typedef bool (*FunctionPointerType) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(___terrain0, targetMethod);
		}
		else
		{
			// closed
			typedef bool (*FunctionPointerType) (void*, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___terrain0, targetMethod);
		}
	}
	else if (___parameterCount != 1)
	{
		// open
		if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
		{
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___terrain0);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___terrain0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___terrain0);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___terrain0);
				}
			}
		}
		else
		{
			typedef bool (*FunctionPointerType) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(___terrain0, targetMethod);
		}
	}
	else
	{
		// closed
		if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
		{
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___terrain0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * >::Invoke(targetMethod, targetThis, ___terrain0);
					else
						result = GenericVirtFuncInvoker1< bool, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * >::Invoke(targetMethod, targetThis, ___terrain0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___terrain0);
					else
						result = VirtFuncInvoker1< bool, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___terrain0);
				}
			}
		}
		else
		{
			typedef bool (*FunctionPointerType) (void*, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___terrain0, targetMethod);
		}
	}
	return result;
}
// System.IAsyncResult UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter::BeginInvoke(UnityEngine.Terrain,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* TerrainFilter_BeginInvoke_mB6B8129534FBBB946AAAF055E7DFC909127E5021 (TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___terrain0, AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___terrain0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TerrainFilter::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR bool TerrainFilter_EndInvoke_m8200A6CAF424216D8AE088356ED10A055A83D2EA (TerrainFilter_t02BF9FBD8E61763D1D8484B34936B36B1046C66B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.TerrainAPI.TerrainUtility/TerrainMap/TileCoord::.ctor(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void TileCoord__ctor_mAA64B48F381F5DCBB58B7EA137AD4073076177ED (TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA * __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___tileX0;
		__this->set_tileX_0(L_0);
		int32_t L_1 = ___tileZ1;
		__this->set_tileZ_1(L_1);
		return;
	}
}
extern "C"  void TileCoord__ctor_mAA64B48F381F5DCBB58B7EA137AD4073076177ED_AdjustorThunk (RuntimeObject * __this, int32_t ___tileX0, int32_t ___tileZ1, const RuntimeMethod* method)
{
	TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA * _thisAdjusted = reinterpret_cast<TileCoord_t51EDF1EA1A3A7F9C1D85C186E7A7954535C225BA *>(__this + 1);
	TileCoord__ctor_mAA64B48F381F5DCBB58B7EA137AD4073076177ED(_thisAdjusted, ___tileX0, ___tileZ1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Terrain::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Terrain__ctor_m1D3167E91CFC5220CF861F7CDE01A1F3C280BDCF (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, const RuntimeMethod* method)
{
	{
		Behaviour__ctor_m409AEC21511ACF9A4CC0654DF4B8253E0D81D22C(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.TerrainData UnityEngine.Terrain::get_terrainData()
extern "C" IL2CPP_METHOD_ATTR TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, const RuntimeMethod* method)
{
	typedef TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * (*Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2_ftn) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *);
	static Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_terrainData_m85409C8644A110380504A9E71349B272941E77C2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_terrainData()");
	TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Boolean UnityEngine.Terrain::get_allowAutoConnect()
extern "C" IL2CPP_METHOD_ATTR bool Terrain_get_allowAutoConnect_m0968C0D1D5628726A19734808D1E37C44CA4F146 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, const RuntimeMethod* method)
{
	typedef bool (*Terrain_get_allowAutoConnect_m0968C0D1D5628726A19734808D1E37C44CA4F146_ftn) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *);
	static Terrain_get_allowAutoConnect_m0968C0D1D5628726A19734808D1E37C44CA4F146_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_allowAutoConnect_m0968C0D1D5628726A19734808D1E37C44CA4F146_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_allowAutoConnect()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int32 UnityEngine.Terrain::get_groupingID()
extern "C" IL2CPP_METHOD_ATTR int32_t Terrain_get_groupingID_mF2A964B8B4B049E4E443782AA951C4E85C6EC132 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, const RuntimeMethod* method)
{
	typedef int32_t (*Terrain_get_groupingID_mF2A964B8B4B049E4E443782AA951C4E85C6EC132_ftn) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *);
	static Terrain_get_groupingID_mF2A964B8B4B049E4E443782AA951C4E85C6EC132_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_groupingID_mF2A964B8B4B049E4E443782AA951C4E85C6EC132_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_groupingID()");
	int32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)
extern "C" IL2CPP_METHOD_ATTR void Terrain_SetNeighbors_mA28EDA87B310AE170885473F6168B18849B55356 (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * __this, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___left0, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___top1, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___right2, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 * ___bottom3, const RuntimeMethod* method)
{
	typedef void (*Terrain_SetNeighbors_mA28EDA87B310AE170885473F6168B18849B55356_ftn) (Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *, Terrain_t0BF7371FA90643325F50A87C7894D7BEBBE08943 *);
	static Terrain_SetNeighbors_mA28EDA87B310AE170885473F6168B18849B55356_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_SetNeighbors_mA28EDA87B310AE170885473F6168B18849B55356_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::SetNeighbors(UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain,UnityEngine.Terrain)");
	_il2cpp_icall_func(__this, ___left0, ___top1, ___right2, ___bottom3);
}
// UnityEngine.Terrain[] UnityEngine.Terrain::get_activeTerrains()
extern "C" IL2CPP_METHOD_ATTR TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA (const RuntimeMethod* method)
{
	typedef TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* (*Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA_ftn) ();
	static Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Terrain_get_activeTerrains_mDE09AD3E55E007F12799614A6215D2E2BFD82EDA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Terrain::get_activeTerrains()");
	TerrainU5BU5D_t09516803A2C01893489D5ACAA202A907B2972BDE* retVal = _il2cpp_icall_func();
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.TerrainData::.ctor()
extern "C" IL2CPP_METHOD_ATTR void TerrainData__ctor_mEF24945C9BBDA5CAFE4A1C453649B86D79DD87AF (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainData__ctor_mEF24945C9BBDA5CAFE4A1C453649B86D79DD87AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object__ctor_m091EBAEBC7919B0391ABDAFB7389ADC12206525B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var);
		TerrainData_Internal_Create_m02C792919F391601D1EE4CF6DF70182FBD646F16(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)
extern "C" IL2CPP_METHOD_ATTR int32_t TerrainData_GetBoundaryValue_m3E5DD81838828B30372AC5E200CE86B607C729AB (int32_t ___type0, const RuntimeMethod* method)
{
	typedef int32_t (*TerrainData_GetBoundaryValue_m3E5DD81838828B30372AC5E200CE86B607C729AB_ftn) (int32_t);
	static TerrainData_GetBoundaryValue_m3E5DD81838828B30372AC5E200CE86B607C729AB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetBoundaryValue_m3E5DD81838828B30372AC5E200CE86B607C729AB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetBoundaryValue(UnityEngine.TerrainData/BoundaryValueType)");
	int32_t retVal = _il2cpp_icall_func(___type0);
	return retVal;
}
// System.Void UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)
extern "C" IL2CPP_METHOD_ATTR void TerrainData_Internal_Create_m02C792919F391601D1EE4CF6DF70182FBD646F16 (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * ___terrainData0, const RuntimeMethod* method)
{
	typedef void (*TerrainData_Internal_Create_m02C792919F391601D1EE4CF6DF70182FBD646F16_ftn) (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 *);
	static TerrainData_Internal_Create_m02C792919F391601D1EE4CF6DF70182FBD646F16_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_Internal_Create_m02C792919F391601D1EE4CF6DF70182FBD646F16_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::Internal_Create(UnityEngine.TerrainData)");
	_il2cpp_icall_func(___terrainData0);
}
// UnityEngine.Vector3 UnityEngine.TerrainData::get_size()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  TerrainData_get_size_m0987D18D442D824D5F9CF1CF5B42CCF1A6A42D51 (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		TerrainData_get_size_Injected_mF6DEEE266FBF9CEC3AF2B6B77593B9704B299A68(__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_0), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = V_0;
		return L_0;
	}
}
// System.Single UnityEngine.TerrainData::GetAlphamapResolutionInternal()
extern "C" IL2CPP_METHOD_ATTR float TerrainData_GetAlphamapResolutionInternal_mA65CA918038A8D733648A2331826E2C0AA7316B6 (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * __this, const RuntimeMethod* method)
{
	typedef float (*TerrainData_GetAlphamapResolutionInternal_mA65CA918038A8D733648A2331826E2C0AA7316B6_ftn) (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 *);
	static TerrainData_GetAlphamapResolutionInternal_mA65CA918038A8D733648A2331826E2C0AA7316B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_GetAlphamapResolutionInternal_mA65CA918038A8D733648A2331826E2C0AA7316B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::GetAlphamapResolutionInternal()");
	float retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.TerrainData::.cctor()
extern "C" IL2CPP_METHOD_ATTR void TerrainData__cctor_mB579F93C53A8F85C72D7AA2C6A266DA7F0D066C5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TerrainData__cctor_mB579F93C53A8F85C72D7AA2C6A266DA7F0D066C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = TerrainData_GetBoundaryValue_m3E5DD81838828B30372AC5E200CE86B607C729AB(0, /*hidden argument*/NULL);
		((TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var))->set_k_MaximumResolution_4(L_0);
		int32_t L_1 = TerrainData_GetBoundaryValue_m3E5DD81838828B30372AC5E200CE86B607C729AB(1, /*hidden argument*/NULL);
		((TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var))->set_k_MinimumDetailResolutionPerPatch_5(L_1);
		int32_t L_2 = TerrainData_GetBoundaryValue_m3E5DD81838828B30372AC5E200CE86B607C729AB(2, /*hidden argument*/NULL);
		((TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var))->set_k_MaximumDetailResolutionPerPatch_6(L_2);
		int32_t L_3 = TerrainData_GetBoundaryValue_m3E5DD81838828B30372AC5E200CE86B607C729AB(3, /*hidden argument*/NULL);
		((TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var))->set_k_MaximumDetailPatchCount_7(L_3);
		int32_t L_4 = TerrainData_GetBoundaryValue_m3E5DD81838828B30372AC5E200CE86B607C729AB(4, /*hidden argument*/NULL);
		((TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var))->set_k_MinimumAlphamapResolution_8(L_4);
		int32_t L_5 = TerrainData_GetBoundaryValue_m3E5DD81838828B30372AC5E200CE86B607C729AB(5, /*hidden argument*/NULL);
		((TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var))->set_k_MaximumAlphamapResolution_9(L_5);
		int32_t L_6 = TerrainData_GetBoundaryValue_m3E5DD81838828B30372AC5E200CE86B607C729AB(6, /*hidden argument*/NULL);
		((TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var))->set_k_MinimumBaseMapResolution_10(L_6);
		int32_t L_7 = TerrainData_GetBoundaryValue_m3E5DD81838828B30372AC5E200CE86B607C729AB(7, /*hidden argument*/NULL);
		((TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_StaticFields*)il2cpp_codegen_static_fields_for(TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2_il2cpp_TypeInfo_var))->set_k_MaximumBaseMapResolution_11(L_7);
		return;
	}
}
// System.Void UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)
extern "C" IL2CPP_METHOD_ATTR void TerrainData_get_size_Injected_mF6DEEE266FBF9CEC3AF2B6B77593B9704B299A68 (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___ret0, const RuntimeMethod* method)
{
	typedef void (*TerrainData_get_size_Injected_mF6DEEE266FBF9CEC3AF2B6B77593B9704B299A68_ftn) (TerrainData_t9D44396901570930AFE428DAC19ABE0C1477CFE2 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static TerrainData_get_size_Injected_mF6DEEE266FBF9CEC3AF2B6B77593B9704B299A68_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (TerrainData_get_size_Injected_mF6DEEE266FBF9CEC3AF2B6B77593B9704B299A68_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.TerrainData::get_size_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___ret0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
