#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct VirtualFuncInvoker7
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, T6, T7, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, p7, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Object,System.String>
struct Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t823399AD16F88CDEB25958D8CB61771376A5ADED;
// System.Collections.Generic.IDictionary`2<System.Object,System.String>
struct IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.String>
struct KeyCollection_tD48285ECDF8438053DB851543CC44255F2A00427;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<FlurrySDK.Flurry/IConfigListener>
struct List_1_t17C155552241AA0821355593722C226972660B0A;
// System.Collections.Generic.List`1<FlurrySDK.Flurry/IPublisherSegmentationListener>
struct List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.String>
struct ValueCollection_t079BA517239F1ED58868F9BD46ABC9A2F394F786;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.String>[]
struct EntryU5BU5D_t04AD6FAE3CE2700B8AADB199AD0C89040902EB90;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// FlurrySDK.Flurry/IConfigListener[]
struct IConfigListenerU5BU5D_tC7087D0A65776AD77C510B5D4CB47F8E220CA4B5;
// FlurrySDK.Flurry/IPublisherSegmentationListener[]
struct IPublisherSegmentationListenerU5BU5D_t7793723721359318E5154B7775D23452F2082DAC;
// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// FlurrySDK.Flurry
struct Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529;
// FlurrySDKInternal.FlurryAgent
struct FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B;
// FlurrySDKInternal.FlurryAgentAndroid
struct FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// FlurrySDK.Flurry/BooleanEventParam
struct BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8;
// FlurrySDK.Flurry/Builder
struct Builder_t1746B4DC265562B0DC896670DB3544A71C261F83;
// FlurrySDK.Flurry/Config
struct Config_tDB5FB2C33837063A652D901F67A15B22E1B17145;
// FlurrySDK.Flurry/DoubleEventParam
struct DoubleEventParam_t4EC0DD25A28797A0C1EB2BDE628986D81FB6A0BE;
// FlurrySDK.Flurry/EventParamBase
struct EventParamBase_t991A7AA768695D513BF21EF614D7EE8C2A45C8FB;
// FlurrySDK.Flurry/EventParams
struct EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5;
// FlurrySDK.Flurry/FlurryMessage
struct FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7;
// FlurrySDK.Flurry/IConfigListener
struct IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8;
// FlurrySDK.Flurry/IFlurryPublisherSegmentationListener
struct IFlurryPublisherSegmentationListener_t99D1C291198B72AD1CDCD61629617BC44D5A24A0;
// FlurrySDK.Flurry/IMessagingListener
struct IMessagingListener_t57698BE1FDE689E64A7566579E8EBDD85E3AAEB4;
// FlurrySDK.Flurry/IPublisherSegmentationListener
struct IPublisherSegmentationListener_tFBF447F92D5935BCA96400B9CE8FD8C33633A98E;
// FlurrySDK.Flurry/IntegerEventParam
struct IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0;
// FlurrySDK.Flurry/Performance
struct Performance_tAC95C9094182A530C176374406264EA5C90A22B9;
// FlurrySDK.Flurry/PublisherSegmentation
struct PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC;
// FlurrySDK.Flurry/StringEventParam
struct StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477;
// FlurrySDK.Flurry/UserProperties
struct UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B;
// FlurrySDKInternal.FlurryAgent/AgentBuilder
struct AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95;
// FlurrySDKInternal.FlurryAgent/AgentConfig
struct AgentConfig_t8E52A1EE4F2983B3DBDFF13730B81AE1937B3AD3;
// FlurrySDKInternal.FlurryAgent/AgentPerformance
struct AgentPerformance_tB82AF57B6B08BFBDB16D91085886CAF239DC42E8;
// FlurrySDKInternal.FlurryAgent/AgentPublisherSegmentation
struct AgentPublisherSegmentation_t3667AE97AF070A56CA2EB1F61AFDCFD30B320085;
// FlurrySDKInternal.FlurryAgent/AgentUserProperties
struct AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B;
// FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid
struct AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5;
// FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid
struct AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC;
// FlurrySDKInternal.FlurryAgentAndroid/AgentPerformanceAndroid
struct AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01;
// FlurrySDKInternal.FlurryAgentAndroid/AgentPublisherSegmentationAndroid
struct AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76;
// FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid
struct AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE;
// FlurrySDKInternal.FlurryAgentAndroid/ConfigCallback
struct ConfigCallback_tDFAA1F620540B2085B0938464091BA63EA235443;
// FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback
struct MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F;
// FlurrySDKInternal.FlurryAgentAndroid/PrivacySessionCallback
struct PrivacySessionCallback_t9A7B5E3F9D1ED440308BCD5BA9988F07C7C95970;
// FlurrySDKInternal.FlurryAgentAndroid/PublisherSegmentationCallback
struct PublisherSegmentationCallback_t79E663EBEA9D2D17B46BB32E3C6EF9BDB407AB36;
// FlurrySDK.Flurry/Config/MainConfigListener
struct MainConfigListener_t38865B5DF668E6154EF6FF651824119816DC21F8;
// FlurrySDK.Flurry/PublisherSegmentation/MainPublisherSegmentationListener
struct MainPublisherSegmentationListener_tD0C2942451DEDD275051F1D68EF7D8C6990C5476;

IL2CPP_EXTERN_C RuntimeClass* AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConfigCallback_tDFAA1F620540B2085B0938464091BA63EA235443_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleEventParam_t4EC0DD25A28797A0C1EB2BDE628986D81FB6A0BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventParamBase_t991A7AA768695D513BF21EF614D7EE8C2A45C8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Event_tD3A113E8508CEAA79418D50BF1A406FCCBB9817E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t72F16E3CBC6488666CEB927E55507385AE045F25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t0C5C15BD4CFBC65D550EF9C0BF07EA524EB495E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tDFB2ACC9CFA50DAA3102AFCFE54D3753760EF12F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMessagingListener_t57698BE1FDE689E64A7566579E8EBDD85E3AAEB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPublisherSegmentationListener_tFBF447F92D5935BCA96400B9CE8FD8C33633A98E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t17C155552241AA0821355593722C226972660B0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainConfigListener_t38865B5DF668E6154EF6FF651824119816DC21F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainPublisherSegmentationListener_tD0C2942451DEDD275051F1D68EF7D8C6990C5476_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrivacySessionCallback_t9A7B5E3F9D1ED440308BCD5BA9988F07C7C95970_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PublisherSegmentationCallback_t79E663EBEA9D2D17B46BB32E3C6EF9BDB407AB36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0126BC54356EB01FBADD66A7B23DCF6FDA5CCACB;
IL2CPP_EXTERN_C String_t* _stringLiteral01BC4B9A4D55E4ABE2708382D4391E686549151B;
IL2CPP_EXTERN_C String_t* _stringLiteral0264E527DCAF2F89AC8692C399BCC3B077561077;
IL2CPP_EXTERN_C String_t* _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA;
IL2CPP_EXTERN_C String_t* _stringLiteral0538FF1FC8000A1942350BAA34918C62D0BF24F4;
IL2CPP_EXTERN_C String_t* _stringLiteral056D563A00505740B23A4A3690B26AECDDC4C5A2;
IL2CPP_EXTERN_C String_t* _stringLiteral060F193B9B4287755BE2A048F032C98486A483FA;
IL2CPP_EXTERN_C String_t* _stringLiteral0901ECAADC69B3F22EE71CEDE9D4C0B5343692C8;
IL2CPP_EXTERN_C String_t* _stringLiteral0984607CD7AD602C7143E0DE8B5468D1906846E4;
IL2CPP_EXTERN_C String_t* _stringLiteral09A86FCCEC7FD774D08C97C8A21BBCD8C0687FD8;
IL2CPP_EXTERN_C String_t* _stringLiteral0B0219E0BE8925ED7275E062E3EA7209BA7116F5;
IL2CPP_EXTERN_C String_t* _stringLiteral0B356FA0382B22BBA50F5ABFA8456DBBF1174A84;
IL2CPP_EXTERN_C String_t* _stringLiteral0C2B8A3124B22F7573CBE6751858FF3F77732DD9;
IL2CPP_EXTERN_C String_t* _stringLiteral0FF3153F14410B9B6A38A83FAE70C0D6DE55C5FC;
IL2CPP_EXTERN_C String_t* _stringLiteral137FF2E6EA9EF993EC812A8B0BE4FD41A4360578;
IL2CPP_EXTERN_C String_t* _stringLiteral151C60B2D2F42BA65B725B1777B21A0566870C28;
IL2CPP_EXTERN_C String_t* _stringLiteral1547D32448BC572A3BA92D824F60BCE446C923C1;
IL2CPP_EXTERN_C String_t* _stringLiteral176C1A6254B9EF0D278311D83E17CA943EA0F7DF;
IL2CPP_EXTERN_C String_t* _stringLiteral18493F3B38669BFF2D6968A1F575F78F9B9E844A;
IL2CPP_EXTERN_C String_t* _stringLiteral1996FB4D81D7A8376DBC20AE55AD3DF10EF430C7;
IL2CPP_EXTERN_C String_t* _stringLiteral1CF3081EFDBD344D6B942D0C3115EEA2DFF43096;
IL2CPP_EXTERN_C String_t* _stringLiteral1FD2F556F5A10F8D53EC2B3B837B392C194EEA49;
IL2CPP_EXTERN_C String_t* _stringLiteral203AB7FB3F880E2E7B6531F72C378827D3B5A6F3;
IL2CPP_EXTERN_C String_t* _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E;
IL2CPP_EXTERN_C String_t* _stringLiteral21011F237E149EB854F6389B6636EC03865C214D;
IL2CPP_EXTERN_C String_t* _stringLiteral2110C4D32D37C642FCCF9080AF28389DB186CC67;
IL2CPP_EXTERN_C String_t* _stringLiteral2182DA7C9C7C8EB8B2F3D7A5B5906BEDF68D1E97;
IL2CPP_EXTERN_C String_t* _stringLiteral21FE72A838B7B2F46CDF73BB4B8F3BFFF0E9B5D2;
IL2CPP_EXTERN_C String_t* _stringLiteral28700A1DBDA9098E11A525888D6732CAF352A87A;
IL2CPP_EXTERN_C String_t* _stringLiteral292979B322D4F30E34EC6F38639F553034F5B9DF;
IL2CPP_EXTERN_C String_t* _stringLiteral2CA7194E941C41DB97F42C03C1C3EA009D79B062;
IL2CPP_EXTERN_C String_t* _stringLiteral2D1839156F0FF5835C7C87A70E87F124FCD548C7;
IL2CPP_EXTERN_C String_t* _stringLiteral33B5C450EB417BA71A499E6DEE554F4BEC75C661;
IL2CPP_EXTERN_C String_t* _stringLiteral365192D201674CC82947E4BBF2738E114F22FD3B;
IL2CPP_EXTERN_C String_t* _stringLiteral36DAFE4855CBD149196DF6694C61BA59A63FABDD;
IL2CPP_EXTERN_C String_t* _stringLiteral3DD55FDD257A02E4A590CD9123CC01BEC987970C;
IL2CPP_EXTERN_C String_t* _stringLiteral42D2434906F3CC12963A727BEC4434BA208EE283;
IL2CPP_EXTERN_C String_t* _stringLiteral4356AD1A589C673A3AF8DD40C21C0D9FAD0C707F;
IL2CPP_EXTERN_C String_t* _stringLiteral44B864640C69CB602C808A886A7FC13CED751ADA;
IL2CPP_EXTERN_C String_t* _stringLiteral462C3BAFE48903B373CEB23A3CE5323DA91F3BFE;
IL2CPP_EXTERN_C String_t* _stringLiteral477A683C1EF3BB7B78929745F0DF2C68DAD306A5;
IL2CPP_EXTERN_C String_t* _stringLiteral498C58FDF5437082AD776A96B26D244C63644F7E;
IL2CPP_EXTERN_C String_t* _stringLiteral4B5ABAA7CF4E6F6DC45B1D9DF38073C634700529;
IL2CPP_EXTERN_C String_t* _stringLiteral4B6CB173055124B7574B1621E896797663183384;
IL2CPP_EXTERN_C String_t* _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078;
IL2CPP_EXTERN_C String_t* _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A;
IL2CPP_EXTERN_C String_t* _stringLiteral541694BD8D4B3F31728DFE436E4E3FE2069F40CF;
IL2CPP_EXTERN_C String_t* _stringLiteral54BBBDA80825EBD242DE0E8A344DF0B5AC5F8C6D;
IL2CPP_EXTERN_C String_t* _stringLiteral54DF44BB4A482D4F98F6E252DAA31666697DE38B;
IL2CPP_EXTERN_C String_t* _stringLiteral579F9723DCBAD71B47704CC25DCB26792F58BECB;
IL2CPP_EXTERN_C String_t* _stringLiteral59ACBE5FD752177C2084B4B66504B74FBFB97414;
IL2CPP_EXTERN_C String_t* _stringLiteral5A60C59431B7AE4FA139A6664B07F1B1AE91BEB8;
IL2CPP_EXTERN_C String_t* _stringLiteral5D986347CFF185B8FDC9E0ACD9FD11E9434B958A;
IL2CPP_EXTERN_C String_t* _stringLiteral5ED49A584D744E2A271927164E80377C15D1899E;
IL2CPP_EXTERN_C String_t* _stringLiteral602BBEE3EC1157ED64DCF5776D1713762F611557;
IL2CPP_EXTERN_C String_t* _stringLiteral63F9C0AA07E88AA17C771193AB73F0656F05C311;
IL2CPP_EXTERN_C String_t* _stringLiteral646C05A7C588E6BC2491D3160177D74640B64C2D;
IL2CPP_EXTERN_C String_t* _stringLiteral6646AEF6383BB084D7AF1DBC36DE3B99CB7D5096;
IL2CPP_EXTERN_C String_t* _stringLiteral69224533712A1254802C0E1712C0C3C2B06350C7;
IL2CPP_EXTERN_C String_t* _stringLiteral6B18834154B328C4F69ADB247CB5C6F293B57961;
IL2CPP_EXTERN_C String_t* _stringLiteral6BC8F664D93B8D2B0AA276FB42661A5A0404BF7E;
IL2CPP_EXTERN_C String_t* _stringLiteral6DE29689A102429CCE5ED600089B35B898373F2D;
IL2CPP_EXTERN_C String_t* _stringLiteral6F1D1C9C69BA2F28C3D1B195C916B6669D3EC091;
IL2CPP_EXTERN_C String_t* _stringLiteral6F5F4B730831B20589268119FBDEDC2466F08E22;
IL2CPP_EXTERN_C String_t* _stringLiteral72565F703F5A31C68207C7B19981BB51E899E172;
IL2CPP_EXTERN_C String_t* _stringLiteral77CC9E0713571C864D403B53617A5E64EB76C10F;
IL2CPP_EXTERN_C String_t* _stringLiteral780088735D08F01D63A81A5B157E00A8C6D5285C;
IL2CPP_EXTERN_C String_t* _stringLiteral7A50C112711BC9B5269825E39FC18D5C988C2D96;
IL2CPP_EXTERN_C String_t* _stringLiteral7BAA1D7FB455C8BA555F5E84BA632E98376D6ED4;
IL2CPP_EXTERN_C String_t* _stringLiteral808C497E20273F9A8FA6751815B71A81D4C8A404;
IL2CPP_EXTERN_C String_t* _stringLiteral81065656AE98E4738B08B2EF99756BF13E3AA176;
IL2CPP_EXTERN_C String_t* _stringLiteral83946F2C08753B395CF669E97569B9A64CA3625B;
IL2CPP_EXTERN_C String_t* _stringLiteral86FE60FAB0ADE14E87E1C6D3643793367FB8EF91;
IL2CPP_EXTERN_C String_t* _stringLiteral88DE6198FB5FD867EB11D303FBE5CE53F306D673;
IL2CPP_EXTERN_C String_t* _stringLiteral8AC5D0EE89D2BBD0965B6455A3F0354E4DFD5DFE;
IL2CPP_EXTERN_C String_t* _stringLiteral8B198C73725FD9C06CA9ECEE547E1E95452EE356;
IL2CPP_EXTERN_C String_t* _stringLiteral8C815CC429FDC6D7295853D40A6BD88EA8E7F028;
IL2CPP_EXTERN_C String_t* _stringLiteral9284EB5700A5CD765E315B572B1C877D2FEE1E96;
IL2CPP_EXTERN_C String_t* _stringLiteral92A0367A0299056CA05B86632AFA0D8FA9C6BF91;
IL2CPP_EXTERN_C String_t* _stringLiteral92A6A929F44F745B80C1D67BCD060B798BB2F699;
IL2CPP_EXTERN_C String_t* _stringLiteral9389BA738E3A640F43288A77A21CA45FDDDF9686;
IL2CPP_EXTERN_C String_t* _stringLiteral94AE6AB21484E31E0C8FA3BA7791D45FFDE8F369;
IL2CPP_EXTERN_C String_t* _stringLiteral98F064671FAE803E20347DB187ABC8E117B2D584;
IL2CPP_EXTERN_C String_t* _stringLiteral9B8FE54F7B2DFBC26D024671DD98ADB63D30DCD0;
IL2CPP_EXTERN_C String_t* _stringLiteral9BF0685EEEAC77FB07398D71F3C9DE3B43912A36;
IL2CPP_EXTERN_C String_t* _stringLiteral9C1320106541A756FF5521A6783C302BCC286943;
IL2CPP_EXTERN_C String_t* _stringLiteral9DEB7CE34683DB5049EB45DACAF9D78607FF3255;
IL2CPP_EXTERN_C String_t* _stringLiteral9F5538383E15EDFD5795B3418426B9252B6BD9B5;
IL2CPP_EXTERN_C String_t* _stringLiteralA21862EE324337333AF1E424CA915CECD327CECB;
IL2CPP_EXTERN_C String_t* _stringLiteralA23BBB48965397305008B2C46822E0ACE83B4854;
IL2CPP_EXTERN_C String_t* _stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728;
IL2CPP_EXTERN_C String_t* _stringLiteralAA86E58EDC31A83FCBA137E3C5DDE0E3A8175313;
IL2CPP_EXTERN_C String_t* _stringLiteralAD5412DDDC5B32B7F2C5848041BF7F1564F80556;
IL2CPP_EXTERN_C String_t* _stringLiteralAD7E1BD1133CB54CB1C7DC65CE70CE9FB0C7C9B0;
IL2CPP_EXTERN_C String_t* _stringLiteralAEEF7F54B64D16F076DC2380D8E5A5E9FE4312FE;
IL2CPP_EXTERN_C String_t* _stringLiteralB0394C50BA118FAF2E3D4923BD2DBD6822D09F7F;
IL2CPP_EXTERN_C String_t* _stringLiteralB445CB96D9EAAB52D5C2DA391138E988E6C4FF33;
IL2CPP_EXTERN_C String_t* _stringLiteralB637CF39141A8C54972BB879BD0E99A8E5BD7D67;
IL2CPP_EXTERN_C String_t* _stringLiteralB857D514B213E7EB0A3CC27D7FD4EA7F8FF48783;
IL2CPP_EXTERN_C String_t* _stringLiteralBB1C062CD4B772F36F360D020CDE87232BE04114;
IL2CPP_EXTERN_C String_t* _stringLiteralBD69126B1E29CEDDB426B9A2EBFC9D4F63297CDF;
IL2CPP_EXTERN_C String_t* _stringLiteralBE83D1EE8A5BDE9F900635A86D06EECE53097C56;
IL2CPP_EXTERN_C String_t* _stringLiteralBF1CD80295C68DCFB1F7BC8A7E9D1A7AB7B61DBC;
IL2CPP_EXTERN_C String_t* _stringLiteralC156525E6409EEBE310581D009DEA54C6D22051D;
IL2CPP_EXTERN_C String_t* _stringLiteralC20397EE6CCF2119C46EF57716C9CA89A0708768;
IL2CPP_EXTERN_C String_t* _stringLiteralC8177157EF573EDC3FB114EC4B6FEB9F30340CA9;
IL2CPP_EXTERN_C String_t* _stringLiteralC84958B838A68AAE091DBDD39F28D9E40FD11DF7;
IL2CPP_EXTERN_C String_t* _stringLiteralC972CCEF9725C97FA81EE0784238DBD804D49222;
IL2CPP_EXTERN_C String_t* _stringLiteralC9CD9BE5636542BD3CFAC8C3719D519A618BC894;
IL2CPP_EXTERN_C String_t* _stringLiteralCDC4510FA0118475A528D0C6C525EF81919452DD;
IL2CPP_EXTERN_C String_t* _stringLiteralCEB581D5FF3B34C69A6D3AEE0D88102947D3A177;
IL2CPP_EXTERN_C String_t* _stringLiteralD0A92CD1C0A7C8678A20B265BDB253BB7E537547;
IL2CPP_EXTERN_C String_t* _stringLiteralD0B88755037BC08194B972081B3C05C300AA13FA;
IL2CPP_EXTERN_C String_t* _stringLiteralD3AF8E16DFC5A85E716F145B3604998D1F6EAE92;
IL2CPP_EXTERN_C String_t* _stringLiteralD3DC9995E8A5C3BFDEC4136FB46E7078EE1D4CC4;
IL2CPP_EXTERN_C String_t* _stringLiteralD6E8ACFB10A5E432178C958D538996C7B6A7324C;
IL2CPP_EXTERN_C String_t* _stringLiteralDD2B635B4947F7FBD279B13E3A6250AC56E5F5DF;
IL2CPP_EXTERN_C String_t* _stringLiteralDD301F43E7FA1623DCF3D6F2FBF8E44ED9B51A7B;
IL2CPP_EXTERN_C String_t* _stringLiteralDE59F907B3DA040841A5D21FF1FA4CDA52D3F2B9;
IL2CPP_EXTERN_C String_t* _stringLiteralE061C2DA51C354EE774BC993235AC38BC941CA0D;
IL2CPP_EXTERN_C String_t* _stringLiteralE1EAF09DC78B7C6B3434DCBAE24FD21630142F88;
IL2CPP_EXTERN_C String_t* _stringLiteralE3464334C8943D46CA4C6661EDCB0B47E40D0513;
IL2CPP_EXTERN_C String_t* _stringLiteralE40CE239237DA778C08B64D09D1485FEC49B6355;
IL2CPP_EXTERN_C String_t* _stringLiteralE412163BA632B0664C8040070F58730FD95754E3;
IL2CPP_EXTERN_C String_t* _stringLiteralE5211B0BA4F5CD5FF045949C5CAB595B173B543E;
IL2CPP_EXTERN_C String_t* _stringLiteralE5DCFE277D05FCCB85F7BE0177DC2AC8D2A92A3E;
IL2CPP_EXTERN_C String_t* _stringLiteralE7072161266D4F867CE0A311142D9F3D4A0956CA;
IL2CPP_EXTERN_C String_t* _stringLiteralE7D1AC0EB152435BD27278ED1220780556ADD31E;
IL2CPP_EXTERN_C String_t* _stringLiteralE94F67292842EEBE05D89BE49B72C3D46F3E1314;
IL2CPP_EXTERN_C String_t* _stringLiteralEAFE67CEDCD3C7E6C9027DE45AFD34911495A50D;
IL2CPP_EXTERN_C String_t* _stringLiteralEB35825A922115ED49904791E665914D3406B876;
IL2CPP_EXTERN_C String_t* _stringLiteralEBAA30FD18A3FE30DE5646A539878DCE426754D5;
IL2CPP_EXTERN_C String_t* _stringLiteralF075908137BD2195C31AE794C2C878EB5C26C71F;
IL2CPP_EXTERN_C String_t* _stringLiteralF489D39E7A89056CC25FB1494A6EE0F69F7945C8;
IL2CPP_EXTERN_C String_t* _stringLiteralF4E455A880964894706B29CA2F9F602182FD9105;
IL2CPP_EXTERN_C String_t* _stringLiteralF7219490E429E49E881EE2EFE4876A818537C3BA;
IL2CPP_EXTERN_C String_t* _stringLiteralF95FDB5CD44B38ECB329CFAEB8B3F5A106A2CB2A;
IL2CPP_EXTERN_C String_t* _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_GetStatic_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5DBAE687058070315290B3BFCCA71D3A7B4BF872_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4CE7EF08211EA84168C8FDD26DD05E92108AE96B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2C19A1BE525359503FFC71D324720E1DDF3A50C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD7DA48E9557E28D0D399776D7D397AFE0C7D9DD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5F1984D641D2C09B90121F91C64289A2AC45DA73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE5B4B77EEC0C76752B32CEF97458982051D58B0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m71BFCCA8B902A86FB706AE46D61EF3917A8AACFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB7A04D89EBF2A84F708FA67E94B7B7BB22A997F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlurryAgentAndroid_ConvertToDictionary_TisString_t_TisString_t_m407A5C3DA5FFB272026BE425CBF552E9CFDF0D11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlurryAgentAndroid_ConvertToList_TisString_t_m0DBD8C01D48D86BD96EF2AA785082C64DF165139_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mCE998D062CEF5E4DA028EA5321732D4CAA4C9C9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mD320B20BE8C9065A0093963B37E88B44C160C5A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m06F77ABABF3F18E5D98ABE371DB1E8863C8BD5D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m26778592A76D135BFFC1DEA85D910ECED0D2F00E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m69544C49D03BF7FFDDEA6C9EF76FC06C345B42F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFFFEFD2B27D36303D2A22D468AB6C44BED09F60C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m0D23AFA19C392F07456983776CEBE4551C8BA9E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m4F9BA1D2B92C0A77CE7C715A4DE50635B69FF5D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m31BF8CCA4E7DC6544B768943B298E27E6271D07E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5469C2C6316BC912F55491A825FBE063612253EF_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tF062866229C4952B8051AD32AB6E9D931142CC95 
{
};

// System.Collections.Generic.Dictionary`2<System.Object,System.String>
struct Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t04AD6FAE3CE2700B8AADB199AD0C89040902EB90* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tD48285ECDF8438053DB851543CC44255F2A00427* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t079BA517239F1ED58868F9BD46ABC9A2F394F786* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<FlurrySDK.Flurry/IConfigListener>
struct List_1_t17C155552241AA0821355593722C226972660B0A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IConfigListenerU5BU5D_tC7087D0A65776AD77C510B5D4CB47F8E220CA4B5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<FlurrySDK.Flurry/IPublisherSegmentationListener>
struct List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IPublisherSegmentationListenerU5BU5D_t7793723721359318E5154B7775D23452F2082DAC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// FlurrySDK.Flurry
struct Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529  : public RuntimeObject
{
};

// FlurrySDKInternal.FlurryAgent
struct FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// FlurrySDK.Flurry/Builder
struct Builder_t1746B4DC265562B0DC896670DB3544A71C261F83  : public RuntimeObject
{
	// FlurrySDKInternal.FlurryAgent/AgentBuilder FlurrySDK.Flurry/Builder::builder
	AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* ___builder_0;
};

// FlurrySDK.Flurry/Config
struct Config_tDB5FB2C33837063A652D901F67A15B22E1B17145  : public RuntimeObject
{
};

// FlurrySDK.Flurry/EventParam
struct EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3  : public RuntimeObject
{
};

// FlurrySDK.Flurry/EventParamBase
struct EventParamBase_t991A7AA768695D513BF21EF614D7EE8C2A45C8FB  : public RuntimeObject
{
	// System.String FlurrySDK.Flurry/EventParamBase::paramName
	String_t* ___paramName_0;
};

// FlurrySDK.Flurry/EventParams
struct EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.Object,System.String> FlurrySDK.Flurry/EventParams::parameters
	RuntimeObject* ___parameters_0;
};

// FlurrySDK.Flurry/FlurryMessage
struct FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7  : public RuntimeObject
{
	// System.String FlurrySDK.Flurry/FlurryMessage::Title
	String_t* ___Title_0;
	// System.String FlurrySDK.Flurry/FlurryMessage::Body
	String_t* ___Body_1;
	// System.String FlurrySDK.Flurry/FlurryMessage::ClickAction
	String_t* ___ClickAction_2;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> FlurrySDK.Flurry/FlurryMessage::Data
	RuntimeObject* ___Data_3;
};

// FlurrySDK.Flurry/Performance
struct Performance_tAC95C9094182A530C176374406264EA5C90A22B9  : public RuntimeObject
{
};

// FlurrySDK.Flurry/PublisherSegmentation
struct PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC  : public RuntimeObject
{
};

// FlurrySDK.Flurry/UserProperties
struct UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B  : public RuntimeObject
{
};

// FlurrySDKInternal.FlurryAgent/AgentBuilder
struct AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95  : public RuntimeObject
{
};

// FlurrySDKInternal.FlurryAgent/AgentConfig
struct AgentConfig_t8E52A1EE4F2983B3DBDFF13730B81AE1937B3AD3  : public RuntimeObject
{
};

// FlurrySDKInternal.FlurryAgent/AgentPerformance
struct AgentPerformance_tB82AF57B6B08BFBDB16D91085886CAF239DC42E8  : public RuntimeObject
{
};

// FlurrySDKInternal.FlurryAgent/AgentPublisherSegmentation
struct AgentPublisherSegmentation_t3667AE97AF070A56CA2EB1F61AFDCFD30B320085  : public RuntimeObject
{
};

// FlurrySDKInternal.FlurryAgent/AgentUserProperties
struct AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B  : public RuntimeObject
{
};

// FlurrySDK.Flurry/Config/MainConfigListener
struct MainConfigListener_t38865B5DF668E6154EF6FF651824119816DC21F8  : public RuntimeObject
{
};

// FlurrySDK.Flurry/PublisherSegmentation/MainPublisherSegmentationListener
struct MainPublisherSegmentationListener_tD0C2942451DEDD275051F1D68EF7D8C6990C5476  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<FlurrySDK.Flurry/IConfigListener>
struct Enumerator_t0CC5D0D22F8AB3BB0DDEDE7BE8F62C5DAB4E2B4D 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t17C155552241AA0821355593722C226972660B0A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<FlurrySDK.Flurry/IPublisherSegmentationListener>
struct Enumerator_t8E4C302A6D89EB9234CD89C48366A77CB46178DC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.String>
struct KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// UnityEngine.AndroidJavaClass
struct AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03  : public AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// FlurrySDKInternal.FlurryAgentAndroid
struct FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18  : public FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// FlurrySDK.Flurry/BooleanEventParam
struct BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8  : public EventParamBase_t991A7AA768695D513BF21EF614D7EE8C2A45C8FB
{
};

// FlurrySDK.Flurry/DoubleEventParam
struct DoubleEventParam_t4EC0DD25A28797A0C1EB2BDE628986D81FB6A0BE  : public EventParamBase_t991A7AA768695D513BF21EF614D7EE8C2A45C8FB
{
};

// FlurrySDK.Flurry/IntegerEventParam
struct IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0  : public EventParamBase_t991A7AA768695D513BF21EF614D7EE8C2A45C8FB
{
};

// FlurrySDK.Flurry/StringEventParam
struct StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477  : public EventParamBase_t991A7AA768695D513BF21EF614D7EE8C2A45C8FB
{
};

// FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid
struct AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5  : public AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95
{
	// UnityEngine.AndroidJavaObject FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::obj_FlurryAgentBuilder
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj_FlurryAgentBuilder_0;
};

// FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid
struct AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC  : public AgentConfig_t8E52A1EE4F2983B3DBDFF13730B81AE1937B3AD3
{
};

// FlurrySDKInternal.FlurryAgentAndroid/AgentPerformanceAndroid
struct AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01  : public AgentPerformance_tB82AF57B6B08BFBDB16D91085886CAF239DC42E8
{
	// UnityEngine.AndroidJavaObject FlurrySDKInternal.FlurryAgentAndroid/AgentPerformanceAndroid::obj_FlurryResourceLogger
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj_FlurryResourceLogger_1;
};

// FlurrySDKInternal.FlurryAgentAndroid/AgentPublisherSegmentationAndroid
struct AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76  : public AgentPublisherSegmentation_t3667AE97AF070A56CA2EB1F61AFDCFD30B320085
{
};

// FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid
struct AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE  : public AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B
{
};

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D  : public RuntimeObject
{
	// UnityEngine.AndroidJavaClass UnityEngine.AndroidJavaProxy::javaInterface
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___javaInterface_0;
	// System.IntPtr UnityEngine.AndroidJavaProxy::proxyObject
	intptr_t ___proxyObject_1;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.AndroidJavaException
struct AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD  : public Exception_t
{
	// System.String UnityEngine.AndroidJavaException::mJavaStackTrace
	String_t* ___mJavaStackTrace_18;
};

// FlurrySDKInternal.FlurryAgentAndroid/ConfigCallback
struct ConfigCallback_tDFAA1F620540B2085B0938464091BA63EA235443  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// FlurrySDK.Flurry/IConfigListener FlurrySDKInternal.FlurryAgentAndroid/ConfigCallback::configListener
	RuntimeObject* ___configListener_4;
};

// FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback
struct MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// FlurrySDK.Flurry/IMessagingListener FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback::messagingListener
	RuntimeObject* ___messagingListener_4;
};

// FlurrySDKInternal.FlurryAgentAndroid/PrivacySessionCallback
struct PrivacySessionCallback_t9A7B5E3F9D1ED440308BCD5BA9988F07C7C95970  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
};

// FlurrySDKInternal.FlurryAgentAndroid/PublisherSegmentationCallback
struct PublisherSegmentationCallback_t79E663EBEA9D2D17B46BB32E3C6EF9BDB407AB36  : public AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D
{
	// FlurrySDK.Flurry/IPublisherSegmentationListener FlurrySDKInternal.FlurryAgentAndroid/PublisherSegmentationCallback::publisherSegmentationListener
	RuntimeObject* ___publisherSegmentationListener_4;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Object,System.String>

// System.Collections.Generic.Dictionary`2<System.Object,System.String>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// System.Collections.Generic.List`1<FlurrySDK.Flurry/IConfigListener>
struct List_1_t17C155552241AA0821355593722C226972660B0A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IConfigListenerU5BU5D_tC7087D0A65776AD77C510B5D4CB47F8E220CA4B5* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<FlurrySDK.Flurry/IConfigListener>

// System.Collections.Generic.List`1<FlurrySDK.Flurry/IPublisherSegmentationListener>
struct List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IPublisherSegmentationListenerU5BU5D_t7793723721359318E5154B7775D23452F2082DAC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<FlurrySDK.Flurry/IPublisherSegmentationListener>

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// FlurrySDK.Flurry
struct Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields
{
	// FlurrySDKInternal.FlurryAgent FlurrySDK.Flurry::flurryAgent
	FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* ___flurryAgent_0;
};

// FlurrySDK.Flurry

// FlurrySDKInternal.FlurryAgent

// FlurrySDKInternal.FlurryAgent

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// FlurrySDK.Flurry/Builder

// FlurrySDK.Flurry/Builder

// FlurrySDK.Flurry/Config
struct Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields
{
	// FlurrySDKInternal.FlurryAgent/AgentConfig FlurrySDK.Flurry/Config::config
	AgentConfig_t8E52A1EE4F2983B3DBDFF13730B81AE1937B3AD3* ___config_0;
	// System.Collections.Generic.List`1<FlurrySDK.Flurry/IConfigListener> FlurrySDK.Flurry/Config::listeners
	List_1_t17C155552241AA0821355593722C226972660B0A* ___listeners_1;
	// FlurrySDK.Flurry/IConfigListener FlurrySDK.Flurry/Config::mainListener
	RuntimeObject* ___mainListener_2;
};

// FlurrySDK.Flurry/Config

// FlurrySDK.Flurry/EventParam
struct EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields
{
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::AD_TYPE
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___AD_TYPE_0;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::LEVEL_NAME
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___LEVEL_NAME_1;
	// FlurrySDK.Flurry/IntegerEventParam FlurrySDK.Flurry/EventParam::LEVEL_NUMBER
	IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* ___LEVEL_NUMBER_2;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::CONTENT_NAME
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___CONTENT_NAME_3;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::CONTENT_TYPE
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___CONTENT_TYPE_4;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::CONTENT_ID
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___CONTENT_ID_5;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::CREDIT_NAME
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___CREDIT_NAME_6;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::CREDIT_TYPE
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___CREDIT_TYPE_7;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::CREDIT_ID
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___CREDIT_ID_8;
	// FlurrySDK.Flurry/BooleanEventParam FlurrySDK.Flurry/EventParam::IS_CURRENCY_SOFT
	BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8* ___IS_CURRENCY_SOFT_9;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::CURRENCY_TYPE
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___CURRENCY_TYPE_10;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::PAYMENT_TYPE
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___PAYMENT_TYPE_11;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::ITEM_NAME
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___ITEM_NAME_12;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::ITEM_TYPE
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___ITEM_TYPE_13;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::ITEM_ID
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___ITEM_ID_14;
	// FlurrySDK.Flurry/IntegerEventParam FlurrySDK.Flurry/EventParam::ITEM_COUNT
	IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* ___ITEM_COUNT_15;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::ITEM_CATEGORY
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___ITEM_CATEGORY_16;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::ITEM_LIST_TYPE
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___ITEM_LIST_TYPE_17;
	// FlurrySDK.Flurry/DoubleEventParam FlurrySDK.Flurry/EventParam::PRICE
	DoubleEventParam_t4EC0DD25A28797A0C1EB2BDE628986D81FB6A0BE* ___PRICE_18;
	// FlurrySDK.Flurry/DoubleEventParam FlurrySDK.Flurry/EventParam::TOTAL_AMOUNT
	DoubleEventParam_t4EC0DD25A28797A0C1EB2BDE628986D81FB6A0BE* ___TOTAL_AMOUNT_19;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::ACHIEVEMENT_ID
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___ACHIEVEMENT_ID_20;
	// FlurrySDK.Flurry/IntegerEventParam FlurrySDK.Flurry/EventParam::SCORE
	IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* ___SCORE_21;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::RATING
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___RATING_22;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::TRANSACTION_ID
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___TRANSACTION_ID_23;
	// FlurrySDK.Flurry/BooleanEventParam FlurrySDK.Flurry/EventParam::SUCCESS
	BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8* ___SUCCESS_24;
	// FlurrySDK.Flurry/BooleanEventParam FlurrySDK.Flurry/EventParam::IS_ANNUAL_SUBSCRIPTION
	BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8* ___IS_ANNUAL_SUBSCRIPTION_25;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::SUBSCRIPTION_COUNTRY
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___SUBSCRIPTION_COUNTRY_26;
	// FlurrySDK.Flurry/IntegerEventParam FlurrySDK.Flurry/EventParam::TRIAL_DAYS
	IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* ___TRIAL_DAYS_27;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::PREDICTED_LTV
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___PREDICTED_LTV_28;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::GROUP_NAME
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___GROUP_NAME_29;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::TUTORIAL_NAME
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___TUTORIAL_NAME_30;
	// FlurrySDK.Flurry/IntegerEventParam FlurrySDK.Flurry/EventParam::STEP_NUMBER
	IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* ___STEP_NUMBER_31;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::USER_ID
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___USER_ID_32;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::METHOD
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___METHOD_33;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::QUERY
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___QUERY_34;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::SEARCH_TYPE
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___SEARCH_TYPE_35;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::SOCIAL_CONTENT_NAME
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___SOCIAL_CONTENT_NAME_36;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::SOCIAL_CONTENT_ID
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___SOCIAL_CONTENT_ID_37;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::LIKE_TYPE
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___LIKE_TYPE_38;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::MEDIA_NAME
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___MEDIA_NAME_39;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::MEDIA_TYPE
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___MEDIA_TYPE_40;
	// FlurrySDK.Flurry/StringEventParam FlurrySDK.Flurry/EventParam::MEDIA_ID
	StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___MEDIA_ID_41;
	// FlurrySDK.Flurry/IntegerEventParam FlurrySDK.Flurry/EventParam::DURATION
	IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* ___DURATION_42;
};

// FlurrySDK.Flurry/EventParam

// FlurrySDK.Flurry/EventParamBase

// FlurrySDK.Flurry/EventParamBase

// FlurrySDK.Flurry/EventParams

// FlurrySDK.Flurry/EventParams

// FlurrySDK.Flurry/FlurryMessage

// FlurrySDK.Flurry/FlurryMessage

// FlurrySDK.Flurry/Performance
struct Performance_tAC95C9094182A530C176374406264EA5C90A22B9_StaticFields
{
	// System.Int32 FlurrySDK.Flurry/Performance::NONE
	int32_t ___NONE_0;
	// System.Int32 FlurrySDK.Flurry/Performance::COLD_START
	int32_t ___COLD_START_1;
	// System.Int32 FlurrySDK.Flurry/Performance::SCREEN_TIME
	int32_t ___SCREEN_TIME_2;
	// System.Int32 FlurrySDK.Flurry/Performance::ALL
	int32_t ___ALL_3;
	// FlurrySDKInternal.FlurryAgent/AgentPerformance FlurrySDK.Flurry/Performance::performance
	AgentPerformance_tB82AF57B6B08BFBDB16D91085886CAF239DC42E8* ___performance_4;
};

// FlurrySDK.Flurry/Performance

// FlurrySDK.Flurry/PublisherSegmentation
struct PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields
{
	// FlurrySDKInternal.FlurryAgent/AgentPublisherSegmentation FlurrySDK.Flurry/PublisherSegmentation::publisherSegmentation
	AgentPublisherSegmentation_t3667AE97AF070A56CA2EB1F61AFDCFD30B320085* ___publisherSegmentation_0;
	// System.Collections.Generic.List`1<FlurrySDK.Flurry/IPublisherSegmentationListener> FlurrySDK.Flurry/PublisherSegmentation::listeners
	List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9* ___listeners_1;
	// FlurrySDK.Flurry/IPublisherSegmentationListener FlurrySDK.Flurry/PublisherSegmentation::mainListener
	RuntimeObject* ___mainListener_2;
};

// FlurrySDK.Flurry/PublisherSegmentation

// FlurrySDK.Flurry/UserProperties
struct UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields
{
	// System.String FlurrySDK.Flurry/UserProperties::PROPERTY_CURRENCY_PREFERENCE
	String_t* ___PROPERTY_CURRENCY_PREFERENCE_0;
	// System.String FlurrySDK.Flurry/UserProperties::PROPERTY_PURCHASER
	String_t* ___PROPERTY_PURCHASER_1;
	// System.String FlurrySDK.Flurry/UserProperties::PROPERTY_REGISTERED_USER
	String_t* ___PROPERTY_REGISTERED_USER_2;
	// System.String FlurrySDK.Flurry/UserProperties::PROPERTY_SUBSCRIBER
	String_t* ___PROPERTY_SUBSCRIBER_3;
	// FlurrySDKInternal.FlurryAgent/AgentUserProperties FlurrySDK.Flurry/UserProperties::userProperties
	AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* ___userProperties_4;
};

// FlurrySDK.Flurry/UserProperties

// FlurrySDKInternal.FlurryAgent/AgentBuilder

// FlurrySDKInternal.FlurryAgent/AgentBuilder

// FlurrySDKInternal.FlurryAgent/AgentConfig

// FlurrySDKInternal.FlurryAgent/AgentConfig

// FlurrySDKInternal.FlurryAgent/AgentPerformance

// FlurrySDKInternal.FlurryAgent/AgentPerformance

// FlurrySDKInternal.FlurryAgent/AgentPublisherSegmentation

// FlurrySDKInternal.FlurryAgent/AgentPublisherSegmentation

// FlurrySDKInternal.FlurryAgent/AgentUserProperties

// FlurrySDKInternal.FlurryAgent/AgentUserProperties

// FlurrySDK.Flurry/Config/MainConfigListener

// FlurrySDK.Flurry/Config/MainConfigListener

// FlurrySDK.Flurry/PublisherSegmentation/MainPublisherSegmentationListener

// FlurrySDK.Flurry/PublisherSegmentation/MainPublisherSegmentationListener

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<FlurrySDK.Flurry/IConfigListener>

// System.Collections.Generic.List`1/Enumerator<FlurrySDK.Flurry/IConfigListener>

// System.Collections.Generic.List`1/Enumerator<FlurrySDK.Flurry/IPublisherSegmentationListener>

// System.Collections.Generic.List`1/Enumerator<FlurrySDK.Flurry/IPublisherSegmentationListener>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.String>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.String>

// UnityEngine.AndroidJavaClass

// UnityEngine.AndroidJavaClass

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Double

// System.Double

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// FlurrySDKInternal.FlurryAgentAndroid
struct FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields
{
	// UnityEngine.NetworkReachability FlurrySDKInternal.FlurryAgentAndroid::internetReachability
	int32_t ___internetReachability_0;
	// System.String FlurrySDKInternal.FlurryAgentAndroid::ORIGIN_NAME
	String_t* ___ORIGIN_NAME_1;
	// System.String FlurrySDKInternal.FlurryAgentAndroid::ORIGIN_VERSION
	String_t* ___ORIGIN_VERSION_2;
	// UnityEngine.AndroidJavaClass FlurrySDKInternal.FlurryAgentAndroid::cls_FlurryAgent
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___cls_FlurryAgent_3;
	// UnityEngine.AndroidJavaClass FlurrySDKInternal.FlurryAgentAndroid::cls_FlurryAgentConstants
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___cls_FlurryAgentConstants_4;
	// UnityEngine.AndroidJavaClass FlurrySDKInternal.FlurryAgentAndroid::cls_FlurryEvent
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___cls_FlurryEvent_5;
	// UnityEngine.AndroidJavaClass FlurrySDKInternal.FlurryAgentAndroid::cls_FlurryEventParam
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___cls_FlurryEventParam_6;
};

// FlurrySDKInternal.FlurryAgentAndroid

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.SByte

// System.SByte

// System.Void

// System.Void

// FlurrySDK.Flurry/BooleanEventParam

// FlurrySDK.Flurry/BooleanEventParam

// FlurrySDK.Flurry/DoubleEventParam

// FlurrySDK.Flurry/DoubleEventParam

// FlurrySDK.Flurry/IntegerEventParam

// FlurrySDK.Flurry/IntegerEventParam

// FlurrySDK.Flurry/StringEventParam

// FlurrySDK.Flurry/StringEventParam

// FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid

// FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid

// FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid
struct AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_StaticFields
{
	// UnityEngine.AndroidJavaClass FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::cls_FlurryConfig
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___cls_FlurryConfig_0;
	// UnityEngine.AndroidJavaObject FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::obj_FlurryConfig
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___obj_FlurryConfig_1;
};

// FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid

// FlurrySDKInternal.FlurryAgentAndroid/AgentPerformanceAndroid
struct AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01_StaticFields
{
	// UnityEngine.AndroidJavaClass FlurrySDKInternal.FlurryAgentAndroid/AgentPerformanceAndroid::cls_FlurryPerformance
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___cls_FlurryPerformance_0;
};

// FlurrySDKInternal.FlurryAgentAndroid/AgentPerformanceAndroid

// FlurrySDKInternal.FlurryAgentAndroid/AgentPublisherSegmentationAndroid
struct AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_StaticFields
{
	// UnityEngine.AndroidJavaClass FlurrySDKInternal.FlurryAgentAndroid/AgentPublisherSegmentationAndroid::cls_FlurryPublisherSegmentation
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___cls_FlurryPublisherSegmentation_0;
};

// FlurrySDKInternal.FlurryAgentAndroid/AgentPublisherSegmentationAndroid

// FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid
struct AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_StaticFields
{
	// UnityEngine.AndroidJavaClass FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::cls_FlurryUserProperties
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* ___cls_FlurryUserProperties_0;
};

// FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid

// UnityEngine.AndroidJavaProxy
struct AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_StaticFields
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaProxy::s_JavaLangSystemClass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___s_JavaLangSystemClass_2;
	// System.IntPtr UnityEngine.AndroidJavaProxy::s_HashCodeMethodID
	intptr_t ___s_HashCodeMethodID_3;
};

// UnityEngine.AndroidJavaProxy

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.AndroidJavaException

// UnityEngine.AndroidJavaException

// FlurrySDKInternal.FlurryAgentAndroid/ConfigCallback

// FlurrySDKInternal.FlurryAgentAndroid/ConfigCallback

// FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback

// FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback

// FlurrySDKInternal.FlurryAgentAndroid/PrivacySessionCallback

// FlurrySDKInternal.FlurryAgentAndroid/PrivacySessionCallback

// FlurrySDKInternal.FlurryAgentAndroid/PublisherSegmentationCallback

// FlurrySDKInternal.FlurryAgentAndroid/PublisherSegmentationCallback
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.SByte>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t AndroidJavaObject_GetStatic_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5DBAE687058070315290B3BFCCA71D3A7B4BF872_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject FlurrySDKInternal.FlurryAgentAndroid::ConvertToMap<System.Object,System.Object>(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* FlurryAgentAndroid_ConvertToMap_TisRuntimeObject_TisRuntimeObject_m35BE9E09E3183E04B3EFD28E8C98B0BC7C97774F_gshared (RuntimeObject* ___0_dictionary, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Object>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<TKey,TValue> FlurrySDKInternal.FlurryAgentAndroid::ConvertToDictionary<System.Object,System.Object>(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FlurryAgentAndroid_ConvertToDictionary_TisRuntimeObject_TisRuntimeObject_m83945480CD8899863F847313DBB5EA05691F5230_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_map, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject FlurrySDKInternal.FlurryAgentAndroid::ConvertToList<System.Object>(System.Collections.Generic.List`1<TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* FlurryAgentAndroid_ConvertToList_TisRuntimeObject_m848DFE4CA77F9AFC96DEE32A2576A5BCB6A2728A_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___0_list, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::CallStatic(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<System.SByte>(System.String)
inline int8_t AndroidJavaObject_GetStatic_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5DBAE687058070315290B3BFCCA71D3A7B4BF872 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  int8_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5DBAE687058070315290B3BFCCA71D3A7B4BF872_gshared)(__this, ___0_fieldName, method);
}
// UnityEngine.AndroidJavaObject FlurrySDKInternal.FlurryAgentAndroid::ConvertToMap<System.String,System.String>(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8 (RuntimeObject* ___0_dictionary, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (RuntimeObject*, const RuntimeMethod*))FlurryAgentAndroid_ConvertToMap_TisRuntimeObject_TisRuntimeObject_m35BE9E09E3183E04B3EFD28E8C98B0BC7C97774F_gshared)(___0_dictionary, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaClass::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389 (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* __this, String_t* ___0_className, const RuntimeMethod* method) ;
// FieldType UnityEngine.AndroidJavaObject::GetStatic<UnityEngine.AndroidJavaObject>(System.String)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, const RuntimeMethod*))AndroidJavaObject_GetStatic_TisRuntimeObject_m4EF4E4761A0A6E99E0A298F653E8129B1494E4C9_gshared)(__this, ___0_fieldName, method);
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/PrivacySessionCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacySessionCallback__ctor_m159CB135F9CA290AF23EE86BF1000570CEF3C9B2 (PrivacySessionCallback_t9A7B5E3F9D1ED440308BCD5BA9988F07C7C95970* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::CallStatic<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_CallStatic_TisRuntimeObject_mCAFE27630F6092C4910E14592B050DACFCBE146F_gshared)(__this, ___0_methodName, ___1_args, method);
}
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Int32>(System.String,System.Object[])
inline int32_t AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  int32_t (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject FlurrySDKInternal.FlurryAgentAndroid::ConvertToEventParams(FlurrySDK.Flurry/EventParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* FlurryAgentAndroid_ConvertToEventParams_mE23395ED5D7CE24EFF591EAC24ED46FA33770F65 (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* ___0_parameters, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.Object,System.String> FlurrySDK.Flurry/EventParams::GetParams()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EventParams_GetParams_mB41875569AFF98D5E729200750F2056476B00C92_inline (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<UnityEngine.AndroidJavaObject>(System.String,System.Object[])
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___0_methodName, ___1_args, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.String>::get_Key()
inline RuntimeObject* KeyValuePair_2_get_Key_mCE998D062CEF5E4DA028EA5321732D4CAA4C9C9C_inline (KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_mD320B20BE8C9065A0093963B37E88B44C160C5A6_inline (KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback::.ctor(FlurrySDK.Flurry/IMessagingListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingCallback__ctor_m9557FDF28A5DF704DAEFC0691F6E765A90A9F083 (MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F* __this, RuntimeObject* ___0_messagingListener, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<TKey,TValue> FlurrySDKInternal.FlurryAgentAndroid::ConvertToDictionary<System.String,System.String>(UnityEngine.AndroidJavaObject)
inline RuntimeObject* FlurryAgentAndroid_ConvertToDictionary_TisString_t_TisString_t_m407A5C3DA5FFB272026BE425CBF552E9CFDF0D11 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_map, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, const RuntimeMethod*))FlurryAgentAndroid_ConvertToDictionary_TisRuntimeObject_TisRuntimeObject_m83945480CD8899863F847313DBB5EA05691F5230_gshared)(___0_map, method);
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/PublisherSegmentationCallback::.ctor(FlurrySDK.Flurry/IPublisherSegmentationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublisherSegmentationCallback__ctor_m3FB92C23E0B12B35D904004A3CA7C746483EA2EA (PublisherSegmentationCallback_t79E663EBEA9D2D17B46BB32E3C6EF9BDB407AB36* __this, RuntimeObject* ___0_publisherSegmentationListener, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, const RuntimeMethod* method) ;
// System.Void FlurrySDKInternal.FlurryAgent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgent__ctor_mC8068385ECEDB3BFD05AC21EF615B6712CED70F1 (FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* __this, const RuntimeMethod* method) ;
// UnityEngine.NetworkReachability UnityEngine.Application::get_internetReachability()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_internetReachability_m3FECA8BA005340369BB952CE8CDF3E1A53F3BA0E (const RuntimeMethod* method) ;
// System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBuilder__ctor_mC3AF259B904B9731705C0916A70D564410723983 (AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Call(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject FlurrySDKInternal.FlurryAgentAndroid::ConvertToList<System.String>(System.Collections.Generic.List`1<TValue>)
inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* FlurryAgentAndroid_ConvertToList_TisString_t_m0DBD8C01D48D86BD96EF2AA785082C64DF165139 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_list, const RuntimeMethod* method)
{
	return ((  AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))FlurryAgentAndroid_ConvertToList_TisRuntimeObject_m848DFE4CA77F9AFC96DEE32A2576A5BCB6A2728A_gshared)(___0_list, method);
}
// System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentUserProperties__ctor_mCAEC2A99DD1D818B0CB161FCA98E836A1D14304B (AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* __this, const RuntimeMethod* method) ;
// System.Void FlurrySDKInternal.FlurryAgent/AgentPerformance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentPerformance__ctor_m2DDDD20B9F377F7A1BDEE8B1D0B04CDB43B6DF97 (AgentPerformance_tB82AF57B6B08BFBDB16D91085886CAF239DC42E8* __this, const RuntimeMethod* method) ;
// UnityEngine.AndroidJavaObject FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::getInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AgentConfigAndroid_getInstance_m6223EA8899B2474C91C5B61DE4966830DF074851 (const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.Boolean>(System.String,System.Object[])
inline bool AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  bool (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/ConfigCallback::.ctor(FlurrySDK.Flurry/IConfigListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigCallback__ctor_mDA2B1827622E4CA07A8F7BC9D8979C10B649A601 (ConfigCallback_tDFAA1F620540B2085B0938464091BA63EA235443* __this, RuntimeObject* ___0_configListener, const RuntimeMethod* method) ;
// ReturnType UnityEngine.AndroidJavaObject::Call<System.String>(System.String,System.Object[])
inline String_t* AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_methodName, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method)
{
	return ((  String_t* (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))AndroidJavaObject_Call_TisRuntimeObject_mA5AF1A9E0463CE91F0ACB6AC2FE0C1922B579EF7_gshared)(__this, ___0_methodName, ___1_args, method);
}
// System.Void FlurrySDKInternal.FlurryAgent/AgentConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentConfig__ctor_mAA639CA3070EC37B2FA128E1C2842824E4647FAD (AgentConfig_t8E52A1EE4F2983B3DBDFF13730B81AE1937B3AD3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaProxy::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7 (AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D* __this, String_t* ___0_javaInterface, const RuntimeMethod* method) ;
// FlurrySDK.Flurry/FlurryMessage FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback::GetFlurryMessage(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7* MessagingCallback_GetFlurryMessage_m322FDC5709F5E14A65DBF036621C9274D7E70820 (MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_flurryMessage, const RuntimeMethod* method) ;
// System.Void FlurrySDK.Flurry/FlurryMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryMessage__ctor_mB2DA0B81D4F627360B4A410C8A79D1CA3EE5AAE7 (FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7* __this, const RuntimeMethod* method) ;
// System.Void FlurrySDKInternal.FlurryAgent/AgentPublisherSegmentation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentPublisherSegmentation__ctor_mD5994473BF035B1000C5833FB3E605CE317F3243 (AgentPublisherSegmentation_t3667AE97AF070A56CA2EB1F61AFDCFD30B320085* __this, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Void FlurrySDKInternal.FlurryAgentAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid__ctor_m91A3FFC2E252885661C84E4545B6249DD459D940 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, const RuntimeMethod* method) ;
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBuilderAndroid__ctor_m2435A012639C74FF7182F50C1AE2946178350FF0 (AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5* __this, const RuntimeMethod* method) ;
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentUserPropertiesAndroid__ctor_m57F3C97A091D5C0998C9487E2D8980640964557D (AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE* __this, const RuntimeMethod* method) ;
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPerformanceAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentPerformanceAndroid__ctor_mC3A07283B3BB3872BEAC46EA1038372EF0153C2D (AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FlurrySDK.Flurry/IConfigListener>::.ctor()
inline void List_1__ctor_m31BF8CCA4E7DC6544B768943B298E27E6271D07E (List_1_t17C155552241AA0821355593722C226972660B0A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t17C155552241AA0821355593722C226972660B0A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentConfigAndroid__ctor_mE2832F625ADC526F3A7C9A2D3EDA8FDB1BE1AF9D (AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FlurrySDK.Flurry/IConfigListener>::Add(T)
inline void List_1_Add_m06F77ABABF3F18E5D98ABE371DB1E8863C8BD5D1_inline (List_1_t17C155552241AA0821355593722C226972660B0A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t17C155552241AA0821355593722C226972660B0A*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void FlurrySDK.Flurry/Config/MainConfigListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainConfigListener__ctor_m5F50B031E124AC19E95FFC3F3CDEDF6A7EB83DCF (MainConfigListener_t38865B5DF668E6154EF6FF651824119816DC21F8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<FlurrySDK.Flurry/IConfigListener>::Remove(T)
inline bool List_1_Remove_m4F9BA1D2B92C0A77CE7C715A4DE50635B69FF5D9 (List_1_t17C155552241AA0821355593722C226972660B0A* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t17C155552241AA0821355593722C226972660B0A*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FlurrySDK.Flurry/IConfigListener>::GetEnumerator()
inline Enumerator_t0CC5D0D22F8AB3BB0DDEDE7BE8F62C5DAB4E2B4D List_1_GetEnumerator_m69544C49D03BF7FFDDEA6C9EF76FC06C345B42F8 (List_1_t17C155552241AA0821355593722C226972660B0A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0CC5D0D22F8AB3BB0DDEDE7BE8F62C5DAB4E2B4D (*) (List_1_t17C155552241AA0821355593722C226972660B0A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<FlurrySDK.Flurry/IConfigListener>::Dispose()
inline void Enumerator_Dispose_m2C19A1BE525359503FFC71D324720E1DDF3A50C1 (Enumerator_t0CC5D0D22F8AB3BB0DDEDE7BE8F62C5DAB4E2B4D* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0CC5D0D22F8AB3BB0DDEDE7BE8F62C5DAB4E2B4D*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<FlurrySDK.Flurry/IConfigListener>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m71BFCCA8B902A86FB706AE46D61EF3917A8AACFD_inline (Enumerator_t0CC5D0D22F8AB3BB0DDEDE7BE8F62C5DAB4E2B4D* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t0CC5D0D22F8AB3BB0DDEDE7BE8F62C5DAB4E2B4D*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<FlurrySDK.Flurry/IConfigListener>::MoveNext()
inline bool Enumerator_MoveNext_mE5B4B77EEC0C76752B32CEF97458982051D58B0C (Enumerator_t0CC5D0D22F8AB3BB0DDEDE7BE8F62C5DAB4E2B4D* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0CC5D0D22F8AB3BB0DDEDE7BE8F62C5DAB4E2B4D*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<FlurrySDK.Flurry/IPublisherSegmentationListener>::.ctor()
inline void List_1__ctor_m5469C2C6316BC912F55491A825FBE063612253EF (List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPublisherSegmentationAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentPublisherSegmentationAndroid__ctor_m8D9B53238946497E82A35239EE4667E7840FFD45 (AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<FlurrySDK.Flurry/IPublisherSegmentationListener>::Add(T)
inline void List_1_Add_m26778592A76D135BFFC1DEA85D910ECED0D2F00E_inline (List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Void FlurrySDK.Flurry/PublisherSegmentation/MainPublisherSegmentationListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainPublisherSegmentationListener__ctor_mCD1010690BB6C2D023E8F707E7896E74D94174F6 (MainPublisherSegmentationListener_tD0C2942451DEDD275051F1D68EF7D8C6990C5476* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<FlurrySDK.Flurry/IPublisherSegmentationListener>::Remove(T)
inline bool List_1_Remove_m0D23AFA19C392F07456983776CEBE4551C8BA9E0 (List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9* __this, RuntimeObject* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9*, RuntimeObject*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<FlurrySDK.Flurry/IPublisherSegmentationListener>::GetEnumerator()
inline Enumerator_t8E4C302A6D89EB9234CD89C48366A77CB46178DC List_1_GetEnumerator_mFFFEFD2B27D36303D2A22D468AB6C44BED09F60C (List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8E4C302A6D89EB9234CD89C48366A77CB46178DC (*) (List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<FlurrySDK.Flurry/IPublisherSegmentationListener>::Dispose()
inline void Enumerator_Dispose_mD7DA48E9557E28D0D399776D7D397AFE0C7D9DD0 (Enumerator_t8E4C302A6D89EB9234CD89C48366A77CB46178DC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8E4C302A6D89EB9234CD89C48366A77CB46178DC*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<FlurrySDK.Flurry/IPublisherSegmentationListener>::get_Current()
inline RuntimeObject* Enumerator_get_Current_mB7A04D89EBF2A84F708FA67E94B7B7BB22A997F9_inline (Enumerator_t8E4C302A6D89EB9234CD89C48366A77CB46178DC* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t8E4C302A6D89EB9234CD89C48366A77CB46178DC*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<FlurrySDK.Flurry/IPublisherSegmentationListener>::MoveNext()
inline bool Enumerator_MoveNext_m5F1984D641D2C09B90121F91C64289A2AC45DA73 (Enumerator_t8E4C302A6D89EB9234CD89C48366A77CB46178DC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8E4C302A6D89EB9234CD89C48366A77CB46178DC*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void FlurrySDK.Flurry/StringEventParam::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void FlurrySDK.Flurry/IntegerEventParam::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerEventParam__ctor_m410B3C941CDF9C7ECFB01F96E02CF47B9FBF8024 (IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void FlurrySDK.Flurry/BooleanEventParam::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanEventParam__ctor_mEA5E9D4309DE18346DD25547E64F4AF57D142C28 (BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void FlurrySDK.Flurry/DoubleEventParam::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleEventParam__ctor_m176A6819BF4B1126D2F8C3B5CE53D1D767F81115 (DoubleEventParam_t4EC0DD25A28797A0C1EB2BDE628986D81FB6A0BE* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void FlurrySDK.Flurry/EventParamBase::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventParamBase__ctor_m5E21E27977D918ED1A976A4C82B65C02B0912DDD (EventParamBase_t991A7AA768695D513BF21EF614D7EE8C2A45C8FB* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.String>::.ctor()
inline void Dictionary_2__ctor_m4CE7EF08211EA84168C8FDD26DD05E92108AE96B (Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method) ;
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method) ;
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
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
// System.Void FlurrySDKInternal.FlurryAgent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgent__ctor_mC8068385ECEDB3BFD05AC21EF615B6712CED70F1 (FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBuilder__ctor_mC3AF259B904B9731705C0916A70D564410723983 (AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentUserProperties__ctor_mCAEC2A99DD1D818B0CB161FCA98E836A1D14304B (AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void FlurrySDKInternal.FlurryAgent/AgentPerformance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentPerformance__ctor_m2DDDD20B9F377F7A1BDEE8B1D0B04CDB43B6DF97 (AgentPerformance_tB82AF57B6B08BFBDB16D91085886CAF239DC42E8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void FlurrySDKInternal.FlurryAgent/AgentConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentConfig__ctor_mAA639CA3070EC37B2FA128E1C2842824E4647FAD (AgentConfig_t8E52A1EE4F2983B3DBDFF13730B81AE1937B3AD3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void FlurrySDKInternal.FlurryAgent/AgentPublisherSegmentation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentPublisherSegmentation__ctor_mD5994473BF035B1000C5833FB3E605CE317F3243 (AgentPublisherSegmentation_t3667AE97AF070A56CA2EB1F61AFDCFD30B320085* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void FlurrySDKInternal.FlurryAgentAndroid::SetContinueSessionMillis(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_SetContinueSessionMillis_m4431CB03795CFBF8B66545974CA803CCEC99A6B0 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, int64_t ___0_sessionMillis, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA21862EE324337333AF1E424CA915CECD327CECB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("setContinueSessionMillis", sessionMillis);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int64_t L_3 = ___0_sessionMillis;
		int64_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralA21862EE324337333AF1E424CA915CECD327CECB, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::SetCrashReporting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_SetCrashReporting_m474A462B4F78DD7B3A60B83113CC5BBFE8594D30 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, bool ___0_crashReporting, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44B864640C69CB602C808A886A7FC13CED751ADA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("setCaptureUncaughtExceptions", crashReporting);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_crashReporting;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral44B864640C69CB602C808A886A7FC13CED751ADA, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::SetIncludeBackgroundSessionsInMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_SetIncludeBackgroundSessionsInMetrics_m31CF909FC4E49DB0208967CB0AF29F4F80BC9ABD (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, bool ___0_includeBackgroundSessionsInMetrics, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4356AD1A589C673A3AF8DD40C21C0D9FAD0C707F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("setIncludeBackgroundSessionsInMetrics", includeBackgroundSessionsInMetrics);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_includeBackgroundSessionsInMetrics;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral4356AD1A589C673A3AF8DD40C21C0D9FAD0C707F, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::SetLogEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_SetLogEnabled_m9DEB6E5938D50BE74C77BE1908431FC21EF210E8 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, bool ___0_enableLog, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE061C2DA51C354EE774BC993235AC38BC941CA0D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("setLogEnabled", enableLog);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_enableLog;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralE061C2DA51C354EE774BC993235AC38BC941CA0D, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::SetLogLevel(FlurrySDK.Flurry/LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_SetLogLevel_m8B271E7F440202626AFE9B54847341585D2CB122 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, int32_t ___0_logLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6646AEF6383BB084D7AF1DBC36DE3B99CB7D5096);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("setLogLevel", (int)logLevel);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___0_logLevel;
		int32_t L_4 = ((int32_t)L_3);
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral6646AEF6383BB084D7AF1DBC36DE3B99CB7D5096, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::SetSslPinningEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_SetSslPinningEnabled_mAF6186CB34BC6BE06239C1D8933B10EB050A67D2 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, bool ___0_sslPinningEnabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD301F43E7FA1623DCF3D6F2FBF8E44ED9B51A7B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("setSslPinningEnabled", sslPinningEnabled);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_sslPinningEnabled;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralDD301F43E7FA1623DCF3D6F2FBF8E44ED9B51A7B, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::SetAge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_SetAge_mD3A5A080EDEB00DB2A76FCFA818C738EDC134B0D (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, int32_t ___0_age, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6E8ACFB10A5E432178C958D538996C7B6A7324C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("setAge", age);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___0_age;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralD6E8ACFB10A5E432178C958D538996C7B6A7324C, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::SetGender(FlurrySDK.Flurry/Gender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_SetGender_m3B9BE010F9373F5AC93F43ABF47844951E806A13 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, int32_t ___0_gender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5DBAE687058070315290B3BFCCA71D3A7B4BF872_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CF3081EFDBD344D6B942D0C3115EEA2DFF43096);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral203AB7FB3F880E2E7B6531F72C378827D3B5A6F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC20397EE6CCF2119C46EF57716C9CA89A0708768);
		s_Il2CppMethodInitialized = true;
	}
	int8_t V_0 = 0x0;
	int8_t G_B3_0 = 0x0;
	{
		// sbyte flurryGender = (gender == FlurrySDK.Flurry.Gender.Male
		//                      ? cls_FlurryAgentConstants.GetStatic<sbyte>("MALE")
		//                      : cls_FlurryAgentConstants.GetStatic<sbyte>("FEMALE"));
		int32_t L_0 = ___0_gender;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgentConstants_4;
		NullCheck(L_1);
		int8_t L_2;
		L_2 = AndroidJavaObject_GetStatic_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5DBAE687058070315290B3BFCCA71D3A7B4BF872(L_1, _stringLiteral203AB7FB3F880E2E7B6531F72C378827D3B5A6F3, AndroidJavaObject_GetStatic_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5DBAE687058070315290B3BFCCA71D3A7B4BF872_RuntimeMethod_var);
		G_B3_0 = L_2;
		goto IL_0023;
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgentConstants_4;
		NullCheck(L_3);
		int8_t L_4;
		L_4 = AndroidJavaObject_GetStatic_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5DBAE687058070315290B3BFCCA71D3A7B4BF872(L_3, _stringLiteralC20397EE6CCF2119C46EF57716C9CA89A0708768, AndroidJavaObject_GetStatic_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5DBAE687058070315290B3BFCCA71D3A7B4BF872_RuntimeMethod_var);
		G_B3_0 = L_4;
	}

IL_0023:
	{
		V_0 = G_B3_0;
		// cls_FlurryAgent.CallStatic("setGender", flurryGender);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_5 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		int8_t L_8 = V_0;
		int8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		NullCheck(L_5);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_5, _stringLiteral1CF3081EFDBD344D6B942D0C3115EEA2DFF43096, L_7, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::SetReportLocation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_SetReportLocation_m261A7C8BE2484A27B8DA571731EFD81B0DE47D19 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, bool ___0_reportLocation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9284EB5700A5CD765E315B572B1C877D2FEE1E96);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("setReportLocation", reportLocation);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_reportLocation;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral9284EB5700A5CD765E315B572B1C877D2FEE1E96, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::SetSessionOrigin(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_SetSessionOrigin_mCB9A0F687CD3E9EC917C0451FA8DEBD077537FC4 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, String_t* ___0_originName, String_t* ___1_deepLink, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94AE6AB21484E31E0C8FA3BA7791D45FFDE8F369);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("setSessionOrigin", originName, deepLink);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_originName;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_deepLink;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral94AE6AB21484E31E0C8FA3BA7791D45FFDE8F369, L_4, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::SetUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_SetUserId_mAC7081007E9FA3A5641F3E7922BDAB1FC754C381 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, String_t* ___0_userId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F5F4B730831B20589268119FBDEDC2466F08E22);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("setUserId", userId);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_userId;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral6F5F4B730831B20589268119FBDEDC2466F08E22, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::SetVersionName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_SetVersionName_m6779CEB0A950ABFA2EA64AD3823C4A88612A0147 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, String_t* ___0_versionName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7D1AC0EB152435BD27278ED1220780556ADD31E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("setVersionName", versionName);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_versionName;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralE7D1AC0EB152435BD27278ED1220780556ADD31E, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::AddOrigin(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_AddOrigin_m2AF5011B6DD0E79538F03168B3192D55B1CCC2D5 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, String_t* ___0_originName, String_t* ___1_originVersion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral056D563A00505740B23A4A3690B26AECDDC4C5A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("addOrigin", originName, originVersion);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_originName;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_originVersion;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral056D563A00505740B23A4A3690B26AECDDC4C5A2, L_4, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::AddOrigin(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_AddOrigin_m0CC71AE33ABA11260E076E760C71EC5A9BDBE3A3 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, String_t* ___0_originName, String_t* ___1_originVersion, RuntimeObject* ___2_originParameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral056D563A00505740B23A4A3690B26AECDDC4C5A2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("addOrigin", originName, originVersion, ConvertToMap(originParameters));
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_originName;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_originVersion;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		RuntimeObject* L_7 = ___2_originParameters;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8(L_7, FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8_RuntimeMethod_var);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_8);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral056D563A00505740B23A4A3690B26AECDDC4C5A2, L_6, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::AddSessionProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_AddSessionProperty_m81FC47461B84575C49FAE50CD5CB5F3A9915577F (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE83D1EE8A5BDE9F900635A86D06EECE53097C56);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("addSessionProperty", name, value);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_value;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralBE83D1EE8A5BDE9F900635A86D06EECE53097C56, L_4, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::SetDataSaleOptOut(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_SetDataSaleOptOut_m85D59A37A7219C1B151FB787A588EE4885CCC044 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, bool ___0_isOptOut, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B356FA0382B22BBA50F5ABFA8456DBBF1174A84);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("setDataSaleOptOut", isOptOut);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_isOptOut;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral0B356FA0382B22BBA50F5ABFA8456DBBF1174A84, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::DeleteData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_DeleteData_m878ED11168075F15468376A3FE800EEF77BBF4D3 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86FE60FAB0ADE14E87E1C6D3643793367FB8EF91);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("deleteData");
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral86FE60FAB0ADE14E87E1C6D3643793367FB8EF91, L_1, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::OpenPrivacyDashboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_OpenPrivacyDashboard_m77E8FF4D6369BAA2E2D8E11CBF5679756846440C (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrivacySessionCallback_t9A7B5E3F9D1ED440308BCD5BA9988F07C7C95970_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0B88755037BC08194B972081B3C05C300AA13FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEAFE67CEDCD3C7E6C9027DE45AFD34911495A50D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	{
		// using (AndroidJavaClass cls_UnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0059:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
					if (!L_1)
					{
						goto IL_0062;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_0062:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (AndroidJavaObject obj_Activity = cls_UnityPlayer.GetStatic<AndroidJavaObject>("currentActivity"))
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
				NullCheck(L_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
				L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
				V_1 = L_4;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_004f_1:
					{// begin finally (depth: 2)
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
							if (!L_5)
							{
								goto IL_0058_1;
							}
						}
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
							NullCheck(L_6);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
						}

IL_0058_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// AndroidJavaObject obj_Request = new AndroidJavaObject("com.flurry.android.FlurryPrivacySession$Request",
					//     obj_Activity, new PrivacySessionCallback());
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_7;
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_1;
					NullCheck(L_8);
					ArrayElementTypeCheck (L_8, L_9);
					(L_8)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_8;
					PrivacySessionCallback_t9A7B5E3F9D1ED440308BCD5BA9988F07C7C95970* L_11 = (PrivacySessionCallback_t9A7B5E3F9D1ED440308BCD5BA9988F07C7C95970*)il2cpp_codegen_object_new(PrivacySessionCallback_t9A7B5E3F9D1ED440308BCD5BA9988F07C7C95970_il2cpp_TypeInfo_var);
					NullCheck(L_11);
					PrivacySessionCallback__ctor_m159CB135F9CA290AF23EE86BF1000570CEF3C9B2(L_11, NULL);
					NullCheck(L_10);
					ArrayElementTypeCheck (L_10, L_11);
					(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_11);
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
					NullCheck(L_12);
					AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_12, _stringLiteralD0B88755037BC08194B972081B3C05C300AA13FA, L_10, NULL);
					V_2 = L_12;
					// cls_FlurryAgent.CallStatic("openPrivacyDashboard", obj_Request);
					il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_13 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = V_2;
					NullCheck(L_15);
					ArrayElementTypeCheck (L_15, L_16);
					(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
					NullCheck(L_13);
					AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_13, _stringLiteralEAFE67CEDCD3C7E6C9027DE45AFD34911495A50D, L_15, NULL);
					// }
					goto IL_0063;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Int32 FlurrySDKInternal.FlurryAgentAndroid::GetAgentVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlurryAgentAndroid_GetAgentVersion_mE9E94EEB9C72E574E317A1069BE868F4586099F6 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0901ECAADC69B3F22EE71CEDE9D4C0B5343692C8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return cls_FlurryAgent.CallStatic<int>("getAgentVersion");
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A(L_0, _stringLiteral0901ECAADC69B3F22EE71CEDE9D4C0B5343692C8, L_1, AndroidJavaObject_CallStatic_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6619B03C8DA4F5A66785845A2E5B39DAEF36642A_RuntimeMethod_var);
		return L_2;
	}
}
// System.String FlurrySDKInternal.FlurryAgentAndroid::GetReleaseVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FlurryAgentAndroid_GetReleaseVersion_m40A1374AE3FBA6B6CEEEFD7A9A44AF75187D0233 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D1839156F0FF5835C7C87A70E87F124FCD548C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return cls_FlurryAgent.CallStatic<string>("getReleaseVersion");
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteral2D1839156F0FF5835C7C87A70E87F124FCD548C7, L_1, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_2;
	}
}
// System.String FlurrySDKInternal.FlurryAgentAndroid::GetSessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FlurryAgentAndroid_GetSessionId_mF64728074E41D841E0C3DF3D348FCAC537DD7A46 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0A92CD1C0A7C8678A20B265BDB253BB7E537547);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return cls_FlurryAgent.CallStatic<string>("getSessionId");
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		String_t* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3(L_0, _stringLiteralD0A92CD1C0A7C8678A20B265BDB253BB7E537547, L_1, AndroidJavaObject_CallStatic_TisString_t_mB5DC41208BD7C326A089C20F4F1C2B8B2444ACC3_RuntimeMethod_var);
		return L_2;
	}
}
// System.Int32 FlurrySDKInternal.FlurryAgentAndroid::LogEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlurryAgentAndroid_LogEvent_m61DAA62F009BD9F2043E3AC81AC36F8A231CBCCE (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, String_t* ___0_eventId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC972CCEF9725C97FA81EE0784238DBD804D49222);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9CD9BE5636542BD3CFAC8C3719D519A618BC894);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaObject result = cls_FlurryAgent.CallStatic<AndroidJavaObject>("logEvent", eventId);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_eventId;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
		L_4 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, _stringLiteralC972CCEF9725C97FA81EE0784238DBD804D49222, L_2, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_0 = L_4;
		// if (result != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_0;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		// return result.Call<int>("ordinal");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_6);
		int32_t L_8;
		L_8 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_6, _stringLiteralC9CD9BE5636542BD3CFAC8C3719D519A618BC894, L_7, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		return L_8;
	}

IL_002e:
	{
		// return 0;
		return 0;
	}
}
// System.Int32 FlurrySDKInternal.FlurryAgentAndroid::LogEvent(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlurryAgentAndroid_LogEvent_m2A6C46C20F7B16A30E3E4436863141069FFDD212 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, String_t* ___0_eventId, bool ___1_timed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC972CCEF9725C97FA81EE0784238DBD804D49222);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9CD9BE5636542BD3CFAC8C3719D519A618BC894);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaObject result = cls_FlurryAgent.CallStatic<AndroidJavaObject>("logEvent", eventId, timed);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_eventId;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		bool L_5 = ___1_timed;
		bool L_6 = L_5;
		RuntimeObject* L_7 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_6);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_7);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8;
		L_8 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, _stringLiteralC972CCEF9725C97FA81EE0784238DBD804D49222, L_4, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_0 = L_8;
		// if (result != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_0;
		if (!L_9)
		{
			goto IL_0037;
		}
	}
	{
		// return result.Call<int>("ordinal");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11;
		L_11 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_10);
		int32_t L_12;
		L_12 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_10, _stringLiteralC9CD9BE5636542BD3CFAC8C3719D519A618BC894, L_11, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		return L_12;
	}

IL_0037:
	{
		// return 0;
		return 0;
	}
}
// System.Int32 FlurrySDKInternal.FlurryAgentAndroid::LogEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlurryAgentAndroid_LogEvent_m9073CA9328B5E73BAFDD3A21E103941F4B7A0AAF (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, String_t* ___0_eventId, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC972CCEF9725C97FA81EE0784238DBD804D49222);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9CD9BE5636542BD3CFAC8C3719D519A618BC894);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaObject result = cls_FlurryAgent.CallStatic<AndroidJavaObject>("logEvent", eventId, ConvertToMap(parameters));
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_eventId;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___1_parameters;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8(L_5, FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8_RuntimeMethod_var);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, _stringLiteralC972CCEF9725C97FA81EE0784238DBD804D49222, L_4, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_0 = L_7;
		// if (result != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = V_0;
		if (!L_8)
		{
			goto IL_0037;
		}
	}
	{
		// return result.Call<int>("ordinal");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10;
		L_10 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_9);
		int32_t L_11;
		L_11 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_9, _stringLiteralC9CD9BE5636542BD3CFAC8C3719D519A618BC894, L_10, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		return L_11;
	}

IL_0037:
	{
		// return 0;
		return 0;
	}
}
// System.Int32 FlurrySDKInternal.FlurryAgentAndroid::LogEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlurryAgentAndroid_LogEvent_m4CEB0786057E1522D581DA38EB86D810E994E346 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, String_t* ___0_eventId, RuntimeObject* ___1_parameters, bool ___2_timed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC972CCEF9725C97FA81EE0784238DBD804D49222);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9CD9BE5636542BD3CFAC8C3719D519A618BC894);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaObject result = cls_FlurryAgent.CallStatic<AndroidJavaObject>("logEvent", eventId, ConvertToMap(parameters), timed);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_eventId;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___1_parameters;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8(L_5, FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8_RuntimeMethod_var);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_4;
		bool L_8 = ___2_timed;
		bool L_9 = L_8;
		RuntimeObject* L_10 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_10);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11;
		L_11 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, _stringLiteralC972CCEF9725C97FA81EE0784238DBD804D49222, L_7, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_0 = L_11;
		// if (result != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = V_0;
		if (!L_12)
		{
			goto IL_0040;
		}
	}
	{
		// return result.Call<int>("ordinal");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14;
		L_14 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_13);
		int32_t L_15;
		L_15 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_13, _stringLiteralC9CD9BE5636542BD3CFAC8C3719D519A618BC894, L_14, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		return L_15;
	}

IL_0040:
	{
		// return 0;
		return 0;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::EndTimedEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_EndTimedEvent_m8A0BF1E51E9394A4B726961B66700416A5892F3F (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, String_t* ___0_eventId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81065656AE98E4738B08B2EF99756BF13E3AA176);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("endTimedEvent", eventId);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_eventId;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral81065656AE98E4738B08B2EF99756BF13E3AA176, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::EndTimedEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_EndTimedEvent_m235020EAB97D8A30296FF11843A90191E9881040 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, String_t* ___0_eventId, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral81065656AE98E4738B08B2EF99756BF13E3AA176);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("endTimedEvent", eventId, ConvertToMap(parameters));
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_eventId;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		RuntimeObject* L_5 = ___1_parameters;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8(L_5, FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8_RuntimeMethod_var);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral81065656AE98E4738B08B2EF99756BF13E3AA176, L_4, NULL);
		// }
		return;
	}
}
// System.Int32 FlurrySDKInternal.FlurryAgentAndroid::LogEvent(FlurrySDK.Flurry/Event,FlurrySDK.Flurry/EventParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlurryAgentAndroid_LogEvent_mF6A1D5E80799BD1FD6FBF5F35DC802652114D631 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, int32_t ___0_eventId, EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Event_tD3A113E8508CEAA79418D50BF1A406FCCBB9817E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC972CCEF9725C97FA81EE0784238DBD804D49222);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9CD9BE5636542BD3CFAC8C3719D519A618BC894);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	{
		// AndroidJavaObject javaEventId = cls_FlurryEvent.GetStatic<AndroidJavaObject>(eventId.ToString());
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryEvent_5;
		Il2CppFakeBox<int32_t> L_1(Event_tD3A113E8508CEAA79418D50BF1A406FCCBB9817E_il2cpp_TypeInfo_var, (&___0_eventId));
		String_t* L_2;
		L_2 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_1), NULL);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_0, L_2, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		V_0 = L_3;
		// AndroidJavaObject result = cls_FlurryAgent.CallStatic<AndroidJavaObject>("logEvent",
		//                                                      javaEventId, ConvertToEventParams(parameters));
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7 = V_0;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* L_9 = ___1_parameters;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10;
		L_10 = FlurryAgentAndroid_ConvertToEventParams_mE23395ED5D7CE24EFF591EAC24ED46FA33770F65(L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_10);
		NullCheck(L_4);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_11;
		L_11 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_4, _stringLiteralC972CCEF9725C97FA81EE0784238DBD804D49222, L_8, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_1 = L_11;
		// if (result != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_12 = V_1;
		if (!L_12)
		{
			goto IL_004f;
		}
	}
	{
		// return result.Call<int>("ordinal");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14;
		L_14 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_13);
		int32_t L_15;
		L_15 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_13, _stringLiteralC9CD9BE5636542BD3CFAC8C3719D519A618BC894, L_14, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		return L_15;
	}

IL_004f:
	{
		// return 0;
		return 0;
	}
}
// UnityEngine.AndroidJavaObject FlurrySDKInternal.FlurryAgentAndroid::ConvertToEventParams(FlurrySDK.Flurry/EventParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* FlurryAgentAndroid_ConvertToEventParams_mE23395ED5D7CE24EFF591EAC24ED46FA33770F65 (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* ___0_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventParamBase_t991A7AA768695D513BF21EF614D7EE8C2A45C8FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0C5C15BD4CFBC65D550EF9C0BF07EA524EB495E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tDFB2ACC9CFA50DAA3102AFCFE54D3753760EF12F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mCE998D062CEF5E4DA028EA5321732D4CAA4C9C9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mD320B20BE8C9065A0093963B37E88B44C160C5A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral477A683C1EF3BB7B78929745F0DF2C68DAD306A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ED49A584D744E2A271927164E80377C15D1899E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE7072161266D4F867CE0A311142D9F3D4A0956CA);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD V_3;
	memset((&V_3), 0, sizeof(V_3));
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_4 = NULL;
	{
		// AndroidJavaObject obj_EventParams = new AndroidJavaObject("com.flurry.android.FlurryEvent$Params");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteral477A683C1EF3BB7B78929745F0DF2C68DAD306A5, L_0, NULL);
		V_0 = L_1;
		// if (parameters != null)
		EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* L_2 = ___0_parameters;
		if (!L_2)
		{
			goto IL_00bf;
		}
	}
	{
		// IDictionary<object, string> dictionary = parameters.GetParams();
		EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* L_3 = ___0_parameters;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = EventParams_GetParams_mB41875569AFF98D5E729200750F2056476B00C92_inline(L_3, NULL);
		// AndroidJavaObject obj_HashMap = obj_EventParams.Call<AndroidJavaObject>("getParams");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6;
		L_6 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_5);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_5, _stringLiteral5ED49A584D744E2A271927164E80377C15D1899E, L_6, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		V_1 = L_7;
		// foreach (KeyValuePair<object, string> pair in dictionary)
		NullCheck(L_4);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.String>>::GetEnumerator() */, IEnumerable_1_t0C5C15BD4CFBC65D550EF9C0BF07EA524EB495E0_il2cpp_TypeInfo_var, L_4);
		V_2 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b5:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_9 = V_2;
					if (!L_9)
					{
						goto IL_00be;
					}
				}
				{
					RuntimeObject* L_10 = V_2;
					NullCheck(L_10);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_10);
				}

IL_00be:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00ab_1;
			}

IL_0035_1:
			{
				// foreach (KeyValuePair<object, string> pair in dictionary)
				RuntimeObject* L_11 = V_2;
				NullCheck(L_11);
				KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD L_12;
				L_12 = InterfaceFuncInvoker0< KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.String>>::get_Current() */, IEnumerator_1_tDFB2ACC9CFA50DAA3102AFCFE54D3753760EF12F_il2cpp_TypeInfo_var, L_11);
				V_3 = L_12;
				// if (pair.Key is FlurrySDK.Flurry.EventParamBase)
				RuntimeObject* L_13;
				L_13 = KeyValuePair_2_get_Key_mCE998D062CEF5E4DA028EA5321732D4CAA4C9C9C_inline((&V_3), KeyValuePair_2_get_Key_mCE998D062CEF5E4DA028EA5321732D4CAA4C9C9C_RuntimeMethod_var);
				if (!((EventParamBase_t991A7AA768695D513BF21EF614D7EE8C2A45C8FB*)IsInstClass((RuntimeObject*)L_13, EventParamBase_t991A7AA768695D513BF21EF614D7EE8C2A45C8FB_il2cpp_TypeInfo_var)))
				{
					goto IL_0085_1;
				}
			}
			{
				// AndroidJavaObject javaEventParam = cls_FlurryEventParam.GetStatic<AndroidJavaObject>(pair.Key.ToString());
				il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_14 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryEventParam_6;
				RuntimeObject* L_15;
				L_15 = KeyValuePair_2_get_Key_mCE998D062CEF5E4DA028EA5321732D4CAA4C9C9C_inline((&V_3), KeyValuePair_2_get_Key_mCE998D062CEF5E4DA028EA5321732D4CAA4C9C9C_RuntimeMethod_var);
				NullCheck(L_15);
				String_t* L_16;
				L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
				NullCheck(L_14);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_17;
				L_17 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_14, L_16, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
				V_4 = L_17;
				// obj_HashMap.Call<AndroidJavaObject>("put", javaEventParam, pair.Value);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_18 = V_1;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = L_19;
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = V_4;
				NullCheck(L_20);
				ArrayElementTypeCheck (L_20, L_21);
				(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_21);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_20;
				String_t* L_23;
				L_23 = KeyValuePair_2_get_Value_mD320B20BE8C9065A0093963B37E88B44C160C5A6_inline((&V_3), KeyValuePair_2_get_Value_mD320B20BE8C9065A0093963B37E88B44C160C5A6_RuntimeMethod_var);
				NullCheck(L_22);
				ArrayElementTypeCheck (L_22, L_23);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_23);
				NullCheck(L_18);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_24;
				L_24 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_18, _stringLiteralE7072161266D4F867CE0A311142D9F3D4A0956CA, L_22, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
				goto IL_00ab_1;
			}

IL_0085_1:
			{
				// obj_HashMap.Call<AndroidJavaObject>("put", pair.Key, pair.Value);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = V_1;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_26 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = L_26;
				RuntimeObject* L_28;
				L_28 = KeyValuePair_2_get_Key_mCE998D062CEF5E4DA028EA5321732D4CAA4C9C9C_inline((&V_3), KeyValuePair_2_get_Key_mCE998D062CEF5E4DA028EA5321732D4CAA4C9C9C_RuntimeMethod_var);
				NullCheck(L_27);
				ArrayElementTypeCheck (L_27, L_28);
				(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_28);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_27;
				String_t* L_30;
				L_30 = KeyValuePair_2_get_Value_mD320B20BE8C9065A0093963B37E88B44C160C5A6_inline((&V_3), KeyValuePair_2_get_Value_mD320B20BE8C9065A0093963B37E88B44C160C5A6_RuntimeMethod_var);
				NullCheck(L_29);
				ArrayElementTypeCheck (L_29, L_30);
				(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_30);
				NullCheck(L_25);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_31;
				L_31 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_25, _stringLiteralE7072161266D4F867CE0A311142D9F3D4A0956CA, L_29, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
			}

IL_00ab_1:
			{
				// foreach (KeyValuePair<object, string> pair in dictionary)
				RuntimeObject* L_32 = V_2;
				NullCheck(L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_32);
				if (L_33)
				{
					goto IL_0035_1;
				}
			}
			{
				goto IL_00bf;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00bf:
	{
		// return obj_EventParams;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_34 = V_0;
		return L_34;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::OnPageView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_OnPageView_m35A9B02DF32C2B2B623FFEFA2268E4E77CF07017 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDC4510FA0118475A528D0C6C525EF81919452DD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Deprecated API OnPageView removed.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralCDC4510FA0118475A528D0C6C525EF81919452DD, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::OnError(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_OnError_m43CBDC5BE1C90A6C6E26ED4664FA7DD5C5EBB233 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, String_t* ___0_errorId, String_t* ___1_message, String_t* ___2_errorClass, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD7E1BD1133CB54CB1C7DC65CE70CE9FB0C7C9B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("onError", errorId, message, errorClass);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_errorId;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_message;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___2_errorClass;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralAD7E1BD1133CB54CB1C7DC65CE70CE9FB0C7C9B0, L_6, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::OnError(System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_OnError_m624B582E4ECA3721E94A56456398238B781605C0 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, String_t* ___0_errorId, String_t* ___1_message, String_t* ___2_errorClass, RuntimeObject* ___3_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD7E1BD1133CB54CB1C7DC65CE70CE9FB0C7C9B0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("onError", errorId, message, errorClass, ConvertToMap(parameters));
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_errorId;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_message;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		String_t* L_7 = ___2_errorClass;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = L_6;
		RuntimeObject* L_9 = ___3_parameters;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10;
		L_10 = FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8(L_9, FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8_RuntimeMethod_var);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralAD7E1BD1133CB54CB1C7DC65CE70CE9FB0C7C9B0, L_8, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::LogBreadcrumb(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_LogBreadcrumb_mF217F9AF248D42436C810E16277F2F7452BED20E (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, String_t* ___0_crashBreadcrumb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B8FE54F7B2DFBC26D024671DD98ADB63D30DCD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.CallStatic("logBreadcrumb", crashBreadcrumb);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_crashBreadcrumb;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral9B8FE54F7B2DFBC26D024671DD98ADB63D30DCD0, L_2, NULL);
		// }
		return;
	}
}
// System.Int32 FlurrySDKInternal.FlurryAgentAndroid::LogPayment(System.String,System.String,System.Int32,System.Double,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FlurryAgentAndroid_LogPayment_m7417E80BB467680808A3A1244AEC8446B58AB52A (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, String_t* ___0_productName, String_t* ___1_productId, int32_t ___2_quantity, double ___3_price, String_t* ___4_currency, String_t* ___5_transactionId, RuntimeObject* ___6_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83946F2C08753B395CF669E97569B9A64CA3625B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9CD9BE5636542BD3CFAC8C3719D519A618BC894);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	{
		// AndroidJavaObject result = cls_FlurryAgent.CallStatic<AndroidJavaObject>("logPayment", productName, productId,
		//                                                                          quantity, price, currency, transactionId,
		//                                                                          ConvertToMap(parameters));
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)7);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_productName;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_productId;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		int32_t L_7 = ___2_quantity;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_9);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_6;
		double L_11 = ___3_price;
		double L_12 = L_11;
		RuntimeObject* L_13 = Box(Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_13);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_10;
		String_t* L_15 = ___4_currency;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_14;
		String_t* L_17 = ___5_transactionId;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_17);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_16;
		RuntimeObject* L_19 = ___6_parameters;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20;
		L_20 = FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8(L_19, FlurryAgentAndroid_ConvertToMap_TisString_t_TisString_t_m1FA07F2A22D9C975C09A47CC0672CCC3AFBBF5E8_RuntimeMethod_var);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)L_20);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21;
		L_21 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, _stringLiteral83946F2C08753B395CF669E97569B9A64CA3625B, L_18, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		V_0 = L_21;
		// if (result != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_22 = V_0;
		if (!L_22)
		{
			goto IL_0059;
		}
	}
	{
		// return result.Call<int>("ordinal");
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_23 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24;
		L_24 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_23);
		int32_t L_25;
		L_25 = AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC(L_23, _stringLiteralC9CD9BE5636542BD3CFAC8C3719D519A618BC894, L_24, AndroidJavaObject_Call_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDC5FD095AFC55DFE596907E5B055B5774DA5B5AC_RuntimeMethod_var);
		return L_25;
	}

IL_0059:
	{
		// return 0;
		return 0;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::SetIAPReportingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_SetIAPReportingEnabled_mC7A94CF69CE45445051346CD75A7AF205E7A25BD (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, bool ___0_enableIAP, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1EAF09DC78B7C6B3434DCBAE24FD21630142F88);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("setIAPReportingEnabled is not supported on Android. Please use LogPayment instead.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralE1EAF09DC78B7C6B3434DCBAE24FD21630142F88, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::UpdateConversionValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_UpdateConversionValue_m80C69B0CCA7AE4563CC86A8B2610B68D83DA623F (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, int32_t ___0_conversionValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AC5D0EE89D2BBD0965B6455A3F0354E4DFD5DFE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("UpdateConversionValue is for iOS only.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral8AC5D0EE89D2BBD0965B6455A3F0354E4DFD5DFE, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::UpdateConversionValueWithEvent(FlurrySDK.Flurry/SKAdNetworkEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_UpdateConversionValueWithEvent_mB907AECD478E210FDF7EC095F8BD1210EA767A39 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, int32_t ___0_flurryEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB637CF39141A8C54972BB879BD0E99A8E5BD7D67);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("UpdateConversionValueWithEvent is for iOS only.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralB637CF39141A8C54972BB879BD0E99A8E5BD7D67, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::SetMessagingListener(FlurrySDK.Flurry/IMessagingListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_SetMessagingListener_m20B6F148B8C9F11D60DC4D74CB5C7446092A8DF9 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, RuntimeObject* ___0_messagingListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral498C58FDF5437082AD776A96B26D244C63644F7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B18834154B328C4F69ADB247CB5C6F293B57961);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD5412DDDC5B32B7F2C5848041BF7F1564F80556);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// Debug.Log("To customize Flurry Messaging for Android, please remember to update your AndroidManifest.xml to setup the Messaging.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6B18834154B328C4F69ADB247CB5C6F293B57961, NULL);
		// if (messagingListener != null)
		RuntimeObject* L_0 = ___0_messagingListener;
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	try
	{// begin try (depth: 1)
		// AndroidJavaClass cls_FlurryApplication = new AndroidJavaClass("com.flurry.android.FlurryUnityApplication");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral498C58FDF5437082AD776A96B26D244C63644F7E, NULL);
		// cls_FlurryApplication.CallStatic("withFlurryMessagingListener", new MessagingCallback(messagingListener));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		RuntimeObject* L_4 = ___0_messagingListener;
		MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F* L_5 = (MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F*)il2cpp_codegen_object_new(MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		MessagingCallback__ctor_m9557FDF28A5DF704DAEFC0691F6E765A90A9F083(L_5, L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteralAD5412DDDC5B32B7F2C5848041BF7F1564F80556, L_3, NULL);
		// }
		goto IL_003f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0032;
		}
		throw e;
	}

CATCH_0032:
	{// begin catch(UnityEngine.AndroidJavaException)
		// catch (AndroidJavaException)
		// Debug.Log("To enable Flurry Messaging for Android, please remember to include Flurry Marketing libraries.");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD3AF8E16DFC5A85E716F145B3604998D1F6EAE92)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_003f;
	}// end catch (depth: 1)

IL_003f:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> FlurrySDKInternal.FlurryAgentAndroid::GetPublisherSegmentation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FlurryAgentAndroid_GetPublisherSegmentation_mC8C7BE0B16B78B560BDD9EB858610851C80C9E57 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_ConvertToDictionary_TisString_t_TisString_t_m407A5C3DA5FFB272026BE425CBF552E9CFDF0D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88DE6198FB5FD867EB11D303FBE5CE53F306D673);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD2B635B4947F7FBD279B13E3A6250AC56E5F5DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidJavaClass cls_FlurryPublisherSegmentation = new AndroidJavaClass("com.flurry.android.FlurryPublisherSegmentation");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral88DE6198FB5FD867EB11D303FBE5CE53F306D673, NULL);
		// AndroidJavaObject data = cls_FlurryPublisherSegmentation.CallStatic<AndroidJavaObject>("getPublisherData");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, _stringLiteralDD2B635B4947F7FBD279B13E3A6250AC56E5F5DF, L_1, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		// return ConvertToDictionary<string, string>(data);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = FlurryAgentAndroid_ConvertToDictionary_TisString_t_TisString_t_m407A5C3DA5FFB272026BE425CBF552E9CFDF0D11(L_2, FlurryAgentAndroid_ConvertToDictionary_TisString_t_TisString_t_m407A5C3DA5FFB272026BE425CBF552E9CFDF0D11_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::FetchPublisherSegmentation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_FetchPublisherSegmentation_m1883FE7181BE8CE61DCC2F2242183A6B7E477655 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2110C4D32D37C642FCCF9080AF28389DB186CC67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88DE6198FB5FD867EB11D303FBE5CE53F306D673);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidJavaClass cls_FlurryPublisherSegmentation = new AndroidJavaClass("com.flurry.android.FlurryPublisherSegmentation");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral88DE6198FB5FD867EB11D303FBE5CE53F306D673, NULL);
		// cls_FlurryPublisherSegmentation.CallStatic("fetch");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral2110C4D32D37C642FCCF9080AF28389DB186CC67, L_1, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::SetPublisherSegmentationListener(FlurrySDK.Flurry/IFlurryPublisherSegmentationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_SetPublisherSegmentationListener_m7B6C28458717B1C34AB362C0EBA7E383A00D917D (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, RuntimeObject* ___0_publisherSegmentationListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherSegmentationCallback_t79E663EBEA9D2D17B46BB32E3C6EF9BDB407AB36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88DE6198FB5FD867EB11D303FBE5CE53F306D673);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB857D514B213E7EB0A3CC27D7FD4EA7F8FF48783);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (publisherSegmentationListener != null)
		RuntimeObject* L_0 = ___0_publisherSegmentationListener;
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// AndroidJavaClass cls_FlurryPublisherSegmentation = new AndroidJavaClass("com.flurry.android.FlurryPublisherSegmentation");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral88DE6198FB5FD867EB11D303FBE5CE53F306D673, NULL);
		// cls_FlurryPublisherSegmentation.CallStatic("registerFetchListener", new PublisherSegmentationCallback(publisherSegmentationListener));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		RuntimeObject* L_4 = ___0_publisherSegmentationListener;
		PublisherSegmentationCallback_t79E663EBEA9D2D17B46BB32E3C6EF9BDB407AB36* L_5 = (PublisherSegmentationCallback_t79E663EBEA9D2D17B46BB32E3C6EF9BDB407AB36*)il2cpp_codegen_object_new(PublisherSegmentationCallback_t79E663EBEA9D2D17B46BB32E3C6EF9BDB407AB36_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		PublisherSegmentationCallback__ctor_m3FB92C23E0B12B35D904004A3CA7C746483EA2EA(L_5, L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteralB857D514B213E7EB0A3CC27D7FD4EA7F8FF48783, L_3, NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid_Dispose_mCBBAD15DD40615AC39B6442F4A54FC40BC9A0D2A (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryAgent.Dispose();
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
		NullCheck(L_0);
		AndroidJavaObject_Dispose_m2B1593C20B3CE1C8FF95982F638F50985F9DD9E6(L_0, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid__ctor_m91A3FFC2E252885661C84E4545B6249DD459D940 (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* __this, const RuntimeMethod* method) 
{
	{
		FlurryAgent__ctor_mC8068385ECEDB3BFD05AC21EF615B6712CED70F1(__this, NULL);
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryAgentAndroid__cctor_m76AB04E8B03D20A9AFEE76EA54E874ECD2368C66 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0FF3153F14410B9B6A38A83FAE70C0D6DE55C5FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral365192D201674CC82947E4BBF2738E114F22FD3B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DE29689A102429CCE5ED600089B35B898373F2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B198C73725FD9C06CA9ECEE547E1E95452EE356);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C1320106541A756FF5521A6783C302BCC286943);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF489D39E7A89056CC25FB1494A6EE0F69F7945C8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NetworkReachability internetReachability = Application.internetReachability;
		int32_t L_0;
		L_0 = Application_get_internetReachability_m3FECA8BA005340369BB952CE8CDF3E1A53F3BA0E(NULL);
		((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___internetReachability_0 = L_0;
		// private static readonly string ORIGIN_NAME = "unity-flurry-sdk";
		((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___ORIGIN_NAME_1 = _stringLiteralF489D39E7A89056CC25FB1494A6EE0F69F7945C8;
		Il2CppCodeGenWriteBarrier((void**)(&((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___ORIGIN_NAME_1), (void*)_stringLiteralF489D39E7A89056CC25FB1494A6EE0F69F7945C8);
		// private static readonly string ORIGIN_VERSION = "6.0.0";
		((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___ORIGIN_VERSION_2 = _stringLiteral9C1320106541A756FF5521A6783C302BCC286943;
		Il2CppCodeGenWriteBarrier((void**)(&((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___ORIGIN_VERSION_2), (void*)_stringLiteral9C1320106541A756FF5521A6783C302BCC286943);
		// private static AndroidJavaClass cls_FlurryAgent = new AndroidJavaClass("com.flurry.android.FlurryAgent");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_1, _stringLiteral0FF3153F14410B9B6A38A83FAE70C0D6DE55C5FC, NULL);
		((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3), (void*)L_1);
		// private static AndroidJavaClass cls_FlurryAgentConstants = new AndroidJavaClass("com.flurry.android.Constants");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_2, _stringLiteral8B198C73725FD9C06CA9ECEE547E1E95452EE356, NULL);
		((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgentConstants_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgentConstants_4), (void*)L_2);
		// private static AndroidJavaClass cls_FlurryEvent = new AndroidJavaClass("com.flurry.android.FlurryEvent");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_3, _stringLiteral365192D201674CC82947E4BBF2738E114F22FD3B, NULL);
		((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryEvent_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryEvent_5), (void*)L_3);
		// private static AndroidJavaClass cls_FlurryEventParam = new AndroidJavaClass("com.flurry.android.FlurryEvent$Param");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_4 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_4, _stringLiteral6DE29689A102429CCE5ED600089B35B898373F2D, NULL);
		((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryEventParam_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryEventParam_6), (void*)L_4);
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
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBuilderAndroid__ctor_m2435A012639C74FF7182F50C1AE2946178350FF0 (AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3DD55FDD257A02E4A590CD9123CC01BEC987970C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F1D1C9C69BA2F28C3D1B195C916B6669D3EC091);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98F064671FAE803E20347DB187ABC8E117B2D584);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AgentBuilderAndroid()
		AgentBuilder__ctor_mC3AF259B904B9731705C0916A70D564410723983(__this, NULL);
		// obj_FlurryAgentBuilder = new AndroidJavaObject("com.flurry.android.FlurryAgent$Builder");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteral6F1D1C9C69BA2F28C3D1B195C916B6669D3EC091, L_0, NULL);
		__this->___obj_FlurryAgentBuilder_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___obj_FlurryAgentBuilder_0), (void*)L_1);
		// obj_FlurryAgentBuilder.Call<AndroidJavaObject>("withSessionForceStart", true);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = __this->___obj_FlurryAgentBuilder_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		bool L_5 = ((bool)1);
		RuntimeObject* L_6 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_6);
		NullCheck(L_2);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_7;
		L_7 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_2, _stringLiteral3DD55FDD257A02E4A590CD9123CC01BEC987970C, L_4, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// obj_FlurryAgentBuilder.Call<AndroidJavaObject>("withReportLocation", true);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_8 = __this->___obj_FlurryAgentBuilder_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		bool L_11 = ((bool)1);
		RuntimeObject* L_12 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_11);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
		NullCheck(L_8);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13;
		L_13 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_8, _stringLiteral98F064671FAE803E20347DB187ABC8E117B2D584, L_10, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::Build(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBuilderAndroid_Build_m8230980393E660920406DDB59F080937B33DA460 (AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5* __this, String_t* ___0_apiKey, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral056D563A00505740B23A4A3690B26AECDDC4C5A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	{
		// using (AndroidJavaClass cls_UnityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral4D613657609485AE586A3379BA0E3FC13C1E1078, NULL);
		V_0 = L_0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0066:
			{// begin finally (depth: 1)
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = V_0;
					if (!L_1)
					{
						goto IL_006f;
					}
				}
				{
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_2 = V_0;
					NullCheck(L_2);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
				}

IL_006f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// using (AndroidJavaObject obj_Activity = cls_UnityPlayer.GetStatic<AndroidJavaObject>("currentActivity"))
				AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_3 = V_0;
				NullCheck(L_3);
				AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4;
				L_4 = AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD(L_3, _stringLiteralFB4AE4F77150C3A8E8E4F8B23E734E0C7277B7D9, AndroidJavaObject_GetStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mD7D192A35EB2B2DA3775FAB081958B72088251DD_RuntimeMethod_var);
				V_1 = L_4;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_005c_1:
					{// begin finally (depth: 2)
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5 = V_1;
							if (!L_5)
							{
								goto IL_0065_1;
							}
						}
						{
							AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_1;
							NullCheck(L_6);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
						}

IL_0065_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					// cls_FlurryAgent.CallStatic("addOrigin", ORIGIN_NAME, ORIGIN_VERSION);
					il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
					AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_7 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___cls_FlurryAgent_3;
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
					String_t* L_10 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___ORIGIN_NAME_1;
					NullCheck(L_9);
					ArrayElementTypeCheck (L_9, L_10);
					(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
					String_t* L_12 = ((FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_StaticFields*)il2cpp_codegen_static_fields_for(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var))->___ORIGIN_VERSION_2;
					NullCheck(L_11);
					ArrayElementTypeCheck (L_11, L_12);
					(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
					NullCheck(L_7);
					AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_7, _stringLiteral056D563A00505740B23A4A3690B26AECDDC4C5A2, L_11, NULL);
					// obj_FlurryAgentBuilder.Call("build", obj_Activity, apiKey);
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13 = __this->___obj_FlurryAgentBuilder_0;
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
					AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16 = V_1;
					NullCheck(L_15);
					ArrayElementTypeCheck (L_15, L_16);
					(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
					ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_15;
					String_t* L_18 = ___0_apiKey;
					NullCheck(L_17);
					ArrayElementTypeCheck (L_17, L_18);
					(L_17)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_18);
					NullCheck(L_13);
					AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_13, _stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728, L_17, NULL);
					// }
					goto IL_0070;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithAppVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBuilderAndroid_WithAppVersion_m61CED3D7164FCA590310C416D2CD9B07B5CC1593 (AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5* __this, String_t* ___0_appVersion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9DEB7CE34683DB5049EB45DACAF9D78607FF3255);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("iOS only. For Android, please also call Flurry.setVersionName().");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral9DEB7CE34683DB5049EB45DACAF9D78607FF3255, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithContinueSessionMillis(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBuilderAndroid_WithContinueSessionMillis_m0CC80221CE73F905BA5927DE38083F0D2E4768FD (AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5* __this, int64_t ___0_sessionMillis, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC156525E6409EEBE310581D009DEA54C6D22051D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj_FlurryAgentBuilder.Call<AndroidJavaObject>("withContinueSessionMillis", sessionMillis);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___obj_FlurryAgentBuilder_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int64_t L_3 = ___0_sessionMillis;
		int64_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteralC156525E6409EEBE310581D009DEA54C6D22051D, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithCrashReporting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBuilderAndroid_WithCrashReporting_m89D14C4417C8C8447F175EBEF4404C63334CC2A9 (AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5* __this, bool ___0_crashReporting, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB1C062CD4B772F36F360D020CDE87232BE04114);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj_FlurryAgentBuilder.Call<AndroidJavaObject>("withCaptureUncaughtExceptions", crashReporting);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___obj_FlurryAgentBuilder_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_crashReporting;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteralBB1C062CD4B772F36F360D020CDE87232BE04114, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithIncludeBackgroundSessionsInMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBuilderAndroid_WithIncludeBackgroundSessionsInMetrics_m83ECD667EE632099CF808ED9717CB20E400ED19A (AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5* __this, bool ___0_includeBackgroundSessionsInMetrics, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21FE72A838B7B2F46CDF73BB4B8F3BFFF0E9B5D2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj_FlurryAgentBuilder.Call<AndroidJavaObject>("withIncludeBackgroundSessionsInMetrics", includeBackgroundSessionsInMetrics);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___obj_FlurryAgentBuilder_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_includeBackgroundSessionsInMetrics;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteral21FE72A838B7B2F46CDF73BB4B8F3BFFF0E9B5D2, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithLogEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBuilderAndroid_WithLogEnabled_m5FA00681B3E8F8554FBD4495D0492788269F4622 (AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5* __this, bool ___0_enableLog, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral176C1A6254B9EF0D278311D83E17CA943EA0F7DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj_FlurryAgentBuilder.Call<AndroidJavaObject>("withLogEnabled", enableLog);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___obj_FlurryAgentBuilder_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_enableLog;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteral176C1A6254B9EF0D278311D83E17CA943EA0F7DF, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithLogLevel(FlurrySDK.Flurry/LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBuilderAndroid_WithLogLevel_m849AB786EB5FA14645D2F1D7AE6B7B270F96C9F6 (AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5* __this, int32_t ___0_logLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEB35825A922115ED49904791E665914D3406B876);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj_FlurryAgentBuilder.Call<AndroidJavaObject>("withLogLevel", (int) logLevel);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___obj_FlurryAgentBuilder_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___0_logLevel;
		int32_t L_4 = ((int32_t)L_3);
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteralEB35825A922115ED49904791E665914D3406B876, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithReportLocation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBuilderAndroid_WithReportLocation_m5ABDEA2A6F432DDBBA7E4BA302EDB42809FBA47F (AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5* __this, bool ___0_reportLocation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98F064671FAE803E20347DB187ABC8E117B2D584);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj_FlurryAgentBuilder.Call<AndroidJavaObject>("withReportLocation", reportLocation);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___obj_FlurryAgentBuilder_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_reportLocation;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteral98F064671FAE803E20347DB187ABC8E117B2D584, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithMessaging(System.Boolean,FlurrySDK.Flurry/IMessagingListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBuilderAndroid_WithMessaging_m431963E7DDB550EFA104421E7E090A1DC02EF12A (AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5* __this, bool ___0_enableMessaging, RuntimeObject* ___1_messagingListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B0219E0BE8925ED7275E062E3EA7209BA7116F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B5ABAA7CF4E6F6DC45B1D9DF38073C634700529);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B18834154B328C4F69ADB247CB5C6F293B57961);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F5538383E15EDFD5795B3418426B9252B6BD9B5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD5412DDDC5B32B7F2C5848041BF7F1564F80556);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4E455A880964894706B29CA2F9F602182FD9105);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_1 = NULL;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// Debug.Log("To customize Flurry Messaging for Android, please remember to update your AndroidManifest.xml to setup the Messaging.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral6B18834154B328C4F69ADB247CB5C6F293B57961, NULL);
		// if (enableMessaging)
		bool L_0 = ___0_enableMessaging;
		if (!L_0)
		{
			goto IL_00a1;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// AndroidJavaObject obj_FlurryMarketingOptionsBuilder = new AndroidJavaObject("com.flurry.android.marketing.FlurryMarketingOptions$Builder");
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
			L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_2, _stringLiteral9F5538383E15EDFD5795B3418426B9252B6BD9B5, L_1, NULL);
			V_0 = L_2;
			// obj_FlurryMarketingOptionsBuilder.Call<AndroidJavaObject>("setupMessagingWithAutoIntegration");
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3 = V_0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4;
			L_4 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			NullCheck(L_3);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_5;
			L_5 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_3, _stringLiteral0B0219E0BE8925ED7275E062E3EA7209BA7116F5, L_4, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
			// if (messagingListener != null)
			RuntimeObject* L_6 = ___1_messagingListener;
			if (!L_6)
			{
				goto IL_0051_1;
			}
		}
		{
			// MessagingCallback callback = new MessagingCallback(messagingListener);
			RuntimeObject* L_7 = ___1_messagingListener;
			MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F* L_8 = (MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F*)il2cpp_codegen_object_new(MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F_il2cpp_TypeInfo_var);
			NullCheck(L_8);
			MessagingCallback__ctor_m9557FDF28A5DF704DAEFC0691F6E765A90A9F083(L_8, L_7, NULL);
			V_3 = L_8;
			// obj_FlurryMarketingOptionsBuilder.Call<AndroidJavaObject>("withFlurryMessagingListener", callback);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_9 = V_0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_10;
			MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F* L_12 = V_3;
			NullCheck(L_11);
			ArrayElementTypeCheck (L_11, L_12);
			(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_12);
			NullCheck(L_9);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_13;
			L_13 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_9, _stringLiteralAD5412DDDC5B32B7F2C5848041BF7F1564F80556, L_11, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		}

IL_0051_1:
		{
			// AndroidJavaObject obj_FlurryMarketingOptions = obj_FlurryMarketingOptionsBuilder.Call<AndroidJavaObject>("build");
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = V_0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15;
			L_15 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
			NullCheck(L_14);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16;
			L_16 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_14, _stringLiteralA733C7FC19A8317471D21AD091D1A9A6F973A728, L_15, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
			V_1 = L_16;
			// AndroidJavaObject obj_FlurryMarketingModule = new AndroidJavaObject("com.flurry.android.marketing.FlurryMarketingModule", obj_FlurryMarketingOptions);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = L_17;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_19 = V_1;
			NullCheck(L_18);
			ArrayElementTypeCheck (L_18, L_19);
			(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_19);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_20 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
			NullCheck(L_20);
			AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_20, _stringLiteralF4E455A880964894706B29CA2F9F602182FD9105, L_18, NULL);
			V_2 = L_20;
			// obj_FlurryAgentBuilder.Call<AndroidJavaObject>("withModule", obj_FlurryMarketingModule);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = __this->___obj_FlurryAgentBuilder_0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = L_22;
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_24 = V_2;
			NullCheck(L_23);
			ArrayElementTypeCheck (L_23, L_24);
			(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_24);
			NullCheck(L_21);
			AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25;
			L_25 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_21, _stringLiteral4B5ABAA7CF4E6F6DC45B1D9DF38073C634700529, L_23, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
			// }
			goto IL_00a1;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AndroidJavaException_t26383CDFF7DF5904124FA37E4E46B561FC3698BD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0094;
		}
		throw e;
	}

CATCH_0094:
	{// begin catch(UnityEngine.AndroidJavaException)
		// catch (AndroidJavaException)
		// Debug.Log("To enable Flurry Messaging for Android, please remember to include Flurry Marketing libraries.");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD3AF8E16DFC5A85E716F145B3604998D1F6EAE92)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a1;
	}// end catch (depth: 1)

IL_00a1:
	{
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithDataSaleOptOut(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBuilderAndroid_WithDataSaleOptOut_m46C6800F5A1D367307F540C7CB18276EDFC5A4EB (AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5* __this, bool ___0_isOptOut, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF95FDB5CD44B38ECB329CFAEB8B3F5A106A2CB2A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj_FlurryAgentBuilder.Call<AndroidJavaObject>("withDataSaleOptOut", isOptOut);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___obj_FlurryAgentBuilder_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_isOptOut;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteralF95FDB5CD44B38ECB329CFAEB8B3F5A106A2CB2A, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithPerformanceMetrics(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBuilderAndroid_WithPerformanceMetrics_m684E3265416C21244BB48EF2FD708BA26B2EBD71 (AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5* __this, int32_t ___0_performanceMetrics, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEB581D5FF3B34C69A6D3AEE0D88102947D3A177);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj_FlurryAgentBuilder.Call<AndroidJavaObject>("withPerformanceMetrics", performanceMetrics);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___obj_FlurryAgentBuilder_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		int32_t L_3 = ___0_performanceMetrics;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteralCEB581D5FF3B34C69A6D3AEE0D88102947D3A177, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithSslPinningEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentBuilderAndroid_WithSslPinningEnabled_m13F06644C5EA640D68C6AC6EDBB178D6C662F586 (AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5* __this, bool ___0_sslPinningEnabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28700A1DBDA9098E11A525888D6732CAF352A87A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj_FlurryAgentBuilder.Call<AndroidJavaObject>("withSslPinningEnabled", sslPinningEnabled);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___obj_FlurryAgentBuilder_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		bool L_3 = ___0_sslPinningEnabled;
		bool L_4 = L_3;
		RuntimeObject* L_5 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_0, _stringLiteral28700A1DBDA9098E11A525888D6732CAF352A87A, L_2, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		// }
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
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::Set(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentUserPropertiesAndroid_Set_m76FC5839879B5AB044065E65F18B6B2F5F54BD35 (AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE* __this, String_t* ___0_propertyName, String_t* ___1_propertyValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryUserProperties.CallStatic("set", propertyName, propertyValue);
		il2cpp_codegen_runtime_class_init_inline(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_StaticFields*)il2cpp_codegen_static_fields_for(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var))->___cls_FlurryUserProperties_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_propertyName;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_propertyValue;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, L_4, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::Set(System.String,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentUserPropertiesAndroid_Set_m5D9F958D61441D7779958F5617C6478FA9B77B71 (AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE* __this, String_t* ___0_propertyName, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___1_propertyValues, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_ConvertToList_TisString_t_m0DBD8C01D48D86BD96EF2AA785082C64DF165139_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryUserProperties.CallStatic("set", propertyName, ConvertToList(propertyValues));
		il2cpp_codegen_runtime_class_init_inline(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_StaticFields*)il2cpp_codegen_static_fields_for(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var))->___cls_FlurryUserProperties_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_propertyName;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ___1_propertyValues;
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = FlurryAgentAndroid_ConvertToList_TisString_t_m0DBD8C01D48D86BD96EF2AA785082C64DF165139(L_5, FlurryAgentAndroid_ConvertToList_TisString_t_m0DBD8C01D48D86BD96EF2AA785082C64DF165139_RuntimeMethod_var);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, L_4, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::Add(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentUserPropertiesAndroid_Add_mFB608F676D845EA2A325ADEE4E74F254AFB686B0 (AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE* __this, String_t* ___0_propertyName, String_t* ___1_propertyValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69224533712A1254802C0E1712C0C3C2B06350C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryUserProperties.CallStatic("add", propertyName, propertyValue);
		il2cpp_codegen_runtime_class_init_inline(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_StaticFields*)il2cpp_codegen_static_fields_for(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var))->___cls_FlurryUserProperties_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_propertyName;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_propertyValue;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral69224533712A1254802C0E1712C0C3C2B06350C7, L_4, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::Add(System.String,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentUserPropertiesAndroid_Add_m6559D9DE57FADB16DB968681DBCA5672CECF0DB8 (AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE* __this, String_t* ___0_propertyName, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___1_propertyValues, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_ConvertToList_TisString_t_m0DBD8C01D48D86BD96EF2AA785082C64DF165139_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69224533712A1254802C0E1712C0C3C2B06350C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryUserProperties.CallStatic("add", propertyName, ConvertToList(propertyValues));
		il2cpp_codegen_runtime_class_init_inline(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_StaticFields*)il2cpp_codegen_static_fields_for(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var))->___cls_FlurryUserProperties_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_propertyName;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ___1_propertyValues;
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = FlurryAgentAndroid_ConvertToList_TisString_t_m0DBD8C01D48D86BD96EF2AA785082C64DF165139(L_5, FlurryAgentAndroid_ConvertToList_TisString_t_m0DBD8C01D48D86BD96EF2AA785082C64DF165139_RuntimeMethod_var);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral69224533712A1254802C0E1712C0C3C2B06350C7, L_4, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::Remove(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentUserPropertiesAndroid_Remove_mBFED6150B95DD09B869DB6795F79CFF6E116E55C (AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE* __this, String_t* ___0_propertyName, String_t* ___1_propertyValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7219490E429E49E881EE2EFE4876A818537C3BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryUserProperties.CallStatic("remove", propertyName, propertyValue);
		il2cpp_codegen_runtime_class_init_inline(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_StaticFields*)il2cpp_codegen_static_fields_for(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var))->___cls_FlurryUserProperties_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_propertyName;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_propertyValue;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralF7219490E429E49E881EE2EFE4876A818537C3BA, L_4, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::Remove(System.String,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentUserPropertiesAndroid_Remove_m6E142AAD31D298902EE45EE91D295883A0E585C8 (AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE* __this, String_t* ___0_propertyName, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___1_propertyValues, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_ConvertToList_TisString_t_m0DBD8C01D48D86BD96EF2AA785082C64DF165139_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7219490E429E49E881EE2EFE4876A818537C3BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryUserProperties.CallStatic("remove", propertyName, ConvertToList(propertyValues));
		il2cpp_codegen_runtime_class_init_inline(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_StaticFields*)il2cpp_codegen_static_fields_for(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var))->___cls_FlurryUserProperties_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_propertyName;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_5 = ___1_propertyValues;
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6;
		L_6 = FlurryAgentAndroid_ConvertToList_TisString_t_m0DBD8C01D48D86BD96EF2AA785082C64DF165139(L_5, FlurryAgentAndroid_ConvertToList_TisString_t_m0DBD8C01D48D86BD96EF2AA785082C64DF165139_RuntimeMethod_var);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_6);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralF7219490E429E49E881EE2EFE4876A818537C3BA, L_4, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentUserPropertiesAndroid_Remove_m8772648B39BAED5FDC7CED764E48222EF5877967 (AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7219490E429E49E881EE2EFE4876A818537C3BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryUserProperties.CallStatic("remove", propertyName);
		il2cpp_codegen_runtime_class_init_inline(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_StaticFields*)il2cpp_codegen_static_fields_for(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var))->___cls_FlurryUserProperties_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_propertyName;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteralF7219490E429E49E881EE2EFE4876A818537C3BA, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::Flag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentUserPropertiesAndroid_Flag_m0680E4F041BD3FF97D7508F2895DAA9069EDC701 (AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE* __this, String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1547D32448BC572A3BA92D824F60BCE446C923C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryUserProperties.CallStatic("flag", propertyName);
		il2cpp_codegen_runtime_class_init_inline(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_StaticFields*)il2cpp_codegen_static_fields_for(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var))->___cls_FlurryUserProperties_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_propertyName;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral1547D32448BC572A3BA92D824F60BCE446C923C1, L_2, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentUserPropertiesAndroid__ctor_m57F3C97A091D5C0998C9487E2D8980640964557D (AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE* __this, const RuntimeMethod* method) 
{
	{
		AgentUserProperties__ctor_mCAEC2A99DD1D818B0CB161FCA98E836A1D14304B(__this, NULL);
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentUserPropertiesAndroid__cctor_mDAB60E41FEE3671E73F0B37057625C84F79E8475 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18493F3B38669BFF2D6968A1F575F78F9B9E844A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static AndroidJavaClass cls_FlurryUserProperties = new AndroidJavaClass("com.flurry.android.FlurryAgent$UserProperties");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral18493F3B38669BFF2D6968A1F575F78F9B9E844A, NULL);
		((AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_StaticFields*)il2cpp_codegen_static_fields_for(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var))->___cls_FlurryUserProperties_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_StaticFields*)il2cpp_codegen_static_fields_for(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var))->___cls_FlurryUserProperties_0), (void*)L_0);
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
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPerformanceAndroid::ReportFullyDrawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentPerformanceAndroid_ReportFullyDrawn_m8DFBEF0B881651F2B245AF8795FDA36B0B3F842C (AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42D2434906F3CC12963A727BEC4434BA208EE283);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryPerformance.CallStatic("reportFullyDrawn");
		il2cpp_codegen_runtime_class_init_inline(AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01_StaticFields*)il2cpp_codegen_static_fields_for(AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01_il2cpp_TypeInfo_var))->___cls_FlurryPerformance_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral42D2434906F3CC12963A727BEC4434BA208EE283, L_1, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPerformanceAndroid::StartResourceLogger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentPerformanceAndroid_StartResourceLogger_mFBA73B6FB461610B4A64518EA95873501F020A92 (AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral646C05A7C588E6BC2491D3160177D74640B64C2D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// obj_FlurryResourceLogger = new AndroidJavaObject("com.flurry.android.FlurryPerformance$ResourceLogger");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteral646C05A7C588E6BC2491D3160177D74640B64C2D, L_0, NULL);
		__this->___obj_FlurryResourceLogger_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___obj_FlurryResourceLogger_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPerformanceAndroid::LogResourceLogger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentPerformanceAndroid_LogResourceLogger_m6899E8B108D6ED4A6109EBD2BEE3EA1859AC61C6 (AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01* __this, String_t* ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC972CCEF9725C97FA81EE0784238DBD804D49222);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj_FlurryResourceLogger != null)
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = __this->___obj_FlurryResourceLogger_1;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		// obj_FlurryResourceLogger.Call("logEvent", id);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = __this->___obj_FlurryResourceLogger_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		String_t* L_4 = ___0_id;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteralC972CCEF9725C97FA81EE0784238DBD804D49222, L_3, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPerformanceAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentPerformanceAndroid__ctor_mC3A07283B3BB3872BEAC46EA1038372EF0153C2D (AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01* __this, const RuntimeMethod* method) 
{
	{
		AgentPerformance__ctor_m2DDDD20B9F377F7A1BDEE8B1D0B04CDB43B6DF97(__this, NULL);
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPerformanceAndroid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentPerformanceAndroid__cctor_mBBFE2EB59A82D8BD7C60A86DB2E9D17C7B4B6B6E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral808C497E20273F9A8FA6751815B71A81D4C8A404);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static AndroidJavaClass cls_FlurryPerformance = new AndroidJavaClass("com.flurry.android.FlurryPerformance");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral808C497E20273F9A8FA6751815B71A81D4C8A404, NULL);
		((AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01_StaticFields*)il2cpp_codegen_static_fields_for(AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01_il2cpp_TypeInfo_var))->___cls_FlurryPerformance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01_StaticFields*)il2cpp_codegen_static_fields_for(AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01_il2cpp_TypeInfo_var))->___cls_FlurryPerformance_0), (void*)L_0);
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
// UnityEngine.AndroidJavaObject FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::getInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AgentConfigAndroid_getInstance_m6223EA8899B2474C91C5B61DE4966830DF074851 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj_FlurryConfig == null)
		il2cpp_codegen_runtime_class_init_inline(AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0 = ((AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_StaticFields*)il2cpp_codegen_static_fields_for(AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var))->___obj_FlurryConfig_1;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// obj_FlurryConfig = cls_FlurryConfig.CallStatic<AndroidJavaObject>("getInstance");
		il2cpp_codegen_runtime_class_init_inline(AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = ((AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_StaticFields*)il2cpp_codegen_static_fields_for(AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var))->___cls_FlurryConfig_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_1);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_3;
		L_3 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_1, _stringLiteral2063737B07B6658BC2E1EC3128D4E09E57CA123E, L_2, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		((AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_StaticFields*)il2cpp_codegen_static_fields_for(AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var))->___obj_FlurryConfig_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_StaticFields*)il2cpp_codegen_static_fields_for(AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var))->___obj_FlurryConfig_1), (void*)L_3);
	}

IL_0020:
	{
		// return obj_FlurryConfig;
		il2cpp_codegen_runtime_class_init_inline(AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_4 = ((AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_StaticFields*)il2cpp_codegen_static_fields_for(AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var))->___obj_FlurryConfig_1;
		return L_4;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::Fetch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentConfigAndroid_Fetch_mD3EF2248FEA8CD77D5B3BDAF11A0A7B6C2BB17B8 (AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9389BA738E3A640F43288A77A21CA45FDDDF9686);
		s_Il2CppMethodInitialized = true;
	}
	{
		// getInstance().Call("fetchConfig");
		il2cpp_codegen_runtime_class_init_inline(AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AgentConfigAndroid_getInstance_m6223EA8899B2474C91C5B61DE4966830DF074851(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_0, _stringLiteral9389BA738E3A640F43288A77A21CA45FDDDF9686, L_1, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentConfigAndroid_Activate_m0EEFEA59FCCE8D367EFC92CB41DC063EED4A9BB0 (AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral137FF2E6EA9EF993EC812A8B0BE4FD41A4360578);
		s_Il2CppMethodInitialized = true;
	}
	{
		// getInstance().Call<bool>("activateConfig");
		il2cpp_codegen_runtime_class_init_inline(AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AgentConfigAndroid_getInstance_m6223EA8899B2474C91C5B61DE4966830DF074851(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		bool L_2;
		L_2 = AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF(L_0, _stringLiteral137FF2E6EA9EF993EC812A8B0BE4FD41A4360578, L_1, AndroidJavaObject_Call_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m05D3284A3FA772D032190A0FE82363C61000F1DF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::SetListener(FlurrySDK.Flurry/IConfigListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentConfigAndroid_SetListener_m0E9A56AA14062686B8C5E8CFCFBE443EFF9E2816 (AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC* __this, RuntimeObject* ___0_configListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConfigCallback_tDFAA1F620540B2085B0938464091BA63EA235443_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE94F67292842EEBE05D89BE49B72C3D46F3E1314);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (configListener != null)
		RuntimeObject* L_0 = ___0_configListener;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// getInstance().Call("registerListener", new ConfigCallback(configListener));
		il2cpp_codegen_runtime_class_init_inline(AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1;
		L_1 = AgentConfigAndroid_getInstance_m6223EA8899B2474C91C5B61DE4966830DF074851(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		RuntimeObject* L_4 = ___0_configListener;
		ConfigCallback_tDFAA1F620540B2085B0938464091BA63EA235443* L_5 = (ConfigCallback_tDFAA1F620540B2085B0938464091BA63EA235443*)il2cpp_codegen_object_new(ConfigCallback_tDFAA1F620540B2085B0938464091BA63EA235443_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ConfigCallback__ctor_mDA2B1827622E4CA07A8F7BC9D8979C10B649A601(L_5, L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_1);
		AndroidJavaObject_Call_mDEF7846E2AB1C5379069BB21049ED55A9D837B1C(L_1, _stringLiteralE94F67292842EEBE05D89BE49B72C3D46F3E1314, L_3, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.String FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AgentConfigAndroid_GetString_m94F76851C2221E3ACB82FBE84B976B51961731E1 (AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC* __this, String_t* ___0_key, String_t* ___1_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return getInstance().Call<string>("getString", key, defaultValue);
		il2cpp_codegen_runtime_class_init_inline(AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_0;
		L_0 = AgentConfigAndroid_getInstance_m6223EA8899B2474C91C5B61DE4966830DF074851(NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		String_t* L_3 = ___0_key;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_2;
		String_t* L_5 = ___1_defaultValue;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		NullCheck(L_0);
		String_t* L_6;
		L_6 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_0, _stringLiteral5004BB2B79B894E5CC70CDBEA1DD320044EF8F3A, L_4, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentConfigAndroid__ctor_mE2832F625ADC526F3A7C9A2D3EDA8FDB1BE1AF9D (AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC* __this, const RuntimeMethod* method) 
{
	{
		AgentConfig__ctor_mAA639CA3070EC37B2FA128E1C2842824E4647FAD(__this, NULL);
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentConfigAndroid__cctor_m6EA9540AF13E938161DE7C778E6D5B5F5A2801DB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FD2F556F5A10F8D53EC2B3B837B392C194EEA49);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static AndroidJavaClass cls_FlurryConfig = new AndroidJavaClass("com.flurry.android.FlurryConfig");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral1FD2F556F5A10F8D53EC2B3B837B392C194EEA49, NULL);
		((AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_StaticFields*)il2cpp_codegen_static_fields_for(AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var))->___cls_FlurryConfig_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_StaticFields*)il2cpp_codegen_static_fields_for(AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var))->___cls_FlurryConfig_0), (void*)L_0);
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
// System.Void FlurrySDKInternal.FlurryAgentAndroid/ConfigCallback::.ctor(FlurrySDK.Flurry/IConfigListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigCallback__ctor_mDA2B1827622E4CA07A8F7BC9D8979C10B649A601 (ConfigCallback_tDFAA1F620540B2085B0938464091BA63EA235443* __this, RuntimeObject* ___0_configListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA86E58EDC31A83FCBA137E3C5DDE0E3A8175313);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("com.flurry.android.FlurryConfigListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteralAA86E58EDC31A83FCBA137E3C5DDE0E3A8175313, NULL);
		// this.configListener = configListener;
		RuntimeObject* L_0 = ___0_configListener;
		__this->___configListener_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___configListener_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/ConfigCallback::onFetchSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigCallback_onFetchSuccess_m28CFBA421B45E1CD5C2BF482B1717AF2FAF36C4F (ConfigCallback_tDFAA1F620540B2085B0938464091BA63EA235443* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// configListener.OnFetchSuccess();
		RuntimeObject* L_0 = __this->___configListener_4;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void FlurrySDK.Flurry/IConfigListener::OnFetchSuccess() */, IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/ConfigCallback::onFetchNoChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigCallback_onFetchNoChange_mD877699306BC0AE466DE2E960C83DE8BEF224E3A (ConfigCallback_tDFAA1F620540B2085B0938464091BA63EA235443* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// configListener.OnFetchNoChange();
		RuntimeObject* L_0 = __this->___configListener_4;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(1 /* System.Void FlurrySDK.Flurry/IConfigListener::OnFetchNoChange() */, IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/ConfigCallback::onFetchError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigCallback_onFetchError_m37DAEE8960176A1B76EB5D34D3E7E90CE0CDE3DC (ConfigCallback_tDFAA1F620540B2085B0938464091BA63EA235443* __this, bool ___0_isRetrying, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// configListener.OnFetchError(isRetrying);
		RuntimeObject* L_0 = __this->___configListener_4;
		bool L_1 = ___0_isRetrying;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void FlurrySDK.Flurry/IConfigListener::OnFetchError(System.Boolean) */, IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/ConfigCallback::onActivateComplete(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConfigCallback_onActivateComplete_m1A39C0E1DF0B22B147A191E7E40F8849CAA35B31 (ConfigCallback_tDFAA1F620540B2085B0938464091BA63EA235443* __this, bool ___0_isCache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// configListener.OnActivateComplete(isCache);
		RuntimeObject* L_0 = __this->___configListener_4;
		bool L_1 = ___0_isCache;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void FlurrySDK.Flurry/IConfigListener::OnActivateComplete(System.Boolean) */, IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8_il2cpp_TypeInfo_var, L_0, L_1);
		// }
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
// System.Void FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback::.ctor(FlurrySDK.Flurry/IMessagingListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingCallback__ctor_m9557FDF28A5DF704DAEFC0691F6E765A90A9F083 (MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F* __this, RuntimeObject* ___0_messagingListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1996FB4D81D7A8376DBC20AE55AD3DF10EF430C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("com.flurry.android.marketing.messaging.FlurryMessagingListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral1996FB4D81D7A8376DBC20AE55AD3DF10EF430C7, NULL);
		// this.messagingListener = messagingListener;
		RuntimeObject* L_0 = ___0_messagingListener;
		__this->___messagingListener_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___messagingListener_4), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback::onNotificationReceived(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessagingCallback_onNotificationReceived_m553FB1A2DA3FE6D057924B8260804823C8F6D6F9 (MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_flurryMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessagingListener_t57698BE1FDE689E64A7566579E8EBDD85E3AAEB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return messagingListener.OnNotificationReceived(GetFlurryMessage(flurryMessage));
		RuntimeObject* L_0 = __this->___messagingListener_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___0_flurryMessage;
		FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7* L_2;
		L_2 = MessagingCallback_GetFlurryMessage_m322FDC5709F5E14A65DBF036621C9274D7E70820(__this, L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7* >::Invoke(0 /* System.Boolean FlurrySDK.Flurry/IMessagingListener::OnNotificationReceived(FlurrySDK.Flurry/FlurryMessage) */, IMessagingListener_t57698BE1FDE689E64A7566579E8EBDD85E3AAEB4_il2cpp_TypeInfo_var, L_0, L_2);
		return L_3;
	}
}
// System.Boolean FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback::onNotificationClicked(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MessagingCallback_onNotificationClicked_m64411F8AA45852FBD3B701A4D52F7F384FB1E435 (MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_flurryMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessagingListener_t57698BE1FDE689E64A7566579E8EBDD85E3AAEB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return messagingListener.OnNotificationClicked(GetFlurryMessage(flurryMessage));
		RuntimeObject* L_0 = __this->___messagingListener_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___0_flurryMessage;
		FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7* L_2;
		L_2 = MessagingCallback_GetFlurryMessage_m322FDC5709F5E14A65DBF036621C9274D7E70820(__this, L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker1< bool, FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7* >::Invoke(1 /* System.Boolean FlurrySDK.Flurry/IMessagingListener::OnNotificationClicked(FlurrySDK.Flurry/FlurryMessage) */, IMessagingListener_t57698BE1FDE689E64A7566579E8EBDD85E3AAEB4_il2cpp_TypeInfo_var, L_0, L_2);
		return L_3;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback::onNotificationCancelled(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingCallback_onNotificationCancelled_mEE4D8B563E215AB859B5ADF21F78A0DFC0317F41 (MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_flurryMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessagingListener_t57698BE1FDE689E64A7566579E8EBDD85E3AAEB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// messagingListener.OnNotificationCancelled(GetFlurryMessage(flurryMessage));
		RuntimeObject* L_0 = __this->___messagingListener_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___0_flurryMessage;
		FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7* L_2;
		L_2 = MessagingCallback_GetFlurryMessage_m322FDC5709F5E14A65DBF036621C9274D7E70820(__this, L_1, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker1< FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7* >::Invoke(2 /* System.Void FlurrySDK.Flurry/IMessagingListener::OnNotificationCancelled(FlurrySDK.Flurry/FlurryMessage) */, IMessagingListener_t57698BE1FDE689E64A7566579E8EBDD85E3AAEB4_il2cpp_TypeInfo_var, L_0, L_2);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback::onTokenRefresh(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingCallback_onTokenRefresh_mE2F5F9CE4EB175141A79E6FE6F0F5A1EE9CAF690 (MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F* __this, String_t* ___0_refreshedToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessagingListener_t57698BE1FDE689E64A7566579E8EBDD85E3AAEB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// messagingListener.OnTokenRefresh(refreshedToken);
		RuntimeObject* L_0 = __this->___messagingListener_4;
		String_t* L_1 = ___0_refreshedToken;
		NullCheck(L_0);
		InterfaceActionInvoker1< String_t* >::Invoke(3 /* System.Void FlurrySDK.Flurry/IMessagingListener::OnTokenRefresh(System.String) */, IMessagingListener_t57698BE1FDE689E64A7566579E8EBDD85E3AAEB4_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback::onNonFlurryNotificationReceived(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MessagingCallback_onNonFlurryNotificationReceived_m1336B046BE54251DF5B6987C5A5468AFD95F92B3 (MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_nonFlurryMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMessagingListener_t57698BE1FDE689E64A7566579E8EBDD85E3AAEB4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// messagingListener.OnNonFlurryNotificationReceived(nonFlurryMessage);
		RuntimeObject* L_0 = __this->___messagingListener_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___0_nonFlurryMessage;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(4 /* System.Void FlurrySDK.Flurry/IMessagingListener::OnNonFlurryNotificationReceived(System.IDisposable) */, IMessagingListener_t57698BE1FDE689E64A7566579E8EBDD85E3AAEB4_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// FlurrySDK.Flurry/FlurryMessage FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback::GetFlurryMessage(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7* MessagingCallback_GetFlurryMessage_m322FDC5709F5E14A65DBF036621C9274D7E70820 (MessagingCallback_t52327D0D1FD1ECF03B78CA37543385B2B49C0B0F* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_flurryMessage, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_ConvertToDictionary_TisString_t_TisString_t_m407A5C3DA5FFB272026BE425CBF552E9CFDF0D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0538FF1FC8000A1942350BAA34918C62D0BF24F4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A60C59431B7AE4FA139A6664B07F1B1AE91BEB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92A0367A0299056CA05B86632AFA0D8FA9C6BF91);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE59F907B3DA040841A5D21FF1FA4CDA52D3F2B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FlurrySDK.Flurry.FlurryMessage message = new FlurrySDK.Flurry.FlurryMessage
		// {
		//     Title = flurryMessage.Call<string>("getTitle"),
		//     Body = flurryMessage.Call<string>("getBody"),
		//     ClickAction = flurryMessage.Call<string>("getClickAction"),
		//     Data = ConvertToDictionary<string, string>(flurryMessage.Call<AndroidJavaObject>("getAppData"))
		// };
		FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7* L_0 = (FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7*)il2cpp_codegen_object_new(FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FlurryMessage__ctor_mB2DA0B81D4F627360B4A410C8A79D1CA3EE5AAE7(L_0, NULL);
		FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7* L_1 = L_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = ___0_flurryMessage;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_2, _stringLiteral92A0367A0299056CA05B86632AFA0D8FA9C6BF91, L_3, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___Title_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Title_0), (void*)L_4);
		FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7* L_5 = L_1;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = ___0_flurryMessage;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_6);
		String_t* L_8;
		L_8 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_6, _stringLiteralDE59F907B3DA040841A5D21FF1FA4CDA52D3F2B9, L_7, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->___Body_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___Body_1), (void*)L_8);
		FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7* L_9 = L_5;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = ___0_flurryMessage;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11;
		L_11 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_10);
		String_t* L_12;
		L_12 = AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40(L_10, _stringLiteral0538FF1FC8000A1942350BAA34918C62D0BF24F4, L_11, AndroidJavaObject_Call_TisString_t_m67FC2931E81004C3F259008314180511C3D2AF40_RuntimeMethod_var);
		NullCheck(L_9);
		L_9->___ClickAction_2 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___ClickAction_2), (void*)L_12);
		FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7* L_13 = L_9;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_14 = ___0_flurryMessage;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15;
		L_15 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_14);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_16;
		L_16 = AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D(L_14, _stringLiteral5A60C59431B7AE4FA139A6664B07F1B1AE91BEB8, L_15, AndroidJavaObject_Call_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m020246E0988293B6126B690BD6CE4D894276AA3D_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		RuntimeObject* L_17;
		L_17 = FlurryAgentAndroid_ConvertToDictionary_TisString_t_TisString_t_m407A5C3DA5FFB272026BE425CBF552E9CFDF0D11(L_16, FlurryAgentAndroid_ConvertToDictionary_TisString_t_TisString_t_m407A5C3DA5FFB272026BE425CBF552E9CFDF0D11_RuntimeMethod_var);
		NullCheck(L_13);
		L_13->___Data_3 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___Data_3), (void*)L_17);
		// return message;
		return L_13;
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
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPublisherSegmentationAndroid::Fetch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentPublisherSegmentationAndroid_Fetch_mF39AD340B864E9A8B147BBF97CC5BEA2F85AB439 (AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2110C4D32D37C642FCCF9080AF28389DB186CC67);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cls_FlurryPublisherSegmentation.CallStatic("fetch");
		il2cpp_codegen_runtime_class_init_inline(AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_StaticFields*)il2cpp_codegen_static_fields_for(AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_il2cpp_TypeInfo_var))->___cls_FlurryPublisherSegmentation_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_0, _stringLiteral2110C4D32D37C642FCCF9080AF28389DB186CC67, L_1, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPublisherSegmentationAndroid::SetListener(FlurrySDK.Flurry/IPublisherSegmentationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentPublisherSegmentationAndroid_SetListener_m297502606D14A153DD4B91DFF4BA4EC44B625558 (AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76* __this, RuntimeObject* ___0_publisherSegmentationListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherSegmentationCallback_t79E663EBEA9D2D17B46BB32E3C6EF9BDB407AB36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB857D514B213E7EB0A3CC27D7FD4EA7F8FF48783);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (publisherSegmentationListener != null)
		RuntimeObject* L_0 = ___0_publisherSegmentationListener;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// cls_FlurryPublisherSegmentation.CallStatic("registerFetchListener", new PublisherSegmentationCallback(publisherSegmentationListener));
		il2cpp_codegen_runtime_class_init_inline(AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_1 = ((AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_StaticFields*)il2cpp_codegen_static_fields_for(AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_il2cpp_TypeInfo_var))->___cls_FlurryPublisherSegmentation_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		RuntimeObject* L_4 = ___0_publisherSegmentationListener;
		PublisherSegmentationCallback_t79E663EBEA9D2D17B46BB32E3C6EF9BDB407AB36* L_5 = (PublisherSegmentationCallback_t79E663EBEA9D2D17B46BB32E3C6EF9BDB407AB36*)il2cpp_codegen_object_new(PublisherSegmentationCallback_t79E663EBEA9D2D17B46BB32E3C6EF9BDB407AB36_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		PublisherSegmentationCallback__ctor_m3FB92C23E0B12B35D904004A3CA7C746483EA2EA(L_5, L_4, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		NullCheck(L_1);
		AndroidJavaObject_CallStatic_mB677DE04369EDD8E6DECAF2F233116EE1F06555C(L_1, _stringLiteralB857D514B213E7EB0A3CC27D7FD4EA7F8FF48783, L_3, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> FlurrySDKInternal.FlurryAgentAndroid/AgentPublisherSegmentationAndroid::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AgentPublisherSegmentationAndroid_GetData_m7C67D98EA998C1DFC4DABD2633E8FD97B674971F (AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_ConvertToDictionary_TisString_t_TisString_t_m407A5C3DA5FFB272026BE425CBF552E9CFDF0D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD2B635B4947F7FBD279B13E3A6250AC56E5F5DF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AndroidJavaObject data = cls_FlurryPublisherSegmentation.CallStatic<AndroidJavaObject>("getPublisherData");
		il2cpp_codegen_runtime_class_init_inline(AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_il2cpp_TypeInfo_var);
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = ((AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_StaticFields*)il2cpp_codegen_static_fields_for(AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_il2cpp_TypeInfo_var))->___cls_FlurryPublisherSegmentation_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		NullCheck(L_0);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2;
		L_2 = AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63(L_0, _stringLiteralDD2B635B4947F7FBD279B13E3A6250AC56E5F5DF, L_1, AndroidJavaObject_CallStatic_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_m398EA96C1DE1BB885F2B1DD0E00E8BBA86B49E63_RuntimeMethod_var);
		// return ConvertToDictionary<string, string>(data);
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = FlurryAgentAndroid_ConvertToDictionary_TisString_t_TisString_t_m407A5C3DA5FFB272026BE425CBF552E9CFDF0D11(L_2, FlurryAgentAndroid_ConvertToDictionary_TisString_t_TisString_t_m407A5C3DA5FFB272026BE425CBF552E9CFDF0D11_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPublisherSegmentationAndroid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentPublisherSegmentationAndroid__ctor_m8D9B53238946497E82A35239EE4667E7840FFD45 (AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76* __this, const RuntimeMethod* method) 
{
	{
		AgentPublisherSegmentation__ctor_mD5994473BF035B1000C5833FB3E605CE317F3243(__this, NULL);
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPublisherSegmentationAndroid::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AgentPublisherSegmentationAndroid__cctor_m4AECD9CFB9183D7F5379D02925745E0FD841FEDA (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88DE6198FB5FD867EB11D303FBE5CE53F306D673);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static AndroidJavaClass cls_FlurryPublisherSegmentation = new AndroidJavaClass("com.flurry.android.FlurryPublisherSegmentation");
		AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03* L_0 = (AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03*)il2cpp_codegen_object_new(AndroidJavaClass_tE6296B30CC4BF84434A9B765267F3FD0DD8DDB03_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		AndroidJavaClass__ctor_mB5466169E1151B8CC44C8FED234D79984B431389(L_0, _stringLiteral88DE6198FB5FD867EB11D303FBE5CE53F306D673, NULL);
		((AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_StaticFields*)il2cpp_codegen_static_fields_for(AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_il2cpp_TypeInfo_var))->___cls_FlurryPublisherSegmentation_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_StaticFields*)il2cpp_codegen_static_fields_for(AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_il2cpp_TypeInfo_var))->___cls_FlurryPublisherSegmentation_0), (void*)L_0);
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
// System.Void FlurrySDKInternal.FlurryAgentAndroid/PublisherSegmentationCallback::.ctor(FlurrySDK.Flurry/IPublisherSegmentationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublisherSegmentationCallback__ctor_m3FB92C23E0B12B35D904004A3CA7C746483EA2EA (PublisherSegmentationCallback_t79E663EBEA9D2D17B46BB32E3C6EF9BDB407AB36* __this, RuntimeObject* ___0_publisherSegmentationListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5211B0BA4F5CD5FF045949C5CAB595B173B543E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("com.flurry.android.FlurryPublisherSegmentation$FetchListener")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteralE5211B0BA4F5CD5FF045949C5CAB595B173B543E, NULL);
		// this.publisherSegmentationListener = publisherSegmentationListener;
		RuntimeObject* L_0 = ___0_publisherSegmentationListener;
		__this->___publisherSegmentationListener_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___publisherSegmentationListener_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/PublisherSegmentationCallback::onFetched(UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublisherSegmentationCallback_onFetched_m1B5B0D2CF27D3C4012112B6457087725C34AEADE (PublisherSegmentationCallback_t79E663EBEA9D2D17B46BB32E3C6EF9BDB407AB36* __this, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___0_flurryPublisherSegmentation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_ConvertToDictionary_TisString_t_TisString_t_m407A5C3DA5FFB272026BE425CBF552E9CFDF0D11_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPublisherSegmentationListener_tFBF447F92D5935BCA96400B9CE8FD8C33633A98E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// publisherSegmentationListener.OnFetched(ConvertToDictionary<string, string>(flurryPublisherSegmentation));
		RuntimeObject* L_0 = __this->___publisherSegmentationListener_4;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = ___0_flurryPublisherSegmentation;
		il2cpp_codegen_runtime_class_init_inline(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = FlurryAgentAndroid_ConvertToDictionary_TisString_t_TisString_t_m407A5C3DA5FFB272026BE425CBF552E9CFDF0D11(L_1, FlurryAgentAndroid_ConvertToDictionary_TisString_t_TisString_t_m407A5C3DA5FFB272026BE425CBF552E9CFDF0D11_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void FlurrySDK.Flurry/IPublisherSegmentationListener::OnFetched(System.Collections.Generic.IDictionary`2<System.String,System.String>) */, IPublisherSegmentationListener_tFBF447F92D5935BCA96400B9CE8FD8C33633A98E_il2cpp_TypeInfo_var, L_0, L_2);
		// }
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
// System.Void FlurrySDKInternal.FlurryAgentAndroid/PrivacySessionCallback::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacySessionCallback__ctor_m159CB135F9CA290AF23EE86BF1000570CEF3C9B2 (PrivacySessionCallback_t9A7B5E3F9D1ED440308BCD5BA9988F07C7C95970* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral63F9C0AA07E88AA17C771193AB73F0656F05C311);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base("com.flurry.android.FlurryPrivacySession$Callback")
		il2cpp_codegen_runtime_class_init_inline(AndroidJavaProxy_tE5521F9761F7B95444B9C39FB15FDFC23F80A78D_il2cpp_TypeInfo_var);
		AndroidJavaProxy__ctor_m2832886A0E1BBF6702653A7C6A4609F11FB712C7(__this, _stringLiteral63F9C0AA07E88AA17C771193AB73F0656F05C311, NULL);
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/PrivacySessionCallback::success()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacySessionCallback_success_m1B1274A053B7163447512CE7E1B82948861C7F1B (PrivacySessionCallback_t9A7B5E3F9D1ED440308BCD5BA9988F07C7C95970* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void FlurrySDKInternal.FlurryAgentAndroid/PrivacySessionCallback::failure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrivacySessionCallback_failure_m9CA92C8E7C912E9DCFAE4AB9198F9DC9E5C1B70D (PrivacySessionCallback_t9A7B5E3F9D1ED440308BCD5BA9988F07C7C95970* __this, const RuntimeMethod* method) 
{
	{
		// }
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
// System.Void FlurrySDK.Flurry::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry__cctor_mC8FF422C27C08B59B734CDB3039B2B89CA75F7A4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0013;
		}
	}
	{
		// flurryAgent = new FlurryAgentAndroid();
		FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18* L_1 = (FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18*)il2cpp_codegen_object_new(FlurryAgentAndroid_t32449DA20126415C81DD11AC849FAA2B07CD4F18_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		FlurryAgentAndroid__ctor_m91A3FFC2E252885661C84E4545B6249DD459D940(L_1, NULL);
		((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0), (void*)L_1);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::SetContinueSessionMillis(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_SetContinueSessionMillis_mB2B76D880320794460DC9E25738CD4156C89B183 (int64_t ___0_sessionMillis, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.SetContinueSessionMillis(sessionMillis);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		int64_t L_2 = ___0_sessionMillis;
		NullCheck(L_1);
		VirtualActionInvoker1< int64_t >::Invoke(5 /* System.Void FlurrySDKInternal.FlurryAgent::SetContinueSessionMillis(System.Int64) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::SetCrashReporting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_SetCrashReporting_m06791BF863E13BB34272359E537A473FB1E88AE0 (bool ___0_crashReporting, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.SetCrashReporting(crashReporting);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		bool L_2 = ___0_crashReporting;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(6 /* System.Void FlurrySDKInternal.FlurryAgent::SetCrashReporting(System.Boolean) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::SetIncludeBackgroundSessionsInMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_SetIncludeBackgroundSessionsInMetrics_mEBE6E82E7AFC7F685292E19C41E8E432C21A70E1 (bool ___0_includeBackgroundSessionsInMetrics, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.SetIncludeBackgroundSessionsInMetrics(includeBackgroundSessionsInMetrics);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		bool L_2 = ___0_includeBackgroundSessionsInMetrics;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void FlurrySDKInternal.FlurryAgent::SetIncludeBackgroundSessionsInMetrics(System.Boolean) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::SetLogEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_SetLogEnabled_mC902BDF79B61834E8642DB1CF2729866D39EF9C2 (bool ___0_enableLog, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.SetLogEnabled(enableLog);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		bool L_2 = ___0_enableLog;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(8 /* System.Void FlurrySDKInternal.FlurryAgent::SetLogEnabled(System.Boolean) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::SetLogLevel(FlurrySDK.Flurry/LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_SetLogLevel_mAD55159C5B4F6B1272CBF535DB825425171AA577 (int32_t ___0_logLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.SetLogLevel(logLevel);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		int32_t L_2 = ___0_logLevel;
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(9 /* System.Void FlurrySDKInternal.FlurryAgent::SetLogLevel(FlurrySDK.Flurry/LogLevel) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::SetSslPinningEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_SetSslPinningEnabled_mE73D672911D3D485D94AFAB98F2FF5A0067855CF (bool ___0_sslPinningEnabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.SetSslPinningEnabled(sslPinningEnabled);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		bool L_2 = ___0_sslPinningEnabled;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(10 /* System.Void FlurrySDKInternal.FlurryAgent::SetSslPinningEnabled(System.Boolean) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::SetAge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_SetAge_mDE08C58C87540338D04C4A149BDD1D8A24170E04 (int32_t ___0_age, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.SetAge(age);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		int32_t L_2 = ___0_age;
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(11 /* System.Void FlurrySDKInternal.FlurryAgent::SetAge(System.Int32) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::SetGender(FlurrySDK.Flurry/Gender)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_SetGender_m54E447026C2EED083190AE4BAA8F5B599568DC39 (int32_t ___0_gender, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.SetGender(gender);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		int32_t L_2 = ___0_gender;
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(12 /* System.Void FlurrySDKInternal.FlurryAgent::SetGender(FlurrySDK.Flurry/Gender) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::SetReportLocation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_SetReportLocation_mB7A61DDE474CE34DB345F5B74E4561EDD438315C (bool ___0_reportLocation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.SetReportLocation(reportLocation);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		bool L_2 = ___0_reportLocation;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(13 /* System.Void FlurrySDKInternal.FlurryAgent::SetReportLocation(System.Boolean) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::SetSessionOrigin(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_SetSessionOrigin_m65A5294D0743D9A475202380B6BFA824BD7B1FA5 (String_t* ___0_originName, String_t* ___1_deepLink, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// flurryAgent.SetSessionOrigin(originName, deepLink);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		String_t* L_2 = ___0_originName;
		String_t* L_3 = ___1_deepLink;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(14 /* System.Void FlurrySDKInternal.FlurryAgent::SetSessionOrigin(System.String,System.String) */, L_1, L_2, L_3);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::SetUserId(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_SetUserId_m2C1E29609BC7D71B63DDEBB9B5864AD40D2AF468 (String_t* ___0_userId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.SetUserId(userId);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		String_t* L_2 = ___0_userId;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(15 /* System.Void FlurrySDKInternal.FlurryAgent::SetUserId(System.String) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::SetVersionName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_SetVersionName_m4FF94261C74D6C3467B6887312CE9D2228136CCA (String_t* ___0_versionName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.SetVersionName(versionName);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		String_t* L_2 = ___0_versionName;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(16 /* System.Void FlurrySDKInternal.FlurryAgent::SetVersionName(System.String) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::AddOrigin(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_AddOrigin_mB1FDCE124F4B20C888A144033A0649928B2FD78F (String_t* ___0_originName, String_t* ___1_originVersion, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// flurryAgent.AddOrigin(originName, originVersion);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		String_t* L_2 = ___0_originName;
		String_t* L_3 = ___1_originVersion;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(17 /* System.Void FlurrySDKInternal.FlurryAgent::AddOrigin(System.String,System.String) */, L_1, L_2, L_3);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::AddOrigin(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_AddOrigin_mDCB3C43802EEB14574F6DBF800DBF5F8434CF62D (String_t* ___0_originName, String_t* ___1_originVersion, RuntimeObject* ___2_originParameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// flurryAgent.AddOrigin(originName, originVersion, originParameters);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		String_t* L_2 = ___0_originName;
		String_t* L_3 = ___1_originVersion;
		RuntimeObject* L_4 = ___2_originParameters;
		NullCheck(L_1);
		VirtualActionInvoker3< String_t*, String_t*, RuntimeObject* >::Invoke(18 /* System.Void FlurrySDKInternal.FlurryAgent::AddOrigin(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, L_1, L_2, L_3, L_4);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::AddSessionProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_AddSessionProperty_m98780518959178E50C5A98971D557CA3F52B3C69 (String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// flurryAgent.AddSessionProperty(name, value);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		String_t* L_2 = ___0_name;
		String_t* L_3 = ___1_value;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(19 /* System.Void FlurrySDKInternal.FlurryAgent::AddSessionProperty(System.String,System.String) */, L_1, L_2, L_3);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::SetDataSaleOptOut(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_SetDataSaleOptOut_mE0C3C15123367F74F195F366A948485179CB58E5 (bool ___0_isOptOut, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.SetDataSaleOptOut(isOptOut);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		bool L_2 = ___0_isOptOut;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(20 /* System.Void FlurrySDKInternal.FlurryAgent::SetDataSaleOptOut(System.Boolean) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::DeleteData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_DeleteData_m9C84926380CEE6F36E4CF02253C64A3F91B9BACE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// flurryAgent.DeleteData();
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(21 /* System.Void FlurrySDKInternal.FlurryAgent::DeleteData() */, L_1);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::OpenPrivacyDashboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_OpenPrivacyDashboard_mC54941303659055580F44A9C1EC20689A21E7C8D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// flurryAgent.OpenPrivacyDashboard();
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(22 /* System.Void FlurrySDKInternal.FlurryAgent::OpenPrivacyDashboard() */, L_1);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Int32 FlurrySDK.Flurry::GetAgentVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Flurry_GetAgentVersion_m3B321A69E3F4A234387ED05EFB695D9A54EB43C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return flurryAgent.GetAgentVersion();
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 FlurrySDKInternal.FlurryAgent::GetAgentVersion() */, L_1);
		return L_2;
	}

IL_0012:
	{
		// return 0;
		return 0;
	}
}
// System.String FlurrySDK.Flurry::GetReleaseVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Flurry_GetReleaseVersion_mC56A2103ECCD3384EDE496BD015E7DFA98E6848E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return flurryAgent.GetReleaseVersion();
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(24 /* System.String FlurrySDKInternal.FlurryAgent::GetReleaseVersion() */, L_1);
		return L_2;
	}

IL_0012:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.String FlurrySDK.Flurry::GetSessionId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Flurry_GetSessionId_mFDB617C17EB6B8BD57AD4D0B289DFBCB567388FF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return flurryAgent.GetSessionId();
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(25 /* System.String FlurrySDKInternal.FlurryAgent::GetSessionId() */, L_1);
		return L_2;
	}

IL_0012:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// FlurrySDK.Flurry/EventRecordStatus FlurrySDK.Flurry::LogEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Flurry_LogEvent_mF9598B6FE52032DF0F70DFA61576977220D9544F (String_t* ___0_eventId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return (EventRecordStatus) flurryAgent.LogEvent(eventId);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		String_t* L_2 = ___0_eventId;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(26 /* System.Int32 FlurrySDKInternal.FlurryAgent::LogEvent(System.String) */, L_1, L_2);
		return (int32_t)(L_3);
	}

IL_0013:
	{
		// return EventRecordStatus.FlurryEventRecorded;
		return (int32_t)(1);
	}
}
// FlurrySDK.Flurry/EventRecordStatus FlurrySDK.Flurry::LogEvent(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Flurry_LogEvent_m4A92FB81C7A3B9E07474E198C2CA52A9E7DB31CC (String_t* ___0_eventId, bool ___1_timed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return (EventRecordStatus) flurryAgent.LogEvent(eventId, timed);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		String_t* L_2 = ___0_eventId;
		bool L_3 = ___1_timed;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, String_t*, bool >::Invoke(27 /* System.Int32 FlurrySDKInternal.FlurryAgent::LogEvent(System.String,System.Boolean) */, L_1, L_2, L_3);
		return (int32_t)(L_4);
	}

IL_0014:
	{
		// return EventRecordStatus.FlurryEventRecorded;
		return (int32_t)(1);
	}
}
// FlurrySDK.Flurry/EventRecordStatus FlurrySDK.Flurry::LogEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Flurry_LogEvent_m9AB0B74D04C099B202FBBFC94F4F1CCAD0894ECB (String_t* ___0_eventId, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return (EventRecordStatus) flurryAgent.LogEvent(eventId, parameters);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		String_t* L_2 = ___0_eventId;
		RuntimeObject* L_3 = ___1_parameters;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, String_t*, RuntimeObject* >::Invoke(28 /* System.Int32 FlurrySDKInternal.FlurryAgent::LogEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, L_1, L_2, L_3);
		return (int32_t)(L_4);
	}

IL_0014:
	{
		// return EventRecordStatus.FlurryEventRecorded;
		return (int32_t)(1);
	}
}
// FlurrySDK.Flurry/EventRecordStatus FlurrySDK.Flurry::LogEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Flurry_LogEvent_m151BEE1EF3DB88682DBFF82132863566B1F375D2 (String_t* ___0_eventId, RuntimeObject* ___1_parameters, bool ___2_timed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// return (EventRecordStatus) flurryAgent.LogEvent(eventId, parameters, timed);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		String_t* L_2 = ___0_eventId;
		RuntimeObject* L_3 = ___1_parameters;
		bool L_4 = ___2_timed;
		NullCheck(L_1);
		int32_t L_5;
		L_5 = VirtualFuncInvoker3< int32_t, String_t*, RuntimeObject*, bool >::Invoke(29 /* System.Int32 FlurrySDKInternal.FlurryAgent::LogEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Boolean) */, L_1, L_2, L_3, L_4);
		return (int32_t)(L_5);
	}

IL_0015:
	{
		// return EventRecordStatus.FlurryEventRecorded;
		return (int32_t)(1);
	}
}
// System.Void FlurrySDK.Flurry::EndTimedEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_EndTimedEvent_mED6F6CE1D1F245774A701EC957ECAD24DBAD56EE (String_t* ___0_eventId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.EndTimedEvent(eventId);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		String_t* L_2 = ___0_eventId;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(30 /* System.Void FlurrySDKInternal.FlurryAgent::EndTimedEvent(System.String) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::EndTimedEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_EndTimedEvent_m4AF27897674C067CD439148B65DF9CAEFE8876AB (String_t* ___0_eventId, RuntimeObject* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// flurryAgent.EndTimedEvent(eventId, parameters);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		String_t* L_2 = ___0_eventId;
		RuntimeObject* L_3 = ___1_parameters;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, RuntimeObject* >::Invoke(31 /* System.Void FlurrySDKInternal.FlurryAgent::EndTimedEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, L_1, L_2, L_3);
	}

IL_0013:
	{
		// }
		return;
	}
}
// FlurrySDK.Flurry/EventRecordStatus FlurrySDK.Flurry::LogEvent(FlurrySDK.Flurry/Event)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Flurry_LogEvent_m8E2E53D6735B501A2CDEE3592831576CD47EF538 (int32_t ___0_eventId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return (EventRecordStatus)flurryAgent.LogEvent(eventId, null);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		int32_t L_2 = ___0_eventId;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = VirtualFuncInvoker2< int32_t, int32_t, EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* >::Invoke(32 /* System.Int32 FlurrySDKInternal.FlurryAgent::LogEvent(FlurrySDK.Flurry/Event,FlurrySDK.Flurry/EventParams) */, L_1, L_2, (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5*)NULL);
		return (int32_t)(L_3);
	}

IL_0014:
	{
		// return EventRecordStatus.FlurryEventRecorded;
		return (int32_t)(1);
	}
}
// FlurrySDK.Flurry/EventRecordStatus FlurrySDK.Flurry::LogEvent(FlurrySDK.Flurry/Event,FlurrySDK.Flurry/EventParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Flurry_LogEvent_m8D8F359102DF89BDA8C1949987BD352F3C1484BC (int32_t ___0_eventId, EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* ___1_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return (EventRecordStatus)flurryAgent.LogEvent(eventId, parameters);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		int32_t L_2 = ___0_eventId;
		EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* L_3 = ___1_parameters;
		NullCheck(L_1);
		int32_t L_4;
		L_4 = VirtualFuncInvoker2< int32_t, int32_t, EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* >::Invoke(32 /* System.Int32 FlurrySDKInternal.FlurryAgent::LogEvent(FlurrySDK.Flurry/Event,FlurrySDK.Flurry/EventParams) */, L_1, L_2, L_3);
		return (int32_t)(L_4);
	}

IL_0014:
	{
		// return EventRecordStatus.FlurryEventRecorded;
		return (int32_t)(1);
	}
}
// System.Void FlurrySDK.Flurry::OnPageView()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_OnPageView_mC4AD44A38D0E19B91368A356F39EF99C21CEFA86 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// flurryAgent.OnPageView();
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(33 /* System.Void FlurrySDKInternal.FlurryAgent::OnPageView() */, L_1);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::OnError(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_OnError_m0600B44D9A2E554E096408030F32DF3DF80EBB06 (String_t* ___0_errorId, String_t* ___1_message, String_t* ___2_errorClass, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// flurryAgent.OnError(errorId, message, errorClass);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		String_t* L_2 = ___0_errorId;
		String_t* L_3 = ___1_message;
		String_t* L_4 = ___2_errorClass;
		NullCheck(L_1);
		VirtualActionInvoker3< String_t*, String_t*, String_t* >::Invoke(34 /* System.Void FlurrySDKInternal.FlurryAgent::OnError(System.String,System.String,System.String) */, L_1, L_2, L_3, L_4);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::OnError(System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_OnError_m457D72DBB55F6CCA0BBAF5B5F4D6F737B83E3CEA (String_t* ___0_errorId, String_t* ___1_message, String_t* ___2_errorClass, RuntimeObject* ___3_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// flurryAgent.OnError(errorId, message, errorClass, parameters);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		String_t* L_2 = ___0_errorId;
		String_t* L_3 = ___1_message;
		String_t* L_4 = ___2_errorClass;
		RuntimeObject* L_5 = ___3_parameters;
		NullCheck(L_1);
		VirtualActionInvoker4< String_t*, String_t*, String_t*, RuntimeObject* >::Invoke(35 /* System.Void FlurrySDKInternal.FlurryAgent::OnError(System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, L_1, L_2, L_3, L_4, L_5);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::LogBreadcrumb(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_LogBreadcrumb_mCDC846CF1DF9B51E9459C12EE733E2DCC0C6118D (String_t* ___0_crashBreadcrumb, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.LogBreadcrumb(crashBreadcrumb);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		String_t* L_2 = ___0_crashBreadcrumb;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(36 /* System.Void FlurrySDKInternal.FlurryAgent::LogBreadcrumb(System.String) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// FlurrySDK.Flurry/EventRecordStatus FlurrySDK.Flurry::LogPayment(System.String,System.String,System.Int32,System.Double,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Flurry_LogPayment_mADA906E0C6B247EABB856A10605197DB20798B0B (String_t* ___0_productName, String_t* ___1_productId, int32_t ___2_quantity, double ___3_price, String_t* ___4_currency, String_t* ___5_transactionId, RuntimeObject* ___6_parameters, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		// return (EventRecordStatus) flurryAgent.LogPayment(productName, productId, quantity, price,
		//                                                   currency, transactionId, parameters);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		String_t* L_2 = ___0_productName;
		String_t* L_3 = ___1_productId;
		int32_t L_4 = ___2_quantity;
		double L_5 = ___3_price;
		String_t* L_6 = ___4_currency;
		String_t* L_7 = ___5_transactionId;
		RuntimeObject* L_8 = ___6_parameters;
		NullCheck(L_1);
		int32_t L_9;
		L_9 = VirtualFuncInvoker7< int32_t, String_t*, String_t*, int32_t, double, String_t*, String_t*, RuntimeObject* >::Invoke(37 /* System.Int32 FlurrySDKInternal.FlurryAgent::LogPayment(System.String,System.String,System.Int32,System.Double,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8);
		return (int32_t)(L_9);
	}

IL_001c:
	{
		// return EventRecordStatus.FlurryEventRecorded;
		return (int32_t)(1);
	}
}
// System.Void FlurrySDK.Flurry::SetIAPReportingEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_SetIAPReportingEnabled_mFDB637E8B47AA34FCB39966F5CCB4F15CC8FAC07 (bool ___0_enableIAP, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.SetIAPReportingEnabled(enableIAP);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		bool L_2 = ___0_enableIAP;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(38 /* System.Void FlurrySDKInternal.FlurryAgent::SetIAPReportingEnabled(System.Boolean) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::UpdateConversionValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_UpdateConversionValue_mF0E730B37727F6F6427E2D25C5BD4A9CDDB605E0 (int32_t ___0_conversionValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.UpdateConversionValue(conversionValue);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		int32_t L_2 = ___0_conversionValue;
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(39 /* System.Void FlurrySDKInternal.FlurryAgent::UpdateConversionValue(System.Int32) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::UpdateConversionValueWithEvent(FlurrySDK.Flurry/SKAdNetworkEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_UpdateConversionValueWithEvent_m90BB11708AFAF8DA7CEEF435BD04987ADA99D314 (int32_t ___0_flurryEvent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.UpdateConversionValueWithEvent(flurryEvent);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		int32_t L_2 = ___0_flurryEvent;
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(40 /* System.Void FlurrySDKInternal.FlurryAgent::UpdateConversionValueWithEvent(FlurrySDK.Flurry/SKAdNetworkEvent) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::SetMessagingListener(FlurrySDK.Flurry/IMessagingListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_SetMessagingListener_mA163FB246E5D970F98743186B20BCDE326039E84 (RuntimeObject* ___0_messagingListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.SetMessagingListener(messagingListener);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		RuntimeObject* L_2 = ___0_messagingListener;
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(41 /* System.Void FlurrySDKInternal.FlurryAgent::SetMessagingListener(FlurrySDK.Flurry/IMessagingListener) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> FlurrySDK.Flurry::GetPublisherSegmentation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Flurry_GetPublisherSegmentation_m833087237C0F45C14697B0ADBEFBBBF3AD3EC072 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return flurryAgent.GetPublisherSegmentation();
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(42 /* System.Collections.Generic.IDictionary`2<System.String,System.String> FlurrySDKInternal.FlurryAgent::GetPublisherSegmentation() */, L_1);
		return L_2;
	}

IL_0012:
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Void FlurrySDK.Flurry::FetchPublisherSegmentation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_FetchPublisherSegmentation_m09D63040B4B1A416C2EBE5F6E61C06277FCBC1A6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// flurryAgent.FetchPublisherSegmentation();
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(43 /* System.Void FlurrySDKInternal.FlurryAgent::FetchPublisherSegmentation() */, L_1);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::SetPublisherSegmentationListener(FlurrySDK.Flurry/IFlurryPublisherSegmentationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_SetPublisherSegmentationListener_mA058A738ACD287642CD1CD979A769DC3DEA87D77 (RuntimeObject* ___0_flurryPublisherSegmentationListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// flurryAgent.SetPublisherSegmentationListener(flurryPublisherSegmentationListener);
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		RuntimeObject* L_2 = ___0_flurryPublisherSegmentationListener;
		NullCheck(L_1);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(44 /* System.Void FlurrySDKInternal.FlurryAgent::SetPublisherSegmentationListener(FlurrySDK.Flurry/IFlurryPublisherSegmentationListener) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry_Dispose_mD2294973CB652CD6A3066EE6D556B25338017EBC (Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flurryAgent != null)
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_0 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// flurryAgent.Dispose();
		il2cpp_codegen_runtime_class_init_inline(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var);
		FlurryAgent_tAF74424A9297C124C8270F616013B5721934DA9B* L_1 = ((Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_StaticFields*)il2cpp_codegen_static_fields_for(Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529_il2cpp_TypeInfo_var))->___flurryAgent_0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(45 /* System.Void FlurrySDKInternal.FlurryAgent::Dispose() */, L_1);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Flurry__ctor_mF1774244E6B6D10566ACC439D0373A45F51ECADA (Flurry_tC841CB2D50A0485B642B324CC5B2BB32BC229529* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void FlurrySDK.Flurry/Builder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder__ctor_m2892CAECF7FE4FFF67D25C66E7E0B84EE64D79FF (Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Builder()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_001a;
		}
	}
	{
		// builder = new FlurryAgentAndroid.AgentBuilderAndroid();
		AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5* L_1 = (AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5*)il2cpp_codegen_object_new(AgentBuilderAndroid_t640E23FFAC4BB03C728808C5BFA47E11D0D314C5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AgentBuilderAndroid__ctor_m2435A012639C74FF7182F50C1AE2946178350FF0(L_1, NULL);
		__this->___builder_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___builder_0), (void*)L_1);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/Builder::Build(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Builder_Build_m3045C5B046DAF417FBDF1F72F5198E1946D65001 (Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* __this, String_t* ___0_apiKey, const RuntimeMethod* method) 
{
	{
		// if (builder != null)
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_0 = __this->___builder_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// builder.Build(apiKey);
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_1 = __this->___builder_0;
		String_t* L_2 = ___0_apiKey;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(4 /* System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::Build(System.String) */, L_1, L_2);
	}

IL_0014:
	{
		// }
		return;
	}
}
// FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithCrashReporting(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* Builder_WithCrashReporting_m20FC8A7D89CDC4BE555B972E696FCDAA1E218C40 (Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* __this, bool ___0_crashReporting, const RuntimeMethod* method) 
{
	{
		// if (builder != null)
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_0 = __this->___builder_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// builder.WithCrashReporting(crashReporting);
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_1 = __this->___builder_0;
		bool L_2 = ___0_crashReporting;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(7 /* System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithCrashReporting(System.Boolean) */, L_1, L_2);
	}

IL_0014:
	{
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithDataSaleOptOut(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* Builder_WithDataSaleOptOut_m9BB726C46C0DA5DB37B617FF9CD8E4B18469580F (Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* __this, bool ___0_isOptOut, const RuntimeMethod* method) 
{
	{
		// if (builder != null)
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_0 = __this->___builder_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// builder.WithDataSaleOptOut(isOptOut);
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_1 = __this->___builder_0;
		bool L_2 = ___0_isOptOut;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(13 /* System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithDataSaleOptOut(System.Boolean) */, L_1, L_2);
	}

IL_0014:
	{
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithContinueSessionMillis(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* Builder_WithContinueSessionMillis_m602E658FBB7362AB1ED1655BFC58CBCFCBFB41EB (Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* __this, int64_t ___0_sessionMillis, const RuntimeMethod* method) 
{
	{
		// if (builder != null)
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_0 = __this->___builder_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// builder.WithContinueSessionMillis(sessionMillis);
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_1 = __this->___builder_0;
		int64_t L_2 = ___0_sessionMillis;
		NullCheck(L_1);
		VirtualActionInvoker1< int64_t >::Invoke(6 /* System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithContinueSessionMillis(System.Int64) */, L_1, L_2);
	}

IL_0014:
	{
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithIncludeBackgroundSessionsInMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* Builder_WithIncludeBackgroundSessionsInMetrics_m4A158DA52F6D02F869494E107E628872FE669248 (Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* __this, bool ___0_includeBackgroundSessionsInMetrics, const RuntimeMethod* method) 
{
	{
		// if (builder != null)
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_0 = __this->___builder_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// builder.WithIncludeBackgroundSessionsInMetrics(includeBackgroundSessionsInMetrics);
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_1 = __this->___builder_0;
		bool L_2 = ___0_includeBackgroundSessionsInMetrics;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(8 /* System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithIncludeBackgroundSessionsInMetrics(System.Boolean) */, L_1, L_2);
	}

IL_0014:
	{
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithLogEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* Builder_WithLogEnabled_m6CDA81F25E7C5BE833C14892A3B3337AB72DF69C (Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* __this, bool ___0_enableLog, const RuntimeMethod* method) 
{
	{
		// if (builder != null)
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_0 = __this->___builder_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// builder.WithLogEnabled(enableLog);
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_1 = __this->___builder_0;
		bool L_2 = ___0_enableLog;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(9 /* System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithLogEnabled(System.Boolean) */, L_1, L_2);
	}

IL_0014:
	{
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithLogLevel(FlurrySDK.Flurry/LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* Builder_WithLogLevel_m5D680B6D4A003DCEF929EEA45AB9EB706A93715C (Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* __this, int32_t ___0_logLevel, const RuntimeMethod* method) 
{
	{
		// if (builder != null)
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_0 = __this->___builder_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// builder.WithLogLevel(logLevel);
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_1 = __this->___builder_0;
		int32_t L_2 = ___0_logLevel;
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(10 /* System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithLogLevel(FlurrySDK.Flurry/LogLevel) */, L_1, L_2);
	}

IL_0014:
	{
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithReportLocation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* Builder_WithReportLocation_m0C37DCE7ABC043ADF2BA38C02390331FB7C126A2 (Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* __this, bool ___0_reportLocation, const RuntimeMethod* method) 
{
	{
		// if (builder != null)
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_0 = __this->___builder_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// builder.WithReportLocation(reportLocation);
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_1 = __this->___builder_0;
		bool L_2 = ___0_reportLocation;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(11 /* System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithReportLocation(System.Boolean) */, L_1, L_2);
	}

IL_0014:
	{
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithMessaging(System.Boolean,FlurrySDK.Flurry/IMessagingListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* Builder_WithMessaging_mA797B7B9D40FEBBCE5C587E7809A75918E0E182B (Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* __this, bool ___0_enableMessaging, RuntimeObject* ___1_messagingListener, const RuntimeMethod* method) 
{
	{
		// if (builder != null)
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_0 = __this->___builder_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// builder.WithMessaging(enableMessaging, messagingListener);
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_1 = __this->___builder_0;
		bool L_2 = ___0_enableMessaging;
		RuntimeObject* L_3 = ___1_messagingListener;
		NullCheck(L_1);
		VirtualActionInvoker2< bool, RuntimeObject* >::Invoke(12 /* System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithMessaging(System.Boolean,FlurrySDK.Flurry/IMessagingListener) */, L_1, L_2, L_3);
	}

IL_0015:
	{
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithAppVersion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* Builder_WithAppVersion_mD3E2B92C1BAC4BF09F27B8BD10CC5BAD2BBAD0A6 (Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* __this, String_t* ___0_appVersion, const RuntimeMethod* method) 
{
	{
		// if (builder != null)
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_0 = __this->___builder_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// builder.WithAppVersion(appVersion);
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_1 = __this->___builder_0;
		String_t* L_2 = ___0_appVersion;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(5 /* System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithAppVersion(System.String) */, L_1, L_2);
	}

IL_0014:
	{
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithPerformanceMetrics(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* Builder_WithPerformanceMetrics_mC60B646967B569721C8734E2F60609A728091ECE (Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* __this, int32_t ___0_performanceMetrics, const RuntimeMethod* method) 
{
	{
		// if (builder != null)
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_0 = __this->___builder_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// builder.WithPerformanceMetrics(performanceMetrics);
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_1 = __this->___builder_0;
		int32_t L_2 = ___0_performanceMetrics;
		NullCheck(L_1);
		VirtualActionInvoker1< int32_t >::Invoke(14 /* System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithPerformanceMetrics(System.Int32) */, L_1, L_2);
	}

IL_0014:
	{
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithSslPinningEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* Builder_WithSslPinningEnabled_m5F1BF7CCB47982105546DA725E3BC5E9F2FFC56F (Builder_t1746B4DC265562B0DC896670DB3544A71C261F83* __this, bool ___0_sslPinningEnabled, const RuntimeMethod* method) 
{
	{
		// if (builder != null)
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_0 = __this->___builder_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// builder.WithSslPinningEnabled(sslPinningEnabled);
		AgentBuilder_t93CEE2A3BE0E90BDE805D140212E4231EBD6CE95* L_1 = __this->___builder_0;
		bool L_2 = ___0_sslPinningEnabled;
		NullCheck(L_1);
		VirtualActionInvoker1< bool >::Invoke(15 /* System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithSslPinningEnabled(System.Boolean) */, L_1, L_2);
	}

IL_0014:
	{
		// return this;
		return __this;
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
// System.Void FlurrySDK.Flurry/UserProperties::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProperties__cctor_m38692BB4F9CBB8767C52C3B8068327A5CD7BB024 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09A86FCCEC7FD774D08C97C8A21BBCD8C0687FD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54DF44BB4A482D4F98F6E252DAA31666697DE38B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAEEF7F54B64D16F076DC2380D8E5A5E9FE4312FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE40CE239237DA778C08B64D09D1485FEC49B6355);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string PROPERTY_CURRENCY_PREFERENCE = "Flurry.CurrencyPreference";
		((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___PROPERTY_CURRENCY_PREFERENCE_0 = _stringLiteral09A86FCCEC7FD774D08C97C8A21BBCD8C0687FD8;
		Il2CppCodeGenWriteBarrier((void**)(&((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___PROPERTY_CURRENCY_PREFERENCE_0), (void*)_stringLiteral09A86FCCEC7FD774D08C97C8A21BBCD8C0687FD8);
		// public static string PROPERTY_PURCHASER =           "Flurry.Purchaser";
		((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___PROPERTY_PURCHASER_1 = _stringLiteralE40CE239237DA778C08B64D09D1485FEC49B6355;
		Il2CppCodeGenWriteBarrier((void**)(&((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___PROPERTY_PURCHASER_1), (void*)_stringLiteralE40CE239237DA778C08B64D09D1485FEC49B6355);
		// public static string PROPERTY_REGISTERED_USER =     "Flurry.RegisteredUser";
		((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___PROPERTY_REGISTERED_USER_2 = _stringLiteralAEEF7F54B64D16F076DC2380D8E5A5E9FE4312FE;
		Il2CppCodeGenWriteBarrier((void**)(&((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___PROPERTY_REGISTERED_USER_2), (void*)_stringLiteralAEEF7F54B64D16F076DC2380D8E5A5E9FE4312FE);
		// public static string PROPERTY_SUBSCRIBER =          "Flurry.Subscriber";
		((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___PROPERTY_SUBSCRIBER_3 = _stringLiteral54DF44BB4A482D4F98F6E252DAA31666697DE38B;
		Il2CppCodeGenWriteBarrier((void**)(&((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___PROPERTY_SUBSCRIBER_3), (void*)_stringLiteral54DF44BB4A482D4F98F6E252DAA31666697DE38B);
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_003b;
		}
	}
	{
		// userProperties = new FlurryAgentAndroid.AgentUserPropertiesAndroid();
		AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE* L_1 = (AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE*)il2cpp_codegen_object_new(AgentUserPropertiesAndroid_t9B08CE5E558B85E6F5FA12DEB035FFD252A51AEE_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AgentUserPropertiesAndroid__ctor_m57F3C97A091D5C0998C9487E2D8980640964557D(L_1, NULL);
		((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4), (void*)L_1);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/UserProperties::Set(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProperties_Set_mD7FECAEA0CDBC9B18FAFB17086B99D409441C0F0 (String_t* ___0_propertyName, String_t* ___1_propertyValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (userProperties != null)
		il2cpp_codegen_runtime_class_init_inline(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* L_0 = ((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// userProperties.Set(propertyName, propertyValue);
		il2cpp_codegen_runtime_class_init_inline(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* L_1 = ((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4;
		String_t* L_2 = ___0_propertyName;
		String_t* L_3 = ___1_propertyValue;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(4 /* System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::Set(System.String,System.String) */, L_1, L_2, L_3);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/UserProperties::Set(System.String,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProperties_Set_mCC529A4673B3E92987A85A3343A726EAC7A1E4A9 (String_t* ___0_propertyName, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___1_propertyValues, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (userProperties != null)
		il2cpp_codegen_runtime_class_init_inline(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* L_0 = ((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// userProperties.Set(propertyName, propertyValues);
		il2cpp_codegen_runtime_class_init_inline(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* L_1 = ((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4;
		String_t* L_2 = ___0_propertyName;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___1_propertyValues;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(5 /* System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::Set(System.String,System.Collections.Generic.List`1<System.String>) */, L_1, L_2, L_3);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/UserProperties::Add(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProperties_Add_mC368985ABD2394D53BE689A79A9F2F51B4E80B30 (String_t* ___0_propertyName, String_t* ___1_propertyValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (userProperties != null)
		il2cpp_codegen_runtime_class_init_inline(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* L_0 = ((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// userProperties.Add(propertyName, propertyValue);
		il2cpp_codegen_runtime_class_init_inline(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* L_1 = ((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4;
		String_t* L_2 = ___0_propertyName;
		String_t* L_3 = ___1_propertyValue;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(6 /* System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::Add(System.String,System.String) */, L_1, L_2, L_3);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/UserProperties::Add(System.String,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProperties_Add_mAEF4E1587C4746E1F8E8A1989D194D2387F0B29B (String_t* ___0_propertyName, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___1_propertyValues, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (userProperties != null)
		il2cpp_codegen_runtime_class_init_inline(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* L_0 = ((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// userProperties.Add(propertyName, propertyValues);
		il2cpp_codegen_runtime_class_init_inline(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* L_1 = ((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4;
		String_t* L_2 = ___0_propertyName;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___1_propertyValues;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(7 /* System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::Add(System.String,System.Collections.Generic.List`1<System.String>) */, L_1, L_2, L_3);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/UserProperties::Remove(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProperties_Remove_mE8280F1D13B9F92DF8CCA6E97CF5B7178F62CF73 (String_t* ___0_propertyName, String_t* ___1_propertyValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (userProperties != null)
		il2cpp_codegen_runtime_class_init_inline(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* L_0 = ((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// userProperties.Remove(propertyName, propertyValue);
		il2cpp_codegen_runtime_class_init_inline(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* L_1 = ((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4;
		String_t* L_2 = ___0_propertyName;
		String_t* L_3 = ___1_propertyValue;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(8 /* System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::Remove(System.String,System.String) */, L_1, L_2, L_3);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/UserProperties::Remove(System.String,System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProperties_Remove_mB95F8CDA5D8EC96BD5E061914C8B48B658D38538 (String_t* ___0_propertyName, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___1_propertyValues, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (userProperties != null)
		il2cpp_codegen_runtime_class_init_inline(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* L_0 = ((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// userProperties.Remove(propertyName, propertyValues);
		il2cpp_codegen_runtime_class_init_inline(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* L_1 = ((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4;
		String_t* L_2 = ___0_propertyName;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = ___1_propertyValues;
		NullCheck(L_1);
		VirtualActionInvoker2< String_t*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* >::Invoke(9 /* System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::Remove(System.String,System.Collections.Generic.List`1<System.String>) */, L_1, L_2, L_3);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/UserProperties::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProperties_Remove_mD6487A6D4F9F5FBEA46028B4DC0475A6976F6E08 (String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (userProperties != null)
		il2cpp_codegen_runtime_class_init_inline(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* L_0 = ((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// userProperties.Remove(propertyName);
		il2cpp_codegen_runtime_class_init_inline(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* L_1 = ((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4;
		String_t* L_2 = ___0_propertyName;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::Remove(System.String) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/UserProperties::Flag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProperties_Flag_mB3B56FAD04C06697A74375C13514C7E7FED73752 (String_t* ___0_propertyName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (userProperties != null)
		il2cpp_codegen_runtime_class_init_inline(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* L_0 = ((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// userProperties.Flag(propertyName);
		il2cpp_codegen_runtime_class_init_inline(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var);
		AgentUserProperties_t52DB23C1E86A6DB077C55EB39A9886ACE922CF5B* L_1 = ((UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_StaticFields*)il2cpp_codegen_static_fields_for(UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B_il2cpp_TypeInfo_var))->___userProperties_4;
		String_t* L_2 = ___0_propertyName;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(11 /* System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::Flag(System.String) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/UserProperties::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProperties__ctor_mC79CAB7B7996170E4434B0C348D79B3DE7723E92 (UserProperties_tF0A8B4EA55FBBAA90B7628AB972C6382B26C994B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void FlurrySDK.Flurry/Performance::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Performance__cctor_m2EE6F8A2723A87067188E0119EF83711A5062C99 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static int NONE        = 0;
		((Performance_tAC95C9094182A530C176374406264EA5C90A22B9_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var))->___NONE_0 = 0;
		// public static int COLD_START  = 1;
		((Performance_tAC95C9094182A530C176374406264EA5C90A22B9_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var))->___COLD_START_1 = 1;
		// public static int SCREEN_TIME = 2;
		((Performance_tAC95C9094182A530C176374406264EA5C90A22B9_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var))->___SCREEN_TIME_2 = 2;
		// public static int ALL         = 1 | 2;
		((Performance_tAC95C9094182A530C176374406264EA5C90A22B9_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var))->___ALL_3 = 3;
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_002b;
		}
	}
	{
		// performance = new FlurryAgentAndroid.AgentPerformanceAndroid();
		AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01* L_1 = (AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01*)il2cpp_codegen_object_new(AgentPerformanceAndroid_tEB79263B262EE95A525EFE1FCBC257992BA80F01_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AgentPerformanceAndroid__ctor_mC3A07283B3BB3872BEAC46EA1038372EF0153C2D(L_1, NULL);
		((Performance_tAC95C9094182A530C176374406264EA5C90A22B9_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var))->___performance_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Performance_tAC95C9094182A530C176374406264EA5C90A22B9_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var))->___performance_4), (void*)L_1);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/Performance::ReportFullyDrawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Performance_ReportFullyDrawn_m832DCA62DF22169A19A7AF3EBE57BD2B8EA34658 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (performance != null)
		il2cpp_codegen_runtime_class_init_inline(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var);
		AgentPerformance_tB82AF57B6B08BFBDB16D91085886CAF239DC42E8* L_0 = ((Performance_tAC95C9094182A530C176374406264EA5C90A22B9_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var))->___performance_4;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// performance.ReportFullyDrawn();
		il2cpp_codegen_runtime_class_init_inline(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var);
		AgentPerformance_tB82AF57B6B08BFBDB16D91085886CAF239DC42E8* L_1 = ((Performance_tAC95C9094182A530C176374406264EA5C90A22B9_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var))->___performance_4;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(4 /* System.Void FlurrySDKInternal.FlurryAgent/AgentPerformance::ReportFullyDrawn() */, L_1);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/Performance::StartResourceLogger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Performance_StartResourceLogger_mFF0253C6E7CA57CBDDD7C7BDB7DC615E19154B9C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (performance != null)
		il2cpp_codegen_runtime_class_init_inline(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var);
		AgentPerformance_tB82AF57B6B08BFBDB16D91085886CAF239DC42E8* L_0 = ((Performance_tAC95C9094182A530C176374406264EA5C90A22B9_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var))->___performance_4;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// performance.StartResourceLogger();
		il2cpp_codegen_runtime_class_init_inline(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var);
		AgentPerformance_tB82AF57B6B08BFBDB16D91085886CAF239DC42E8* L_1 = ((Performance_tAC95C9094182A530C176374406264EA5C90A22B9_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var))->___performance_4;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(5 /* System.Void FlurrySDKInternal.FlurryAgent/AgentPerformance::StartResourceLogger() */, L_1);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/Performance::LogResourceLogger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Performance_LogResourceLogger_m60B46B0448447CE4EF8BF5BACE25DCB9F03B5527 (String_t* ___0_id, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (performance != null)
		il2cpp_codegen_runtime_class_init_inline(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var);
		AgentPerformance_tB82AF57B6B08BFBDB16D91085886CAF239DC42E8* L_0 = ((Performance_tAC95C9094182A530C176374406264EA5C90A22B9_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var))->___performance_4;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// performance.LogResourceLogger(id);
		il2cpp_codegen_runtime_class_init_inline(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var);
		AgentPerformance_tB82AF57B6B08BFBDB16D91085886CAF239DC42E8* L_1 = ((Performance_tAC95C9094182A530C176374406264EA5C90A22B9_StaticFields*)il2cpp_codegen_static_fields_for(Performance_tAC95C9094182A530C176374406264EA5C90A22B9_il2cpp_TypeInfo_var))->___performance_4;
		String_t* L_2 = ___0_id;
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(6 /* System.Void FlurrySDKInternal.FlurryAgent/AgentPerformance::LogResourceLogger(System.String) */, L_1, L_2);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/Performance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Performance__ctor_mBFAF7AB41EFAC3BCB81CAD8D794AD48A2B7F307E (Performance_tAC95C9094182A530C176374406264EA5C90A22B9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void FlurrySDK.Flurry/Config::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__cctor_m64F3E45572FB6E251B394CA31267CC0B0354F9B3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m31BF8CCA4E7DC6544B768943B298E27E6271D07E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t17C155552241AA0821355593722C226972660B0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<IConfigListener> listeners = new List<IConfigListener>();
		List_1_t17C155552241AA0821355593722C226972660B0A* L_0 = (List_1_t17C155552241AA0821355593722C226972660B0A*)il2cpp_codegen_object_new(List_1_t17C155552241AA0821355593722C226972660B0A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m31BF8CCA4E7DC6544B768943B298E27E6271D07E(L_0, List_1__ctor_m31BF8CCA4E7DC6544B768943B298E27E6271D07E_RuntimeMethod_var);
		((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___listeners_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___listeners_1), (void*)L_0);
		// private static IConfigListener mainListener = null;
		((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___mainListener_2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___mainListener_2), (void*)(RuntimeObject*)NULL);
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0023;
		}
	}
	{
		// config = new FlurryAgentAndroid.AgentConfigAndroid();
		AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC* L_2 = (AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC*)il2cpp_codegen_object_new(AgentConfigAndroid_tEE1A73319E29E3C2D9CB60F463A0D21F8614FCDC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AgentConfigAndroid__ctor_mE2832F625ADC526F3A7C9A2D3EDA8FDB1BE1AF9D(L_2, NULL);
		((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___config_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___config_0), (void*)L_2);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/Config::Fetch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config_Fetch_m3C8474CD98C5F4A6FD30CE140FDDDAC463C63B55 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (config != null)
		il2cpp_codegen_runtime_class_init_inline(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		AgentConfig_t8E52A1EE4F2983B3DBDFF13730B81AE1937B3AD3* L_0 = ((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___config_0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// config.Fetch();
		il2cpp_codegen_runtime_class_init_inline(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		AgentConfig_t8E52A1EE4F2983B3DBDFF13730B81AE1937B3AD3* L_1 = ((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___config_0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(4 /* System.Void FlurrySDKInternal.FlurryAgent/AgentConfig::Fetch() */, L_1);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/Config::Activate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config_Activate_m25143409C89B8F9A0FA3864492205F195672EA35 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (config != null)
		il2cpp_codegen_runtime_class_init_inline(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		AgentConfig_t8E52A1EE4F2983B3DBDFF13730B81AE1937B3AD3* L_0 = ((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___config_0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// config.Activate();
		il2cpp_codegen_runtime_class_init_inline(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		AgentConfig_t8E52A1EE4F2983B3DBDFF13730B81AE1937B3AD3* L_1 = ((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___config_0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(5 /* System.Void FlurrySDKInternal.FlurryAgent/AgentConfig::Activate() */, L_1);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/Config::RegisterListener(FlurrySDK.Flurry/IConfigListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config_RegisterListener_m642A2714AB54D4E49661AD8A7933D21D7DED8631 (RuntimeObject* ___0_configListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m06F77ABABF3F18E5D98ABE371DB1E8863C8BD5D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainConfigListener_t38865B5DF668E6154EF6FF651824119816DC21F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (config != null)
		il2cpp_codegen_runtime_class_init_inline(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		AgentConfig_t8E52A1EE4F2983B3DBDFF13730B81AE1937B3AD3* L_0 = ((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___config_0;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		// listeners.Add(configListener);
		il2cpp_codegen_runtime_class_init_inline(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		List_1_t17C155552241AA0821355593722C226972660B0A* L_1 = ((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___listeners_1;
		RuntimeObject* L_2 = ___0_configListener;
		NullCheck(L_1);
		List_1_Add_m06F77ABABF3F18E5D98ABE371DB1E8863C8BD5D1_inline(L_1, L_2, List_1_Add_m06F77ABABF3F18E5D98ABE371DB1E8863C8BD5D1_RuntimeMethod_var);
		// if (mainListener == null)
		RuntimeObject* L_3 = ((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___mainListener_2;
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		// mainListener = new MainConfigListener();
		MainConfigListener_t38865B5DF668E6154EF6FF651824119816DC21F8* L_4 = (MainConfigListener_t38865B5DF668E6154EF6FF651824119816DC21F8*)il2cpp_codegen_object_new(MainConfigListener_t38865B5DF668E6154EF6FF651824119816DC21F8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		MainConfigListener__ctor_m5F50B031E124AC19E95FFC3F3CDEDF6A7EB83DCF(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___mainListener_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___mainListener_2), (void*)L_4);
		// config.SetListener(mainListener);
		AgentConfig_t8E52A1EE4F2983B3DBDFF13730B81AE1937B3AD3* L_5 = ((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___config_0;
		RuntimeObject* L_6 = ((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___mainListener_2;
		NullCheck(L_5);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(6 /* System.Void FlurrySDKInternal.FlurryAgent/AgentConfig::SetListener(FlurrySDK.Flurry/IConfigListener) */, L_5, L_6);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/Config::UnregisterListener(FlurrySDK.Flurry/IConfigListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config_UnregisterListener_mCCC6691F69812D315B529C4019C991FFC8C72702 (RuntimeObject* ___0_configListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m4F9BA1D2B92C0A77CE7C715A4DE50635B69FF5D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (config != null)
		il2cpp_codegen_runtime_class_init_inline(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		AgentConfig_t8E52A1EE4F2983B3DBDFF13730B81AE1937B3AD3* L_0 = ((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___config_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// listeners.Remove(configListener);
		il2cpp_codegen_runtime_class_init_inline(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		List_1_t17C155552241AA0821355593722C226972660B0A* L_1 = ((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___listeners_1;
		RuntimeObject* L_2 = ___0_configListener;
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Remove_m4F9BA1D2B92C0A77CE7C715A4DE50635B69FF5D9(L_1, L_2, List_1_Remove_m4F9BA1D2B92C0A77CE7C715A4DE50635B69FF5D9_RuntimeMethod_var);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.String FlurrySDK.Flurry/Config::GetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Config_GetString_mD1CB83FCCCF176C76C44878ABC7DAD4A286D72A8 (String_t* ___0_key, String_t* ___1_defaultValue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (config != null)
		il2cpp_codegen_runtime_class_init_inline(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		AgentConfig_t8E52A1EE4F2983B3DBDFF13730B81AE1937B3AD3* L_0 = ((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___config_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return config.GetString(key, defaultValue);
		il2cpp_codegen_runtime_class_init_inline(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		AgentConfig_t8E52A1EE4F2983B3DBDFF13730B81AE1937B3AD3* L_1 = ((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___config_0;
		String_t* L_2 = ___0_key;
		String_t* L_3 = ___1_defaultValue;
		NullCheck(L_1);
		String_t* L_4;
		L_4 = VirtualFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(7 /* System.String FlurrySDKInternal.FlurryAgent/AgentConfig::GetString(System.String,System.String) */, L_1, L_2, L_3);
		return L_4;
	}

IL_0014:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Void FlurrySDK.Flurry/Config::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Config__ctor_mBDA6501914D5B2F4CC343F8EE1E49A6FF46E2FD4 (Config_tDB5FB2C33837063A652D901F67A15B22E1B17145* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void FlurrySDK.Flurry/Config/MainConfigListener::OnFetchSuccess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainConfigListener_OnFetchSuccess_m4C7BE3B29C5254B4E48EA05226F4855E048902E0 (MainConfigListener_t38865B5DF668E6154EF6FF651824119816DC21F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2C19A1BE525359503FFC71D324720E1DDF3A50C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE5B4B77EEC0C76752B32CEF97458982051D58B0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m71BFCCA8B902A86FB706AE46D61EF3917A8AACFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m69544C49D03BF7FFDDEA6C9EF76FC06C345B42F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t0CC5D0D22F8AB3BB0DDEDE7BE8F62C5DAB4E2B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var listener in listeners)
		il2cpp_codegen_runtime_class_init_inline(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		List_1_t17C155552241AA0821355593722C226972660B0A* L_0 = ((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___listeners_1;
		NullCheck(L_0);
		Enumerator_t0CC5D0D22F8AB3BB0DDEDE7BE8F62C5DAB4E2B4D L_1;
		L_1 = List_1_GetEnumerator_m69544C49D03BF7FFDDEA6C9EF76FC06C345B42F8(L_0, List_1_GetEnumerator_m69544C49D03BF7FFDDEA6C9EF76FC06C345B42F8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m2C19A1BE525359503FFC71D324720E1DDF3A50C1((&V_0), Enumerator_Dispose_m2C19A1BE525359503FFC71D324720E1DDF3A50C1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0019_1;
			}

IL_000d_1:
			{
				// foreach (var listener in listeners)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m71BFCCA8B902A86FB706AE46D61EF3917A8AACFD_inline((&V_0), Enumerator_get_Current_m71BFCCA8B902A86FB706AE46D61EF3917A8AACFD_RuntimeMethod_var);
				// listener.OnFetchSuccess();
				NullCheck(L_2);
				InterfaceActionInvoker0::Invoke(0 /* System.Void FlurrySDK.Flurry/IConfigListener::OnFetchSuccess() */, IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8_il2cpp_TypeInfo_var, L_2);
			}

IL_0019_1:
			{
				// foreach (var listener in listeners)
				bool L_3;
				L_3 = Enumerator_MoveNext_mE5B4B77EEC0C76752B32CEF97458982051D58B0C((&V_0), Enumerator_MoveNext_mE5B4B77EEC0C76752B32CEF97458982051D58B0C_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0032;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/Config/MainConfigListener::OnFetchNoChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainConfigListener_OnFetchNoChange_m4A880586E4BB6407B85E16FC593E4A9EA725D7D8 (MainConfigListener_t38865B5DF668E6154EF6FF651824119816DC21F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2C19A1BE525359503FFC71D324720E1DDF3A50C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE5B4B77EEC0C76752B32CEF97458982051D58B0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m71BFCCA8B902A86FB706AE46D61EF3917A8AACFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m69544C49D03BF7FFDDEA6C9EF76FC06C345B42F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t0CC5D0D22F8AB3BB0DDEDE7BE8F62C5DAB4E2B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var listener in listeners)
		il2cpp_codegen_runtime_class_init_inline(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		List_1_t17C155552241AA0821355593722C226972660B0A* L_0 = ((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___listeners_1;
		NullCheck(L_0);
		Enumerator_t0CC5D0D22F8AB3BB0DDEDE7BE8F62C5DAB4E2B4D L_1;
		L_1 = List_1_GetEnumerator_m69544C49D03BF7FFDDEA6C9EF76FC06C345B42F8(L_0, List_1_GetEnumerator_m69544C49D03BF7FFDDEA6C9EF76FC06C345B42F8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m2C19A1BE525359503FFC71D324720E1DDF3A50C1((&V_0), Enumerator_Dispose_m2C19A1BE525359503FFC71D324720E1DDF3A50C1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0019_1;
			}

IL_000d_1:
			{
				// foreach (var listener in listeners)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m71BFCCA8B902A86FB706AE46D61EF3917A8AACFD_inline((&V_0), Enumerator_get_Current_m71BFCCA8B902A86FB706AE46D61EF3917A8AACFD_RuntimeMethod_var);
				// listener.OnFetchNoChange();
				NullCheck(L_2);
				InterfaceActionInvoker0::Invoke(1 /* System.Void FlurrySDK.Flurry/IConfigListener::OnFetchNoChange() */, IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8_il2cpp_TypeInfo_var, L_2);
			}

IL_0019_1:
			{
				// foreach (var listener in listeners)
				bool L_3;
				L_3 = Enumerator_MoveNext_mE5B4B77EEC0C76752B32CEF97458982051D58B0C((&V_0), Enumerator_MoveNext_mE5B4B77EEC0C76752B32CEF97458982051D58B0C_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0032;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/Config/MainConfigListener::OnFetchError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainConfigListener_OnFetchError_mE9D4FF7E1D4FA70CB9C273D9A5FA32C7425D632C (MainConfigListener_t38865B5DF668E6154EF6FF651824119816DC21F8* __this, bool ___0_isRetrying, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2C19A1BE525359503FFC71D324720E1DDF3A50C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE5B4B77EEC0C76752B32CEF97458982051D58B0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m71BFCCA8B902A86FB706AE46D61EF3917A8AACFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m69544C49D03BF7FFDDEA6C9EF76FC06C345B42F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t0CC5D0D22F8AB3BB0DDEDE7BE8F62C5DAB4E2B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var listener in listeners)
		il2cpp_codegen_runtime_class_init_inline(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		List_1_t17C155552241AA0821355593722C226972660B0A* L_0 = ((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___listeners_1;
		NullCheck(L_0);
		Enumerator_t0CC5D0D22F8AB3BB0DDEDE7BE8F62C5DAB4E2B4D L_1;
		L_1 = List_1_GetEnumerator_m69544C49D03BF7FFDDEA6C9EF76FC06C345B42F8(L_0, List_1_GetEnumerator_m69544C49D03BF7FFDDEA6C9EF76FC06C345B42F8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m2C19A1BE525359503FFC71D324720E1DDF3A50C1((&V_0), Enumerator_Dispose_m2C19A1BE525359503FFC71D324720E1DDF3A50C1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000d_1:
			{
				// foreach (var listener in listeners)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m71BFCCA8B902A86FB706AE46D61EF3917A8AACFD_inline((&V_0), Enumerator_get_Current_m71BFCCA8B902A86FB706AE46D61EF3917A8AACFD_RuntimeMethod_var);
				// listener.OnFetchError(isRetrying);
				bool L_3 = ___0_isRetrying;
				NullCheck(L_2);
				InterfaceActionInvoker1< bool >::Invoke(2 /* System.Void FlurrySDK.Flurry/IConfigListener::OnFetchError(System.Boolean) */, IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8_il2cpp_TypeInfo_var, L_2, L_3);
			}

IL_001a_1:
			{
				// foreach (var listener in listeners)
				bool L_4;
				L_4 = Enumerator_MoveNext_mE5B4B77EEC0C76752B32CEF97458982051D58B0C((&V_0), Enumerator_MoveNext_mE5B4B77EEC0C76752B32CEF97458982051D58B0C_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/Config/MainConfigListener::OnActivateComplete(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainConfigListener_OnActivateComplete_mDC9C6C700E50B7252A3B9E14F48D2114B53F74B9 (MainConfigListener_t38865B5DF668E6154EF6FF651824119816DC21F8* __this, bool ___0_isCache, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2C19A1BE525359503FFC71D324720E1DDF3A50C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE5B4B77EEC0C76752B32CEF97458982051D58B0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m71BFCCA8B902A86FB706AE46D61EF3917A8AACFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m69544C49D03BF7FFDDEA6C9EF76FC06C345B42F8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t0CC5D0D22F8AB3BB0DDEDE7BE8F62C5DAB4E2B4D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var listener in listeners)
		il2cpp_codegen_runtime_class_init_inline(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var);
		List_1_t17C155552241AA0821355593722C226972660B0A* L_0 = ((Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_StaticFields*)il2cpp_codegen_static_fields_for(Config_tDB5FB2C33837063A652D901F67A15B22E1B17145_il2cpp_TypeInfo_var))->___listeners_1;
		NullCheck(L_0);
		Enumerator_t0CC5D0D22F8AB3BB0DDEDE7BE8F62C5DAB4E2B4D L_1;
		L_1 = List_1_GetEnumerator_m69544C49D03BF7FFDDEA6C9EF76FC06C345B42F8(L_0, List_1_GetEnumerator_m69544C49D03BF7FFDDEA6C9EF76FC06C345B42F8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m2C19A1BE525359503FFC71D324720E1DDF3A50C1((&V_0), Enumerator_Dispose_m2C19A1BE525359503FFC71D324720E1DDF3A50C1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000d_1:
			{
				// foreach (var listener in listeners)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m71BFCCA8B902A86FB706AE46D61EF3917A8AACFD_inline((&V_0), Enumerator_get_Current_m71BFCCA8B902A86FB706AE46D61EF3917A8AACFD_RuntimeMethod_var);
				// listener.OnActivateComplete(isCache);
				bool L_3 = ___0_isCache;
				NullCheck(L_2);
				InterfaceActionInvoker1< bool >::Invoke(3 /* System.Void FlurrySDK.Flurry/IConfigListener::OnActivateComplete(System.Boolean) */, IConfigListener_t9C24E43F46D253C3032BE59465DE49C44F7DECE8_il2cpp_TypeInfo_var, L_2, L_3);
			}

IL_001a_1:
			{
				// foreach (var listener in listeners)
				bool L_4;
				L_4 = Enumerator_MoveNext_mE5B4B77EEC0C76752B32CEF97458982051D58B0C((&V_0), Enumerator_MoveNext_mE5B4B77EEC0C76752B32CEF97458982051D58B0C_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/Config/MainConfigListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainConfigListener__ctor_m5F50B031E124AC19E95FFC3F3CDEDF6A7EB83DCF (MainConfigListener_t38865B5DF668E6154EF6FF651824119816DC21F8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void FlurrySDK.Flurry/FlurryMessage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FlurryMessage__ctor_mB2DA0B81D4F627360B4A410C8A79D1CA3EE5AAE7 (FlurryMessage_t2040FE8D99B5F3445574E636813BBEB8203CE7C7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void FlurrySDK.Flurry/PublisherSegmentation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublisherSegmentation__cctor_m80E6D6668A53B891511B8A271584CD9DB4754A94 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5469C2C6316BC912F55491A825FBE063612253EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<IPublisherSegmentationListener> listeners = new List<IPublisherSegmentationListener>();
		List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9* L_0 = (List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9*)il2cpp_codegen_object_new(List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m5469C2C6316BC912F55491A825FBE063612253EF(L_0, List_1__ctor_m5469C2C6316BC912F55491A825FBE063612253EF_RuntimeMethod_var);
		((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___listeners_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___listeners_1), (void*)L_0);
		// private static IPublisherSegmentationListener mainListener = null;
		((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___mainListener_2 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___mainListener_2), (void*)(RuntimeObject*)NULL);
		// if (Application.platform == RuntimePlatform.Android)
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0023;
		}
	}
	{
		// publisherSegmentation = new FlurryAgentAndroid.AgentPublisherSegmentationAndroid();
		AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76* L_2 = (AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76*)il2cpp_codegen_object_new(AgentPublisherSegmentationAndroid_t3D0A63C052A2553BFA16A0CC9417FBB059BD8B76_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AgentPublisherSegmentationAndroid__ctor_m8D9B53238946497E82A35239EE4667E7840FFD45(L_2, NULL);
		((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___publisherSegmentation_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___publisherSegmentation_0), (void*)L_2);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/PublisherSegmentation::Fetch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublisherSegmentation_Fetch_m242B0839E400E478F2237874A89300EDD0019E79 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (publisherSegmentation != null)
		il2cpp_codegen_runtime_class_init_inline(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var);
		AgentPublisherSegmentation_t3667AE97AF070A56CA2EB1F61AFDCFD30B320085* L_0 = ((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___publisherSegmentation_0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		// publisherSegmentation.Fetch();
		il2cpp_codegen_runtime_class_init_inline(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var);
		AgentPublisherSegmentation_t3667AE97AF070A56CA2EB1F61AFDCFD30B320085* L_1 = ((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___publisherSegmentation_0;
		NullCheck(L_1);
		VirtualActionInvoker0::Invoke(4 /* System.Void FlurrySDKInternal.FlurryAgent/AgentPublisherSegmentation::Fetch() */, L_1);
	}

IL_0011:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/PublisherSegmentation::RegisterListener(FlurrySDK.Flurry/IPublisherSegmentationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublisherSegmentation_RegisterListener_mCED04EA9BC1E28B9B159E5FEB45AD8829A86418F (RuntimeObject* ___0_publisherSegmentationListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m26778592A76D135BFFC1DEA85D910ECED0D2F00E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainPublisherSegmentationListener_tD0C2942451DEDD275051F1D68EF7D8C6990C5476_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (publisherSegmentation != null)
		il2cpp_codegen_runtime_class_init_inline(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var);
		AgentPublisherSegmentation_t3667AE97AF070A56CA2EB1F61AFDCFD30B320085* L_0 = ((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___publisherSegmentation_0;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		// listeners.Add(publisherSegmentationListener);
		il2cpp_codegen_runtime_class_init_inline(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var);
		List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9* L_1 = ((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___listeners_1;
		RuntimeObject* L_2 = ___0_publisherSegmentationListener;
		NullCheck(L_1);
		List_1_Add_m26778592A76D135BFFC1DEA85D910ECED0D2F00E_inline(L_1, L_2, List_1_Add_m26778592A76D135BFFC1DEA85D910ECED0D2F00E_RuntimeMethod_var);
		// if (mainListener == null)
		RuntimeObject* L_3 = ((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___mainListener_2;
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		// mainListener = new MainPublisherSegmentationListener();
		MainPublisherSegmentationListener_tD0C2942451DEDD275051F1D68EF7D8C6990C5476* L_4 = (MainPublisherSegmentationListener_tD0C2942451DEDD275051F1D68EF7D8C6990C5476*)il2cpp_codegen_object_new(MainPublisherSegmentationListener_tD0C2942451DEDD275051F1D68EF7D8C6990C5476_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		MainPublisherSegmentationListener__ctor_mCD1010690BB6C2D023E8F707E7896E74D94174F6(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var);
		((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___mainListener_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___mainListener_2), (void*)L_4);
		// publisherSegmentation.SetListener(mainListener);
		AgentPublisherSegmentation_t3667AE97AF070A56CA2EB1F61AFDCFD30B320085* L_5 = ((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___publisherSegmentation_0;
		RuntimeObject* L_6 = ((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___mainListener_2;
		NullCheck(L_5);
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void FlurrySDKInternal.FlurryAgent/AgentPublisherSegmentation::SetListener(FlurrySDK.Flurry/IPublisherSegmentationListener) */, L_5, L_6);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/PublisherSegmentation::UnregisterListener(FlurrySDK.Flurry/IPublisherSegmentationListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublisherSegmentation_UnregisterListener_m8FA63884DC25A56B258ADC09713A6BF667E1A1B5 (RuntimeObject* ___0_publisherSegmentationListener, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m0D23AFA19C392F07456983776CEBE4551C8BA9E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (publisherSegmentation != null)
		il2cpp_codegen_runtime_class_init_inline(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var);
		AgentPublisherSegmentation_t3667AE97AF070A56CA2EB1F61AFDCFD30B320085* L_0 = ((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___publisherSegmentation_0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		// listeners.Remove(publisherSegmentationListener);
		il2cpp_codegen_runtime_class_init_inline(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var);
		List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9* L_1 = ((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___listeners_1;
		RuntimeObject* L_2 = ___0_publisherSegmentationListener;
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Remove_m0D23AFA19C392F07456983776CEBE4551C8BA9E0(L_1, L_2, List_1_Remove_m0D23AFA19C392F07456983776CEBE4551C8BA9E0_RuntimeMethod_var);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> FlurrySDK.Flurry/PublisherSegmentation::GetData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PublisherSegmentation_GetData_m8BED9B7B16BC9EBFB09EC33525C03513AA9F3F9B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (publisherSegmentation != null)
		il2cpp_codegen_runtime_class_init_inline(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var);
		AgentPublisherSegmentation_t3667AE97AF070A56CA2EB1F61AFDCFD30B320085* L_0 = ((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___publisherSegmentation_0;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// return publisherSegmentation.GetData();
		il2cpp_codegen_runtime_class_init_inline(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var);
		AgentPublisherSegmentation_t3667AE97AF070A56CA2EB1F61AFDCFD30B320085* L_1 = ((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___publisherSegmentation_0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Collections.Generic.IDictionary`2<System.String,System.String> FlurrySDKInternal.FlurryAgent/AgentPublisherSegmentation::GetData() */, L_1);
		return L_2;
	}

IL_0012:
	{
		// return null;
		return (RuntimeObject*)NULL;
	}
}
// System.Void FlurrySDK.Flurry/PublisherSegmentation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PublisherSegmentation__ctor_mD6C20C484A2B8780356B89BC4EE783F7AAF46912 (PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void FlurrySDK.Flurry/PublisherSegmentation/MainPublisherSegmentationListener::OnFetched(System.Collections.Generic.IDictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainPublisherSegmentationListener_OnFetched_m149ABD6706B008A3D5883CE69DF6D7F7A1EA4BA8 (MainPublisherSegmentationListener_tD0C2942451DEDD275051F1D68EF7D8C6990C5476* __this, RuntimeObject* ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD7DA48E9557E28D0D399776D7D397AFE0C7D9DD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5F1984D641D2C09B90121F91C64289A2AC45DA73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB7A04D89EBF2A84F708FA67E94B7B7BB22A997F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPublisherSegmentationListener_tFBF447F92D5935BCA96400B9CE8FD8C33633A98E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFFFEFD2B27D36303D2A22D468AB6C44BED09F60C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8E4C302A6D89EB9234CD89C48366A77CB46178DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var listener in listeners)
		il2cpp_codegen_runtime_class_init_inline(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var);
		List_1_tB383AAAE1F5EFACD30EE63D5ADCCDFE461376AC9* L_0 = ((PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_StaticFields*)il2cpp_codegen_static_fields_for(PublisherSegmentation_t7F2D56B17202179EBF953DF44EC1B4BF299486BC_il2cpp_TypeInfo_var))->___listeners_1;
		NullCheck(L_0);
		Enumerator_t8E4C302A6D89EB9234CD89C48366A77CB46178DC L_1;
		L_1 = List_1_GetEnumerator_mFFFEFD2B27D36303D2A22D468AB6C44BED09F60C(L_0, List_1_GetEnumerator_mFFFEFD2B27D36303D2A22D468AB6C44BED09F60C_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD7DA48E9557E28D0D399776D7D397AFE0C7D9DD0((&V_0), Enumerator_Dispose_mD7DA48E9557E28D0D399776D7D397AFE0C7D9DD0_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000d_1:
			{
				// foreach (var listener in listeners)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_mB7A04D89EBF2A84F708FA67E94B7B7BB22A997F9_inline((&V_0), Enumerator_get_Current_mB7A04D89EBF2A84F708FA67E94B7B7BB22A997F9_RuntimeMethod_var);
				// listener.OnFetched(data);
				RuntimeObject* L_3 = ___0_data;
				NullCheck(L_2);
				InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void FlurrySDK.Flurry/IPublisherSegmentationListener::OnFetched(System.Collections.Generic.IDictionary`2<System.String,System.String>) */, IPublisherSegmentationListener_tFBF447F92D5935BCA96400B9CE8FD8C33633A98E_il2cpp_TypeInfo_var, L_2, L_3);
			}

IL_001a_1:
			{
				// foreach (var listener in listeners)
				bool L_4;
				L_4 = Enumerator_MoveNext_m5F1984D641D2C09B90121F91C64289A2AC45DA73((&V_0), Enumerator_MoveNext_m5F1984D641D2C09B90121F91C64289A2AC45DA73_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000d_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/PublisherSegmentation/MainPublisherSegmentationListener::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainPublisherSegmentationListener__ctor_mCD1010690BB6C2D023E8F707E7896E74D94174F6 (MainPublisherSegmentationListener_tD0C2942451DEDD275051F1D68EF7D8C6990C5476* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void FlurrySDK.Flurry/EventParam::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventParam__cctor_m81D74A63433CE9EE8035068A8F47A9E8C456DCC7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleEventParam_t4EC0DD25A28797A0C1EB2BDE628986D81FB6A0BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0126BC54356EB01FBADD66A7B23DCF6FDA5CCACB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01BC4B9A4D55E4ABE2708382D4391E686549151B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0264E527DCAF2F89AC8692C399BCC3B077561077);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral060F193B9B4287755BE2A048F032C98486A483FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0984607CD7AD602C7143E0DE8B5468D1906846E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C2B8A3124B22F7573CBE6751858FF3F77732DD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral151C60B2D2F42BA65B725B1777B21A0566870C28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21011F237E149EB854F6389B6636EC03865C214D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2182DA7C9C7C8EB8B2F3D7A5B5906BEDF68D1E97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral292979B322D4F30E34EC6F38639F553034F5B9DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CA7194E941C41DB97F42C03C1C3EA009D79B062);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33B5C450EB417BA71A499E6DEE554F4BEC75C661);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36DAFE4855CBD149196DF6694C61BA59A63FABDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral462C3BAFE48903B373CEB23A3CE5323DA91F3BFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B6CB173055124B7574B1621E896797663183384);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral541694BD8D4B3F31728DFE436E4E3FE2069F40CF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54BBBDA80825EBD242DE0E8A344DF0B5AC5F8C6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral579F9723DCBAD71B47704CC25DCB26792F58BECB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59ACBE5FD752177C2084B4B66504B74FBFB97414);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D986347CFF185B8FDC9E0ACD9FD11E9434B958A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral602BBEE3EC1157ED64DCF5776D1713762F611557);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BC8F664D93B8D2B0AA276FB42661A5A0404BF7E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72565F703F5A31C68207C7B19981BB51E899E172);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77CC9E0713571C864D403B53617A5E64EB76C10F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral780088735D08F01D63A81A5B157E00A8C6D5285C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A50C112711BC9B5269825E39FC18D5C988C2D96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BAA1D7FB455C8BA555F5E84BA632E98376D6ED4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C815CC429FDC6D7295853D40A6BD88EA8E7F028);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92A6A929F44F745B80C1D67BCD060B798BB2F699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BF0685EEEAC77FB07398D71F3C9DE3B43912A36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA23BBB48965397305008B2C46822E0ACE83B4854);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0394C50BA118FAF2E3D4923BD2DBD6822D09F7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB445CB96D9EAAB52D5C2DA391138E988E6C4FF33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD69126B1E29CEDDB426B9A2EBFC9D4F63297CDF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF1CD80295C68DCFB1F7BC8A7E9D1A7AB7B61DBC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8177157EF573EDC3FB114EC4B6FEB9F30340CA9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC84958B838A68AAE091DBDD39F28D9E40FD11DF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3DC9995E8A5C3BFDEC4136FB46E7078EE1D4CC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3464334C8943D46CA4C6661EDCB0B47E40D0513);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE412163BA632B0664C8040070F58730FD95754E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5DCFE277D05FCCB85F7BE0177DC2AC8D2A92A3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBAA30FD18A3FE30DE5646A539878DCE426754D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF075908137BD2195C31AE794C2C878EB5C26C71F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static StringEventParam AD_TYPE = new StringEventParam("AD_TYPE");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_0 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_0, _stringLiteral77CC9E0713571C864D403B53617A5E64EB76C10F, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___AD_TYPE_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___AD_TYPE_0), (void*)L_0);
		// public static StringEventParam LEVEL_NAME = new StringEventParam("LEVEL_NAME");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_1 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_1, _stringLiteralA23BBB48965397305008B2C46822E0ACE83B4854, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___LEVEL_NAME_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___LEVEL_NAME_1), (void*)L_1);
		// public static IntegerEventParam LEVEL_NUMBER = new IntegerEventParam("LEVEL_NUMBER");
		IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* L_2 = (IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0*)il2cpp_codegen_object_new(IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		IntegerEventParam__ctor_m410B3C941CDF9C7ECFB01F96E02CF47B9FBF8024(L_2, _stringLiteral0C2B8A3124B22F7573CBE6751858FF3F77732DD9, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___LEVEL_NUMBER_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___LEVEL_NUMBER_2), (void*)L_2);
		// public static StringEventParam CONTENT_NAME = new StringEventParam("CONTENT_NAME");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_3 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_3, _stringLiteral292979B322D4F30E34EC6F38639F553034F5B9DF, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___CONTENT_NAME_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___CONTENT_NAME_3), (void*)L_3);
		// public static StringEventParam CONTENT_TYPE = new StringEventParam("CONTENT_TYPE");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_4 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_4, _stringLiteral602BBEE3EC1157ED64DCF5776D1713762F611557, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___CONTENT_TYPE_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___CONTENT_TYPE_4), (void*)L_4);
		// public static StringEventParam CONTENT_ID = new StringEventParam("CONTENT_ID");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_5 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_5, _stringLiteral8C815CC429FDC6D7295853D40A6BD88EA8E7F028, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___CONTENT_ID_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___CONTENT_ID_5), (void*)L_5);
		// public static StringEventParam CREDIT_NAME = new StringEventParam("CREDIT_NAME");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_6 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_6, _stringLiteral7BAA1D7FB455C8BA555F5E84BA632E98376D6ED4, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___CREDIT_NAME_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___CREDIT_NAME_6), (void*)L_6);
		// public static StringEventParam CREDIT_TYPE = new StringEventParam("CREDIT_TYPE");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_7 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_7, _stringLiteralB0394C50BA118FAF2E3D4923BD2DBD6822D09F7F, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___CREDIT_TYPE_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___CREDIT_TYPE_7), (void*)L_7);
		// public static StringEventParam CREDIT_ID = new StringEventParam("CREDIT_ID");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_8 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_8, _stringLiteral7A50C112711BC9B5269825E39FC18D5C988C2D96, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___CREDIT_ID_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___CREDIT_ID_8), (void*)L_8);
		// public static BooleanEventParam IS_CURRENCY_SOFT = new BooleanEventParam("IS_CURRENCY_SOFT");
		BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8* L_9 = (BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8*)il2cpp_codegen_object_new(BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		BooleanEventParam__ctor_mEA5E9D4309DE18346DD25547E64F4AF57D142C28(L_9, _stringLiteralC84958B838A68AAE091DBDD39F28D9E40FD11DF7, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___IS_CURRENCY_SOFT_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___IS_CURRENCY_SOFT_9), (void*)L_9);
		// public static StringEventParam CURRENCY_TYPE = new StringEventParam("CURRENCY_TYPE");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_10 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_10, _stringLiteral462C3BAFE48903B373CEB23A3CE5323DA91F3BFE, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___CURRENCY_TYPE_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___CURRENCY_TYPE_10), (void*)L_10);
		// public static StringEventParam PAYMENT_TYPE = new StringEventParam("PAYMENT_TYPE");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_11 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_11, _stringLiteralE3464334C8943D46CA4C6661EDCB0B47E40D0513, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___PAYMENT_TYPE_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___PAYMENT_TYPE_11), (void*)L_11);
		// public static StringEventParam ITEM_NAME = new StringEventParam("ITEM_NAME");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_12 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_12, _stringLiteralEBAA30FD18A3FE30DE5646A539878DCE426754D5, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___ITEM_NAME_12 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___ITEM_NAME_12), (void*)L_12);
		// public static StringEventParam ITEM_TYPE = new StringEventParam("ITEM_TYPE");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_13 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_13, _stringLiteralBF1CD80295C68DCFB1F7BC8A7E9D1A7AB7B61DBC, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___ITEM_TYPE_13 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___ITEM_TYPE_13), (void*)L_13);
		// public static StringEventParam ITEM_ID = new StringEventParam("ITEM_ID");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_14 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_14, _stringLiteralE5DCFE277D05FCCB85F7BE0177DC2AC8D2A92A3E, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___ITEM_ID_14 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___ITEM_ID_14), (void*)L_14);
		// public static IntegerEventParam ITEM_COUNT = new IntegerEventParam("ITEM_COUNT");
		IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* L_15 = (IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0*)il2cpp_codegen_object_new(IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		IntegerEventParam__ctor_m410B3C941CDF9C7ECFB01F96E02CF47B9FBF8024(L_15, _stringLiteral0984607CD7AD602C7143E0DE8B5468D1906846E4, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___ITEM_COUNT_15 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___ITEM_COUNT_15), (void*)L_15);
		// public static StringEventParam ITEM_CATEGORY = new StringEventParam("ITEM_CATEGORY");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_16 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_16, _stringLiteral21011F237E149EB854F6389B6636EC03865C214D, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___ITEM_CATEGORY_16 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___ITEM_CATEGORY_16), (void*)L_16);
		// public static StringEventParam ITEM_LIST_TYPE = new StringEventParam("ITEM_LIST_TYPE");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_17 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_17, _stringLiteralD3DC9995E8A5C3BFDEC4136FB46E7078EE1D4CC4, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___ITEM_LIST_TYPE_17 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___ITEM_LIST_TYPE_17), (void*)L_17);
		// public static DoubleEventParam PRICE = new DoubleEventParam("PRICE");
		DoubleEventParam_t4EC0DD25A28797A0C1EB2BDE628986D81FB6A0BE* L_18 = (DoubleEventParam_t4EC0DD25A28797A0C1EB2BDE628986D81FB6A0BE*)il2cpp_codegen_object_new(DoubleEventParam_t4EC0DD25A28797A0C1EB2BDE628986D81FB6A0BE_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		DoubleEventParam__ctor_m176A6819BF4B1126D2F8C3B5CE53D1D767F81115(L_18, _stringLiteral6BC8F664D93B8D2B0AA276FB42661A5A0404BF7E, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___PRICE_18 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___PRICE_18), (void*)L_18);
		// public static DoubleEventParam TOTAL_AMOUNT = new DoubleEventParam("TOTAL_AMOUNT");
		DoubleEventParam_t4EC0DD25A28797A0C1EB2BDE628986D81FB6A0BE* L_19 = (DoubleEventParam_t4EC0DD25A28797A0C1EB2BDE628986D81FB6A0BE*)il2cpp_codegen_object_new(DoubleEventParam_t4EC0DD25A28797A0C1EB2BDE628986D81FB6A0BE_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		DoubleEventParam__ctor_m176A6819BF4B1126D2F8C3B5CE53D1D767F81115(L_19, _stringLiteral060F193B9B4287755BE2A048F032C98486A483FA, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___TOTAL_AMOUNT_19 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___TOTAL_AMOUNT_19), (void*)L_19);
		// public static StringEventParam ACHIEVEMENT_ID = new StringEventParam("ACHIEVEMENT_ID");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_20 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_20, _stringLiteral01BC4B9A4D55E4ABE2708382D4391E686549151B, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___ACHIEVEMENT_ID_20 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___ACHIEVEMENT_ID_20), (void*)L_20);
		// public static IntegerEventParam SCORE = new IntegerEventParam("SCORE");
		IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* L_21 = (IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0*)il2cpp_codegen_object_new(IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		IntegerEventParam__ctor_m410B3C941CDF9C7ECFB01F96E02CF47B9FBF8024(L_21, _stringLiteral780088735D08F01D63A81A5B157E00A8C6D5285C, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___SCORE_21 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___SCORE_21), (void*)L_21);
		// public static StringEventParam RATING = new StringEventParam("RATING");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_22 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_22, _stringLiteral4B6CB173055124B7574B1621E896797663183384, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___RATING_22 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___RATING_22), (void*)L_22);
		// public static StringEventParam TRANSACTION_ID = new StringEventParam("TRANSACTION_ID");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_23 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_23, _stringLiteral2CA7194E941C41DB97F42C03C1C3EA009D79B062, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___TRANSACTION_ID_23 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___TRANSACTION_ID_23), (void*)L_23);
		// public static BooleanEventParam SUCCESS = new BooleanEventParam("SUCCESS");
		BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8* L_24 = (BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8*)il2cpp_codegen_object_new(BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		BooleanEventParam__ctor_mEA5E9D4309DE18346DD25547E64F4AF57D142C28(L_24, _stringLiteral59ACBE5FD752177C2084B4B66504B74FBFB97414, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___SUCCESS_24 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___SUCCESS_24), (void*)L_24);
		// public static BooleanEventParam IS_ANNUAL_SUBSCRIPTION = new BooleanEventParam("IS_ANNUAL_SUBSCRIPTION");
		BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8* L_25 = (BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8*)il2cpp_codegen_object_new(BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		BooleanEventParam__ctor_mEA5E9D4309DE18346DD25547E64F4AF57D142C28(L_25, _stringLiteralF075908137BD2195C31AE794C2C878EB5C26C71F, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___IS_ANNUAL_SUBSCRIPTION_25 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___IS_ANNUAL_SUBSCRIPTION_25), (void*)L_25);
		// public static StringEventParam SUBSCRIPTION_COUNTRY = new StringEventParam("SUBSCRIPTION_COUNTRY");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_26 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_26, _stringLiteral72565F703F5A31C68207C7B19981BB51E899E172, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___SUBSCRIPTION_COUNTRY_26 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___SUBSCRIPTION_COUNTRY_26), (void*)L_26);
		// public static IntegerEventParam TRIAL_DAYS = new IntegerEventParam("TRIAL_DAYS");
		IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* L_27 = (IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0*)il2cpp_codegen_object_new(IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		IntegerEventParam__ctor_m410B3C941CDF9C7ECFB01F96E02CF47B9FBF8024(L_27, _stringLiteral36DAFE4855CBD149196DF6694C61BA59A63FABDD, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___TRIAL_DAYS_27 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___TRIAL_DAYS_27), (void*)L_27);
		// public static StringEventParam PREDICTED_LTV = new StringEventParam("PREDICTED_LTV");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_28 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_28, _stringLiteralC8177157EF573EDC3FB114EC4B6FEB9F30340CA9, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___PREDICTED_LTV_28 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___PREDICTED_LTV_28), (void*)L_28);
		// public static StringEventParam GROUP_NAME = new StringEventParam("GROUP_NAME");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_29 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_29, _stringLiteral0126BC54356EB01FBADD66A7B23DCF6FDA5CCACB, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___GROUP_NAME_29 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___GROUP_NAME_29), (void*)L_29);
		// public static StringEventParam TUTORIAL_NAME = new StringEventParam("TUTORIAL_NAME");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_30 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_30, _stringLiteral5D986347CFF185B8FDC9E0ACD9FD11E9434B958A, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___TUTORIAL_NAME_30 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___TUTORIAL_NAME_30), (void*)L_30);
		// public static IntegerEventParam STEP_NUMBER = new IntegerEventParam("STEP_NUMBER");
		IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* L_31 = (IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0*)il2cpp_codegen_object_new(IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		IntegerEventParam__ctor_m410B3C941CDF9C7ECFB01F96E02CF47B9FBF8024(L_31, _stringLiteral9BF0685EEEAC77FB07398D71F3C9DE3B43912A36, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___STEP_NUMBER_31 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___STEP_NUMBER_31), (void*)L_31);
		// public static StringEventParam USER_ID = new StringEventParam("USER_ID");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_32 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_32, _stringLiteralBD69126B1E29CEDDB426B9A2EBFC9D4F63297CDF, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___USER_ID_32 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___USER_ID_32), (void*)L_32);
		// public static StringEventParam METHOD = new StringEventParam("METHOD");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_33 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_33, _stringLiteral92A6A929F44F745B80C1D67BCD060B798BB2F699, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___METHOD_33 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___METHOD_33), (void*)L_33);
		// public static StringEventParam QUERY = new StringEventParam("QUERY");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_34 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_34, _stringLiteralE412163BA632B0664C8040070F58730FD95754E3, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___QUERY_34 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___QUERY_34), (void*)L_34);
		// public static StringEventParam SEARCH_TYPE = new StringEventParam("SEARCH_TYPE");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_35 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_35, _stringLiteral541694BD8D4B3F31728DFE436E4E3FE2069F40CF, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___SEARCH_TYPE_35 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___SEARCH_TYPE_35), (void*)L_35);
		// public static StringEventParam SOCIAL_CONTENT_NAME = new StringEventParam("SOCIAL_CONTENT_NAME");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_36 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_36, _stringLiteral151C60B2D2F42BA65B725B1777B21A0566870C28, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___SOCIAL_CONTENT_NAME_36 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___SOCIAL_CONTENT_NAME_36), (void*)L_36);
		// public static StringEventParam SOCIAL_CONTENT_ID = new StringEventParam("SOCIAL_CONTENT_ID");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_37 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_37, _stringLiteralB445CB96D9EAAB52D5C2DA391138E988E6C4FF33, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___SOCIAL_CONTENT_ID_37 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___SOCIAL_CONTENT_ID_37), (void*)L_37);
		// public static StringEventParam LIKE_TYPE = new StringEventParam("LIKE_TYPE");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_38 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_38, _stringLiteral33B5C450EB417BA71A499E6DEE554F4BEC75C661, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___LIKE_TYPE_38 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___LIKE_TYPE_38), (void*)L_38);
		// public static StringEventParam MEDIA_NAME = new StringEventParam("MEDIA_NAME");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_39 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_39, _stringLiteral2182DA7C9C7C8EB8B2F3D7A5B5906BEDF68D1E97, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___MEDIA_NAME_39 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___MEDIA_NAME_39), (void*)L_39);
		// public static StringEventParam MEDIA_TYPE = new StringEventParam("MEDIA_TYPE");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_40 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_40, _stringLiteral0264E527DCAF2F89AC8692C399BCC3B077561077, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___MEDIA_TYPE_40 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___MEDIA_TYPE_40), (void*)L_40);
		// public static StringEventParam MEDIA_ID = new StringEventParam("MEDIA_ID");
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_41 = (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477*)il2cpp_codegen_object_new(StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A(L_41, _stringLiteral54BBBDA80825EBD242DE0E8A344DF0B5AC5F8C6D, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___MEDIA_ID_41 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___MEDIA_ID_41), (void*)L_41);
		// public static IntegerEventParam DURATION = new IntegerEventParam("DURATION");
		IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* L_42 = (IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0*)il2cpp_codegen_object_new(IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		IntegerEventParam__ctor_m410B3C941CDF9C7ECFB01F96E02CF47B9FBF8024(L_42, _stringLiteral579F9723DCBAD71B47704CC25DCB26792F58BECB, NULL);
		((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___DURATION_42 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&((EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_StaticFields*)il2cpp_codegen_static_fields_for(EventParam_t3FE831C80E23F882196BE57C33C8FEDD6FCD3FD3_il2cpp_TypeInfo_var))->___DURATION_42), (void*)L_42);
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
// System.Void FlurrySDK.Flurry/EventParamBase::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventParamBase__ctor_m5E21E27977D918ED1A976A4C82B65C02B0912DDD (EventParamBase_t991A7AA768695D513BF21EF614D7EE8C2A45C8FB* __this, String_t* ___0_paramName, const RuntimeMethod* method) 
{
	{
		// public EventParamBase(string paramName)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.paramName = paramName;
		String_t* L_0 = ___0_paramName;
		__this->___paramName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___paramName_0), (void*)L_0);
		// }
		return;
	}
}
// System.String FlurrySDK.Flurry/EventParamBase::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EventParamBase_ToString_m4BD3FA8D7FAE1A9899BD1EDDB8DFB33A00C447D1 (EventParamBase_t991A7AA768695D513BF21EF614D7EE8C2A45C8FB* __this, const RuntimeMethod* method) 
{
	{
		// return paramName;
		String_t* L_0 = __this->___paramName_0;
		return L_0;
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
// System.Void FlurrySDK.Flurry/StringEventParam::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A (StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* __this, String_t* ___0_paramName, const RuntimeMethod* method) 
{
	{
		// public StringEventParam(string paramName) : base(paramName) { }
		String_t* L_0 = ___0_paramName;
		EventParamBase__ctor_m5E21E27977D918ED1A976A4C82B65C02B0912DDD(__this, L_0, NULL);
		// public StringEventParam(string paramName) : base(paramName) { }
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
// System.Void FlurrySDK.Flurry/DoubleEventParam::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleEventParam__ctor_m176A6819BF4B1126D2F8C3B5CE53D1D767F81115 (DoubleEventParam_t4EC0DD25A28797A0C1EB2BDE628986D81FB6A0BE* __this, String_t* ___0_paramName, const RuntimeMethod* method) 
{
	{
		// public DoubleEventParam(string paramName) : base(paramName) { }
		String_t* L_0 = ___0_paramName;
		EventParamBase__ctor_m5E21E27977D918ED1A976A4C82B65C02B0912DDD(__this, L_0, NULL);
		// public DoubleEventParam(string paramName) : base(paramName) { }
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
// System.Void FlurrySDK.Flurry/IntegerEventParam::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntegerEventParam__ctor_m410B3C941CDF9C7ECFB01F96E02CF47B9FBF8024 (IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* __this, String_t* ___0_paramName, const RuntimeMethod* method) 
{
	{
		// public IntegerEventParam(string paramName) : base(paramName) { }
		String_t* L_0 = ___0_paramName;
		EventParamBase__ctor_m5E21E27977D918ED1A976A4C82B65C02B0912DDD(__this, L_0, NULL);
		// public IntegerEventParam(string paramName) : base(paramName) { }
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
// System.Void FlurrySDK.Flurry/BooleanEventParam::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanEventParam__ctor_mEA5E9D4309DE18346DD25547E64F4AF57D142C28 (BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8* __this, String_t* ___0_paramName, const RuntimeMethod* method) 
{
	{
		// public BooleanEventParam(string paramName) : base(paramName) { }
		String_t* L_0 = ___0_paramName;
		EventParamBase__ctor_m5E21E27977D918ED1A976A4C82B65C02B0912DDD(__this, L_0, NULL);
		// public BooleanEventParam(string paramName) : base(paramName) { }
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
// System.Void FlurrySDK.Flurry/EventParams::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventParams__ctor_m8342C866CDD3BE6F89092EDAE7F86B401CDEF43D (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4CE7EF08211EA84168C8FDD26DD05E92108AE96B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private IDictionary<object, string> parameters = new Dictionary<object, string>();
		Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522* L_0 = (Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522*)il2cpp_codegen_object_new(Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m4CE7EF08211EA84168C8FDD26DD05E92108AE96B(L_0, Dictionary_2__ctor_m4CE7EF08211EA84168C8FDD26DD05E92108AE96B_RuntimeMethod_var);
		__this->___parameters_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameters_0), (void*)L_0);
		// public EventParams()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// parameters = new Dictionary<object, string>();
		Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522* L_1 = (Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522*)il2cpp_codegen_object_new(Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m4CE7EF08211EA84168C8FDD26DD05E92108AE96B(L_1, Dictionary_2__ctor_m4CE7EF08211EA84168C8FDD26DD05E92108AE96B_RuntimeMethod_var);
		__this->___parameters_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameters_0), (void*)L_1);
		// }
		return;
	}
}
// System.Void FlurrySDK.Flurry/EventParams::.ctor(FlurrySDK.Flurry/EventParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventParams__ctor_mEE1A88EB07EFD35EC21A1787433C7C7896A372DA (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* ___0_paramsSource, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4CE7EF08211EA84168C8FDD26DD05E92108AE96B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t72F16E3CBC6488666CEB927E55507385AE045F25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0C5C15BD4CFBC65D550EF9C0BF07EA524EB495E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tDFB2ACC9CFA50DAA3102AFCFE54D3753760EF12F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// private IDictionary<object, string> parameters = new Dictionary<object, string>();
		Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522* L_0 = (Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522*)il2cpp_codegen_object_new(Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m4CE7EF08211EA84168C8FDD26DD05E92108AE96B(L_0, Dictionary_2__ctor_m4CE7EF08211EA84168C8FDD26DD05E92108AE96B_RuntimeMethod_var);
		__this->___parameters_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameters_0), (void*)L_0);
		// public EventParams(EventParams paramsSource)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// parameters = new Dictionary<object, string>();
		Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522* L_1 = (Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522*)il2cpp_codegen_object_new(Dictionary_2_tB0D346953106A20DD058F31647E9F410A0978522_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m4CE7EF08211EA84168C8FDD26DD05E92108AE96B(L_1, Dictionary_2__ctor_m4CE7EF08211EA84168C8FDD26DD05E92108AE96B_RuntimeMethod_var);
		__this->___parameters_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parameters_0), (void*)L_1);
		// if (paramsSource.parameters != null)
		EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* L_2 = ___0_paramsSource;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___parameters_0;
		if (!L_3)
		{
			goto IL_0059;
		}
	}
	{
		// foreach (KeyValuePair<object, string> pair in paramsSource.parameters)
		EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* L_4 = ___0_paramsSource;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___parameters_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.String>>::GetEnumerator() */, IEnumerable_1_t0C5C15BD4CFBC65D550EF9C0BF07EA524EB495E0_il2cpp_TypeInfo_var, L_5);
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004f:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_0;
					if (!L_7)
					{
						goto IL_0058;
					}
				}
				{
					RuntimeObject* L_8 = V_0;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0058:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0045_1;
			}

IL_0032_1:
			{
				// foreach (KeyValuePair<object, string> pair in paramsSource.parameters)
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD L_10;
				L_10 = InterfaceFuncInvoker0< KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.String>>::get_Current() */, IEnumerator_1_tDFB2ACC9CFA50DAA3102AFCFE54D3753760EF12F_il2cpp_TypeInfo_var, L_9);
				V_1 = L_10;
				// parameters.Add(pair);
				RuntimeObject* L_11 = __this->___parameters_0;
				KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD L_12 = V_1;
				NullCheck(L_11);
				InterfaceActionInvoker1< KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.String>>::Add(T) */, ICollection_1_t72F16E3CBC6488666CEB927E55507385AE045F25_il2cpp_TypeInfo_var, L_11, L_12);
			}

IL_0045_1:
			{
				// foreach (KeyValuePair<object, string> pair in paramsSource.parameters)
				RuntimeObject* L_13 = V_0;
				NullCheck(L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				if (L_14)
				{
					goto IL_0032_1;
				}
			}
			{
				goto IL_0059;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.Object,System.String> FlurrySDK.Flurry/EventParams::GetParams()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EventParams_GetParams_mB41875569AFF98D5E729200750F2056476B00C92 (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, const RuntimeMethod* method) 
{
	{
		// return parameters;
		RuntimeObject* L_0 = __this->___parameters_0;
		return L_0;
	}
}
// FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* EventParams_Clear_m7E39D6433EA353C7DEC5937C75C693C8A0FFC4B8 (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t72F16E3CBC6488666CEB927E55507385AE045F25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parameters.Clear();
		RuntimeObject* L_0 = __this->___parameters_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.String>>::Clear() */, ICollection_1_t72F16E3CBC6488666CEB927E55507385AE045F25_il2cpp_TypeInfo_var, L_0);
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::Remove(FlurrySDK.Flurry/EventParamBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* EventParams_Remove_m8D2F4F077EC4E0FFB9C2F2645659B20D876EE59A (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, EventParamBase_t991A7AA768695D513BF21EF614D7EE8C2A45C8FB* ___0_param, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parameters.Remove(param);
		RuntimeObject* L_0 = __this->___parameters_0;
		EventParamBase_t991A7AA768695D513BF21EF614D7EE8C2A45C8FB* L_1 = ___0_param;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.String>::Remove(TKey) */, IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var, L_0, L_1);
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::Remove(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* EventParams_Remove_m4459A26B1D76CFC31A895D07FFC612331CC97EF2 (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, String_t* ___0_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parameters.Remove(key);
		RuntimeObject* L_0 = __this->___parameters_0;
		String_t* L_1 = ___0_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.String>::Remove(TKey) */, IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var, L_0, L_1);
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutAll(FlurrySDK.Flurry/EventParams)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* EventParams_PutAll_m481F3423DA2510502D07F1740A9EF3A52EFD8A73 (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* ___0_paramsSource, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t72F16E3CBC6488666CEB927E55507385AE045F25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0C5C15BD4CFBC65D550EF9C0BF07EA524EB495E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tDFB2ACC9CFA50DAA3102AFCFE54D3753760EF12F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (paramsSource.parameters != null)
		EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* L_0 = ___0_paramsSource;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___parameters_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		// foreach (KeyValuePair<object, string> pair in paramsSource.parameters)
		EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* L_2 = ___0_paramsSource;
		NullCheck(L_2);
		RuntimeObject* L_3 = L_2->___parameters_0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.String>>::GetEnumerator() */, IEnumerable_1_t0C5C15BD4CFBC65D550EF9C0BF07EA524EB495E0_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0033:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_0;
					if (!L_5)
					{
						goto IL_003c;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_003c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_0016_1:
			{
				// foreach (KeyValuePair<object, string> pair in paramsSource.parameters)
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD L_8;
				L_8 = InterfaceFuncInvoker0< KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.String>>::get_Current() */, IEnumerator_1_tDFB2ACC9CFA50DAA3102AFCFE54D3753760EF12F_il2cpp_TypeInfo_var, L_7);
				V_1 = L_8;
				// parameters.Add(pair);
				RuntimeObject* L_9 = __this->___parameters_0;
				KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD L_10 = V_1;
				NullCheck(L_9);
				InterfaceActionInvoker1< KeyValuePair_2_tCB168C4AD2846174DFBDC9E200200DAD5D203AAD >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.String>>::Add(T) */, ICollection_1_t72F16E3CBC6488666CEB927E55507385AE045F25_il2cpp_TypeInfo_var, L_9, L_10);
			}

IL_0029_1:
			{
				// foreach (KeyValuePair<object, string> pair in paramsSource.parameters)
				RuntimeObject* L_11 = V_0;
				NullCheck(L_11);
				bool L_12;
				L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_11);
				if (L_12)
				{
					goto IL_0016_1;
				}
			}
			{
				goto IL_003d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003d:
	{
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutString(FlurrySDK.Flurry/StringEventParam,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* EventParams_PutString_mF45B2E3FD4733C96CDC9E0076CD64129AE4CA9C7 (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* ___0_param, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parameters.Add(param, value);
		RuntimeObject* L_0 = __this->___parameters_0;
		StringEventParam_t31BCFC0C463B1A1EDB59B2DF7922D55D78716477* L_1 = ___0_param;
		String_t* L_2 = ___1_value;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.String>::Add(TKey,TValue) */, IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* EventParams_PutString_mBFD1D7EA9BEC0049C0070E2DD9DD7F235E8D77DD (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parameters.Add(key, value);
		RuntimeObject* L_0 = __this->___parameters_0;
		String_t* L_1 = ___0_key;
		String_t* L_2 = ___1_value;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.String>::Add(TKey,TValue) */, IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutInteger(FlurrySDK.Flurry/IntegerEventParam,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* EventParams_PutInteger_mA6E1D78A020C1E732889316BFC44C67C5164B6E2 (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* ___0_param, int32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parameters.Add(param, value.ToString());
		RuntimeObject* L_0 = __this->___parameters_0;
		IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* L_1 = ___0_param;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___1_value), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.String>::Add(TKey,TValue) */, IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* EventParams_PutInteger_m2C55203F0160FB6FF96568E0832E2ADA3E9A1139 (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, String_t* ___0_key, int32_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parameters.Add(key, value.ToString());
		RuntimeObject* L_0 = __this->___parameters_0;
		String_t* L_1 = ___0_key;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&___1_value), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.String>::Add(TKey,TValue) */, IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutLong(FlurrySDK.Flurry/IntegerEventParam,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* EventParams_PutLong_mC5535EC3951B9624A9B94C0A235619F349F32F38 (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* ___0_param, int64_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parameters.Add(param, value.ToString());
		RuntimeObject* L_0 = __this->___parameters_0;
		IntegerEventParam_tFB961F2B23DC5BF21CCD04FB1B20F08077D800E0* L_1 = ___0_param;
		String_t* L_2;
		L_2 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&___1_value), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.String>::Add(TKey,TValue) */, IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutLong(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* EventParams_PutLong_m34C3CC9072FC3F87429C804ECDCBBA6635C5C46D (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, String_t* ___0_key, int64_t ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parameters.Add(key, value.ToString());
		RuntimeObject* L_0 = __this->___parameters_0;
		String_t* L_1 = ___0_key;
		String_t* L_2;
		L_2 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&___1_value), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.String>::Add(TKey,TValue) */, IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutDouble(FlurrySDK.Flurry/DoubleEventParam,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* EventParams_PutDouble_mC8F89DE43096511D90D1D06D1062B1A7046D7DEC (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, DoubleEventParam_t4EC0DD25A28797A0C1EB2BDE628986D81FB6A0BE* ___0_param, double ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parameters.Add(param, value.ToString());
		RuntimeObject* L_0 = __this->___parameters_0;
		DoubleEventParam_t4EC0DD25A28797A0C1EB2BDE628986D81FB6A0BE* L_1 = ___0_param;
		String_t* L_2;
		L_2 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&___1_value), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.String>::Add(TKey,TValue) */, IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutDouble(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* EventParams_PutDouble_m230AD9A7A18EE857F262BE2320262CD610F46D2C (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, String_t* ___0_key, double ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parameters.Add(key, value.ToString());
		RuntimeObject* L_0 = __this->___parameters_0;
		String_t* L_1 = ___0_key;
		String_t* L_2;
		L_2 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&___1_value), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.String>::Add(TKey,TValue) */, IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutBoolean(FlurrySDK.Flurry/BooleanEventParam,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* EventParams_PutBoolean_mC8CC8EFF9C6322FE483AF16C22C8471245AC4FED (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8* ___0_param, bool ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parameters.Add(param, value.ToString());
		RuntimeObject* L_0 = __this->___parameters_0;
		BooleanEventParam_t7C2851B01E1C80525865387EF36E33993898E9C8* L_1 = ___0_param;
		String_t* L_2;
		L_2 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___1_value), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.String>::Add(TKey,TValue) */, IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// return this;
		return __this;
	}
}
// FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutBoolean(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* EventParams_PutBoolean_m76AB35484927169A7184215647A8AA28C50371D9 (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, String_t* ___0_key, bool ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parameters.Add(key, value.ToString());
		RuntimeObject* L_0 = __this->___parameters_0;
		String_t* L_1 = ___0_key;
		String_t* L_2;
		L_2 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___1_value), NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.String>::Add(TKey,TValue) */, IDictionary_2_t4ED9E662D27F666FB93FB9F2CE1B58FE65003A63_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		// return this;
		return __this;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* EventParams_GetParams_mB41875569AFF98D5E729200750F2056476B00C92_inline (EventParams_tA9C56269511A4248EE265187D45FE97C7BA797B5* __this, const RuntimeMethod* method) 
{
	{
		// return parameters;
		RuntimeObject* L_0 = __this->___parameters_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
