﻿#include "il2cpp-config.h"

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
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<System.Int32Enum>
struct List_1_t116A3B8CE581BED3D4552A7F22FE553557ADC4C5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>
struct List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852;
// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>
struct List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8;
// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct List_1_tDECBF737A96DF978685F6386C44B9284190E43C7;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32Enum[]
struct Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.SpatialTracking.TrackedPoseDriver
struct TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A;
// UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose[]
struct TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653;
// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData[]
struct PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.XR.XRNodeState[]
struct XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06;

IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputTracking_t96AA6E2EC9B998FF199918D95164D23DA6F2DFE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDECBF737A96DF978685F6386C44B9284190E43C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrackedPose_tBECB0ED5440415EE75C061C0588F16CF0D8E5DFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06ECA142B442A4AAD1AB59248E25AE5B6EB0E748;
IL2CPP_EXTERN_C String_t* _stringLiteral2D8AFD1CBFD68602614FCEB9065FBEA5B60D943F;
IL2CPP_EXTERN_C String_t* _stringLiteral72A5C553060E7B472521D1B134E4D021BBB9C68F;
IL2CPP_EXTERN_C String_t* _stringLiteral7A9ECCC546664AE211091E9EC5A813273BFAB503;
IL2CPP_EXTERN_C String_t* _stringLiteral92DCA8085248BBC8E8F76D7FB7B3FDDD46C06956;
IL2CPP_EXTERN_C String_t* _stringLiteralB0B90F9C11BDDD08E75F17A56C98197AF8DA47D3;
IL2CPP_EXTERN_C String_t* _stringLiteralE51A66A0CA80F2F4B6E7F98F29144ECE6DD62294;
IL2CPP_EXTERN_C String_t* _stringLiteralE5FFD15BE7069312E3D9DE21089B1501189277A6;
IL2CPP_EXTERN_C String_t* _stringLiteralF77B3A05470715B48013C55D80451D8845D2FBBD;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCCEE0B822F77303900869CC25CD61CC1C77B9A87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mAA9CB89DC3AB8B1BC14237726334B89622000BB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC65B614E68563B995104790217F26BD1718F5A8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2BD89009A65DF4726A0DA038D223255A925F89B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m8922EA749C64F6B36CAAED9B19FCD053926C4425_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m129FDCACD31A6DEE68213FFDA201A49A48E566DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDD094D5EE81E08619C17AED19D0187512A341C88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF683871BF66437F35BC742416461D3B01E27B7B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1C2D877064BDFCD44B60B6690D7BC0F46B50668D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mE03E3A8C08F8163A92CBD898FEED176613A79530_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m50F5F35B6806D6A42DF46C056E00C24A0656F424_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mBB3AD327026A1E1AC5BDB496A359A302E2BD1BF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t PoseDataSource_GetDataFromSource_mAA2A7FD7C04B2FF111919440F46D442B731BB1B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PoseDataSource_GetNodePoseData_m8A6FC86D6C51F89A03EA9E25F2140BC2FC850B71_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PoseDataSource_TryGetTangoPose_m4BE7616120F008A98972279DA7A40C71D91A189E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PoseDataSource__cctor_mCF69D2C3BA7D5D48420A6E65C8C90B0CB4511AC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackedPoseDriverDataDescription__cctor_mAA90D171ADF2B121802C7C1C22CA577334397F08_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackedPoseDriver_GetPoseData_m1EA2912CCD25C1EA9B9DEC9D66C75945E53D5F09_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackedPoseDriver_HasStereoCamera_m7F486388D53DCA5B04F48AC4EEB696143B83A0B6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackedPoseDriver_OnDisable_m7916DC8D7526734AC5B61E9C436B30113C001C0D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackedPoseDriver_OnEnable_mE80BD514925D6102D19C8FC82AADB8A1D066C117_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackedPoseDriver_PerformUpdate_mA52E28882E16945B54EDEAC7E35D2A5BF58E4EF1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TrackedPoseDriver_SetPoseSource_mE678556F7C4F9EF0298D83C430F27EFC0C1A2D7C_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t61085D0352A59B7105C361DB16CFAD5E8986AE2E 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<System.Int32Enum>
struct  List_1_t116A3B8CE581BED3D4552A7F22FE553557ADC4C5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t116A3B8CE581BED3D4552A7F22FE553557ADC4C5, ____items_1)); }
	inline Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* get__items_1() const { return ____items_1; }
	inline Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t116A3B8CE581BED3D4552A7F22FE553557ADC4C5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t116A3B8CE581BED3D4552A7F22FE553557ADC4C5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t116A3B8CE581BED3D4552A7F22FE553557ADC4C5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t116A3B8CE581BED3D4552A7F22FE553557ADC4C5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t116A3B8CE581BED3D4552A7F22FE553557ADC4C5_StaticFields, ____emptyArray_5)); }
	inline Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____items_1)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose>
struct  List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852, ____items_1)); }
	inline TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653* get__items_1() const { return ____items_1; }
	inline TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852_StaticFields, ____emptyArray_5)); }
	inline TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TrackedPoseU5BU5D_tD1302A49D1A61E5B6ACEF3C4401746515329B653* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData>
struct  List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8, ____items_1)); }
	inline PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24* get__items_1() const { return ____items_1; }
	inline PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8_StaticFields, ____emptyArray_5)); }
	inline PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>
struct  List_1_tDECBF737A96DF978685F6386C44B9284190E43C7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7, ____items_1)); }
	inline XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* get__items_1() const { return ____items_1; }
	inline XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDECBF737A96DF978685F6386C44B9284190E43C7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7_StaticFields, ____emptyArray_5)); }
	inline XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRNodeStateU5BU5D_t863380D0759FCB9473CE1A9CBCA16224A84D3D06* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.SpatialTracking.PoseDataSource
struct  PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657  : public RuntimeObject
{
public:

public:
};

struct PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState> UnityEngine.SpatialTracking.PoseDataSource::nodeStates
	List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * ___nodeStates_0;

public:
	inline static int32_t get_offset_of_nodeStates_0() { return static_cast<int32_t>(offsetof(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_StaticFields, ___nodeStates_0)); }
	inline List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * get_nodeStates_0() const { return ___nodeStates_0; }
	inline List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 ** get_address_of_nodeStates_0() { return &___nodeStates_0; }
	inline void set_nodeStates_0(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * value)
	{
		___nodeStates_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodeStates_0), (void*)value);
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription
struct  TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA  : public RuntimeObject
{
public:

public:
};

struct TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription::DeviceData
	List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * ___DeviceData_0;

public:
	inline static int32_t get_offset_of_DeviceData_0() { return static_cast<int32_t>(offsetof(TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_StaticFields, ___DeviceData_0)); }
	inline List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * get_DeviceData_0() const { return ___DeviceData_0; }
	inline List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 ** get_address_of_DeviceData_0() { return &___DeviceData_0; }
	inline void set_DeviceData_0(List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * value)
	{
		___DeviceData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeviceData_0), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData
struct  PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE 
{
public:
	// System.Collections.Generic.List`1<System.String> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData::PoseNames
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___PoseNames_0;
	// System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose> UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData::Poses
	List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * ___Poses_1;

public:
	inline static int32_t get_offset_of_PoseNames_0() { return static_cast<int32_t>(offsetof(PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE, ___PoseNames_0)); }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * get_PoseNames_0() const { return ___PoseNames_0; }
	inline List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 ** get_address_of_PoseNames_0() { return &___PoseNames_0; }
	inline void set_PoseNames_0(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * value)
	{
		___PoseNames_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PoseNames_0), (void*)value);
	}

	inline static int32_t get_offset_of_Poses_1() { return static_cast<int32_t>(offsetof(PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE, ___Poses_1)); }
	inline List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * get_Poses_1() const { return ___Poses_1; }
	inline List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 ** get_address_of_Poses_1() { return &___Poses_1; }
	inline void set_Poses_1(List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * value)
	{
		___Poses_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Poses_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_pinvoke
{
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___PoseNames_0;
	List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * ___Poses_1;
};
// Native definition for COM marshalling of UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
struct PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_com
{
	List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * ___PoseNames_0;
	List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * ___Poses_1;
};

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
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

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
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
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

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Int32Enum
struct  Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t6312CE4586C17FE2E2E513D2E7655B574F10FDCD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


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

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.SpatialTracking.PoseDataFlags
struct  PoseDataFlags_t89C5BF634AE03CFA5228748718F72FAA04A103C7 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.PoseDataFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PoseDataFlags_t89C5BF634AE03CFA5228748718F72FAA04A103C7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType
struct  DeviceType_tC20CDCE75CB9BCB7EEF098A83B16071A0C86D198 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceType_tC20CDCE75CB9BCB7EEF098A83B16071A0C86D198, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose
struct  TrackedPose_tBECB0ED5440415EE75C061C0588F16CF0D8E5DFA 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackedPose_tBECB0ED5440415EE75C061C0588F16CF0D8E5DFA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackingType
struct  TrackingType_t54A99FD46DD997F9BDD94EB51082AEA72640B28A 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver_TrackingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingType_t54A99FD46DD997F9BDD94EB51082AEA72640B28A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SpatialTracking.TrackedPoseDriver_UpdateType
struct  UpdateType_t2E40BE3577C3CE3CB868167C75BA759A2B76BB10 
{
public:
	// System.Int32 UnityEngine.SpatialTracking.TrackedPoseDriver_UpdateType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UpdateType_t2E40BE3577C3CE3CB868167C75BA759A2B76BB10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.AvailableTrackingData
struct  AvailableTrackingData_tF1140FC398AFB5CA7E9FBBBC8ECB242E91E86AAD 
{
public:
	// System.Int32 UnityEngine.XR.AvailableTrackingData::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AvailableTrackingData_tF1140FC398AFB5CA7E9FBBBC8ECB242E91E86AAD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.Tango.PoseStatus
struct  PoseStatus_t679095D526AF2819322E3199BC816C544C2942AA 
{
public:
	// System.Int32 UnityEngine.XR.Tango.PoseStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PoseStatus_t679095D526AF2819322E3199BC816C544C2942AA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.XRNode
struct  XRNode_tC8909A28AC7B1B4D71839715DDC1011895BA5F5F 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(XRNode_tC8909A28AC7B1B4D71839715DDC1011895BA5F5F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.XR.Tango.PoseData
struct  PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638 
{
public:
	// System.Double UnityEngine.XR.Tango.PoseData::orientation_x
	double ___orientation_x_0;
	// System.Double UnityEngine.XR.Tango.PoseData::orientation_y
	double ___orientation_y_1;
	// System.Double UnityEngine.XR.Tango.PoseData::orientation_z
	double ___orientation_z_2;
	// System.Double UnityEngine.XR.Tango.PoseData::orientation_w
	double ___orientation_w_3;
	// System.Double UnityEngine.XR.Tango.PoseData::translation_x
	double ___translation_x_4;
	// System.Double UnityEngine.XR.Tango.PoseData::translation_y
	double ___translation_y_5;
	// System.Double UnityEngine.XR.Tango.PoseData::translation_z
	double ___translation_z_6;
	// UnityEngine.XR.Tango.PoseStatus UnityEngine.XR.Tango.PoseData::statusCode
	int32_t ___statusCode_7;

public:
	inline static int32_t get_offset_of_orientation_x_0() { return static_cast<int32_t>(offsetof(PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638, ___orientation_x_0)); }
	inline double get_orientation_x_0() const { return ___orientation_x_0; }
	inline double* get_address_of_orientation_x_0() { return &___orientation_x_0; }
	inline void set_orientation_x_0(double value)
	{
		___orientation_x_0 = value;
	}

	inline static int32_t get_offset_of_orientation_y_1() { return static_cast<int32_t>(offsetof(PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638, ___orientation_y_1)); }
	inline double get_orientation_y_1() const { return ___orientation_y_1; }
	inline double* get_address_of_orientation_y_1() { return &___orientation_y_1; }
	inline void set_orientation_y_1(double value)
	{
		___orientation_y_1 = value;
	}

	inline static int32_t get_offset_of_orientation_z_2() { return static_cast<int32_t>(offsetof(PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638, ___orientation_z_2)); }
	inline double get_orientation_z_2() const { return ___orientation_z_2; }
	inline double* get_address_of_orientation_z_2() { return &___orientation_z_2; }
	inline void set_orientation_z_2(double value)
	{
		___orientation_z_2 = value;
	}

	inline static int32_t get_offset_of_orientation_w_3() { return static_cast<int32_t>(offsetof(PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638, ___orientation_w_3)); }
	inline double get_orientation_w_3() const { return ___orientation_w_3; }
	inline double* get_address_of_orientation_w_3() { return &___orientation_w_3; }
	inline void set_orientation_w_3(double value)
	{
		___orientation_w_3 = value;
	}

	inline static int32_t get_offset_of_translation_x_4() { return static_cast<int32_t>(offsetof(PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638, ___translation_x_4)); }
	inline double get_translation_x_4() const { return ___translation_x_4; }
	inline double* get_address_of_translation_x_4() { return &___translation_x_4; }
	inline void set_translation_x_4(double value)
	{
		___translation_x_4 = value;
	}

	inline static int32_t get_offset_of_translation_y_5() { return static_cast<int32_t>(offsetof(PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638, ___translation_y_5)); }
	inline double get_translation_y_5() const { return ___translation_y_5; }
	inline double* get_address_of_translation_y_5() { return &___translation_y_5; }
	inline void set_translation_y_5(double value)
	{
		___translation_y_5 = value;
	}

	inline static int32_t get_offset_of_translation_z_6() { return static_cast<int32_t>(offsetof(PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638, ___translation_z_6)); }
	inline double get_translation_z_6() const { return ___translation_z_6; }
	inline double* get_address_of_translation_z_6() { return &___translation_z_6; }
	inline void set_translation_z_6(double value)
	{
		___translation_z_6 = value;
	}

	inline static int32_t get_offset_of_statusCode_7() { return static_cast<int32_t>(offsetof(PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638, ___statusCode_7)); }
	inline int32_t get_statusCode_7() const { return ___statusCode_7; }
	inline int32_t* get_address_of_statusCode_7() { return &___statusCode_7; }
	inline void set_statusCode_7(int32_t value)
	{
		___statusCode_7 = value;
	}
};


// UnityEngine.XR.XRNodeState
struct  XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A 
{
public:
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_AvailableFields_1() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_AvailableFields_1)); }
	inline int32_t get_m_AvailableFields_1() const { return ___m_AvailableFields_1; }
	inline int32_t* get_address_of_m_AvailableFields_1() { return &___m_AvailableFields_1; }
	inline void set_m_AvailableFields_1(int32_t value)
	{
		___m_AvailableFields_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Position_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_3() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Rotation_3)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_Rotation_3() const { return ___m_Rotation_3; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_Rotation_3() { return &___m_Rotation_3; }
	inline void set_m_Rotation_3(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_Rotation_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Velocity_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_AngularVelocity_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Acceleration_6() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Acceleration_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Acceleration_6() const { return ___m_Acceleration_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Acceleration_6() { return &___m_Acceleration_6; }
	inline void set_m_Acceleration_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Acceleration_6 = value;
	}

	inline static int32_t get_offset_of_m_AngularAcceleration_7() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_AngularAcceleration_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AngularAcceleration_7() const { return ___m_AngularAcceleration_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AngularAcceleration_7() { return &___m_AngularAcceleration_7; }
	inline void set_m_AngularAcceleration_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AngularAcceleration_7 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_8() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_Tracked_8)); }
	inline int32_t get_m_Tracked_8() const { return ___m_Tracked_8; }
	inline int32_t* get_address_of_m_Tracked_8() { return &___m_Tracked_8; }
	inline void set_m_Tracked_8(int32_t value)
	{
		___m_Tracked_8 = value;
	}

	inline static int32_t get_offset_of_m_UniqueID_9() { return static_cast<int32_t>(offsetof(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A, ___m_UniqueID_9)); }
	inline uint64_t get_m_UniqueID_9() const { return ___m_UniqueID_9; }
	inline uint64_t* get_address_of_m_UniqueID_9() { return &___m_UniqueID_9; }
	inline void set_m_UniqueID_9(uint64_t value)
	{
		___m_UniqueID_9 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.XR.XRNodeState>
struct  Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844, ___list_0)); }
	inline List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * get_list_0() const { return ___list_0; }
	inline List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844, ___current_3)); }
	inline XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  get_current_3() const { return ___current_3; }
	inline XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  value)
	{
		___current_3 = value;
	}
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct  UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Experimental.XR.Interaction.BasePoseProvider
struct  BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.SpatialTracking.TrackedPoseDriver
struct  TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::m_Device
	int32_t ___m_Device_4;
	// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseSource
	int32_t ___m_PoseSource_5;
	// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::m_PoseProviderComponent
	BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * ___m_PoseProviderComponent_6;
	// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::m_TrackingType
	int32_t ___m_TrackingType_7;
	// UnityEngine.SpatialTracking.TrackedPoseDriver_UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::m_UpdateType
	int32_t ___m_UpdateType_8;
	// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::m_UseRelativeTransform
	bool ___m_UseRelativeTransform_9;
	// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::m_OriginPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_OriginPose_10;

public:
	inline static int32_t get_offset_of_m_Device_4() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_Device_4)); }
	inline int32_t get_m_Device_4() const { return ___m_Device_4; }
	inline int32_t* get_address_of_m_Device_4() { return &___m_Device_4; }
	inline void set_m_Device_4(int32_t value)
	{
		___m_Device_4 = value;
	}

	inline static int32_t get_offset_of_m_PoseSource_5() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_PoseSource_5)); }
	inline int32_t get_m_PoseSource_5() const { return ___m_PoseSource_5; }
	inline int32_t* get_address_of_m_PoseSource_5() { return &___m_PoseSource_5; }
	inline void set_m_PoseSource_5(int32_t value)
	{
		___m_PoseSource_5 = value;
	}

	inline static int32_t get_offset_of_m_PoseProviderComponent_6() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_PoseProviderComponent_6)); }
	inline BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * get_m_PoseProviderComponent_6() const { return ___m_PoseProviderComponent_6; }
	inline BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B ** get_address_of_m_PoseProviderComponent_6() { return &___m_PoseProviderComponent_6; }
	inline void set_m_PoseProviderComponent_6(BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * value)
	{
		___m_PoseProviderComponent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PoseProviderComponent_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackingType_7() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_TrackingType_7)); }
	inline int32_t get_m_TrackingType_7() const { return ___m_TrackingType_7; }
	inline int32_t* get_address_of_m_TrackingType_7() { return &___m_TrackingType_7; }
	inline void set_m_TrackingType_7(int32_t value)
	{
		___m_TrackingType_7 = value;
	}

	inline static int32_t get_offset_of_m_UpdateType_8() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_UpdateType_8)); }
	inline int32_t get_m_UpdateType_8() const { return ___m_UpdateType_8; }
	inline int32_t* get_address_of_m_UpdateType_8() { return &___m_UpdateType_8; }
	inline void set_m_UpdateType_8(int32_t value)
	{
		___m_UpdateType_8 = value;
	}

	inline static int32_t get_offset_of_m_UseRelativeTransform_9() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_UseRelativeTransform_9)); }
	inline bool get_m_UseRelativeTransform_9() const { return ___m_UseRelativeTransform_9; }
	inline bool* get_address_of_m_UseRelativeTransform_9() { return &___m_UseRelativeTransform_9; }
	inline void set_m_UseRelativeTransform_9(bool value)
	{
		___m_UseRelativeTransform_9 = value;
	}

	inline static int32_t get_offset_of_m_OriginPose_10() { return static_cast<int32_t>(offsetof(TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A, ___m_OriginPose_10)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_OriginPose_10() const { return ___m_OriginPose_10; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_OriginPose_10() { return &___m_OriginPose_10; }
	inline void set_m_OriginPose_10(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_OriginPose_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription_PoseData[]
struct PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  m_Items[1];

public:
	inline PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___PoseNames_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Poses_1), (void*)NULL);
		#endif
	}
	inline PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___PoseNames_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Poses_1), (void*)NULL);
		#endif
	}
};
// System.Int32Enum[]
struct Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844  List_1_GetEnumerator_m8922EA749C64F6B36CAAED9B19FCD053926C4425_gshared (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  Enumerator_get_Current_mC65B614E68563B995104790217F26BD1718F5A8A_gshared_inline (Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mAA9CB89DC3AB8B1BC14237726334B89622000BB7_gshared (Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCCEE0B822F77303900869CC25CD61CC1C77B9A87_gshared (Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDD094D5EE81E08619C17AED19D0187512A341C88_gshared (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE03E3A8C08F8163A92CBD898FEED176613A79530_gshared_inline (List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  List_1_get_Item_m50F5F35B6806D6A42DF46C056E00C24A0656F424_gshared_inline (List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Int32Enum>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mCFD41F6E4658708CB4B57EC8A9F35DACFAED19DB_gshared_inline (List_1_t116A3B8CE581BED3D4552A7F22FE553557ADC4C5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Int32Enum>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m6CF108FE58A5B62BAD55E3D1972B735084A7A587_gshared_inline (List_1_t116A3B8CE581BED3D4552A7F22FE553557ADC4C5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m129FDCACD31A6DEE68213FFDA201A49A48E566DF_gshared (List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mDA58E61666905CF6A675FFC4ECC2D3E5261C47ED_gshared (List_1_t116A3B8CE581BED3D4552A7F22FE553557ADC4C5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Int32Enum>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m848B0A68E1AF949EA5CDDB579E8F69CE5DFB4631_gshared (List_1_t116A3B8CE581BED3D4552A7F22FE553557ADC4C5 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m2BD89009A65DF4726A0DA038D223255A925F89B3_gshared (List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * __this, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  ___item0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputTracking::GetNodeStates(System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputTracking_GetNodeStates_m1D99635AA169927E5C00399B44D798F08647823B (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * ___nodeStates0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::GetEnumerator()
inline Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844  List_1_GetEnumerator_m8922EA749C64F6B36CAAED9B19FCD053926C4425 (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844  (*) (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 *, const RuntimeMethod*))List_1_GetEnumerator_m8922EA749C64F6B36CAAED9B19FCD053926C4425_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::get_Current()
inline XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  Enumerator_get_Current_mC65B614E68563B995104790217F26BD1718F5A8A_inline (Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844 * __this, const RuntimeMethod* method)
{
	return ((  XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  (*) (Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844 *, const RuntimeMethod*))Enumerator_get_Current_mC65B614E68563B995104790217F26BD1718F5A8A_gshared_inline)(__this, method);
}
// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::get_nodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRNodeState_get_nodeType_m40ED41E75B0CD73974B0E6812AA33A3D69495AC7 (XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetPosition_mD3F619954C89FF16045960AAEF4D5218E17B6E8C (XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRNodeState::TryGetRotation(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRNodeState_TryGetRotation_m2AE7B2C4907BB94036A74133FEE1389E273D38B9 (XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::MoveNext()
inline bool Enumerator_MoveNext_mAA9CB89DC3AB8B1BC14237726334B89622000BB7 (Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844 *, const RuntimeMethod*))Enumerator_MoveNext_mAA9CB89DC3AB8B1BC14237726334B89622000BB7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRNodeState>::Dispose()
inline void Enumerator_Dispose_mCCEE0B822F77303900869CC25CD61CC1C77B9A87 (Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844 *, const RuntimeMethod*))Enumerator_Dispose_mCCEE0B822F77303900869CC25CD61CC1C77B9A87_gshared)(__this, method);
}
// UnityEngine.Pose UnityEngine.Pose::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF (const RuntimeMethod* method);
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.PoseDataSource::GetNodePoseData(UnityEngine.XR.XRNode,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PoseDataSource_GetNodePoseData_m8A6FC86D6C51F89A03EA9E25F2140BC2FC850B71 (int32_t ___node0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___resultPose1, const RuntimeMethod* method);
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.PoseDataSource::TryGetTangoPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PoseDataSource_TryGetTangoPose_m4BE7616120F008A98972279DA7A40C71D91A189E (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___pose0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB (String_t* ___format0, ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Tango.TangoInputTracking::TryGetPoseAtTime(UnityEngine.XR.Tango.PoseData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TangoInputTracking_TryGetPoseAtTime_m8AA6B8CEADE806F981A62E2928425265987F1C3F (PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638 * ___pose0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.Tango.PoseData::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  PoseData_get_position_m356B0853C5A393D0748E95FCBEF3BFDA9AC46D9B (PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.XR.Tango.PoseData::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  PoseData_get_rotation_m8784EAC91FE13E8909E972A0AD9B9A9B9CAA2981 (PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRNodeState>::.ctor()
inline void List_1__ctor_mDD094D5EE81E08619C17AED19D0187512A341C88 (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 *, const RuntimeMethod*))List_1__ctor_mDD094D5EE81E08619C17AED19D0187512A341C88_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Count()
inline int32_t List_1_get_Count_mE03E3A8C08F8163A92CBD898FEED176613A79530_inline (List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 *, const RuntimeMethod*))List_1_get_Count_mE03E3A8C08F8163A92CBD898FEED176613A79530_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::get_Item(System.Int32)
inline PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  List_1_get_Item_m50F5F35B6806D6A42DF46C056E00C24A0656F424_inline (List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  (*) (List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 *, int32_t, const RuntimeMethod*))List_1_get_Item_m50F5F35B6806D6A42DF46C056E00C24A0656F424_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mBB3AD327026A1E1AC5BDB496A359A302E2BD1BF1_inline (List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 *, int32_t, const RuntimeMethod*))List_1_get_Item_mCFD41F6E4658708CB4B57EC8A9F35DACFAED19DB_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_deviceType(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_deviceType_mA2CE392F51544958D830D00E6AF80F83144ABAEF_inline (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_poseSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseSource_mB13187BCD2FAA8266A788794330AA9D6F92FAB44_inline (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::get_Count()
inline int32_t List_1_get_Count_m1C2D877064BDFCD44B60B6690D7BC0F46B50668D_inline (List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 *, const RuntimeMethod*))List_1_get_Count_m6CF108FE58A5B62BAD55E3D1972B735084A7A587_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.PoseDataSource::GetDataFromSource(UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PoseDataSource_GetDataFromSource_mAA2A7FD7C04B2FF111919440F46D442B731BB1B6 (int32_t ___poseSource0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___resultPose1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::CacheLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_CacheLocalPosition_m5D363D95D74FEA3FC76997DEBF429E21B59C0BC6 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::add_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_onBeforeRender_mC00950B8FC35DB9048121D43BE8F69D55BCB4723 (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::ResetToCachedLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_ResetToCachedLocalPosition_mC1435C036A613596E3EBD9C59FD6269E0FB21C10 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::remove_onBeforeRender(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_remove_onBeforeRender_m4601D9804BC86F64FB071348EC1CF448C55CBA3B (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.Pose::GetTransformedBy(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  Pose_GetTransformedBy_m494B58D30A020A636F2B457F9042D4423F7A534A (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___lhs0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m15E3130603CE5400743CCCDEE7600FB9EEFAE5C0_gshared)(__this, method);
}
// System.Boolean UnityEngine.Camera::get_stereoEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Camera_get_stereoEnabled_m24FC636CCDA9B771F2A975C4F5DB561454357856 (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, const RuntimeMethod* method);
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.TrackedPoseDriver::GetPoseData(UnityEngine.SpatialTracking.TrackedPoseDriver/DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_GetPoseData_m1EA2912CCD25C1EA9B9DEC9D66C75945E53D5F09 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___device0, int32_t ___poseSource1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___resultPose2, const RuntimeMethod* method);
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::TransformPoseByOriginIfNeeded(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  TrackedPoseDriver_TransformPoseByOriginIfNeeded_mF15283F4BC40D15DF20B5BAF1A900B1004BD987B (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::.ctor()
inline void List_1__ctor_m129FDCACD31A6DEE68213FFDA201A49A48E566DF (List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 *, const RuntimeMethod*))List_1__ctor_m129FDCACD31A6DEE68213FFDA201A49A48E566DF_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_mA348FA1140766465189459D25B01EB179001DE83 (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *, String_t*, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::.ctor()
inline void List_1__ctor_mF683871BF66437F35BC742416461D3B01E27B7B3 (List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 *, const RuntimeMethod*))List_1__ctor_mDA58E61666905CF6A675FFC4ECC2D3E5261C47ED_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriver/TrackedPose>::Add(!0)
inline void List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F (List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 *, int32_t, const RuntimeMethod*))List_1_Add_m848B0A68E1AF949EA5CDDB579E8F69CE5DFB4631_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData>::Add(!0)
inline void List_1_Add_m2BD89009A65DF4726A0DA038D223255A925F89B3 (List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * __this, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 *, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE , const RuntimeMethod*))List_1_Add_m2BD89009A65DF4726A0DA038D223255A925F89B3_gshared)(__this, ___item0, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.Void UnityEngine.Experimental.XR.Interaction.BasePoseProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePoseProvider__ctor_mABDF3FDD6E86EFACAA6012CDC8C8EBE45340EC06 (BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.PoseDataSource::GetNodePoseData(UnityEngine.XR.XRNode,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PoseDataSource_GetNodePoseData_m8A6FC86D6C51F89A03EA9E25F2140BC2FC850B71 (int32_t ___node0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___resultPose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseDataSource_GetNodePoseData_m8A6FC86D6C51F89A03EA9E25F2140BC2FC850B71_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844  V_1;
	memset((&V_1), 0, sizeof(V_1));
	XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// PoseDataFlags retData = PoseDataFlags.NoData;
		V_0 = 0;
		// XR.InputTracking.GetNodeStates(nodeStates);
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_0 = ((PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_StaticFields*)il2cpp_codegen_static_fields_for(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var))->get_nodeStates_0();
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t96AA6E2EC9B998FF199918D95164D23DA6F2DFE8_il2cpp_TypeInfo_var);
		InputTracking_GetNodeStates_m1D99635AA169927E5C00399B44D798F08647823B(L_0, /*hidden argument*/NULL);
		// foreach (XR.XRNodeState nodeState in nodeStates)
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_1 = ((PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_StaticFields*)il2cpp_codegen_static_fields_for(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var))->get_nodeStates_0();
		NullCheck(L_1);
		Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844  L_2 = List_1_GetEnumerator_m8922EA749C64F6B36CAAED9B19FCD053926C4425(L_1, /*hidden argument*/List_1_GetEnumerator_m8922EA749C64F6B36CAAED9B19FCD053926C4425_RuntimeMethod_var);
		V_1 = L_2;
	}

IL_0017:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0055;
		}

IL_0019:
		{
			// foreach (XR.XRNodeState nodeState in nodeStates)
			XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  L_3 = Enumerator_get_Current_mC65B614E68563B995104790217F26BD1718F5A8A_inline((Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844 *)(&V_1), /*hidden argument*/Enumerator_get_Current_mC65B614E68563B995104790217F26BD1718F5A8A_RuntimeMethod_var);
			V_2 = L_3;
			// if (nodeState.nodeType == node)
			int32_t L_4 = XRNodeState_get_nodeType_m40ED41E75B0CD73974B0E6812AA33A3D69495AC7((XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A *)(&V_2), /*hidden argument*/NULL);
			int32_t L_5 = ___node0;
			if ((!(((uint32_t)L_4) == ((uint32_t)L_5))))
			{
				goto IL_0055;
			}
		}

IL_002b:
		{
			// if (nodeState.TryGetPosition(out resultPose.position))
			Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_6 = ___resultPose1;
			Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_7 = L_6->get_address_of_position_0();
			bool L_8 = XRNodeState_TryGetPosition_mD3F619954C89FF16045960AAEF4D5218E17B6E8C((XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A *)(&V_2), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_7, /*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003e;
			}
		}

IL_003a:
		{
			// retData |= PoseDataFlags.Position;
			int32_t L_9 = V_0;
			V_0 = ((int32_t)((int32_t)L_9|(int32_t)1));
		}

IL_003e:
		{
			// if (nodeState.TryGetRotation(out resultPose.rotation))
			Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_10 = ___resultPose1;
			Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_11 = L_10->get_address_of_rotation_1();
			bool L_12 = XRNodeState_TryGetRotation_m2AE7B2C4907BB94036A74133FEE1389E273D38B9((XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A *)(&V_2), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0051;
			}
		}

IL_004d:
		{
			// retData |= PoseDataFlags.Rotation;
			int32_t L_13 = V_0;
			V_0 = ((int32_t)((int32_t)L_13|(int32_t)2));
		}

IL_0051:
		{
			// return retData;
			int32_t L_14 = V_0;
			V_3 = L_14;
			IL2CPP_LEAVE(0x7B, FINALLY_0060);
		}

IL_0055:
		{
			// foreach (XR.XRNodeState nodeState in nodeStates)
			bool L_15 = Enumerator_MoveNext_mAA9CB89DC3AB8B1BC14237726334B89622000BB7((Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844 *)(&V_1), /*hidden argument*/Enumerator_MoveNext_mAA9CB89DC3AB8B1BC14237726334B89622000BB7_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_0019;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mCCEE0B822F77303900869CC25CD61CC1C77B9A87((Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844 *)(&V_1), /*hidden argument*/Enumerator_Dispose_mCCEE0B822F77303900869CC25CD61CC1C77B9A87_RuntimeMethod_var);
		IL2CPP_END_FINALLY(96)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_JUMP_TBL(0x7B, IL_007b)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006e:
	{
		// resultPose = Pose.identity;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_16 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_17 = Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF(/*hidden argument*/NULL);
		*(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_16 = L_17;
		// return retData;
		int32_t L_18 = V_0;
		return L_18;
	}

IL_007b:
	{
		// }
		int32_t L_19 = V_3;
		return L_19;
	}
}
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.PoseDataSource::GetDataFromSource(UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PoseDataSource_GetDataFromSource_mAA2A7FD7C04B2FF111919440F46D442B731BB1B6 (int32_t ___poseSource0, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___resultPose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseDataSource_GetDataFromSource_mAA2A7FD7C04B2FF111919440F46D442B731BB1B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (poseSource)
		int32_t L_0 = ___poseSource0;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0049;
			}
			case 1:
			{
				goto IL_0051;
			}
			case 2:
			{
				goto IL_0061;
			}
			case 3:
			{
				goto IL_0059;
			}
			case 4:
			{
				goto IL_0069;
			}
			case 5:
			{
				goto IL_0071;
			}
			case 6:
			{
				goto IL_0079;
			}
			case 7:
			{
				goto IL_008d;
			}
			case 8:
			{
				goto IL_008d;
			}
			case 9:
			{
				goto IL_008d;
			}
			case 10:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_008d;
	}

IL_0034:
	{
		// PoseDataFlags retFlags = GetNodePoseData(XR.XRNode.RightHand, out resultPose);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_1 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		int32_t L_2 = PoseDataSource_GetNodePoseData_m8A6FC86D6C51F89A03EA9E25F2140BC2FC850B71(5, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (retFlags == PoseDataFlags.NoData)
		int32_t L_3 = V_0;
		if (L_3)
		{
			goto IL_0047;
		}
	}
	{
		// return GetNodePoseData(XR.XRNode.LeftHand, out resultPose);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_4 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		int32_t L_5 = PoseDataSource_GetNodePoseData_m8A6FC86D6C51F89A03EA9E25F2140BC2FC850B71(4, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0047:
	{
		// return retFlags;
		int32_t L_6 = V_0;
		return L_6;
	}

IL_0049:
	{
		// return GetNodePoseData(XR.XRNode.LeftEye, out resultPose);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_7 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		int32_t L_8 = PoseDataSource_GetNodePoseData_m8A6FC86D6C51F89A03EA9E25F2140BC2FC850B71(0, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0051:
	{
		// return GetNodePoseData(XR.XRNode.RightEye, out resultPose);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_9 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		int32_t L_10 = PoseDataSource_GetNodePoseData_m8A6FC86D6C51F89A03EA9E25F2140BC2FC850B71(1, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0059:
	{
		// return GetNodePoseData(XR.XRNode.Head, out resultPose);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_11 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		int32_t L_12 = PoseDataSource_GetNodePoseData_m8A6FC86D6C51F89A03EA9E25F2140BC2FC850B71(3, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_0061:
	{
		// return GetNodePoseData(XR.XRNode.CenterEye, out resultPose);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_13 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		int32_t L_14 = PoseDataSource_GetNodePoseData_m8A6FC86D6C51F89A03EA9E25F2140BC2FC850B71(2, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0069:
	{
		// return GetNodePoseData(XR.XRNode.LeftHand, out resultPose);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_15 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		int32_t L_16 = PoseDataSource_GetNodePoseData_m8A6FC86D6C51F89A03EA9E25F2140BC2FC850B71(4, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_15, /*hidden argument*/NULL);
		return L_16;
	}

IL_0071:
	{
		// return GetNodePoseData(XR.XRNode.RightHand, out resultPose);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_17 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		int32_t L_18 = PoseDataSource_GetNodePoseData_m8A6FC86D6C51F89A03EA9E25F2140BC2FC850B71(5, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0079:
	{
		// PoseDataFlags retFlags = TryGetTangoPose(out resultPose);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_19 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		int32_t L_20 = PoseDataSource_TryGetTangoPose_m4BE7616120F008A98972279DA7A40C71D91A189E((Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		// if (retFlags == PoseDataFlags.NoData)
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_008b;
		}
	}
	{
		// return GetNodePoseData(XR.XRNode.CenterEye, out resultPose);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_22 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		int32_t L_23 = PoseDataSource_GetNodePoseData_m8A6FC86D6C51F89A03EA9E25F2140BC2FC850B71(2, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_22, /*hidden argument*/NULL);
		return L_23;
	}

IL_008b:
	{
		// return retFlags;
		int32_t L_24 = V_1;
		return L_24;
	}

IL_008d:
	{
		// Debug.LogWarningFormat("Unable to retrieve pose data for poseSource: {0}", poseSource.ToString());
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_25 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_26 = L_25;
		RuntimeObject * L_27 = Box(TrackedPose_tBECB0ED5440415EE75C061C0588F16CF0D8E5DFA_il2cpp_TypeInfo_var, (&___poseSource0));
		NullCheck(L_27);
		String_t* L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_27);
		___poseSource0 = *(int32_t*)UnBox(L_27);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_28);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m29C3DA389E1AA2C1C48C9100F1E83EAE72772FDB(_stringLiteral7A9ECCC546664AE211091E9EC5A813273BFAB503, L_26, /*hidden argument*/NULL);
		// resultPose = Pose.identity;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_29 = ___resultPose1;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_30 = Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF(/*hidden argument*/NULL);
		*(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_29 = L_30;
		// return PoseDataFlags.NoData;
		return (int32_t)(0);
	}
}
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.PoseDataSource::TryGetTangoPose(UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PoseDataSource_TryGetTangoPose_m4BE7616120F008A98972279DA7A40C71D91A189E (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___pose0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseDataSource_TryGetTangoPose_m4BE7616120F008A98972279DA7A40C71D91A189E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (TangoInputTracking.TryGetPoseAtTime(out poseOut) && poseOut.statusCode == PoseStatus.Valid)
		bool L_0 = TangoInputTracking_TryGetPoseAtTime_m8AA6B8CEADE806F981A62E2928425265987F1C3F((PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638 *)(&V_0), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002e;
		}
	}
	{
		PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638  L_1 = V_0;
		int32_t L_2 = L_1.get_statusCode_7();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002e;
		}
	}
	{
		// pose.position = poseOut.position;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_3 = ___pose0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = PoseData_get_position_m356B0853C5A393D0748E95FCBEF3BFDA9AC46D9B((PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638 *)(&V_0), /*hidden argument*/NULL);
		L_3->set_position_0(L_4);
		// pose.rotation = poseOut.rotation;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_5 = ___pose0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = PoseData_get_rotation_m8784EAC91FE13E8909E972A0AD9B9A9B9CAA2981((PoseData_tF7272C7E3C2BAFC109D4E02AD34D38E9E24FE638 *)(&V_0), /*hidden argument*/NULL);
		L_5->set_rotation_1(L_6);
		// return PoseDataFlags.Position | PoseDataFlags.Rotation;;
		return (int32_t)(3);
	}

IL_002e:
	{
		// pose = Pose.identity;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_7 = ___pose0;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_8 = Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF(/*hidden argument*/NULL);
		*(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_7 = L_8;
		// return PoseDataFlags.NoData;
		return (int32_t)(0);
	}
}
// System.Void UnityEngine.SpatialTracking.PoseDataSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoseDataSource__cctor_mCF69D2C3BA7D5D48420A6E65C8C90B0CB4511AC9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoseDataSource__cctor_mCF69D2C3BA7D5D48420A6E65C8C90B0CB4511AC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static internal List<XR.XRNodeState> nodeStates = new List<XR.XRNodeState>();
		List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 * L_0 = (List_1_tDECBF737A96DF978685F6386C44B9284190E43C7 *)il2cpp_codegen_object_new(List_1_tDECBF737A96DF978685F6386C44B9284190E43C7_il2cpp_TypeInfo_var);
		List_1__ctor_mDD094D5EE81E08619C17AED19D0187512A341C88(L_0, /*hidden argument*/List_1__ctor_mDD094D5EE81E08619C17AED19D0187512A341C88_RuntimeMethod_var);
		((PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_StaticFields*)il2cpp_codegen_static_fields_for(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var))->set_nodeStates_0(L_0);
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
// UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType UnityEngine.SpatialTracking.TrackedPoseDriver::get_deviceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_deviceType_mE5F386A2BF8FECC966A301DD2B2BADB1E43FE45B (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Device; }
		int32_t L_0 = __this->get_m_Device_4();
		return L_0;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_deviceType(UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_deviceType_mA2CE392F51544958D830D00E6AF80F83144ABAEF (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal set { m_Device = value; }
		int32_t L_0 = ___value0;
		__this->set_m_Device_4(L_0);
		// internal set { m_Device = value; }
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose UnityEngine.SpatialTracking.TrackedPoseDriver::get_poseSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_poseSource_mEA679C5EF0CCC37C423C45AA32B4DB4843642994 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_PoseSource; }
		int32_t L_0 = __this->get_m_PoseSource_5();
		return L_0;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_poseSource(UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseSource_mB13187BCD2FAA8266A788794330AA9D6F92FAB44 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal set { m_PoseSource = value; }
		int32_t L_0 = ___value0;
		__this->set_m_PoseSource_5(L_0);
		// internal set { m_PoseSource = value; }
		return;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::SetPoseSource(UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackedPoseDriver_SetPoseSource_mE678556F7C4F9EF0298D83C430F27EFC0C1A2D7C (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___deviceType0, int32_t ___pose1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_SetPoseSource_mE678556F7C4F9EF0298D83C430F27EFC0C1A2D7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if ((int)deviceType < TrackedPoseDriverDataDescription.DeviceData.Count)
		int32_t L_0 = ___deviceType0;
		IL2CPP_RUNTIME_CLASS_INIT(TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_il2cpp_TypeInfo_var);
		List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * L_1 = ((TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_il2cpp_TypeInfo_var))->get_DeviceData_0();
		NullCheck(L_1);
		int32_t L_2 = List_1_get_Count_mE03E3A8C08F8163A92CBD898FEED176613A79530_inline(L_1, /*hidden argument*/List_1_get_Count_mE03E3A8C08F8163A92CBD898FEED176613A79530_RuntimeMethod_var);
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_004e;
		}
	}
	{
		// TrackedPoseDriverDataDescription.PoseData val = TrackedPoseDriverDataDescription.DeviceData[(int)deviceType];
		IL2CPP_RUNTIME_CLASS_INIT(TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_il2cpp_TypeInfo_var);
		List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * L_3 = ((TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_il2cpp_TypeInfo_var))->get_DeviceData_0();
		int32_t L_4 = ___deviceType0;
		NullCheck(L_3);
		PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  L_5 = List_1_get_Item_m50F5F35B6806D6A42DF46C056E00C24A0656F424_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_m50F5F35B6806D6A42DF46C056E00C24A0656F424_RuntimeMethod_var);
		V_0 = L_5;
		// for (int i = 0; i < val.Poses.Count; ++i)
		V_1 = 0;
		goto IL_0040;
	}

IL_001d:
	{
		// if (val.Poses[i] == pose)
		PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  L_6 = V_0;
		List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * L_7 = L_6.get_Poses_1();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = List_1_get_Item_mBB3AD327026A1E1AC5BDB496A359A302E2BD1BF1_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_mBB3AD327026A1E1AC5BDB496A359A302E2BD1BF1_RuntimeMethod_var);
		int32_t L_10 = ___pose1;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_003c;
		}
	}
	{
		// this.deviceType = deviceType;
		int32_t L_11 = ___deviceType0;
		TrackedPoseDriver_set_deviceType_mA2CE392F51544958D830D00E6AF80F83144ABAEF_inline(__this, L_11, /*hidden argument*/NULL);
		// poseSource = pose;
		int32_t L_12 = ___pose1;
		TrackedPoseDriver_set_poseSource_mB13187BCD2FAA8266A788794330AA9D6F92FAB44_inline(__this, L_12, /*hidden argument*/NULL);
		// return true;
		return (bool)1;
	}

IL_003c:
	{
		// for (int i = 0; i < val.Poses.Count; ++i)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0040:
	{
		// for (int i = 0; i < val.Poses.Count; ++i)
		int32_t L_14 = V_1;
		PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  L_15 = V_0;
		List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * L_16 = L_15.get_Poses_1();
		NullCheck(L_16);
		int32_t L_17 = List_1_get_Count_m1C2D877064BDFCD44B60B6690D7BC0F46B50668D_inline(L_16, /*hidden argument*/List_1_get_Count_m1C2D877064BDFCD44B60B6690D7BC0F46B50668D_RuntimeMethod_var);
		if ((((int32_t)L_14) < ((int32_t)L_17)))
		{
			goto IL_001d;
		}
	}

IL_004e:
	{
		// return false;
		return (bool)0;
	}
}
// UnityEngine.Experimental.XR.Interaction.BasePoseProvider UnityEngine.SpatialTracking.TrackedPoseDriver::get_poseProviderComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * TrackedPoseDriver_get_poseProviderComponent_m03D5791B013A27CC5B3FE70FB65C3ABD5B27D666 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_PoseProviderComponent; }
		BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * L_0 = __this->get_m_PoseProviderComponent_6();
		return L_0;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_poseProviderComponent(UnityEngine.Experimental.XR.Interaction.BasePoseProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseProviderComponent_mFF2CD777022FF9DCE0BE61CF6CDEB76510721624 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * ___value0, const RuntimeMethod* method)
{
	{
		// m_PoseProviderComponent = value;
		BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * L_0 = ___value0;
		__this->set_m_PoseProviderComponent_6(L_0);
		// }
		return;
	}
}
// UnityEngine.SpatialTracking.PoseDataFlags UnityEngine.SpatialTracking.TrackedPoseDriver::GetPoseData(UnityEngine.SpatialTracking.TrackedPoseDriver_DeviceType,UnityEngine.SpatialTracking.TrackedPoseDriver_TrackedPose,UnityEngine.Pose&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_GetPoseData_m1EA2912CCD25C1EA9B9DEC9D66C75945E53D5F09 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___device0, int32_t ___poseSource1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * ___resultPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_GetPoseData_m1EA2912CCD25C1EA9B9DEC9D66C75945E53D5F09_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_PoseProviderComponent != null)
		BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * L_0 = __this->get_m_PoseProviderComponent_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// return (m_PoseProviderComponent.TryGetPoseFromProvider(out resultPose) ? (PoseDataFlags.Position | PoseDataFlags.Rotation) : PoseDataFlags.NoData);
		BasePoseProvider_t951B9DB48DBBA7336FFE70B77529EEF42742B50B * L_2 = __this->get_m_PoseProviderComponent_6();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_3 = ___resultPose2;
		NullCheck(L_2);
		bool L_4 = VirtFuncInvoker1< bool, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * >::Invoke(4 /* System.Boolean UnityEngine.Experimental.XR.Interaction.BasePoseProvider::TryGetPoseFromProvider(UnityEngine.Pose&) */, L_2, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_3);
		if (L_4)
		{
			goto IL_001e;
		}
	}
	{
		return (int32_t)(0);
	}

IL_001e:
	{
		return (int32_t)(3);
	}

IL_0020:
	{
		// return PoseDataSource.GetDataFromSource(poseSource, out resultPose);
		int32_t L_5 = ___poseSource1;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_6 = ___resultPose2;
		IL2CPP_RUNTIME_CLASS_INIT(PoseDataSource_t922E6B2F7058F8A78172B8E29AEB0BBD748B4657_il2cpp_TypeInfo_var);
		int32_t L_7 = PoseDataSource_GetDataFromSource_mAA2A7FD7C04B2FF111919440F46D442B731BB1B6(L_5, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver_TrackingType UnityEngine.SpatialTracking.TrackedPoseDriver::get_trackingType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_trackingType_m80641A648636D2F5C46DCC5CB09B21D228BC6F91 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_TrackingType; }
		int32_t L_0 = __this->get_m_TrackingType_7();
		return L_0;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_trackingType(UnityEngine.SpatialTracking.TrackedPoseDriver_TrackingType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_trackingType_mF830501068433E76E90C7A425A66F37578711D44 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_TrackingType = value; }
		int32_t L_0 = ___value0;
		__this->set_m_TrackingType_7(L_0);
		// set { m_TrackingType = value; }
		return;
	}
}
// UnityEngine.SpatialTracking.TrackedPoseDriver_UpdateType UnityEngine.SpatialTracking.TrackedPoseDriver::get_updateType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrackedPoseDriver_get_updateType_mD272FF43F508E0171C232293639BF33541B507C0 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_UpdateType; }
		int32_t L_0 = __this->get_m_UpdateType_8();
		return L_0;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_updateType(UnityEngine.SpatialTracking.TrackedPoseDriver_UpdateType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_updateType_m5D159D6913907116BDE5B7EA0CB73E105C0B309A (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { m_UpdateType = value; }
		int32_t L_0 = ___value0;
		__this->set_m_UpdateType_8(L_0);
		// set { m_UpdateType = value; }
		return;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::get_UseRelativeTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackedPoseDriver_get_UseRelativeTransform_m96C5BFC361EB38DD206F6E84AF884A2DFE3C1C16 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_UseRelativeTransform; }
		bool L_0 = __this->get_m_UseRelativeTransform_9();
		return L_0;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_UseRelativeTransform(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_UseRelativeTransform_m0EE1B555655A1B2FCCD5759E895D81AC0CB4D090 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { m_UseRelativeTransform = value; }
		bool L_0 = ___value0;
		__this->set_m_UseRelativeTransform_9(L_0);
		// set { m_UseRelativeTransform = value; }
		return;
	}
}
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::get_originPose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  TrackedPoseDriver_get_originPose_mFA3D9C874BD40AB8A999A58E9E3CBD04E7974C45 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OriginPose; }
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = __this->get_m_OriginPose_10();
		return L_0;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::set_originPose(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_originPose_m2588415ABE3D430FAD8BC90592A34FA6E6821652 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___value0, const RuntimeMethod* method)
{
	{
		// set { m_OriginPose = value; }
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_0 = ___value0;
		__this->set_m_OriginPose_10(L_0);
		// set { m_OriginPose = value; }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::CacheLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_CacheLocalPosition_m5D363D95D74FEA3FC76997DEBF429E21B59C0BC6 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		// m_OriginPose.position = transform.localPosition;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_0 = __this->get_address_of_m_OriginPose_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_1, /*hidden argument*/NULL);
		L_0->set_position_0(L_2);
		// m_OriginPose.rotation = transform.localRotation;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_3 = __this->get_address_of_m_OriginPose_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_4, /*hidden argument*/NULL);
		L_3->set_rotation_1(L_5);
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::ResetToCachedLocalPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_ResetToCachedLocalPosition_mC1435C036A613596E3EBD9C59FD6269E0FB21C10 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		// SetLocalTransform(m_OriginPose.position, m_OriginPose.rotation, PoseDataFlags.Position | PoseDataFlags.Rotation);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_0 = __this->get_address_of_m_OriginPose_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = L_0->get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * L_2 = __this->get_address_of_m_OriginPose_10();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = L_2->get_rotation_1();
		VirtActionInvoker3< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , int32_t >::Invoke(11 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.SpatialTracking.PoseDataFlags) */, __this, L_1, L_3, 3);
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_Awake_m278C9A3D5F23D8FC5499C3DB29CDA20017D8DF7F (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		// CacheLocalPosition();
		TrackedPoseDriver_CacheLocalPosition_m5D363D95D74FEA3FC76997DEBF429E21B59C0BC6(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnDestroy_m6193D2AD26322FA4214C0248598318DEF60CBE57 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnEnable_mE80BD514925D6102D19C8FC82AADB8A1D066C117 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_OnEnable_mE80BD514925D6102D19C8FC82AADB8A1D066C117_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.onBeforeRender += OnBeforeRender;
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_0 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 10)), /*hidden argument*/NULL);
		Application_add_onBeforeRender_mC00950B8FC35DB9048121D43BE8F69D55BCB4723(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnDisable_m7916DC8D7526734AC5B61E9C436B30113C001C0D (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_OnDisable_m7916DC8D7526734AC5B61E9C436B30113C001C0D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ResetToCachedLocalPosition();
		TrackedPoseDriver_ResetToCachedLocalPosition_mC1435C036A613596E3EBD9C59FD6269E0FB21C10(__this, /*hidden argument*/NULL);
		// Application.onBeforeRender -= OnBeforeRender;
		UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * L_0 = (UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 *)il2cpp_codegen_object_new(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4_il2cpp_TypeInfo_var);
		UnityAction__ctor_mEFC4B92529CE83DF72501F92E07EC5598C54BDAC(L_0, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 10)), /*hidden argument*/NULL);
		Application_remove_onBeforeRender_m4601D9804BC86F64FB071348EC1CF448C55CBA3B(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_FixedUpdate_m474F231348C7B5CFC7690E4EE95DD16D4F50571C (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		// if (m_UpdateType == UpdateType.Update ||
		//     m_UpdateType == UpdateType.UpdateAndBeforeRender)
		int32_t L_0 = __this->get_m_UpdateType_8();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_m_UpdateType_8();
		if (L_1)
		{
			goto IL_0017;
		}
	}

IL_0011:
	{
		// PerformUpdate();
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_Update_m7F7E6DAE7CEEA5F266A943B70C4FED66A7E641E2 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		// if (m_UpdateType == UpdateType.Update ||
		//     m_UpdateType == UpdateType.UpdateAndBeforeRender)
		int32_t L_0 = __this->get_m_UpdateType_8();
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_m_UpdateType_8();
		if (L_1)
		{
			goto IL_0017;
		}
	}

IL_0011:
	{
		// PerformUpdate();
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::OnBeforeRender()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_OnBeforeRender_mC5D5FFF7CFC09F8C441CADCDBE8B5C742A13AB04 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		// if (m_UpdateType == UpdateType.BeforeRender ||
		//     m_UpdateType == UpdateType.UpdateAndBeforeRender)
		int32_t L_0 = __this->get_m_UpdateType_8();
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_m_UpdateType_8();
		if (L_1)
		{
			goto IL_0017;
		}
	}

IL_0011:
	{
		// PerformUpdate();
		VirtActionInvoker0::Invoke(12 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate() */, __this);
	}

IL_0017:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.SpatialTracking.PoseDataFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_SetLocalTransform_mC912D140B3A32EEEEAA161FA85E2BEF9798C3CFC (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___newPosition0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___newRotation1, int32_t ___poseFlags2, const RuntimeMethod* method)
{
	{
		// if ((m_TrackingType == TrackingType.RotationAndPosition ||
		//      m_TrackingType == TrackingType.RotationOnly) &&
		//     (poseFlags & PoseDataFlags.Rotation) > 0)
		int32_t L_0 = __this->get_m_TrackingType_7();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->get_m_TrackingType_7();
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}

IL_0011:
	{
		int32_t L_2 = ___poseFlags2;
		if ((((int32_t)((int32_t)((int32_t)L_2&(int32_t)2))) <= ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		// transform.localRotation = newRotation;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___newRotation1;
		NullCheck(L_3);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// if ((m_TrackingType == TrackingType.RotationAndPosition ||
		//      m_TrackingType == TrackingType.PositionOnly) &&
		//     (poseFlags & PoseDataFlags.Position) > 0)
		int32_t L_5 = __this->get_m_TrackingType_7();
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_6 = __this->get_m_TrackingType_7();
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0046;
		}
	}

IL_0034:
	{
		int32_t L_7 = ___poseFlags2;
		if ((((int32_t)((int32_t)((int32_t)L_7&(int32_t)1))) <= ((int32_t)0)))
		{
			goto IL_0046;
		}
	}
	{
		// transform.localPosition = newPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = ___newPosition0;
		NullCheck(L_8);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// }
		return;
	}
}
// UnityEngine.Pose UnityEngine.SpatialTracking.TrackedPoseDriver::TransformPoseByOriginIfNeeded(UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  TrackedPoseDriver_TransformPoseByOriginIfNeeded_mF15283F4BC40D15DF20B5BAF1A900B1004BD987B (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___pose0, const RuntimeMethod* method)
{
	{
		// if (m_UseRelativeTransform)
		bool L_0 = __this->get_m_UseRelativeTransform_9();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		// return pose.GetTransformedBy(m_OriginPose);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = __this->get_m_OriginPose_10();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_2 = Pose_GetTransformedBy_m494B58D30A020A636F2B457F9042D4423F7A534A((Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)(&___pose0), L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0016:
	{
		// return pose;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_3 = ___pose0;
		return L_3;
	}
}
// System.Boolean UnityEngine.SpatialTracking.TrackedPoseDriver::HasStereoCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrackedPoseDriver_HasStereoCamera_m7F486388D53DCA5B04F48AC4EEB696143B83A0B6 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_HasStereoCamera_m7F486388D53DCA5B04F48AC4EEB696143B83A0B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * V_0 = NULL;
	{
		// Camera camera = GetComponent<Camera>();
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_0 = Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E(__this, /*hidden argument*/Component_GetComponent_TisCamera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_mB090F51A34716700C0F4F1B08F9330C6F503DB9E_RuntimeMethod_var);
		V_0 = L_0;
		// return camera != null && camera.stereoEnabled;
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = Camera_get_stereoEnabled_m24FC636CCDA9B771F2A975C4F5DB561454357856(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0017:
	{
		return (bool)0;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::PerformUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver_PerformUpdate_mA52E28882E16945B54EDEAC7E35D2A5BF58E4EF1 (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriver_PerformUpdate_mA52E28882E16945B54EDEAC7E35D2A5BF58E4EF1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (!enabled)
		bool L_0 = Behaviour_get_enabled_mAA0C9ED5A3D1589C1C8AA22636543528DB353CFB(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// Pose currentPose = new Pose();
		il2cpp_codegen_initobj((&V_0), sizeof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 ));
		// currentPose = Pose.identity;
		IL2CPP_RUNTIME_CLASS_INIT(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_il2cpp_TypeInfo_var);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_1 = Pose_get_identity_m19458DF84EAADD5E9302CABDC385B97DC91ECCBF(/*hidden argument*/NULL);
		V_0 = L_1;
		// PoseDataFlags poseFlags = GetPoseData(m_Device, m_PoseSource, out currentPose);
		int32_t L_2 = __this->get_m_Device_4();
		int32_t L_3 = __this->get_m_PoseSource_5();
		int32_t L_4 = TrackedPoseDriver_GetPoseData_m1EA2912CCD25C1EA9B9DEC9D66C75945E53D5F09(__this, L_2, L_3, (Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 *)(&V_0), /*hidden argument*/NULL);
		V_1 = L_4;
		// if (poseFlags != PoseDataFlags.NoData)
		int32_t L_5 = V_1;
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		// Pose localPose = TransformPoseByOriginIfNeeded(currentPose);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_6 = V_0;
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_7 = TrackedPoseDriver_TransformPoseByOriginIfNeeded_mF15283F4BC40D15DF20B5BAF1A900B1004BD987B(__this, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// SetLocalTransform(localPose.position, localPose.rotation, poseFlags);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_8 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = L_8.get_position_0();
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_10 = V_2;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = L_10.get_rotation_1();
		int32_t L_12 = V_1;
		VirtActionInvoker3< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , int32_t >::Invoke(11 /* System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::SetLocalTransform(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.SpatialTracking.PoseDataFlags) */, __this, L_9, L_11, L_12);
	}

IL_004a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriver__ctor_mBBD0DDBF16072504682E6B7F75B2D66EB47BA28A (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, const RuntimeMethod* method)
{
	{
		// TrackedPose m_PoseSource = TrackedPoseDriver.TrackedPose.Center;
		__this->set_m_PoseSource_5(2);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedPoseDriverDataDescription__cctor_mAA90D171ADF2B121802C7C1C22CA577334397F08 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TrackedPoseDriverDataDescription__cctor_mAA90D171ADF2B121802C7C1C22CA577334397F08_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// internal static List<PoseData> DeviceData = new List<PoseData>
		// {
		//     // Generic XR Device
		//     new PoseData
		//     {
		//         PoseNames = new List<string>
		//         {
		//             "Left Eye", "Right Eye", "Center Eye - HMD Reference", "Head", "Color Camera"
		//         },
		//         Poses = new List<TrackedPoseDriver.TrackedPose>
		//         {
		//             TrackedPoseDriver.TrackedPose.LeftEye,
		//             TrackedPoseDriver.TrackedPose.RightEye,
		//             TrackedPoseDriver.TrackedPose.Center,
		//             TrackedPoseDriver.TrackedPose.Head,
		//             TrackedPoseDriver.TrackedPose.ColorCamera
		//         }
		//     },
		//     // generic controller
		//     new PoseData
		//     {
		//         PoseNames = new List<string>
		//         {
		//             "Left Controller", "Right Controller"
		//         },
		//         Poses = new List<TrackedPoseDriver.TrackedPose>
		//         {
		//             TrackedPoseDriver.TrackedPose.LeftPose,
		//             TrackedPoseDriver.TrackedPose.RightPose
		//         }
		//     },
		//     // generic remote
		//     new PoseData
		//     {
		//         PoseNames = new List<string>
		//         {
		//             "Device Pose"
		//         },
		//         Poses = new List<TrackedPoseDriver.TrackedPose>
		//         {
		//             TrackedPoseDriver.TrackedPose.RemotePose,
		//         }
		//     },
		// };
		List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * L_0 = (List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 *)il2cpp_codegen_object_new(List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8_il2cpp_TypeInfo_var);
		List_1__ctor_m129FDCACD31A6DEE68213FFDA201A49A48E566DF(L_0, /*hidden argument*/List_1__ctor_m129FDCACD31A6DEE68213FFDA201A49A48E566DF_RuntimeMethod_var);
		List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * L_1 = L_0;
		il2cpp_codegen_initobj((&V_0), sizeof(PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE ));
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_2 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_2, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_3 = L_2;
		NullCheck(L_3);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_3, _stringLiteral06ECA142B442A4AAD1AB59248E25AE5B6EB0E748, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_4 = L_3;
		NullCheck(L_4);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_4, _stringLiteralE51A66A0CA80F2F4B6E7F98F29144ECE6DD62294, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_5 = L_4;
		NullCheck(L_5);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_5, _stringLiteralF77B3A05470715B48013C55D80451D8845D2FBBD, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_6 = L_5;
		NullCheck(L_6);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_6, _stringLiteralE5FFD15BE7069312E3D9DE21089B1501189277A6, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_7 = L_6;
		NullCheck(L_7);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_7, _stringLiteralB0B90F9C11BDDD08E75F17A56C98197AF8DA47D3, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		(&V_0)->set_PoseNames_0(L_7);
		List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * L_8 = (List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 *)il2cpp_codegen_object_new(List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852_il2cpp_TypeInfo_var);
		List_1__ctor_mF683871BF66437F35BC742416461D3B01E27B7B3(L_8, /*hidden argument*/List_1__ctor_mF683871BF66437F35BC742416461D3B01E27B7B3_RuntimeMethod_var);
		List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * L_9 = L_8;
		NullCheck(L_9);
		List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F(L_9, 0, /*hidden argument*/List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F_RuntimeMethod_var);
		List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * L_10 = L_9;
		NullCheck(L_10);
		List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F(L_10, 1, /*hidden argument*/List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F_RuntimeMethod_var);
		List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * L_11 = L_10;
		NullCheck(L_11);
		List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F(L_11, 2, /*hidden argument*/List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F_RuntimeMethod_var);
		List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * L_12 = L_11;
		NullCheck(L_12);
		List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F(L_12, 3, /*hidden argument*/List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F_RuntimeMethod_var);
		List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * L_13 = L_12;
		NullCheck(L_13);
		List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F(L_13, 6, /*hidden argument*/List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F_RuntimeMethod_var);
		(&V_0)->set_Poses_1(L_13);
		PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  L_14 = V_0;
		NullCheck(L_1);
		List_1_Add_m2BD89009A65DF4726A0DA038D223255A925F89B3(L_1, L_14, /*hidden argument*/List_1_Add_m2BD89009A65DF4726A0DA038D223255A925F89B3_RuntimeMethod_var);
		List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * L_15 = L_1;
		il2cpp_codegen_initobj((&V_0), sizeof(PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE ));
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_16 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_16, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_17 = L_16;
		NullCheck(L_17);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_17, _stringLiteral72A5C553060E7B472521D1B134E4D021BBB9C68F, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_18 = L_17;
		NullCheck(L_18);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_18, _stringLiteral92DCA8085248BBC8E8F76D7FB7B3FDDD46C06956, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		(&V_0)->set_PoseNames_0(L_18);
		List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * L_19 = (List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 *)il2cpp_codegen_object_new(List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852_il2cpp_TypeInfo_var);
		List_1__ctor_mF683871BF66437F35BC742416461D3B01E27B7B3(L_19, /*hidden argument*/List_1__ctor_mF683871BF66437F35BC742416461D3B01E27B7B3_RuntimeMethod_var);
		List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * L_20 = L_19;
		NullCheck(L_20);
		List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F(L_20, 4, /*hidden argument*/List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F_RuntimeMethod_var);
		List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * L_21 = L_20;
		NullCheck(L_21);
		List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F(L_21, 5, /*hidden argument*/List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F_RuntimeMethod_var);
		(&V_0)->set_Poses_1(L_21);
		PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  L_22 = V_0;
		NullCheck(L_15);
		List_1_Add_m2BD89009A65DF4726A0DA038D223255A925F89B3(L_15, L_22, /*hidden argument*/List_1_Add_m2BD89009A65DF4726A0DA038D223255A925F89B3_RuntimeMethod_var);
		List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * L_23 = L_15;
		il2cpp_codegen_initobj((&V_0), sizeof(PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE ));
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_24 = (List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 *)il2cpp_codegen_object_new(List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3_il2cpp_TypeInfo_var);
		List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06(L_24, /*hidden argument*/List_1__ctor_mDA22758D73530683C950C5CCF39BDB4E7E1F3F06_RuntimeMethod_var);
		List_1_tE8032E48C661C350FF9550E9063D595C0AB25CD3 * L_25 = L_24;
		NullCheck(L_25);
		List_1_Add_mA348FA1140766465189459D25B01EB179001DE83(L_25, _stringLiteral2D8AFD1CBFD68602614FCEB9065FBEA5B60D943F, /*hidden argument*/List_1_Add_mA348FA1140766465189459D25B01EB179001DE83_RuntimeMethod_var);
		(&V_0)->set_PoseNames_0(L_25);
		List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * L_26 = (List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 *)il2cpp_codegen_object_new(List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852_il2cpp_TypeInfo_var);
		List_1__ctor_mF683871BF66437F35BC742416461D3B01E27B7B3(L_26, /*hidden argument*/List_1__ctor_mF683871BF66437F35BC742416461D3B01E27B7B3_RuntimeMethod_var);
		List_1_t06BF6F246C3FF0E9E117B29686BE01872C3E3852 * L_27 = L_26;
		NullCheck(L_27);
		List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F(L_27, ((int32_t)10), /*hidden argument*/List_1_Add_m886B73AC58A20A2B7B9ACFDE14A3496A7030593F_RuntimeMethod_var);
		(&V_0)->set_Poses_1(L_27);
		PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  L_28 = V_0;
		NullCheck(L_23);
		List_1_Add_m2BD89009A65DF4726A0DA038D223255A925F89B3(L_23, L_28, /*hidden argument*/List_1_Add_m2BD89009A65DF4726A0DA038D223255A925F89B3_RuntimeMethod_var);
		((TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_StaticFields*)il2cpp_codegen_static_fields_for(TrackedPoseDriverDataDescription_tEA05A7320AED44B790D678CF1B65B48138DA1ECA_il2cpp_TypeInfo_var))->set_DeviceData_0(L_23);
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
// Conversion methods for marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
IL2CPP_EXTERN_C void PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshal_pinvoke(const PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE& unmarshaled, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_pinvoke& marshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL);
}
IL2CPP_EXTERN_C void PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshal_pinvoke_back(const PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_pinvoke& marshaled, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE& unmarshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
IL2CPP_EXTERN_C void PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshal_pinvoke_cleanup(PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
IL2CPP_EXTERN_C void PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshal_com(const PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE& unmarshaled, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_com& marshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL);
}
IL2CPP_EXTERN_C void PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshal_com_back(const PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_com& marshaled, PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE& unmarshaled)
{
	Exception_t* ___PoseNames_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'PoseNames' of type 'PoseData'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___PoseNames_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SpatialTracking.TrackedPoseDriverDataDescription/PoseData
IL2CPP_EXTERN_C void PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshal_com_cleanup(PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_deviceType_mA2CE392F51544958D830D00E6AF80F83144ABAEF_inline (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal set { m_Device = value; }
		int32_t L_0 = ___value0;
		__this->set_m_Device_4(L_0);
		// internal set { m_Device = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TrackedPoseDriver_set_poseSource_mB13187BCD2FAA8266A788794330AA9D6F92FAB44_inline (TrackedPoseDriver_t7B9E8C9FDD60EB5023A757F4ED70AC92AA3C8C0A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// internal set { m_PoseSource = value; }
		int32_t L_0 = ___value0;
		__this->set_m_PoseSource_5(L_0);
		// internal set { m_PoseSource = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  Enumerator_get_Current_mC65B614E68563B995104790217F26BD1718F5A8A_gshared_inline (Enumerator_t13A565CBEF9507FEB17112591EF11015FDD9A844 * __this, const RuntimeMethod* method)
{
	{
		XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A  L_0 = (XRNodeState_t927C248D649ED31F587DFE078E3FF180D98F7C0A )__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mE03E3A8C08F8163A92CBD898FEED176613A79530_gshared_inline (List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  List_1_get_Item_m50F5F35B6806D6A42DF46C056E00C24A0656F424_gshared_inline (List_1_t4957FBF5BD1F0528AC622D31164CAF146FB503C8 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24* L_2 = (PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24*)__this->get__items_1();
		int32_t L_3 = ___index0;
		PoseData_tF79A33767571168AAB333A85A6B6F0F9A8825DFE  L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((PoseDataU5BU5D_t1369761FEB62895A89B0BA9C343AB63C022ECE24*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Item_mCFD41F6E4658708CB4B57EC8A9F35DACFAED19DB_gshared_inline (List_1_t116A3B8CE581BED3D4552A7F22FE553557ADC4C5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A* L_2 = (Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		int32_t L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((Int32EnumU5BU5D_t0A5530B4D0EA3796F661E767F9F7D7005A62CE4A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m6CF108FE58A5B62BAD55E3D1972B735084A7A587_gshared_inline (List_1_t116A3B8CE581BED3D4552A7F22FE553557ADC4C5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
