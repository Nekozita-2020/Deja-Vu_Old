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

struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericVirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct GenericInterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2;
// System.Char[]
struct CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1;
// System.Collections.Generic.List`1<System.Collections.Hashtable>
struct List_1_tDED27D5396969E5D6098CFB790CDBB81B0CFA49A;
// System.Collections.Hashtable
struct Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82;
// System.Collections.IDictionary
struct IDictionary_tD35B9437F08BE98D1E0B295CC73C48E168CAB316;
// System.DelegateData
struct DelegateData_tF588FE8D395F9A38FC7D222940F9B218441D21A9;
// System.IAsyncResult
struct IAsyncResult_tDA33C24465239FB383C4C2CDAAC43B9AD3CB7F05;
// System.IntPtr[]
struct IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659;
// System.NotSupportedException
struct NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Single[]
struct SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5;
// System.String
struct String_t;
// System.Void
struct Void_tDB81A15FA2AB53E2401A76B745D215397B29F783;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Color[0...,0...]
struct ColorU5B0___U2C0___U5D_t58F9F5F8F6BF3A33D6898121917F59287A701039;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Rect[]
struct RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// iTween
struct iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C;
// iTween/<Start>c__Iterator2
struct U3CStartU3Ec__Iterator2_tC462A25075F74091AA9BAF281DACCAE142607AEA;
// iTween/<TweenDelay>c__Iterator0
struct U3CTweenDelayU3Ec__Iterator0_t159DF1F4577D8BF6567D61C498BB03DD9C1E18F6;
// iTween/<TweenRestart>c__Iterator1
struct U3CTweenRestartU3Ec__Iterator1_t6F76088CD3A8FE045569162AF0322202AB17C7AA;
// iTween/ApplyTween
struct ApplyTween_t2F43618EC5A9D9BFE6D6E786124F756DFF5B8B0D;
// iTween/CRSpline
struct CRSpline_t97F9B36C6A63623F5302473B3AD97A9437B9E4B5;
// iTween/EasingFunction
struct EasingFunction_t28872DBE2F8634DAB27BEBF112376EEC2238A934;

extern RuntimeClass* Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_il2cpp_TypeInfo_var;
extern RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
extern RuntimeClass* NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var;
extern RuntimeClass* Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral31F1C6560FB961284D6589281FA4661A1C74D1B6;
extern const RuntimeMethod* U3CStartU3Ec__Iterator2_Reset_mF7AE8223D33B82E1E0960031D6C9E608B708182D_RuntimeMethod_var;
extern const RuntimeMethod* U3CTweenDelayU3Ec__Iterator0_Reset_m83D4C99B52E38EFDB8AC479EF8062DDE1A2634F2_RuntimeMethod_var;
extern const RuntimeMethod* U3CTweenRestartU3Ec__Iterator1_Reset_m7EA44C472254BE150BD5654BC129ABBAB6D3F348_RuntimeMethod_var;
extern const uint32_t CRSpline_Interp_m23C690A82403558017D6D202FEDD37AE1188B894_MetadataUsageId;
extern const uint32_t CRSpline__ctor_mC87029220E9C40A43CF7BD6032D6A960BC2D033A_MetadataUsageId;
extern const uint32_t Defaults__cctor_m1032CDB1C5BC6177516330990DC0D2C01182BAC6_MetadataUsageId;
extern const uint32_t EasingFunction_BeginInvoke_m3878FCBE835FEE5289A110EACCEA097309987B8B_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator2_MoveNext_m2E873F3E5ED37A1D06B5C3AE769F0CCF6E5F840F_MetadataUsageId;
extern const uint32_t U3CStartU3Ec__Iterator2_Reset_mF7AE8223D33B82E1E0960031D6C9E608B708182D_MetadataUsageId;
extern const uint32_t U3CTweenDelayU3Ec__Iterator0_MoveNext_mFF4B5D0C74681CB47880C7935C1455F3B8B3C4BF_MetadataUsageId;
extern const uint32_t U3CTweenDelayU3Ec__Iterator0_Reset_m83D4C99B52E38EFDB8AC479EF8062DDE1A2634F2_MetadataUsageId;
extern const uint32_t U3CTweenRestartU3Ec__Iterator1_MoveNext_mAC136F1B92BB9A18C43FEF93EF8D225DCAFCD5BA_MetadataUsageId;
extern const uint32_t U3CTweenRestartU3Ec__Iterator1_Reset_m7EA44C472254BE150BD5654BC129ABBAB6D3F348_MetadataUsageId;

struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;


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
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_tB866BA24C91559CF299618E230043451CC7CF659* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t79D85CE93255C78D04436552445C364ED409B744* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
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
#ifndef YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#define YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_H
#ifndef U3CSTARTU3EC__ITERATOR2_TC462A25075F74091AA9BAF281DACCAE142607AEA_H
#define U3CSTARTU3EC__ITERATOR2_TC462A25075F74091AA9BAF281DACCAE142607AEA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/<Start>c__Iterator2
struct  U3CStartU3Ec__Iterator2_tC462A25075F74091AA9BAF281DACCAE142607AEA  : public RuntimeObject
{
public:
	// iTween iTween/<Start>c__Iterator2::$this
	iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * ___U24this_0;
	// System.Object iTween/<Start>c__Iterator2::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean iTween/<Start>c__Iterator2::$disposing
	bool ___U24disposing_2;
	// System.Int32 iTween/<Start>c__Iterator2::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator2_tC462A25075F74091AA9BAF281DACCAE142607AEA, ___U24this_0)); }
	inline iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * get_U24this_0() const { return ___U24this_0; }
	inline iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator2_tC462A25075F74091AA9BAF281DACCAE142607AEA, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator2_tC462A25075F74091AA9BAF281DACCAE142607AEA, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CStartU3Ec__Iterator2_tC462A25075F74091AA9BAF281DACCAE142607AEA, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSTARTU3EC__ITERATOR2_TC462A25075F74091AA9BAF281DACCAE142607AEA_H
#ifndef U3CTWEENDELAYU3EC__ITERATOR0_T159DF1F4577D8BF6567D61C498BB03DD9C1E18F6_H
#define U3CTWEENDELAYU3EC__ITERATOR0_T159DF1F4577D8BF6567D61C498BB03DD9C1E18F6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/<TweenDelay>c__Iterator0
struct  U3CTweenDelayU3Ec__Iterator0_t159DF1F4577D8BF6567D61C498BB03DD9C1E18F6  : public RuntimeObject
{
public:
	// iTween iTween/<TweenDelay>c__Iterator0::$this
	iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * ___U24this_0;
	// System.Object iTween/<TweenDelay>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean iTween/<TweenDelay>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 iTween/<TweenDelay>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CTweenDelayU3Ec__Iterator0_t159DF1F4577D8BF6567D61C498BB03DD9C1E18F6, ___U24this_0)); }
	inline iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * get_U24this_0() const { return ___U24this_0; }
	inline iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CTweenDelayU3Ec__Iterator0_t159DF1F4577D8BF6567D61C498BB03DD9C1E18F6, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CTweenDelayU3Ec__Iterator0_t159DF1F4577D8BF6567D61C498BB03DD9C1E18F6, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CTweenDelayU3Ec__Iterator0_t159DF1F4577D8BF6567D61C498BB03DD9C1E18F6, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTWEENDELAYU3EC__ITERATOR0_T159DF1F4577D8BF6567D61C498BB03DD9C1E18F6_H
#ifndef U3CTWEENRESTARTU3EC__ITERATOR1_T6F76088CD3A8FE045569162AF0322202AB17C7AA_H
#define U3CTWEENRESTARTU3EC__ITERATOR1_T6F76088CD3A8FE045569162AF0322202AB17C7AA_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/<TweenRestart>c__Iterator1
struct  U3CTweenRestartU3Ec__Iterator1_t6F76088CD3A8FE045569162AF0322202AB17C7AA  : public RuntimeObject
{
public:
	// iTween iTween/<TweenRestart>c__Iterator1::$this
	iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * ___U24this_0;
	// System.Object iTween/<TweenRestart>c__Iterator1::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean iTween/<TweenRestart>c__Iterator1::$disposing
	bool ___U24disposing_2;
	// System.Int32 iTween/<TweenRestart>c__Iterator1::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CTweenRestartU3Ec__Iterator1_t6F76088CD3A8FE045569162AF0322202AB17C7AA, ___U24this_0)); }
	inline iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * get_U24this_0() const { return ___U24this_0; }
	inline iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CTweenRestartU3Ec__Iterator1_t6F76088CD3A8FE045569162AF0322202AB17C7AA, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CTweenRestartU3Ec__Iterator1_t6F76088CD3A8FE045569162AF0322202AB17C7AA, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CTweenRestartU3Ec__Iterator1_t6F76088CD3A8FE045569162AF0322202AB17C7AA, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CTWEENRESTARTU3EC__ITERATOR1_T6F76088CD3A8FE045569162AF0322202AB17C7AA_H
#ifndef CRSPLINE_T97F9B36C6A63623F5302473B3AD97A9437B9E4B5_H
#define CRSPLINE_T97F9B36C6A63623F5302473B3AD97A9437B9E4B5_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/CRSpline
struct  CRSpline_t97F9B36C6A63623F5302473B3AD97A9437B9E4B5  : public RuntimeObject
{
public:
	// UnityEngine.Vector3[] iTween/CRSpline::pts
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___pts_0;

public:
	inline static int32_t get_offset_of_pts_0() { return static_cast<int32_t>(offsetof(CRSpline_t97F9B36C6A63623F5302473B3AD97A9437B9E4B5, ___pts_0)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_pts_0() const { return ___pts_0; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_pts_0() { return &___pts_0; }
	inline void set_pts_0(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___pts_0 = value;
		Il2CppCodeGenWriteBarrier((&___pts_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRSPLINE_T97F9B36C6A63623F5302473B3AD97A9437B9E4B5_H
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
#ifndef SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#define SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T81A06ADD519539D252788D75E44AFFBE6580E301_H
#ifndef UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
#define UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t69F92C53356907895162C7F31D87C59F9141D3B8, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T69F92C53356907895162C7F31D87C59F9141D3B8_H
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
#ifndef COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#define COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T119BCA590009762C7223FDD3AF9706653AC84ED2_H
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
#ifndef WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#define WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_H
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
#ifndef NOTSUPPORTEDEXCEPTION_T8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_H
#define NOTSUPPORTEDEXCEPTION_T8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6  : public SystemException_t81A06ADD519539D252788D75E44AFFBE6580E301
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_H
#ifndef COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#define COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_TAE7DB2FC70A0AE6477F896F852057CB0754F06EC_H
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
#ifndef SPACE_T0F622BF939B7A47E0F9632CE968F7D72FC63AF58_H
#define SPACE_T0F622BF939B7A47E0F9632CE968F7D72FC63AF58_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58, ___value___1)); }
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
#endif // SPACE_T0F622BF939B7A47E0F9632CE968F7D72FC63AF58_H
#ifndef EASETYPE_T2B73FE8372A1E1947B1F59C1A4B3755F647FDA68_H
#define EASETYPE_T2B73FE8372A1E1947B1F59C1A4B3755F647FDA68_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/EaseType
struct  EaseType_t2B73FE8372A1E1947B1F59C1A4B3755F647FDA68 
{
public:
	// System.Int32 iTween/EaseType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EaseType_t2B73FE8372A1E1947B1F59C1A4B3755F647FDA68, ___value___1)); }
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
#endif // EASETYPE_T2B73FE8372A1E1947B1F59C1A4B3755F647FDA68_H
#ifndef LOOPTYPE_T9336B7BC54E1AB7E40DD527FB6D4E5E172AD7CFB_H
#define LOOPTYPE_T9336B7BC54E1AB7E40DD527FB6D4E5E172AD7CFB_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/LoopType
struct  LoopType_t9336B7BC54E1AB7E40DD527FB6D4E5E172AD7CFB 
{
public:
	// System.Int32 iTween/LoopType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoopType_t9336B7BC54E1AB7E40DD527FB6D4E5E172AD7CFB, ___value___1)); }
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
#endif // LOOPTYPE_T9336B7BC54E1AB7E40DD527FB6D4E5E172AD7CFB_H
#ifndef NAMEDVALUECOLOR_TB5711A9565146B22539D7D3EFED5AB40A0EA70BE_H
#define NAMEDVALUECOLOR_TB5711A9565146B22539D7D3EFED5AB40A0EA70BE_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/NamedValueColor
struct  NamedValueColor_tB5711A9565146B22539D7D3EFED5AB40A0EA70BE 
{
public:
	// System.Int32 iTween/NamedValueColor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NamedValueColor_tB5711A9565146B22539D7D3EFED5AB40A0EA70BE, ___value___1)); }
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
#endif // NAMEDVALUECOLOR_TB5711A9565146B22539D7D3EFED5AB40A0EA70BE_H
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
#ifndef DEFAULTS_T9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_H
#define DEFAULTS_T9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/Defaults
struct  Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D  : public RuntimeObject
{
public:

public:
};

struct Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields
{
public:
	// System.Single iTween/Defaults::time
	float ___time_0;
	// System.Single iTween/Defaults::delay
	float ___delay_1;
	// iTween/NamedValueColor iTween/Defaults::namedColorValue
	int32_t ___namedColorValue_2;
	// iTween/LoopType iTween/Defaults::loopType
	int32_t ___loopType_3;
	// iTween/EaseType iTween/Defaults::easeType
	int32_t ___easeType_4;
	// System.Single iTween/Defaults::lookSpeed
	float ___lookSpeed_5;
	// System.Boolean iTween/Defaults::isLocal
	bool ___isLocal_6;
	// UnityEngine.Space iTween/Defaults::space
	int32_t ___space_7;
	// System.Boolean iTween/Defaults::orientToPath
	bool ___orientToPath_8;
	// UnityEngine.Color iTween/Defaults::color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color_9;
	// System.Single iTween/Defaults::updateTimePercentage
	float ___updateTimePercentage_10;
	// System.Single iTween/Defaults::updateTime
	float ___updateTime_11;
	// System.Single iTween/Defaults::lookAhead
	float ___lookAhead_12;
	// System.Boolean iTween/Defaults::useRealTime
	bool ___useRealTime_13;
	// UnityEngine.Vector3 iTween/Defaults::up
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___up_14;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_delay_1() { return static_cast<int32_t>(offsetof(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields, ___delay_1)); }
	inline float get_delay_1() const { return ___delay_1; }
	inline float* get_address_of_delay_1() { return &___delay_1; }
	inline void set_delay_1(float value)
	{
		___delay_1 = value;
	}

	inline static int32_t get_offset_of_namedColorValue_2() { return static_cast<int32_t>(offsetof(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields, ___namedColorValue_2)); }
	inline int32_t get_namedColorValue_2() const { return ___namedColorValue_2; }
	inline int32_t* get_address_of_namedColorValue_2() { return &___namedColorValue_2; }
	inline void set_namedColorValue_2(int32_t value)
	{
		___namedColorValue_2 = value;
	}

	inline static int32_t get_offset_of_loopType_3() { return static_cast<int32_t>(offsetof(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields, ___loopType_3)); }
	inline int32_t get_loopType_3() const { return ___loopType_3; }
	inline int32_t* get_address_of_loopType_3() { return &___loopType_3; }
	inline void set_loopType_3(int32_t value)
	{
		___loopType_3 = value;
	}

	inline static int32_t get_offset_of_easeType_4() { return static_cast<int32_t>(offsetof(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields, ___easeType_4)); }
	inline int32_t get_easeType_4() const { return ___easeType_4; }
	inline int32_t* get_address_of_easeType_4() { return &___easeType_4; }
	inline void set_easeType_4(int32_t value)
	{
		___easeType_4 = value;
	}

	inline static int32_t get_offset_of_lookSpeed_5() { return static_cast<int32_t>(offsetof(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields, ___lookSpeed_5)); }
	inline float get_lookSpeed_5() const { return ___lookSpeed_5; }
	inline float* get_address_of_lookSpeed_5() { return &___lookSpeed_5; }
	inline void set_lookSpeed_5(float value)
	{
		___lookSpeed_5 = value;
	}

	inline static int32_t get_offset_of_isLocal_6() { return static_cast<int32_t>(offsetof(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields, ___isLocal_6)); }
	inline bool get_isLocal_6() const { return ___isLocal_6; }
	inline bool* get_address_of_isLocal_6() { return &___isLocal_6; }
	inline void set_isLocal_6(bool value)
	{
		___isLocal_6 = value;
	}

	inline static int32_t get_offset_of_space_7() { return static_cast<int32_t>(offsetof(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields, ___space_7)); }
	inline int32_t get_space_7() const { return ___space_7; }
	inline int32_t* get_address_of_space_7() { return &___space_7; }
	inline void set_space_7(int32_t value)
	{
		___space_7 = value;
	}

	inline static int32_t get_offset_of_orientToPath_8() { return static_cast<int32_t>(offsetof(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields, ___orientToPath_8)); }
	inline bool get_orientToPath_8() const { return ___orientToPath_8; }
	inline bool* get_address_of_orientToPath_8() { return &___orientToPath_8; }
	inline void set_orientToPath_8(bool value)
	{
		___orientToPath_8 = value;
	}

	inline static int32_t get_offset_of_color_9() { return static_cast<int32_t>(offsetof(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields, ___color_9)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_color_9() const { return ___color_9; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_color_9() { return &___color_9; }
	inline void set_color_9(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___color_9 = value;
	}

	inline static int32_t get_offset_of_updateTimePercentage_10() { return static_cast<int32_t>(offsetof(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields, ___updateTimePercentage_10)); }
	inline float get_updateTimePercentage_10() const { return ___updateTimePercentage_10; }
	inline float* get_address_of_updateTimePercentage_10() { return &___updateTimePercentage_10; }
	inline void set_updateTimePercentage_10(float value)
	{
		___updateTimePercentage_10 = value;
	}

	inline static int32_t get_offset_of_updateTime_11() { return static_cast<int32_t>(offsetof(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields, ___updateTime_11)); }
	inline float get_updateTime_11() const { return ___updateTime_11; }
	inline float* get_address_of_updateTime_11() { return &___updateTime_11; }
	inline void set_updateTime_11(float value)
	{
		___updateTime_11 = value;
	}

	inline static int32_t get_offset_of_lookAhead_12() { return static_cast<int32_t>(offsetof(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields, ___lookAhead_12)); }
	inline float get_lookAhead_12() const { return ___lookAhead_12; }
	inline float* get_address_of_lookAhead_12() { return &___lookAhead_12; }
	inline void set_lookAhead_12(float value)
	{
		___lookAhead_12 = value;
	}

	inline static int32_t get_offset_of_useRealTime_13() { return static_cast<int32_t>(offsetof(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields, ___useRealTime_13)); }
	inline bool get_useRealTime_13() const { return ___useRealTime_13; }
	inline bool* get_address_of_useRealTime_13() { return &___useRealTime_13; }
	inline void set_useRealTime_13(bool value)
	{
		___useRealTime_13 = value;
	}

	inline static int32_t get_offset_of_up_14() { return static_cast<int32_t>(offsetof(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields, ___up_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_up_14() const { return ___up_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_up_14() { return &___up_14; }
	inline void set_up_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___up_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTS_T9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_H
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
#ifndef APPLYTWEEN_T2F43618EC5A9D9BFE6D6E786124F756DFF5B8B0D_H
#define APPLYTWEEN_T2F43618EC5A9D9BFE6D6E786124F756DFF5B8B0D_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/ApplyTween
struct  ApplyTween_t2F43618EC5A9D9BFE6D6E786124F756DFF5B8B0D  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // APPLYTWEEN_T2F43618EC5A9D9BFE6D6E786124F756DFF5B8B0D_H
#ifndef EASINGFUNCTION_T28872DBE2F8634DAB27BEBF112376EEC2238A934_H
#define EASINGFUNCTION_T28872DBE2F8634DAB27BEBF112376EEC2238A934_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween/EasingFunction
struct  EasingFunction_t28872DBE2F8634DAB27BEBF112376EEC2238A934  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EASINGFUNCTION_T28872DBE2F8634DAB27BEBF112376EEC2238A934_H
#ifndef MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#define MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T4A60845CF505405AF8BE8C61CC07F75CADEF6429_H
#ifndef ITWEEN_T54E36DA08C63FE450F6F76C34DCA69A839D38B6C_H
#define ITWEEN_T54E36DA08C63FE450F6F76C34DCA69A839D38B6C_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iTween
struct  iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.String iTween::id
	String_t* ___id_5;
	// System.String iTween::type
	String_t* ___type_6;
	// System.String iTween::method
	String_t* ___method_7;
	// iTween/EaseType iTween::easeType
	int32_t ___easeType_8;
	// System.Single iTween::time
	float ___time_9;
	// System.Single iTween::delay
	float ___delay_10;
	// iTween/LoopType iTween::loopType
	int32_t ___loopType_11;
	// System.Boolean iTween::isRunning
	bool ___isRunning_12;
	// System.Boolean iTween::isPaused
	bool ___isPaused_13;
	// System.String iTween::_name
	String_t* ____name_14;
	// System.Single iTween::runningTime
	float ___runningTime_15;
	// System.Single iTween::percentage
	float ___percentage_16;
	// System.Single iTween::delayStarted
	float ___delayStarted_17;
	// System.Boolean iTween::kinematic
	bool ___kinematic_18;
	// System.Boolean iTween::isLocal
	bool ___isLocal_19;
	// System.Boolean iTween::loop
	bool ___loop_20;
	// System.Boolean iTween::reverse
	bool ___reverse_21;
	// System.Boolean iTween::wasPaused
	bool ___wasPaused_22;
	// System.Boolean iTween::physics
	bool ___physics_23;
	// System.Collections.Hashtable iTween::tweenArguments
	Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * ___tweenArguments_24;
	// UnityEngine.Space iTween::space
	int32_t ___space_25;
	// iTween/EasingFunction iTween::ease
	EasingFunction_t28872DBE2F8634DAB27BEBF112376EEC2238A934 * ___ease_26;
	// iTween/ApplyTween iTween::apply
	ApplyTween_t2F43618EC5A9D9BFE6D6E786124F756DFF5B8B0D * ___apply_27;
	// UnityEngine.AudioSource iTween::audioSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___audioSource_28;
	// UnityEngine.Vector3[] iTween::vector3s
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___vector3s_29;
	// UnityEngine.Vector2[] iTween::vector2s
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___vector2s_30;
	// UnityEngine.Color[0...,0...] iTween::colors
	ColorU5B0___U2C0___U5D_t58F9F5F8F6BF3A33D6898121917F59287A701039* ___colors_31;
	// System.Single[] iTween::floats
	SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* ___floats_32;
	// UnityEngine.Rect[] iTween::rects
	RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B* ___rects_33;
	// iTween/CRSpline iTween::path
	CRSpline_t97F9B36C6A63623F5302473B3AD97A9437B9E4B5 * ___path_34;
	// UnityEngine.Vector3 iTween::preUpdate
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___preUpdate_35;
	// UnityEngine.Vector3 iTween::postUpdate
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___postUpdate_36;
	// iTween/NamedValueColor iTween::namedcolorvalue
	int32_t ___namedcolorvalue_37;
	// System.Single iTween::lastRealTime
	float ___lastRealTime_38;
	// System.Boolean iTween::useRealTime
	bool ___useRealTime_39;
	// UnityEngine.Transform iTween::thisTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___thisTransform_40;

public:
	inline static int32_t get_offset_of_id_5() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___id_5)); }
	inline String_t* get_id_5() const { return ___id_5; }
	inline String_t** get_address_of_id_5() { return &___id_5; }
	inline void set_id_5(String_t* value)
	{
		___id_5 = value;
		Il2CppCodeGenWriteBarrier((&___id_5), value);
	}

	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___type_6)); }
	inline String_t* get_type_6() const { return ___type_6; }
	inline String_t** get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(String_t* value)
	{
		___type_6 = value;
		Il2CppCodeGenWriteBarrier((&___type_6), value);
	}

	inline static int32_t get_offset_of_method_7() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___method_7)); }
	inline String_t* get_method_7() const { return ___method_7; }
	inline String_t** get_address_of_method_7() { return &___method_7; }
	inline void set_method_7(String_t* value)
	{
		___method_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_7), value);
	}

	inline static int32_t get_offset_of_easeType_8() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___easeType_8)); }
	inline int32_t get_easeType_8() const { return ___easeType_8; }
	inline int32_t* get_address_of_easeType_8() { return &___easeType_8; }
	inline void set_easeType_8(int32_t value)
	{
		___easeType_8 = value;
	}

	inline static int32_t get_offset_of_time_9() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___time_9)); }
	inline float get_time_9() const { return ___time_9; }
	inline float* get_address_of_time_9() { return &___time_9; }
	inline void set_time_9(float value)
	{
		___time_9 = value;
	}

	inline static int32_t get_offset_of_delay_10() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___delay_10)); }
	inline float get_delay_10() const { return ___delay_10; }
	inline float* get_address_of_delay_10() { return &___delay_10; }
	inline void set_delay_10(float value)
	{
		___delay_10 = value;
	}

	inline static int32_t get_offset_of_loopType_11() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___loopType_11)); }
	inline int32_t get_loopType_11() const { return ___loopType_11; }
	inline int32_t* get_address_of_loopType_11() { return &___loopType_11; }
	inline void set_loopType_11(int32_t value)
	{
		___loopType_11 = value;
	}

	inline static int32_t get_offset_of_isRunning_12() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___isRunning_12)); }
	inline bool get_isRunning_12() const { return ___isRunning_12; }
	inline bool* get_address_of_isRunning_12() { return &___isRunning_12; }
	inline void set_isRunning_12(bool value)
	{
		___isRunning_12 = value;
	}

	inline static int32_t get_offset_of_isPaused_13() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___isPaused_13)); }
	inline bool get_isPaused_13() const { return ___isPaused_13; }
	inline bool* get_address_of_isPaused_13() { return &___isPaused_13; }
	inline void set_isPaused_13(bool value)
	{
		___isPaused_13 = value;
	}

	inline static int32_t get_offset_of__name_14() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ____name_14)); }
	inline String_t* get__name_14() const { return ____name_14; }
	inline String_t** get_address_of__name_14() { return &____name_14; }
	inline void set__name_14(String_t* value)
	{
		____name_14 = value;
		Il2CppCodeGenWriteBarrier((&____name_14), value);
	}

	inline static int32_t get_offset_of_runningTime_15() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___runningTime_15)); }
	inline float get_runningTime_15() const { return ___runningTime_15; }
	inline float* get_address_of_runningTime_15() { return &___runningTime_15; }
	inline void set_runningTime_15(float value)
	{
		___runningTime_15 = value;
	}

	inline static int32_t get_offset_of_percentage_16() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___percentage_16)); }
	inline float get_percentage_16() const { return ___percentage_16; }
	inline float* get_address_of_percentage_16() { return &___percentage_16; }
	inline void set_percentage_16(float value)
	{
		___percentage_16 = value;
	}

	inline static int32_t get_offset_of_delayStarted_17() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___delayStarted_17)); }
	inline float get_delayStarted_17() const { return ___delayStarted_17; }
	inline float* get_address_of_delayStarted_17() { return &___delayStarted_17; }
	inline void set_delayStarted_17(float value)
	{
		___delayStarted_17 = value;
	}

	inline static int32_t get_offset_of_kinematic_18() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___kinematic_18)); }
	inline bool get_kinematic_18() const { return ___kinematic_18; }
	inline bool* get_address_of_kinematic_18() { return &___kinematic_18; }
	inline void set_kinematic_18(bool value)
	{
		___kinematic_18 = value;
	}

	inline static int32_t get_offset_of_isLocal_19() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___isLocal_19)); }
	inline bool get_isLocal_19() const { return ___isLocal_19; }
	inline bool* get_address_of_isLocal_19() { return &___isLocal_19; }
	inline void set_isLocal_19(bool value)
	{
		___isLocal_19 = value;
	}

	inline static int32_t get_offset_of_loop_20() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___loop_20)); }
	inline bool get_loop_20() const { return ___loop_20; }
	inline bool* get_address_of_loop_20() { return &___loop_20; }
	inline void set_loop_20(bool value)
	{
		___loop_20 = value;
	}

	inline static int32_t get_offset_of_reverse_21() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___reverse_21)); }
	inline bool get_reverse_21() const { return ___reverse_21; }
	inline bool* get_address_of_reverse_21() { return &___reverse_21; }
	inline void set_reverse_21(bool value)
	{
		___reverse_21 = value;
	}

	inline static int32_t get_offset_of_wasPaused_22() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___wasPaused_22)); }
	inline bool get_wasPaused_22() const { return ___wasPaused_22; }
	inline bool* get_address_of_wasPaused_22() { return &___wasPaused_22; }
	inline void set_wasPaused_22(bool value)
	{
		___wasPaused_22 = value;
	}

	inline static int32_t get_offset_of_physics_23() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___physics_23)); }
	inline bool get_physics_23() const { return ___physics_23; }
	inline bool* get_address_of_physics_23() { return &___physics_23; }
	inline void set_physics_23(bool value)
	{
		___physics_23 = value;
	}

	inline static int32_t get_offset_of_tweenArguments_24() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___tweenArguments_24)); }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * get_tweenArguments_24() const { return ___tweenArguments_24; }
	inline Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 ** get_address_of_tweenArguments_24() { return &___tweenArguments_24; }
	inline void set_tweenArguments_24(Hashtable_tA746260C9064A8C1FC071FF85C11C8EBAEB51B82 * value)
	{
		___tweenArguments_24 = value;
		Il2CppCodeGenWriteBarrier((&___tweenArguments_24), value);
	}

	inline static int32_t get_offset_of_space_25() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___space_25)); }
	inline int32_t get_space_25() const { return ___space_25; }
	inline int32_t* get_address_of_space_25() { return &___space_25; }
	inline void set_space_25(int32_t value)
	{
		___space_25 = value;
	}

	inline static int32_t get_offset_of_ease_26() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___ease_26)); }
	inline EasingFunction_t28872DBE2F8634DAB27BEBF112376EEC2238A934 * get_ease_26() const { return ___ease_26; }
	inline EasingFunction_t28872DBE2F8634DAB27BEBF112376EEC2238A934 ** get_address_of_ease_26() { return &___ease_26; }
	inline void set_ease_26(EasingFunction_t28872DBE2F8634DAB27BEBF112376EEC2238A934 * value)
	{
		___ease_26 = value;
		Il2CppCodeGenWriteBarrier((&___ease_26), value);
	}

	inline static int32_t get_offset_of_apply_27() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___apply_27)); }
	inline ApplyTween_t2F43618EC5A9D9BFE6D6E786124F756DFF5B8B0D * get_apply_27() const { return ___apply_27; }
	inline ApplyTween_t2F43618EC5A9D9BFE6D6E786124F756DFF5B8B0D ** get_address_of_apply_27() { return &___apply_27; }
	inline void set_apply_27(ApplyTween_t2F43618EC5A9D9BFE6D6E786124F756DFF5B8B0D * value)
	{
		___apply_27 = value;
		Il2CppCodeGenWriteBarrier((&___apply_27), value);
	}

	inline static int32_t get_offset_of_audioSource_28() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___audioSource_28)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_audioSource_28() const { return ___audioSource_28; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_audioSource_28() { return &___audioSource_28; }
	inline void set_audioSource_28(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___audioSource_28 = value;
		Il2CppCodeGenWriteBarrier((&___audioSource_28), value);
	}

	inline static int32_t get_offset_of_vector3s_29() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___vector3s_29)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_vector3s_29() const { return ___vector3s_29; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_vector3s_29() { return &___vector3s_29; }
	inline void set_vector3s_29(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___vector3s_29 = value;
		Il2CppCodeGenWriteBarrier((&___vector3s_29), value);
	}

	inline static int32_t get_offset_of_vector2s_30() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___vector2s_30)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_vector2s_30() const { return ___vector2s_30; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_vector2s_30() { return &___vector2s_30; }
	inline void set_vector2s_30(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___vector2s_30 = value;
		Il2CppCodeGenWriteBarrier((&___vector2s_30), value);
	}

	inline static int32_t get_offset_of_colors_31() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___colors_31)); }
	inline ColorU5B0___U2C0___U5D_t58F9F5F8F6BF3A33D6898121917F59287A701039* get_colors_31() const { return ___colors_31; }
	inline ColorU5B0___U2C0___U5D_t58F9F5F8F6BF3A33D6898121917F59287A701039** get_address_of_colors_31() { return &___colors_31; }
	inline void set_colors_31(ColorU5B0___U2C0___U5D_t58F9F5F8F6BF3A33D6898121917F59287A701039* value)
	{
		___colors_31 = value;
		Il2CppCodeGenWriteBarrier((&___colors_31), value);
	}

	inline static int32_t get_offset_of_floats_32() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___floats_32)); }
	inline SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* get_floats_32() const { return ___floats_32; }
	inline SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5** get_address_of_floats_32() { return &___floats_32; }
	inline void set_floats_32(SingleU5BU5D_t8C7CE2FD0C4CD3846DEB3BE6DD5564E32A8A27D5* value)
	{
		___floats_32 = value;
		Il2CppCodeGenWriteBarrier((&___floats_32), value);
	}

	inline static int32_t get_offset_of_rects_33() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___rects_33)); }
	inline RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B* get_rects_33() const { return ___rects_33; }
	inline RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B** get_address_of_rects_33() { return &___rects_33; }
	inline void set_rects_33(RectU5BU5D_tB12F2C8BB1CFCCBAC660A7914E184DE3D80C3E5B* value)
	{
		___rects_33 = value;
		Il2CppCodeGenWriteBarrier((&___rects_33), value);
	}

	inline static int32_t get_offset_of_path_34() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___path_34)); }
	inline CRSpline_t97F9B36C6A63623F5302473B3AD97A9437B9E4B5 * get_path_34() const { return ___path_34; }
	inline CRSpline_t97F9B36C6A63623F5302473B3AD97A9437B9E4B5 ** get_address_of_path_34() { return &___path_34; }
	inline void set_path_34(CRSpline_t97F9B36C6A63623F5302473B3AD97A9437B9E4B5 * value)
	{
		___path_34 = value;
		Il2CppCodeGenWriteBarrier((&___path_34), value);
	}

	inline static int32_t get_offset_of_preUpdate_35() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___preUpdate_35)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_preUpdate_35() const { return ___preUpdate_35; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_preUpdate_35() { return &___preUpdate_35; }
	inline void set_preUpdate_35(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___preUpdate_35 = value;
	}

	inline static int32_t get_offset_of_postUpdate_36() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___postUpdate_36)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_postUpdate_36() const { return ___postUpdate_36; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_postUpdate_36() { return &___postUpdate_36; }
	inline void set_postUpdate_36(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___postUpdate_36 = value;
	}

	inline static int32_t get_offset_of_namedcolorvalue_37() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___namedcolorvalue_37)); }
	inline int32_t get_namedcolorvalue_37() const { return ___namedcolorvalue_37; }
	inline int32_t* get_address_of_namedcolorvalue_37() { return &___namedcolorvalue_37; }
	inline void set_namedcolorvalue_37(int32_t value)
	{
		___namedcolorvalue_37 = value;
	}

	inline static int32_t get_offset_of_lastRealTime_38() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___lastRealTime_38)); }
	inline float get_lastRealTime_38() const { return ___lastRealTime_38; }
	inline float* get_address_of_lastRealTime_38() { return &___lastRealTime_38; }
	inline void set_lastRealTime_38(float value)
	{
		___lastRealTime_38 = value;
	}

	inline static int32_t get_offset_of_useRealTime_39() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___useRealTime_39)); }
	inline bool get_useRealTime_39() const { return ___useRealTime_39; }
	inline bool* get_address_of_useRealTime_39() { return &___useRealTime_39; }
	inline void set_useRealTime_39(bool value)
	{
		___useRealTime_39 = value;
	}

	inline static int32_t get_offset_of_thisTransform_40() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C, ___thisTransform_40)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_thisTransform_40() const { return ___thisTransform_40; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_thisTransform_40() { return &___thisTransform_40; }
	inline void set_thisTransform_40(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___thisTransform_40 = value;
		Il2CppCodeGenWriteBarrier((&___thisTransform_40), value);
	}
};

struct iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Collections.Hashtable> iTween::tweens
	List_1_tDED27D5396969E5D6098CFB790CDBB81B0CFA49A * ___tweens_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> iTween::<>f__switch$map0
	Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * ___U3CU3Ef__switchU24map0_41;

public:
	inline static int32_t get_offset_of_tweens_4() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C_StaticFields, ___tweens_4)); }
	inline List_1_tDED27D5396969E5D6098CFB790CDBB81B0CFA49A * get_tweens_4() const { return ___tweens_4; }
	inline List_1_tDED27D5396969E5D6098CFB790CDBB81B0CFA49A ** get_address_of_tweens_4() { return &___tweens_4; }
	inline void set_tweens_4(List_1_tDED27D5396969E5D6098CFB790CDBB81B0CFA49A * value)
	{
		___tweens_4 = value;
		Il2CppCodeGenWriteBarrier((&___tweens_4), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map0_41() { return static_cast<int32_t>(offsetof(iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C_StaticFields, ___U3CU3Ef__switchU24map0_41)); }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * get_U3CU3Ef__switchU24map0_41() const { return ___U3CU3Ef__switchU24map0_41; }
	inline Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 ** get_address_of_U3CU3Ef__switchU24map0_41() { return &___U3CU3Ef__switchU24map0_41; }
	inline void set_U3CU3Ef__switchU24map0_41(Dictionary_2_tC40CE8B8795121971E021F04C9E151F97814FCA1 * value)
	{
		___U3CU3Ef__switchU24map0_41 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map0_41), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ITWEEN_T54E36DA08C63FE450F6F76C34DCA69A839D38B6C_H
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  m_Items[1];

public:
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Object::.ctor()
extern "C" IL2CPP_METHOD_ATTR void Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
extern "C" IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_m590A0A7F161D579C18E678B4C5ACCE77B1B318DD (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, String_t* p0, const RuntimeMethod* method);
// System.Void iTween::TweenStart()
extern "C" IL2CPP_METHOD_ATTR void iTween_TweenStart_mC99F9BC63BCABA07600DA82F7F7A9AB582C3FE15 (iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
extern "C" IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mCD2944038AAC6677F82C713B8CB8C67CCF48EF10 (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
extern "C" IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float p0, const RuntimeMethod* method);
// System.Void iTween/ApplyTween::Invoke()
extern "C" IL2CPP_METHOD_ATTR void ApplyTween_Invoke_m8F122AD80642964B466D1842E87AEC4895081E57 (ApplyTween_t2F43618EC5A9D9BFE6D6E786124F756DFF5B8B0D * __this, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
extern "C" IL2CPP_METHOD_ATTR void Array_Copy_mD689E98055DD68EF7F0D889EC09CF0A1C79C2020 (RuntimeArray * p0, RuntimeArray * p1, int32_t p2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C (float p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
extern "C" IL2CPP_METHOD_ATTR int32_t Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A (int32_t p0, int32_t p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839 (float p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, float p1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C" IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// System.Single iTween/EasingFunction::Invoke(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float EasingFunction_Invoke_m30FE23D0BF66551995660A52EFD15096C345D71B (EasingFunction_t28872DBE2F8634DAB27BEBF112376EEC2238A934 * __this, float ___start0, float ___end1, float ___Value2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void iTween/<Start>c__Iterator2::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator2__ctor_m2C3AB17E66ACC35C1F3F35896F44184EB003C3B8 (U3CStartU3Ec__Iterator2_tC462A25075F74091AA9BAF281DACCAE142607AEA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean iTween/<Start>c__Iterator2::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator2_MoveNext_m2E873F3E5ED37A1D06B5C3AE769F0CCF6E5F840F (U3CStartU3Ec__Iterator2_tC462A25075F74091AA9BAF281DACCAE142607AEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator2_MoveNext_m2E873F3E5ED37A1D06B5C3AE769F0CCF6E5F840F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0060;
			}
		}
	}
	{
		goto IL_0072;
	}

IL_0021:
	{
		iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * L_2 = __this->get_U24this_0();
		NullCheck(L_2);
		float L_3 = L_2->get_delay_10();
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0060;
		}
	}
	{
		iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * L_4 = __this->get_U24this_0();
		NullCheck(L_4);
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_5 = MonoBehaviour_StartCoroutine_m590A0A7F161D579C18E678B4C5ACCE77B1B318DD(L_4, _stringLiteral31F1C6560FB961284D6589281FA4661A1C74D1B6, /*hidden argument*/NULL);
		__this->set_U24current_1(L_5);
		bool L_6 = __this->get_U24disposing_2();
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_005b:
	{
		goto IL_0074;
	}

IL_0060:
	{
		iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * L_7 = __this->get_U24this_0();
		NullCheck(L_7);
		iTween_TweenStart_mC99F9BC63BCABA07600DA82F7F7A9AB582C3FE15(L_7, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_0072:
	{
		return (bool)0;
	}

IL_0074:
	{
		return (bool)1;
	}
}
// System.Object iTween/<Start>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1BB81ADA4B8AC9463085074E488DA0474EF7D930 (U3CStartU3Ec__Iterator2_tC462A25075F74091AA9BAF281DACCAE142607AEA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object iTween/<Start>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m4F38D590F1D1A4988CA7791DA379B2894AF93D8B (U3CStartU3Ec__Iterator2_tC462A25075F74091AA9BAF281DACCAE142607AEA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void iTween/<Start>c__Iterator2::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator2_Dispose_m36A25A54A839347EF6BDC0329881B92CC8C73C66 (U3CStartU3Ec__Iterator2_tC462A25075F74091AA9BAF281DACCAE142607AEA * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void iTween/<Start>c__Iterator2::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator2_Reset_mF7AE8223D33B82E1E0960031D6C9E608B708182D (U3CStartU3Ec__Iterator2_tC462A25075F74091AA9BAF281DACCAE142607AEA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartU3Ec__Iterator2_Reset_mF7AE8223D33B82E1E0960031D6C9E608B708182D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * L_0 = (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 *)il2cpp_codegen_object_new(NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mCD2944038AAC6677F82C713B8CB8C67CCF48EF10(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CStartU3Ec__Iterator2_Reset_mF7AE8223D33B82E1E0960031D6C9E608B708182D_RuntimeMethod_var);
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
// System.Void iTween/<TweenDelay>c__Iterator0::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ec__Iterator0__ctor_m61F0181DCC2E267AACC2E7A96BBC3FB1EEB6990D (U3CTweenDelayU3Ec__Iterator0_t159DF1F4577D8BF6567D61C498BB03DD9C1E18F6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean iTween/<TweenDelay>c__Iterator0::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CTweenDelayU3Ec__Iterator0_MoveNext_mFF4B5D0C74681CB47880C7935C1455F3B8B3C4BF (U3CTweenDelayU3Ec__Iterator0_t159DF1F4577D8BF6567D61C498BB03DD9C1E18F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTweenDelayU3Ec__Iterator0_MoveNext_mFF4B5D0C74681CB47880C7935C1455F3B8B3C4BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_005b;
			}
		}
	}
	{
		goto IL_0089;
	}

IL_0021:
	{
		iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * L_2 = __this->get_U24this_0();
		float L_3 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_delayStarted_17(L_3);
		iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * L_4 = __this->get_U24this_0();
		NullCheck(L_4);
		float L_5 = L_4->get_delay_10();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_6 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U24current_1(L_6);
		bool L_7 = __this->get_U24disposing_2();
		if (L_7)
		{
			goto IL_0056;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0056:
	{
		goto IL_008b;
	}

IL_005b:
	{
		iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * L_8 = __this->get_U24this_0();
		NullCheck(L_8);
		bool L_9 = L_8->get_wasPaused_22();
		if (!L_9)
		{
			goto IL_0082;
		}
	}
	{
		iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * L_10 = __this->get_U24this_0();
		NullCheck(L_10);
		L_10->set_wasPaused_22((bool)0);
		iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * L_11 = __this->get_U24this_0();
		NullCheck(L_11);
		iTween_TweenStart_mC99F9BC63BCABA07600DA82F7F7A9AB582C3FE15(L_11, /*hidden argument*/NULL);
	}

IL_0082:
	{
		__this->set_U24PC_3((-1));
	}

IL_0089:
	{
		return (bool)0;
	}

IL_008b:
	{
		return (bool)1;
	}
}
// System.Object iTween/<TweenDelay>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CTweenDelayU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1AC84619A3A2999B093FB73DDE00E9BBB1C2753E (U3CTweenDelayU3Ec__Iterator0_t159DF1F4577D8BF6567D61C498BB03DD9C1E18F6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object iTween/<TweenDelay>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CTweenDelayU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m97A46EED6BAFD3D490607C02EF2E21C69B44A3A1 (U3CTweenDelayU3Ec__Iterator0_t159DF1F4577D8BF6567D61C498BB03DD9C1E18F6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void iTween/<TweenDelay>c__Iterator0::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ec__Iterator0_Dispose_mF01D42A38519CE662407033AED9B23FBE10730BE (U3CTweenDelayU3Ec__Iterator0_t159DF1F4577D8BF6567D61C498BB03DD9C1E18F6 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void iTween/<TweenDelay>c__Iterator0::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CTweenDelayU3Ec__Iterator0_Reset_m83D4C99B52E38EFDB8AC479EF8062DDE1A2634F2 (U3CTweenDelayU3Ec__Iterator0_t159DF1F4577D8BF6567D61C498BB03DD9C1E18F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTweenDelayU3Ec__Iterator0_Reset_m83D4C99B52E38EFDB8AC479EF8062DDE1A2634F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * L_0 = (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 *)il2cpp_codegen_object_new(NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mCD2944038AAC6677F82C713B8CB8C67CCF48EF10(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CTweenDelayU3Ec__Iterator0_Reset_m83D4C99B52E38EFDB8AC479EF8062DDE1A2634F2_RuntimeMethod_var);
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
// System.Void iTween/<TweenRestart>c__Iterator1::.ctor()
extern "C" IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ec__Iterator1__ctor_mDD3F6E18436B6E988AF1FAB5ACDCACC10D4C1A66 (U3CTweenRestartU3Ec__Iterator1_t6F76088CD3A8FE045569162AF0322202AB17C7AA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean iTween/<TweenRestart>c__Iterator1::MoveNext()
extern "C" IL2CPP_METHOD_ATTR bool U3CTweenRestartU3Ec__Iterator1_MoveNext_mAC136F1B92BB9A18C43FEF93EF8D225DCAFCD5BA (U3CTweenRestartU3Ec__Iterator1_t6F76088CD3A8FE045569162AF0322202AB17C7AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTweenRestartU3Ec__Iterator1_MoveNext_mAC136F1B92BB9A18C43FEF93EF8D225DCAFCD5BA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0070;
			}
		}
	}
	{
		goto IL_008e;
	}

IL_0021:
	{
		iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * L_2 = __this->get_U24this_0();
		NullCheck(L_2);
		float L_3 = L_2->get_delay_10();
		if ((!(((float)L_3) > ((float)(0.0f)))))
		{
			goto IL_0070;
		}
	}
	{
		iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * L_4 = __this->get_U24this_0();
		float L_5 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_delayStarted_17(L_5);
		iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * L_6 = __this->get_U24this_0();
		NullCheck(L_6);
		float L_7 = L_6->get_delay_10();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_8 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U24current_1(L_8);
		bool L_9 = __this->get_U24disposing_2();
		if (L_9)
		{
			goto IL_006b;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_006b:
	{
		goto IL_0090;
	}

IL_0070:
	{
		iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * L_10 = __this->get_U24this_0();
		NullCheck(L_10);
		L_10->set_loop_20((bool)1);
		iTween_t54E36DA08C63FE450F6F76C34DCA69A839D38B6C * L_11 = __this->get_U24this_0();
		NullCheck(L_11);
		iTween_TweenStart_mC99F9BC63BCABA07600DA82F7F7A9AB582C3FE15(L_11, /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_008e:
	{
		return (bool)0;
	}

IL_0090:
	{
		return (bool)1;
	}
}
// System.Object iTween/<TweenRestart>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CTweenRestartU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m85DE66477D7C5257BBF0D8C2FCC0E4FD46C5627C (U3CTweenRestartU3Ec__Iterator1_t6F76088CD3A8FE045569162AF0322202AB17C7AA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object iTween/<TweenRestart>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C" IL2CPP_METHOD_ATTR RuntimeObject * U3CTweenRestartU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m51BB49B5073499FB6B7ADD689D00B874B74A817B (U3CTweenRestartU3Ec__Iterator1_t6F76088CD3A8FE045569162AF0322202AB17C7AA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void iTween/<TweenRestart>c__Iterator1::Dispose()
extern "C" IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ec__Iterator1_Dispose_mC905CFAAEEA115FA571FBE4145A96558A609BD4A (U3CTweenRestartU3Ec__Iterator1_t6F76088CD3A8FE045569162AF0322202AB17C7AA * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void iTween/<TweenRestart>c__Iterator1::Reset()
extern "C" IL2CPP_METHOD_ATTR void U3CTweenRestartU3Ec__Iterator1_Reset_m7EA44C472254BE150BD5654BC129ABBAB6D3F348 (U3CTweenRestartU3Ec__Iterator1_t6F76088CD3A8FE045569162AF0322202AB17C7AA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CTweenRestartU3Ec__Iterator1_Reset_m7EA44C472254BE150BD5654BC129ABBAB6D3F348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 * L_0 = (NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6 *)il2cpp_codegen_object_new(NotSupportedException_t8C86714BF66E55D3F33E200FA7C385BC13C7E3B6_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mCD2944038AAC6677F82C713B8CB8C67CCF48EF10(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CTweenRestartU3Ec__Iterator1_Reset_m7EA44C472254BE150BD5654BC129ABBAB6D3F348_RuntimeMethod_var);
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
extern "C"  void DelegatePInvokeWrapper_ApplyTween_t2F43618EC5A9D9BFE6D6E786124F756DFF5B8B0D (ApplyTween_t2F43618EC5A9D9BFE6D6E786124F756DFF5B8B0D * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void iTween/ApplyTween::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void ApplyTween__ctor_m22010B47C41F088ABD222030408132E6B2685ECF (ApplyTween_t2F43618EC5A9D9BFE6D6E786124F756DFF5B8B0D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void iTween/ApplyTween::Invoke()
extern "C" IL2CPP_METHOD_ATTR void ApplyTween_Invoke_m8F122AD80642964B466D1842E87AEC4895081E57 (ApplyTween_t2F43618EC5A9D9BFE6D6E786124F756DFF5B8B0D * __this, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ApplyTween_Invoke_m8F122AD80642964B466D1842E87AEC4895081E57((ApplyTween_t2F43618EC5A9D9BFE6D6E786124F756DFF5B8B0D *)__this->get_prev_9(), method);
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
		if (___parameterCount == 0)
		{
			// open
			typedef void (*FunctionPointerType) (const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetMethod);
		}
		else
		{
			// closed
			typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
	else
	{
		// closed
		if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
		{
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
		}
		else
		{
			typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
			((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
		}
	}
}
// System.IAsyncResult iTween/ApplyTween::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* ApplyTween_BeginInvoke_mC65ACB625825DE39C2515C81D3157BFC55E6FEC3 (ApplyTween_t2F43618EC5A9D9BFE6D6E786124F756DFF5B8B0D * __this, AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void iTween/ApplyTween::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR void ApplyTween_EndInvoke_m49FE93DD6C605AA8AD77C7C5E9FDB8D4A5CE8421 (ApplyTween_t2F43618EC5A9D9BFE6D6E786124F756DFF5B8B0D * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void iTween/CRSpline::.ctor(UnityEngine.Vector3[])
extern "C" IL2CPP_METHOD_ATTR void CRSpline__ctor_mC87029220E9C40A43CF7BD6032D6A960BC2D033A (CRSpline_t97F9B36C6A63623F5302473B3AD97A9437B9E4B5 * __this, Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___pts0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CRSpline__ctor_mC87029220E9C40A43CF7BD6032D6A960BC2D033A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m8BA07445967EE2CC15961AD3C16F25DB74506EA0(__this, /*hidden argument*/NULL);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = ___pts0;
		NullCheck(L_0);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_1 = (Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28*)SZArrayNew(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28_il2cpp_TypeInfo_var, (uint32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))));
		__this->set_pts_0(L_1);
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_2 = ___pts0;
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_3 = __this->get_pts_0();
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_4 = ___pts0;
		NullCheck(L_4);
		Array_Copy_mD689E98055DD68EF7F0D889EC09CF0A1C79C2020((RuntimeArray *)(RuntimeArray *)L_2, (RuntimeArray *)(RuntimeArray *)L_3, (((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))), /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector3 iTween/CRSpline::Interp(System.Single)
extern "C" IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  CRSpline_Interp_m23C690A82403558017D6D202FEDD37AE1188B894 (CRSpline_t97F9B36C6A63623F5302473B3AD97A9437B9E4B5 * __this, float ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CRSpline_Interp_m23C690A82403558017D6D202FEDD37AE1188B894_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_0 = __this->get_pts_0();
		NullCheck(L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)3));
		float L_1 = ___t0;
		int32_t L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_3 = Mathf_FloorToInt_m0C42B64571CE92A738AD7BB82388CE12FBE7457C(((float)il2cpp_codegen_multiply((float)L_1, (float)(((float)((float)L_2))))), /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		int32_t L_5 = Mathf_Min_m1A2CC204E361AE13C329B6535165179798D3313A(L_3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = ___t0;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_6, (float)(((float)((float)L_7))))), (float)(((float)((float)L_8)))));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_9 = __this->get_pts_0();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		V_3 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_11 = __this->get_pts_0();
		int32_t L_12 = V_1;
		NullCheck(L_11);
		V_4 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1))))));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_13 = __this->get_pts_0();
		int32_t L_14 = V_1;
		NullCheck(L_13);
		V_5 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)2))))));
		Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* L_15 = __this->get_pts_0();
		int32_t L_16 = V_1;
		NullCheck(L_15);
		V_6 = (*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)3))))));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_17, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_19 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((3.0f), L_19, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_18, L_20, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((3.0f), L_22, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_21, L_23, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_24, L_25, /*hidden argument*/NULL);
		float L_27 = V_2;
		float L_28 = V_2;
		float L_29 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_26, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_27, (float)L_28)), (float)L_29)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((2.0f), L_31, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((5.0f), L_33, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_32, L_34, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((4.0f), L_36, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_38 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_35, L_37, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = V_6;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_38, L_39, /*hidden argument*/NULL);
		float L_41 = V_2;
		float L_42 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_43 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_40, ((float)il2cpp_codegen_multiply((float)L_41, (float)L_42)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_30, L_43, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45 = V_3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_46 = Vector3_op_UnaryNegation_m2AFBBF22801F9BCA5A4EBE642A29F433FE1339C2(L_45, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_47 = V_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_48 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_46, L_47, /*hidden argument*/NULL);
		float L_49 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_48, L_49, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_51 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_44, L_50, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_52 = V_4;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((2.0f), L_52, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_54 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_51, L_53, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_55 = Vector3_op_Multiply_mC7A8D6FD19E58DBF98E30D454F59F142F7BF8839((0.5f), L_54, /*hidden argument*/NULL);
		return L_55;
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
// System.Void iTween/Defaults::.cctor()
extern "C" IL2CPP_METHOD_ATTR void Defaults__cctor_m1032CDB1C5BC6177516330990DC0D2C01182BAC6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Defaults__cctor_m1032CDB1C5BC6177516330990DC0D2C01182BAC6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_il2cpp_TypeInfo_var))->set_time_0((1.0f));
		((Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_il2cpp_TypeInfo_var))->set_delay_1((0.0f));
		((Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_il2cpp_TypeInfo_var))->set_namedColorValue_2(0);
		((Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_il2cpp_TypeInfo_var))->set_loopType_3(0);
		((Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_il2cpp_TypeInfo_var))->set_easeType_4(((int32_t)16));
		((Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_il2cpp_TypeInfo_var))->set_lookSpeed_5((3.0f));
		((Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_il2cpp_TypeInfo_var))->set_isLocal_6((bool)0);
		((Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_il2cpp_TypeInfo_var))->set_space_7(1);
		((Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_il2cpp_TypeInfo_var))->set_orientToPath_8((bool)0);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		((Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_il2cpp_TypeInfo_var))->set_color_9(L_0);
		((Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_il2cpp_TypeInfo_var))->set_updateTimePercentage_10((0.05f));
		float L_1 = ((Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_il2cpp_TypeInfo_var))->get_updateTimePercentage_10();
		((Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_il2cpp_TypeInfo_var))->set_updateTime_11(((float)il2cpp_codegen_multiply((float)(1.0f), (float)L_1)));
		((Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_il2cpp_TypeInfo_var))->set_lookAhead_12((0.05f));
		((Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_il2cpp_TypeInfo_var))->set_useRealTime_13((bool)0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		((Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_StaticFields*)il2cpp_codegen_static_fields_for(Defaults_t9FCE65F0316E689ABF6EB6C0BF6C1FEC0C2DA68D_il2cpp_TypeInfo_var))->set_up_14(L_2);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  float DelegatePInvokeWrapper_EasingFunction_t28872DBE2F8634DAB27BEBF112376EEC2238A934 (EasingFunction_t28872DBE2F8634DAB27BEBF112376EEC2238A934 * __this, float ___start0, float ___end1, float ___Value2, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(float, float, float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___start0, ___end1, ___Value2);

	return returnValue;
}
// System.Void iTween/EasingFunction::.ctor(System.Object,System.IntPtr)
extern "C" IL2CPP_METHOD_ATTR void EasingFunction__ctor_m0CB81C694BB9E548B1A8DDE66BA4CB29F33AB9EE (EasingFunction_t28872DBE2F8634DAB27BEBF112376EEC2238A934 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Single iTween/EasingFunction::Invoke(System.Single,System.Single,System.Single)
extern "C" IL2CPP_METHOD_ATTR float EasingFunction_Invoke_m30FE23D0BF66551995660A52EFD15096C345D71B (EasingFunction_t28872DBE2F8634DAB27BEBF112376EEC2238A934 * __this, float ___start0, float ___end1, float ___Value2, const RuntimeMethod* method)
{
	float result = 0.0f;
	if(__this->get_prev_9() != NULL)
	{
		EasingFunction_Invoke_m30FE23D0BF66551995660A52EFD15096C345D71B((EasingFunction_t28872DBE2F8634DAB27BEBF112376EEC2238A934 *)__this->get_prev_9(), ___start0, ___end1, ___Value2, method);
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
		if (___parameterCount == 3)
		{
			// open
			typedef float (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(___start0, ___end1, ___Value2, targetMethod);
		}
		else
		{
			// closed
			typedef float (*FunctionPointerType) (void*, float, float, float, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___start0, ___end1, ___Value2, targetMethod);
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
					typedef float (*FunctionPointerType) (float, float, float, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___start0, ___end1, ___Value2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker3< float, float, float, float >::Invoke(targetMethod, targetThis, ___start0, ___end1, ___Value2);
					else
						result = GenericVirtFuncInvoker3< float, float, float, float >::Invoke(targetMethod, targetThis, ___start0, ___end1, ___Value2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker3< float, float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___start0, ___end1, ___Value2);
					else
						result = VirtFuncInvoker3< float, float, float, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___start0, ___end1, ___Value2);
				}
			}
		}
		else
		{
			typedef float (*FunctionPointerType) (void*, float, float, float, const RuntimeMethod*);
			result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___start0, ___end1, ___Value2, targetMethod);
		}
	}
	return result;
}
// System.IAsyncResult iTween/EasingFunction::BeginInvoke(System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
extern "C" IL2CPP_METHOD_ATTR RuntimeObject* EasingFunction_BeginInvoke_m3878FCBE835FEE5289A110EACCEA097309987B8B (EasingFunction_t28872DBE2F8634DAB27BEBF112376EEC2238A934 * __this, float ___start0, float ___end1, float ___Value2, AsyncCallback_t74ABD1277F711E7FBDCB00E169A63DEFD39E86A2 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EasingFunction_BeginInvoke_m3878FCBE835FEE5289A110EACCEA097309987B8B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &___start0);
	__d_args[1] = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &___end1);
	__d_args[2] = Box(Single_tF2613CF3F3AF0E8BEBC3CE8AD41479C44E6075DB_il2cpp_TypeInfo_var, &___Value2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Single iTween/EasingFunction::EndInvoke(System.IAsyncResult)
extern "C" IL2CPP_METHOD_ATTR float EasingFunction_EndInvoke_mB6387F5E0C23FE90C26603D1F6EC3506877891F8 (EasingFunction_t28872DBE2F8634DAB27BEBF112376EEC2238A934 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
