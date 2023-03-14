#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638;
// System.Collections.Generic.Dictionary`2<System.String,com.adjust.sdk.JSONNode>
struct Dictionary_2_t8310586D40E281DE2C7E50F0594273A3DDCB38A7;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct KeyCollection_tAF09DE3ACAF1ABD7544A92CFC2787E520703246E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<com.adjust.sdk.JSONNode>
struct List_1_tC6B5C6E3C0915B3ADCE4851E6AB17C943A3F51FA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<System.String>>
struct ValueCollection_tBA7D94F600201BDFFC90880B77DA2D76ED7EBB59;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<System.String>>[]
struct EntryU5BU5D_t7D363C4258705E5C759DC3C7A84AD08784EEBE95;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// com.adjust.sdk.AdjustThirdPartySharing
struct AdjustThirdPartySharing_tABE2AFB48F9AF2B95352E8BCCAEE72E654CBF8C6;
// com.adjust.sdk.AdjustUtils
struct AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// com.adjust.sdk.JSONArray
struct JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663;
// com.adjust.sdk.JSONClass
struct JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B;
// com.adjust.sdk.JSONData
struct JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412;
// com.adjust.sdk.JSONNode
struct JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97;
// System.String
struct String_t;

IL2CPP_EXTERN_C RuntimeClass* AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05E4ED4BBD99C86DD56D953A9D396662EB0F131F;
IL2CPP_EXTERN_C String_t* _stringLiteral06AFF2D4AB1C22D067B63A6E037A3DB80AA69664;
IL2CPP_EXTERN_C String_t* _stringLiteral09F6BF5807F21976DC5A8B817678D0F3CA09B367;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral0E7889CA73C20C46B2F66AD10574288C6588120D;
IL2CPP_EXTERN_C String_t* _stringLiteral1192DB96DEDC8E4E93036F793E36461F6B1D708F;
IL2CPP_EXTERN_C String_t* _stringLiteral199406D22C247C128830321CCA0F0AA8B9EA8AF2;
IL2CPP_EXTERN_C String_t* _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251;
IL2CPP_EXTERN_C String_t* _stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C;
IL2CPP_EXTERN_C String_t* _stringLiteral252C0671443017876C13A4B1405734D0B2A251E4;
IL2CPP_EXTERN_C String_t* _stringLiteral25E049EC7B4CD14D8602F67EE0C37C9AB40177F0;
IL2CPP_EXTERN_C String_t* _stringLiteral3D5ED547017EE65E294DEE1E52D286F1875F1660;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral587E53A8030FB45502AD4B59E2E80ED12683441E;
IL2CPP_EXTERN_C String_t* _stringLiteral58A74E1B0F0F661EA58D07F60FFEA6CB0362BA66;
IL2CPP_EXTERN_C String_t* _stringLiteral5C0B39AFA1D09BF84C4FF1412FDD072EBFBD3124;
IL2CPP_EXTERN_C String_t* _stringLiteral5ED04C43CC8F7FBE8FFFF015C5538190204F9C6B;
IL2CPP_EXTERN_C String_t* _stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84;
IL2CPP_EXTERN_C String_t* _stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46;
IL2CPP_EXTERN_C String_t* _stringLiteral69711252401E05EA08F1FC661CC7158162B64332;
IL2CPP_EXTERN_C String_t* _stringLiteral6C3D1606B345A91CAEF8856B890202C2FB91632A;
IL2CPP_EXTERN_C String_t* _stringLiteral6F6EDA7F146F65D72B4809F9E8F843CC687A82AE;
IL2CPP_EXTERN_C String_t* _stringLiteral79129E77C99D9B997190424687919AB33976D848;
IL2CPP_EXTERN_C String_t* _stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3;
IL2CPP_EXTERN_C String_t* _stringLiteral7D046F7A5E043071C26805C1E921D468CAB706D4;
IL2CPP_EXTERN_C String_t* _stringLiteral830861A7BE146B54573618AB59D51536353969C4;
IL2CPP_EXTERN_C String_t* _stringLiteral87E6B368D708695D844FB24A36D0437AFFE064A0;
IL2CPP_EXTERN_C String_t* _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069;
IL2CPP_EXTERN_C String_t* _stringLiteral94FFD26B9FC865144CCBD5729EA8FAFF93163FB4;
IL2CPP_EXTERN_C String_t* _stringLiteral9ACD0102DF47E7CF98E660BDDEC79497C54A8EB3;
IL2CPP_EXTERN_C String_t* _stringLiteral9F85DBEFEA5FADBE3465375963EFAA0318BDEB3E;
IL2CPP_EXTERN_C String_t* _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0;
IL2CPP_EXTERN_C String_t* _stringLiteralACA02A5838DA1B746B34D0B4661576E1D6ED6515;
IL2CPP_EXTERN_C String_t* _stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB8EF4E6A277573B21FEDB39E4277FF8DB1D887E9;
IL2CPP_EXTERN_C String_t* _stringLiteralC122FD1744C24B2A4C733C7189953AF4AF702474;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralCC3135654FE5454A443D0D19C37529E7EE6B1408;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294;
IL2CPP_EXTERN_C String_t* _stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86;
IL2CPP_EXTERN_C String_t* _stringLiteralCCED2B25A49F5AB8A840818C053B996994270607;
IL2CPP_EXTERN_C String_t* _stringLiteralCD2BBB96A45582D9F6CF9CDB5E373B1C0C1ABE76;
IL2CPP_EXTERN_C String_t* _stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12;
IL2CPP_EXTERN_C String_t* _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
IL2CPP_EXTERN_C String_t* _stringLiteralD5A3CA0977C7EAB9154A7C6E8BEA40D60065C347;
IL2CPP_EXTERN_C String_t* _stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0;
IL2CPP_EXTERN_C String_t* _stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C;
IL2CPP_EXTERN_C String_t* _stringLiteralEE7F2E90C1A80816B11CAE0EA9389988CBD19F97;
IL2CPP_EXTERN_C String_t* _stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36;
IL2CPP_EXTERN_C String_t* _stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467;
IL2CPP_EXTERN_C String_t* _stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m01BD798AD7B3C3ABC6CFC7A4B9D7A410A0E8C066_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m0E55ACFE8DAB0F44EDF10E9EDF26FD2B84B68122_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m3E66C5AA84110E479EAF0DDBC518BDB9E45199D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>
struct Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t7D363C4258705E5C759DC3C7A84AD08784EEBE95* ____entries_1;
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
	KeyCollection_tAF09DE3ACAF1ABD7544A92CFC2787E520703246E* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tBA7D94F600201BDFFC90880B77DA2D76ED7EBB59* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
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

// com.adjust.sdk.AdjustUrlStrategyExtension
struct AdjustUrlStrategyExtension_tECD39955BB10EF1D04968E4A26C04BB154353386  : public RuntimeObject
{
};

// com.adjust.sdk.AdjustUtils
struct AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A  : public RuntimeObject
{
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

// com.adjust.sdk.JSONNode
struct JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97  : public RuntimeObject
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

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,com.adjust.sdk.JSONNode>
struct KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Nullable`1<com.adjust.sdk.AdjustLogLevel>
struct Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.Double>
struct Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	double ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int64>
struct Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int64_t ___value_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// com.adjust.sdk.JSONArray
struct JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663  : public JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97
{
	// System.Collections.Generic.List`1<com.adjust.sdk.JSONNode> com.adjust.sdk.JSONArray::m_List
	List_1_tC6B5C6E3C0915B3ADCE4851E6AB17C943A3F51FA* ___m_List_0;
};

// com.adjust.sdk.JSONClass
struct JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B  : public JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97
{
	// System.Collections.Generic.Dictionary`2<System.String,com.adjust.sdk.JSONNode> com.adjust.sdk.JSONClass::m_Dict
	Dictionary_2_t8310586D40E281DE2C7E50F0594273A3DDCB38A7* ___m_Dict_0;
};

// com.adjust.sdk.JSONData
struct JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412  : public JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97
{
	// System.String com.adjust.sdk.JSONData::m_Data
	String_t* ___m_Data_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F__padding[12];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
struct __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23__padding[16];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_tD03A67F7FF737E6BC9D67A9F479BD26FCEAD3898 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_tD03A67F7FF737E6BC9D67A9F479BD26FCEAD3898__padding[256];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069__padding[32];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
struct __StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3__padding[40];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE__padding[48];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
struct __StaticArrayInitTypeSizeU3D52_t476AE0901E6E4D2C8E0A54312323C9D77D53BE71 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t476AE0901E6E4D2C8E0A54312323C9D77D53BE71__padding[52];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56
struct __StaticArrayInitTypeSizeU3D56_tF90903548CF34D92C9F741BD6D3F8DC6C822EF4E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_tF90903548CF34D92C9F741BD6D3F8DC6C822EF4E__padding[56];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
struct __StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88__padding[64];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96
struct __StaticArrayInitTypeSizeU3D96_tE962D346DA0011435482BCE5513DB1E0D88A8DEB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D96_tE962D346DA0011435482BCE5513DB1E0D88A8DEB__padding[96];
	};
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// com.adjust.sdk.AdjustThirdPartySharing
struct AdjustThirdPartySharing_tABE2AFB48F9AF2B95352E8BCCAEE72E654CBF8C6  : public RuntimeObject
{
	// System.Nullable`1<System.Boolean> com.adjust.sdk.AdjustThirdPartySharing::isEnabled
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___isEnabled_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> com.adjust.sdk.AdjustThirdPartySharing::granularOptions
	Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* ___granularOptions_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>> com.adjust.sdk.AdjustThirdPartySharing::partnerSharingSettings
	Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* ___partnerSharingSettings_2;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>

// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

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

// com.adjust.sdk.AdjustUrlStrategyExtension

// com.adjust.sdk.AdjustUrlStrategyExtension

// com.adjust.sdk.AdjustUtils
struct AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields
{
	// System.String com.adjust.sdk.AdjustUtils::KeyAdid
	String_t* ___KeyAdid_0;
	// System.String com.adjust.sdk.AdjustUtils::KeyMessage
	String_t* ___KeyMessage_1;
	// System.String com.adjust.sdk.AdjustUtils::KeyNetwork
	String_t* ___KeyNetwork_2;
	// System.String com.adjust.sdk.AdjustUtils::KeyAdgroup
	String_t* ___KeyAdgroup_3;
	// System.String com.adjust.sdk.AdjustUtils::KeyCampaign
	String_t* ___KeyCampaign_4;
	// System.String com.adjust.sdk.AdjustUtils::KeyCreative
	String_t* ___KeyCreative_5;
	// System.String com.adjust.sdk.AdjustUtils::KeyWillRetry
	String_t* ___KeyWillRetry_6;
	// System.String com.adjust.sdk.AdjustUtils::KeyTimestamp
	String_t* ___KeyTimestamp_7;
	// System.String com.adjust.sdk.AdjustUtils::KeyCallbackId
	String_t* ___KeyCallbackId_8;
	// System.String com.adjust.sdk.AdjustUtils::KeyEventToken
	String_t* ___KeyEventToken_9;
	// System.String com.adjust.sdk.AdjustUtils::KeyClickLabel
	String_t* ___KeyClickLabel_10;
	// System.String com.adjust.sdk.AdjustUtils::KeyTrackerName
	String_t* ___KeyTrackerName_11;
	// System.String com.adjust.sdk.AdjustUtils::KeyTrackerToken
	String_t* ___KeyTrackerToken_12;
	// System.String com.adjust.sdk.AdjustUtils::KeyJsonResponse
	String_t* ___KeyJsonResponse_13;
	// System.String com.adjust.sdk.AdjustUtils::KeyCostType
	String_t* ___KeyCostType_14;
	// System.String com.adjust.sdk.AdjustUtils::KeyCostAmount
	String_t* ___KeyCostAmount_15;
	// System.String com.adjust.sdk.AdjustUtils::KeyCostCurrency
	String_t* ___KeyCostCurrency_16;
	// System.String com.adjust.sdk.AdjustUtils::KeyFbInstallReferrer
	String_t* ___KeyFbInstallReferrer_17;
	// System.String com.adjust.sdk.AdjustUtils::KeySkadConversionValue
	String_t* ___KeySkadConversionValue_18;
	// System.String com.adjust.sdk.AdjustUtils::KeySkadCoarseValue
	String_t* ___KeySkadCoarseValue_19;
	// System.String com.adjust.sdk.AdjustUtils::KeySkadLockWindow
	String_t* ___KeySkadLockWindow_20;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsBaseUrl
	String_t* ___KeyTestOptionsBaseUrl_21;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsGdprUrl
	String_t* ___KeyTestOptionsGdprUrl_22;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsSubscriptionUrl
	String_t* ___KeyTestOptionsSubscriptionUrl_23;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsExtraPath
	String_t* ___KeyTestOptionsExtraPath_24;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsBasePath
	String_t* ___KeyTestOptionsBasePath_25;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsGdprPath
	String_t* ___KeyTestOptionsGdprPath_26;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsDeleteState
	String_t* ___KeyTestOptionsDeleteState_27;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsUseTestConnectionOptions
	String_t* ___KeyTestOptionsUseTestConnectionOptions_28;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsTimerIntervalInMilliseconds
	String_t* ___KeyTestOptionsTimerIntervalInMilliseconds_29;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsTimerStartInMilliseconds
	String_t* ___KeyTestOptionsTimerStartInMilliseconds_30;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsSessionIntervalInMilliseconds
	String_t* ___KeyTestOptionsSessionIntervalInMilliseconds_31;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsSubsessionIntervalInMilliseconds
	String_t* ___KeyTestOptionsSubsessionIntervalInMilliseconds_32;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsTeardown
	String_t* ___KeyTestOptionsTeardown_33;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsNoBackoffWait
	String_t* ___KeyTestOptionsNoBackoffWait_34;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsiAdFrameworkEnabled
	String_t* ___KeyTestOptionsiAdFrameworkEnabled_35;
	// System.String com.adjust.sdk.AdjustUtils::KeyTestOptionsAdServicesFrameworkEnabled
	String_t* ___KeyTestOptionsAdServicesFrameworkEnabled_36;
};

// com.adjust.sdk.AdjustUtils

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.AndroidJavaObject

// com.adjust.sdk.JSONNode

// com.adjust.sdk.JSONNode

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,com.adjust.sdk.JSONNode>

// System.Collections.Generic.KeyValuePair`2<System.String,com.adjust.sdk.JSONNode>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>

// System.Nullable`1<com.adjust.sdk.AdjustLogLevel>

// System.Nullable`1<com.adjust.sdk.AdjustLogLevel>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Double>

// System.Nullable`1<System.Double>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<System.Int32Enum>

// System.Nullable`1<System.Int64>

// System.Nullable`1<System.Int64>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// com.adjust.sdk.JSONArray

// com.adjust.sdk.JSONArray

// com.adjust.sdk.JSONClass

// com.adjust.sdk.JSONClass

// com.adjust.sdk.JSONData

// com.adjust.sdk.JSONData

// System.UInt32

// System.UInt32

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::00D4BD228EE39102911FB655535F74516495CF8CD9E04B44BFF10E7E340C82D3
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___00D4BD228EE39102911FB655535F74516495CF8CD9E04B44BFF10E7E340C82D3_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::0493150EEC7B342734AF124E73372BED8511F311D1AFD09748D1DE6ECBAF4DC8
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___0493150EEC7B342734AF124E73372BED8511F311D1AFD09748D1DE6ECBAF4DC8_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::0608CC71EA319A6BF9F358511D7E1206D7807F4836010140242797974307F291
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___0608CC71EA319A6BF9F358511D7E1206D7807F4836010140242797974307F291_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::0A192CBE1CD815E7C979E96E485578994D60388159F888BC3C1EED654312A4C2
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___0A192CBE1CD815E7C979E96E485578994D60388159F888BC3C1EED654312A4C2_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::0B2F373E42EAC64CD0A1CAFBA1B826A1FA44F4C58025C104A0E9CE57A7DE7CC4
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___0B2F373E42EAC64CD0A1CAFBA1B826A1FA44F4C58025C104A0E9CE57A7DE7CC4_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::11EC6702AF42024D06F91BB65B7848BE93F36BEC1AEF5C38CE34556711A48BB7
	__StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 ___11EC6702AF42024D06F91BB65B7848BE93F36BEC1AEF5C38CE34556711A48BB7_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::1494D974E7EA9488AB11BF61975A952BDBD41CAEA5F6742BC9949DBA5D722F10
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___1494D974E7EA9488AB11BF61975A952BDBD41CAEA5F6742BC9949DBA5D722F10_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::19CC43A23BA97331C1AF89D85E20AC171473EA306BEA5B12BA4B94AF22028F94
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___19CC43A23BA97331C1AF89D85E20AC171473EA306BEA5B12BA4B94AF22028F94_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::2153F35E04ABDCC0AF5414F2DDD59767941015158B8238E5FCB4EB0E1165EEB3
	__StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 ___2153F35E04ABDCC0AF5414F2DDD59767941015158B8238E5FCB4EB0E1165EEB3_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::281C01C2B926D43D7D37B1C739E00A5628A7343533BC0417A7A5F3F946465670
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___281C01C2B926D43D7D37B1C739E00A5628A7343533BC0417A7A5F3F946465670_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::2A0BF904C21C9A6EAE9865593CC7095DCC5CE3068879CFA7582B44CAECDE4EF7
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___2A0BF904C21C9A6EAE9865593CC7095DCC5CE3068879CFA7582B44CAECDE4EF7_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::2B230C06712836AA8E046BD67E6B3D41DBAE0652EAB323AC66892D965EA34D10
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___2B230C06712836AA8E046BD67E6B3D41DBAE0652EAB323AC66892D965EA34D10_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::3286580BD6F87E7C9C428B479CFC1924BEFB539138750641E6298307EE246C3B
	__StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 ___3286580BD6F87E7C9C428B479CFC1924BEFB539138750641E6298307EE246C3B_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::3783FB69B6B736ADC42ED678E95315363C531091CF9C361E8E08BFBAB5C07A59
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___3783FB69B6B736ADC42ED678E95315363C531091CF9C361E8E08BFBAB5C07A59_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::3BCD46262A904AE11C31DB3460B0A180966E84B1E13DEA6087025160DB8E8AD3
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___3BCD46262A904AE11C31DB3460B0A180966E84B1E13DEA6087025160DB8E8AD3_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::3DE8A3FBFF37F28E7FFD407B8DCF4CDEFE2A12DD2A456CDF09529967C218F801
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___3DE8A3FBFF37F28E7FFD407B8DCF4CDEFE2A12DD2A456CDF09529967C218F801_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::3DFD990CC9D2700FB3809A1E3B1E99A3618687AE4F96F61BA33BC07AD5639B41
	__StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 ___3DFD990CC9D2700FB3809A1E3B1E99A3618687AE4F96F61BA33BC07AD5639B41_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::46F3A4FAE6818DB456737CA25A249DAE1B96C8A57D1C49D24AC746C5D74ECA86
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___46F3A4FAE6818DB456737CA25A249DAE1B96C8A57D1C49D24AC746C5D74ECA86_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::4D241BD3C3FC641B1EFC068EDF34AC9E2CEA3CDC4D21D68EE4666DBD6CB90815
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___4D241BD3C3FC641B1EFC068EDF34AC9E2CEA3CDC4D21D68EE4666DBD6CB90815_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::500BC8012F14DB59363F5E3E3D335855E3930E9CB2A8C099208DDA412343B74C
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___500BC8012F14DB59363F5E3E3D335855E3930E9CB2A8C099208DDA412343B74C_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::521F60C48FBBE7B1B46978B097FA99EF1233F4A8767D7331DBC2096EFF42F162
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___521F60C48FBBE7B1B46978B097FA99EF1233F4A8767D7331DBC2096EFF42F162_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::5D9A00A8EA4EE7863754EAD1C940704AF7525E52A5ADB32DACAD6D8A79483887
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___5D9A00A8EA4EE7863754EAD1C940704AF7525E52A5ADB32DACAD6D8A79483887_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::621772E970F68144C113FF85430E9419433D6FC95A8697E93B462818430DE67D
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___621772E970F68144C113FF85430E9419433D6FC95A8697E93B462818430DE67D_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::62ABD38917DB51823CFE0AA0F045585CC9383A96B975F82D77854FF4515A6F25
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___62ABD38917DB51823CFE0AA0F045585CC9383A96B975F82D77854FF4515A6F25_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=96 <PrivateImplementationDetails>::649A757917549974D2D9C7B387D0CE277C58DB4A0FF052CC644A83EC357CC9C3
	__StaticArrayInitTypeSizeU3D96_tE962D346DA0011435482BCE5513DB1E0D88A8DEB ___649A757917549974D2D9C7B387D0CE277C58DB4A0FF052CC644A83EC357CC9C3_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::67B9623EBB12670F09060D22E54A79A04E2F057A8CADDC7E21C98B167B815887
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___67B9623EBB12670F09060D22E54A79A04E2F057A8CADDC7E21C98B167B815887_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6DC1C586572D6873AC1BA4F7A07985F5485D70168C412DF7C421ECC1442CA561
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___6DC1C586572D6873AC1BA4F7A07985F5485D70168C412DF7C421ECC1442CA561_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::7230D0176F6605371DD7D8FAB6CC7DE9EFDF05C4EB02E54A4356D4E905C51AFE
	__StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 ___7230D0176F6605371DD7D8FAB6CC7DE9EFDF05C4EB02E54A4356D4E905C51AFE_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::799687EF6A1CB577E8BA446E7E3FA0D56B016EB277D7480FEE0B3490689444FF
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___799687EF6A1CB577E8BA446E7E3FA0D56B016EB277D7480FEE0B3490689444FF_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::8391BA4F82A88240143837DADE9C00CE223BBE35308688BBCC9E0AD24D25315C
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___8391BA4F82A88240143837DADE9C00CE223BBE35308688BBCC9E0AD24D25315C_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::8555ACB2F95E88DAF5CDCAE723E9D17232AE5BB66816F1625DFD51F7227D0E20
	__StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 ___8555ACB2F95E88DAF5CDCAE723E9D17232AE5BB66816F1625DFD51F7227D0E20_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8688D249E9D047B4FC2FB89CE05AFE9EC89252FFCCDD969DE6EEF260DD7FFB21
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___8688D249E9D047B4FC2FB89CE05AFE9EC89252FFCCDD969DE6EEF260DD7FFB21_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::87B905D0612326492DE8697747080CE8EAA7932BD6E2B1FE0FE595147E5EC40F
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___87B905D0612326492DE8697747080CE8EAA7932BD6E2B1FE0FE595147E5EC40F_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::8871E42B242AB4294A61F8C2EBF73549B2FE6C034B86D618F41F1A62287AF4A5
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___8871E42B242AB4294A61F8C2EBF73549B2FE6C034B86D618F41F1A62287AF4A5_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::89E05074C5B6E4997CD4AF0B154DA11077F96191AD230C270D9195FD73562143
	__StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 ___89E05074C5B6E4997CD4AF0B154DA11077F96191AD230C270D9195FD73562143_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::8CACA7897261DCBD9989CFB6CC76639A877FC18198CCE0346BCF3E04E2F24846
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___8CACA7897261DCBD9989CFB6CC76639A877FC18198CCE0346BCF3E04E2F24846_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::8D9733EF6DF930978610C46FC2B76903E08F56D0001E55312E84F14136839228
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___8D9733EF6DF930978610C46FC2B76903E08F56D0001E55312E84F14136839228_36;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::93C5FB69E2BFB352ABDAF69F99C905D38332D25B97D17859AF31A72EAF8B41B2
	__StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 ___93C5FB69E2BFB352ABDAF69F99C905D38332D25B97D17859AF31A72EAF8B41B2_37;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::9779971F9B8E862868A3BB0DE22915A3E815A89EF2E518308737E4151A2BB26B
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___9779971F9B8E862868A3BB0DE22915A3E815A89EF2E518308737E4151A2BB26B_38;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9801A434AFC365499695E8422C91A4EB593D9236F21F2644E827FD78D7514043
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___9801A434AFC365499695E8422C91A4EB593D9236F21F2644E827FD78D7514043_39;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::9BE031F5E0E450771E60068B5E9C8E91BDADCC4C649B79127BD768D7AC0E175B
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___9BE031F5E0E450771E60068B5E9C8E91BDADCC4C649B79127BD768D7AC0E175B_40;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::9C5A60BD34CD6BFA73BBA7F475A6CE83A88D43DED971A907D5A6DB505519A8A6
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___9C5A60BD34CD6BFA73BBA7F475A6CE83A88D43DED971A907D5A6DB505519A8A6_41;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::9C6CB6ACE7A7A19DD02341D39CDF2F8365A18A38FDFF878599A346048EA046B5
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___9C6CB6ACE7A7A19DD02341D39CDF2F8365A18A38FDFF878599A346048EA046B5_42;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::9DA15154E6819DD9A6931EC392A1194B6B016E518ACB46B26B78580D05E21D33
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___9DA15154E6819DD9A6931EC392A1194B6B016E518ACB46B26B78580D05E21D33_43;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::A13A05AFEEC482D12FEFF36B5A4250BF5E3A77A4EC9F55613478D2BABD0E3E62
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___A13A05AFEEC482D12FEFF36B5A4250BF5E3A77A4EC9F55613478D2BABD0E3E62_44;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::A216A7ED62581BBBDCAB403B41D3D8DC72023A78304AFFCA54AD3C384CD1F060
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___A216A7ED62581BBBDCAB403B41D3D8DC72023A78304AFFCA54AD3C384CD1F060_45;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::AA3C86BEE6798A45B555EE2BDA580F2C2BAE73855638CA51299F99813F50DDA1
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___AA3C86BEE6798A45B555EE2BDA580F2C2BAE73855638CA51299F99813F50DDA1_46;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::AC41851410771D6BD547E42808B01C29335D6B96579AA534A896EB7737BA575E
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___AC41851410771D6BD547E42808B01C29335D6B96579AA534A896EB7737BA575E_47;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::AE11144411ED742635890BE642211FE970B2D95B1810977A3EB582BDC3E44BF3
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___AE11144411ED742635890BE642211FE970B2D95B1810977A3EB582BDC3E44BF3_48;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::AE12043E64531100568614A62FEB4A5E2494928804704E78FDAB015240F5D976
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___AE12043E64531100568614A62FEB4A5E2494928804704E78FDAB015240F5D976_49;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::AF027571D9C7FDA2E4E5AF02E9EDEB7AFD87F7DFC156C1E1F43389FDB8C356BA
	__StaticArrayInitTypeSizeU3D16_tFB2D94E174C3DFBC336BBEE6AD92E07462831A23 ___AF027571D9C7FDA2E4E5AF02E9EDEB7AFD87F7DFC156C1E1F43389FDB8C356BA_50;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::B041F9106428624B06433734325B597693AC176B308733A4142268F4E01EFB96
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___B041F9106428624B06433734325B597693AC176B308733A4142268F4E01EFB96_51;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::BA4918AD0FB646D7D70E74C81D75582EA4CA90B77CBA9A3BB6C785E27B72CD59
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___BA4918AD0FB646D7D70E74C81D75582EA4CA90B77CBA9A3BB6C785E27B72CD59_52;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::C144799375D001DDB73586CE089FB8F7A17844537CC5A4A50DA29637B45B2222
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___C144799375D001DDB73586CE089FB8F7A17844537CC5A4A50DA29637B45B2222_53;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::C1DF27D86D17A9B413DCA0537C6DF6D26108DA3506C3E6A9A11B125D16508950
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___C1DF27D86D17A9B413DCA0537C6DF6D26108DA3506C3E6A9A11B125D16508950_54;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::C21CB42E82AE29786143762458CB549B4EC6FD9345E76B0ABD69CF8FE4350E19
	__StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 ___C21CB42E82AE29786143762458CB549B4EC6FD9345E76B0ABD69CF8FE4350E19_55;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::C63E433918BCBD4840D13D63E6E45B52525CFF3052569A9A3503F912CFF091D0
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___C63E433918BCBD4840D13D63E6E45B52525CFF3052569A9A3503F912CFF091D0_56;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::C794F9EBCF093A9A1390D3A4A334F2F59D82519095D40F5ECF937D6192772952
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___C794F9EBCF093A9A1390D3A4A334F2F59D82519095D40F5ECF937D6192772952_57;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::D1537FE27F1EFBBB92271F6FDEE66360E5633712E7245DF2BB18BBC730A5BF21
	__StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 ___D1537FE27F1EFBBB92271F6FDEE66360E5633712E7245DF2BB18BBC730A5BF21_58;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::D9D70F873329BA811CD68B2FD454D17072E03E122C114D21046E80FBE7884323
	__StaticArrayInitTypeSizeU3D12_t1BDD2193C3F925556BCD5FF35C0AC52DDB0CAB8F ___D9D70F873329BA811CD68B2FD454D17072E03E122C114D21046E80FBE7884323_59;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::E195800D222218584E3C6B632B5AD96C2D8A7ADA16F326229D272903CF1ABF50
	__StaticArrayInitTypeSizeU3D56_tF90903548CF34D92C9F741BD6D3F8DC6C822EF4E ___E195800D222218584E3C6B632B5AD96C2D8A7ADA16F326229D272903CF1ABF50_60;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::E5FCA2DE6F1F5CA7A7AE38BEFCB8ECB431C80BD69AC37780CA3A1025F416C484
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___E5FCA2DE6F1F5CA7A7AE38BEFCB8ECB431C80BD69AC37780CA3A1025F416C484_61;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::EB55845255B06FC752F75699827016C948DB1B36016346FDEA24DDDA4537BC5E
	__StaticArrayInitTypeSizeU3D56_tF90903548CF34D92C9F741BD6D3F8DC6C822EF4E ___EB55845255B06FC752F75699827016C948DB1B36016346FDEA24DDDA4537BC5E_62;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::EF7D78AC538DE0C3B2311911B7EBE72746E1BD6D567B3933E3A25A30960D49C8
	__StaticArrayInitTypeSizeU3D64_tC5DCC92F71FF4937EDBB6F52C59AD832172ABE88 ___EF7D78AC538DE0C3B2311911B7EBE72746E1BD6D567B3933E3A25A30960D49C8_63;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::F3E71B3CED39329A19A0946153F01BE95DEF16C5E97C8D178934F653ACCD1849
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___F3E71B3CED39329A19A0946153F01BE95DEF16C5E97C8D178934F653ACCD1849_64;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::F932DA03342B41140E3D6A53B27C8536CCA4F2B6EE88B7D320A658EC799A02B5
	__StaticArrayInitTypeSizeU3D52_t476AE0901E6E4D2C8E0A54312323C9D77D53BE71 ___F932DA03342B41140E3D6A53B27C8536CCA4F2B6EE88B7D320A658EC799A02B5_65;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::FB3FC0BF5680059D0A1B61BC161F53830DF9F36268D447C60C9BCFDC6BDC7CDF
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___FB3FC0BF5680059D0A1B61BC161F53830DF9F36268D447C60C9BCFDC6BDC7CDF_66;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::FCCA0643D7F9833656CA92FBC6D9FCB5258690E035C43BC53CD1850E44A6E177
	__StaticArrayInitTypeSizeU3D40_t68A41E1D2BAA1C55857C26F7E0C26D1CFDB100B3 ___FCCA0643D7F9833656CA92FBC6D9FCB5258690E035C43BC53CD1850E44A6E177_67;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::FEA7B32778ECBDD7ADEE1941E98C89CF96BBC762F5F1BEB0BE24E36A456FBBC5
	__StaticArrayInitTypeSizeU3D256_tD03A67F7FF737E6BC9D67A9F479BD26FCEAD3898 ___FEA7B32778ECBDD7ADEE1941E98C89CF96BBC762F5F1BEB0BE24E36A456FBBC5_68;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___FF1F6EE5D67458CFAC950F62E93042E21FCB867E2234DCC8721801231064AD40_69;
};

// <PrivateImplementationDetails>

// com.adjust.sdk.AdjustThirdPartySharing

// com.adjust.sdk.AdjustThirdPartySharing
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Double>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int64>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Set<System.Object>(System.String,FieldType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject_Set_TisRuntimeObject_m03148F756DBB615CB512097333F869C88D4D767A_gshared (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, RuntimeObject* ___1_val, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::.ctor()
inline void Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82 (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8 (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::get_Item(TKey)
inline List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* (*) (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.String>>::Add(TKey,TValue)
inline void Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5 (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* __this, String_t* ___0_key, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*, String_t*, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<com.adjust.sdk.AdjustLogLevel>::get_HasValue()
inline bool Nullable_1_get_HasValue_m0E55ACFE8DAB0F44EDF10E9EDF26FD2B84B68122_inline (Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// T System.Nullable`1<com.adjust.sdk.AdjustLogLevel>::get_Value()
inline int32_t Nullable_1_get_Value_m3E66C5AA84110E479EAF0DDBC518BDB9E45199D6 (Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0*, const RuntimeMethod*))Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Boolean>::get_Value()
inline bool Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01*, const RuntimeMethod*))Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Double>::get_HasValue()
inline bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Double>::get_Value()
inline double Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method)
{
	return ((  double (*) (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165*, const RuntimeMethod*))Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int32>::get_Value()
inline int32_t Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28*, const RuntimeMethod*))Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Int64>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Int64>::get_Value()
inline int64_t Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method)
{
	return ((  int64_t (*) (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17*, const RuntimeMethod*))Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
inline String_t* List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  String_t* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___0_index, method);
}
// System.Void com.adjust.sdk.JSONArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONArray__ctor_m6ECA2300A22DEFC3387A72AF03FEC3355B150C4E (JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void com.adjust.sdk.JSONData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JSONData__ctor_mF07078A36644CD1C44FD4394482FFF67BCCEEAC5 (JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* __this, String_t* ___0_aData, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.Object>::GetEnumerator()
inline Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
inline void Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
inline KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
inline RuntimeObject* KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
inline String_t* KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.String com.adjust.sdk.AdjustUtils::GetJsonResponseCompact(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_GetJsonResponseCompact_mB1763C6F6A17665BAA0534CE919BCFB7D7D491F6 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_dictionary, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.Boolean com.adjust.sdk.JSONNode::op_Equality(com.adjust.sdk.JSONNode,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634 (JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* ___0_a, RuntimeObject* ___1_b, const RuntimeMethod* method) ;
// System.Collections.IEnumerator com.adjust.sdk.JSONClass::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JSONClass_GetEnumerator_mC63BF81FA10F977320F60BFF46CDA748A7F09DAD (JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,com.adjust.sdk.JSONNode>::get_Value()
inline JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_inline (KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E* __this, const RuntimeMethod* method)
{
	return ((  JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* (*) (KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,com.adjust.sdk.JSONNode>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m01BD798AD7B3C3ABC6CFC7A4B9D7A410A0E8C066_inline (KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::Add(TKey,TValue)
inline void Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void com.adjust.sdk.AdjustUtils::WriteJsonResponseDictionary(com.adjust.sdk.JSONClass,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED (JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* ___0_jsonObject, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_output, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// com.adjust.sdk.JSONNode com.adjust.sdk.JSON::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E (String_t* ___0_aJSON, const RuntimeMethod* method) ;
// System.String com.adjust.sdk.AdjustUtils::GetJsonString(com.adjust.sdk.JSONNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1 (JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* ___0_node, String_t* ___1_key, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.Boolean System.Convert::ToBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_m3DEA64CC166C14DD2B3461A04C227A05BC06DFEC (String_t* ___0_value, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_className, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.String,System.String>::get_Item(TKey)
inline String_t* Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.Void UnityEngine.AndroidJavaObject::Set<System.String>(System.String,FieldType)
inline void AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, String_t* ___1_val, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, String_t*, const RuntimeMethod*))AndroidJavaObject_Set_TisRuntimeObject_m03148F756DBB615CB512097333F869C88D4D767A_gshared)(__this, ___0_fieldName, ___1_val, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::Set<UnityEngine.AndroidJavaObject>(System.String,FieldType)
inline void AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2 (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, String_t* ___0_fieldName, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_val, const RuntimeMethod* method)
{
	((  void (*) (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, String_t*, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*, const RuntimeMethod*))AndroidJavaObject_Set_TisRuntimeObject_m03148F756DBB615CB512097333F869C88D4D767A_gshared)(__this, ___0_fieldName, ___1_val, method);
}
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Int64 System.Int64::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6 (String_t* ___0_s, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void com.adjust.sdk.AdjustThirdPartySharing::.ctor(System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustThirdPartySharing__ctor_mD050F802304C5E3A20E88D7C1F8AE85586641A82 (AdjustThirdPartySharing_tABE2AFB48F9AF2B95352E8BCCAEE72E654CBF8C6* __this, Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_isEnabled, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public AdjustThirdPartySharing(bool? isEnabled)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.isEnabled = isEnabled;
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = ___0_isEnabled;
		__this->___isEnabled_0 = L_0;
		// this.granularOptions = new Dictionary<string, List<string>>();
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_1 = (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*)il2cpp_codegen_object_new(Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82(L_1, Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82_RuntimeMethod_var);
		__this->___granularOptions_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___granularOptions_1), (void*)L_1);
		// this.partnerSharingSettings = new Dictionary<string, List<string>>();
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_2 = (Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638*)il2cpp_codegen_object_new(Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82(L_2, Dictionary_2__ctor_m79EA54A4C736FED8607D6E97BD54974D340AEA82_RuntimeMethod_var);
		__this->___partnerSharingSettings_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___partnerSharingSettings_2), (void*)L_2);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustThirdPartySharing::addGranularOption(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustThirdPartySharing_addGranularOption_m430DCE18F822237234F208C6FFD6C7837A2A1A77 (AdjustThirdPartySharing_tABE2AFB48F9AF2B95352E8BCCAEE72E654CBF8C6* __this, String_t* ___0_partnerName, String_t* ___1_key, String_t* ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	{
		// if (partnerName == null || key == null || value == null)
		String_t* L_0 = ___0_partnerName;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_1 = ___1_key;
		if (!L_1)
		{
			goto IL_0009;
		}
	}
	{
		String_t* L_2 = ___2_value;
		if (L_2)
		{
			goto IL_000a;
		}
	}

IL_0009:
	{
		// return;
		return;
	}

IL_000a:
	{
		// if (granularOptions.ContainsKey(partnerName))
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_3 = __this->___granularOptions_1;
		String_t* L_4 = ___0_partnerName;
		NullCheck(L_3);
		bool L_5;
		L_5 = Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8(L_3, L_4, Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// partnerOptions = granularOptions[partnerName];
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_6 = __this->___granularOptions_1;
		String_t* L_7 = ___0_partnerName;
		NullCheck(L_6);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8;
		L_8 = Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A(L_6, L_7, Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A_RuntimeMethod_var);
		V_0 = L_8;
		goto IL_003a;
	}

IL_0027:
	{
		// partnerOptions = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_9 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_9, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_9;
		// granularOptions.Add(partnerName, partnerOptions);
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_10 = __this->___granularOptions_1;
		String_t* L_11 = ___0_partnerName;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_0;
		NullCheck(L_10);
		Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5(L_10, L_11, L_12, Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5_RuntimeMethod_var);
	}

IL_003a:
	{
		// partnerOptions.Add(key);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_13 = V_0;
		String_t* L_14 = ___1_key;
		NullCheck(L_13);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_13, L_14, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// partnerOptions.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_15 = V_0;
		String_t* L_16 = ___2_value;
		NullCheck(L_15);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_15, L_16, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void com.adjust.sdk.AdjustThirdPartySharing::addPartnerSharingSetting(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustThirdPartySharing_addPartnerSharingSetting_m46C4F5606AF8CE842EFA05FD126197ACCEC911E1 (AdjustThirdPartySharing_tABE2AFB48F9AF2B95352E8BCCAEE72E654CBF8C6* __this, String_t* ___0_partnerName, String_t* ___1_key, bool ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	{
		// if (partnerName == null || key == null)
		String_t* L_0 = ___0_partnerName;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		String_t* L_1 = ___1_key;
		if (L_1)
		{
			goto IL_0007;
		}
	}

IL_0006:
	{
		// return;
		return;
	}

IL_0007:
	{
		// if (partnerSharingSettings.ContainsKey(partnerName))
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_2 = __this->___partnerSharingSettings_2;
		String_t* L_3 = ___0_partnerName;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8(L_2, L_3, Dictionary_2_ContainsKey_m994A6496B0ED7177E6D4535A398A7EFFF9684FE8_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		// partnerSharingSetting = partnerSharingSettings[partnerName];
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_5 = __this->___partnerSharingSettings_2;
		String_t* L_6 = ___0_partnerName;
		NullCheck(L_5);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7;
		L_7 = Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A(L_5, L_6, Dictionary_2_get_Item_m8B64E2395E0FED66B5313607CFF79A5C8A46358A_RuntimeMethod_var);
		V_0 = L_7;
		goto IL_0037;
	}

IL_0024:
	{
		// partnerSharingSetting = new List<string>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_8 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_8, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_8;
		// partnerSharingSettings.Add(partnerName, partnerSharingSetting);
		Dictionary_2_t79BA378F246EFA4AD0AFFA017D788423CACA8638* L_9 = __this->___partnerSharingSettings_2;
		String_t* L_10 = ___0_partnerName;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_11 = V_0;
		NullCheck(L_9);
		Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5(L_9, L_10, L_11, Dictionary_2_Add_mFC882976F9C1D377FB9B96AC561BF0301DCC75F5_RuntimeMethod_var);
	}

IL_0037:
	{
		// partnerSharingSetting.Add(key);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_0;
		String_t* L_13 = ___1_key;
		NullCheck(L_12);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// partnerSharingSetting.Add(value.ToString());
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = V_0;
		String_t* L_15;
		L_15 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&___2_value), NULL);
		NullCheck(L_14);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
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
// System.String com.adjust.sdk.AdjustUrlStrategyExtension::ToLowerCaseString(com.adjust.sdk.AdjustUrlStrategy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUrlStrategyExtension_ToLowerCaseString_mC501B171FABC8E81E217A019B01F9D079D4DC7A0 (int32_t ___0_strategy, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1192DB96DEDC8E4E93036F793E36461F6B1D708F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral58A74E1B0F0F661EA58D07F60FFEA6CB0362BA66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral830861A7BE146B54573618AB59D51536353969C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8EF4E6A277573B21FEDB39E4277FF8DB1D887E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD2BBB96A45582D9F6CF9CDB5E373B1C0C1ABE76);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_strategy;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, 1)))
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_0030;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_001e;
			}
			case 4:
			{
				goto IL_0024;
			}
		}
	}
	{
		goto IL_003c;
	}

IL_001e:
	{
		// case AdjustUrlStrategy.India: return "india";
		return _stringLiteral1192DB96DEDC8E4E93036F793E36461F6B1D708F;
	}

IL_0024:
	{
		// case AdjustUrlStrategy.China: return "china";
		return _stringLiteral830861A7BE146B54573618AB59D51536353969C4;
	}

IL_002a:
	{
		// case AdjustUrlStrategy.DataResidencyEU: return "data-residency-eu";
		return _stringLiteralB8EF4E6A277573B21FEDB39E4277FF8DB1D887E9;
	}

IL_0030:
	{
		// case AdjustUrlStrategy.DataResidencyTK: return "data-residency-tr";
		return _stringLiteral58A74E1B0F0F661EA58D07F60FFEA6CB0362BA66;
	}

IL_0036:
	{
		// case AdjustUrlStrategy.DataResidencyUS: return "data-residency-us";
		return _stringLiteralCD2BBB96A45582D9F6CF9CDB5E373B1C0C1ABE76;
	}

IL_003c:
	{
		// default: return string.Empty;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_1;
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
// System.Int32 com.adjust.sdk.AdjustUtils::ConvertLogLevel(System.Nullable`1<com.adjust.sdk.AdjustLogLevel>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdjustUtils_ConvertLogLevel_mF7D0CB4C0B08008E37686670B7361871B737A53F (Nullable_1_tB5B55E6FB7CA2D587DD5769052FCD30C0E9C09F0 ___0_logLevel, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m0E55ACFE8DAB0F44EDF10E9EDF26FD2B84B68122_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m3E66C5AA84110E479EAF0DDBC518BDB9E45199D6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (logLevel == null)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m0E55ACFE8DAB0F44EDF10E9EDF26FD2B84B68122_inline((&___0_logLevel), Nullable_1_get_HasValue_m0E55ACFE8DAB0F44EDF10E9EDF26FD2B84B68122_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// return (int)logLevel;
		int32_t L_1;
		L_1 = Nullable_1_get_Value_m3E66C5AA84110E479EAF0DDBC518BDB9E45199D6((&___0_logLevel), Nullable_1_get_Value_m3E66C5AA84110E479EAF0DDBC518BDB9E45199D6_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int32 com.adjust.sdk.AdjustUtils::ConvertBool(System.Nullable`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdjustUtils_ConvertBool_mBFC3BC841A003201C7056448C67C35625379E786 (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&___0_value), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// if (value.Value)
		bool L_1;
		L_1 = Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28((&___0_value), Nullable_1_get_Value_mE2C54C6AE9FC9F05BF44CD9D7D61DC6CD56E3E28_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return 1;
		return 1;
	}

IL_0016:
	{
		// return 0;
		return 0;
	}
}
// System.Double com.adjust.sdk.AdjustUtils::ConvertDouble(System.Nullable`1<System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double AdjustUtils_ConvertDouble_m328F7E087047FA52AEF1D681FCCD32D80791B749 (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_inline((&___0_value), Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		// return -1;
		return (-1.0);
	}

IL_0013:
	{
		// return (double)value;
		double L_1;
		L_1 = Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1((&___0_value), Nullable_1_get_Value_m260A5CB9269FD3E130F998A589EDAEC2E8F9EAE1_RuntimeMethod_var);
		return ((double)L_1);
	}
}
// System.Int32 com.adjust.sdk.AdjustUtils::ConvertInt(System.Nullable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdjustUtils_ConvertInt_mE9AACF8054BA25B7605B3F8727091ED4F41CF37C (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_inline((&___0_value), Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_000b:
	{
		// return (int)value;
		int32_t L_1;
		L_1 = Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA((&___0_value), Nullable_1_get_Value_m0DF3B826A745419D26A168689AEB4BE6F8698ECA_RuntimeMethod_var);
		return L_1;
	}
}
// System.Int64 com.adjust.sdk.AdjustUtils::ConvertLong(System.Nullable`1<System.Int64>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t AdjustUtils_ConvertLong_m7B66091ED09C4DA947FB5C61D5AC40762100FAF4 (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17 ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value == null)
		bool L_0;
		L_0 = Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_inline((&___0_value), Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_RuntimeMethod_var);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		// return -1;
		return ((int64_t)(-1));
	}

IL_000c:
	{
		// return (long)value;
		int64_t L_1;
		L_1 = Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC((&___0_value), Nullable_1_get_Value_mB475257F3012818AAA61B72B67DA701FACE716DC_RuntimeMethod_var);
		return L_1;
	}
}
// System.String com.adjust.sdk.AdjustUtils::ConvertListToJson(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_ConvertListToJson_m0834067B90DD8AA9713B0A395933C806BDB84689 (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___0_list, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_0 = NULL;
	JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_5;
	memset((&V_5), 0, sizeof(V_5));
	String_t* V_6 = NULL;
	{
		// if (list == null)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___0_list;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0005:
	{
		// if (list.Count % 2 != 0)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_1 = ___0_list;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_1, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if (!((int32_t)(L_2%2)))
		{
			goto IL_0011;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0011:
	{
		// List<String> processedList = new List<String>();
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_0 = L_3;
		// for (int i = 0; i < list.Count; i += 2)
		V_2 = 0;
		goto IL_0048;
	}

IL_001b:
	{
		// String key = list[i];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_4 = ___0_list;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_4, L_5, List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_3 = L_6;
		// String value = list[i + 1];
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_7 = ___0_list;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8(L_7, ((int32_t)il2cpp_codegen_add(L_8, 1)), List_1_get_Item_m21AEC50E791371101DC22ABCF96A2E46800811F8_RuntimeMethod_var);
		V_4 = L_9;
		// if (key == null || value == null)
		String_t* L_10 = V_3;
		if (!L_10)
		{
			goto IL_0044;
		}
	}
	{
		String_t* L_11 = V_4;
		if (!L_11)
		{
			goto IL_0044;
		}
	}
	{
		// processedList.Add(key);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_0;
		String_t* L_13 = V_3;
		NullCheck(L_12);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, L_13, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		// processedList.Add(value);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = V_0;
		String_t* L_15 = V_4;
		NullCheck(L_14);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_14, L_15, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
	}

IL_0044:
	{
		// for (int i = 0; i < list.Count; i += 2)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_16, 2));
	}

IL_0048:
	{
		// for (int i = 0; i < list.Count; i += 2)
		int32_t L_17 = V_2;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_18 = ___0_list;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_18, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_001b;
		}
	}
	{
		// var jsonArray = new JSONArray();
		JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663* L_20 = (JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663*)il2cpp_codegen_object_new(JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		JSONArray__ctor_m6ECA2300A22DEFC3387A72AF03FEC3355B150C4E(L_20, NULL);
		V_1 = L_20;
		// foreach (var listItem in processedList)
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = V_0;
		NullCheck(L_21);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_22;
		L_22 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_21, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_5 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0082:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_5), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0077_1;
			}

IL_0061_1:
			{
				// foreach (var listItem in processedList)
				String_t* L_23;
				L_23 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_5), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_6 = L_23;
				// jsonArray.Add(new JSONData(listItem));
				JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663* L_24 = V_1;
				String_t* L_25 = V_6;
				JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* L_26 = (JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412*)il2cpp_codegen_object_new(JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412_il2cpp_TypeInfo_var);
				NullCheck(L_26);
				JSONData__ctor_mF07078A36644CD1C44FD4394482FFF67BCCEEAC5(L_26, L_25, NULL);
				NullCheck(L_24);
				VirtualActionInvoker1< JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* >::Invoke(12 /* System.Void com.adjust.sdk.JSONNode::Add(com.adjust.sdk.JSONNode) */, L_24, L_26);
			}

IL_0077_1:
			{
				// foreach (var listItem in processedList)
				bool L_27;
				L_27 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_5), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_27)
				{
					goto IL_0061_1;
				}
			}
			{
				goto IL_0090;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0090:
	{
		// return jsonArray.ToString();
		JSONArray_t5159798EB689FADFF1A5BA9E65AAD070152CC663* L_28 = V_1;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_28);
		return L_29;
	}
}
// System.String com.adjust.sdk.AdjustUtils::GetJsonResponseCompact(System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_GetJsonResponseCompact_mB1763C6F6A17665BAA0534CE919BCFB7D7D491F6 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___0_dictionary, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 V_2;
	memset((&V_2), 0, sizeof(V_2));
	KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_5 = NULL;
	{
		// string logJsonResponse = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (dictionary == null)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = ___0_dictionary;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		// return logJsonResponse;
		String_t* L_1 = V_0;
		return L_1;
	}

IL_000b:
	{
		// int preLoopCounter = 0;
		V_1 = 0;
		// logJsonResponse += "{";
		String_t* L_2 = V_0;
		String_t* L_3;
		L_3 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_2, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
		V_0 = L_3;
		// foreach (KeyValuePair<string, object> pair in dictionary)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_4 = ___0_dictionary;
		NullCheck(L_4);
		Enumerator_t06A9DDA7FA9EA8BC40458E628EBAF7B3AA14EB62 L_5;
		L_5 = Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC(L_4, Dictionary_2_GetEnumerator_mF5B5B00F670F3436AB3C07C0F64149501DEC2DBC_RuntimeMethod_var);
		V_2 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0135:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F((&V_2), Enumerator_Dispose_mA7C78FC10B78BFFDD69A6E1CA050B42D48F8B53F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0127_1;
			}

IL_0025_1:
			{
				// foreach (KeyValuePair<string, object> pair in dictionary)
				KeyValuePair_2_tBEE55F2A4574C64393155C322376FD98C7BFC7B9 L_6;
				L_6 = Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_inline((&V_2), Enumerator_get_Current_mFAD52D332201C947C95ECF69DAE5C3319CA654F1_RuntimeMethod_var);
				V_3 = L_6;
				// String valueString = pair.Value as string;
				RuntimeObject* L_7;
				L_7 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_3), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				V_4 = ((String_t*)IsInstSealed((RuntimeObject*)L_7, String_t_il2cpp_TypeInfo_var));
				// if (valueString != null)
				String_t* L_8 = V_4;
				if (!L_8)
				{
					goto IL_00df_1;
				}
			}
			{
				// if (++preLoopCounter > 1)
				int32_t L_9 = V_1;
				int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_9, 1));
				V_1 = L_10;
				if ((((int32_t)L_10) <= ((int32_t)1)))
				{
					goto IL_0056_1;
				}
			}
			{
				// logJsonResponse += ",";
				String_t* L_11 = V_0;
				String_t* L_12;
				L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				V_0 = L_12;
			}

IL_0056_1:
			{
				// if (valueString.StartsWith("{") && valueString.EndsWith("}"))
				String_t* L_13 = V_4;
				NullCheck(L_13);
				bool L_14;
				L_14 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_13, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, NULL);
				if (!L_14)
				{
					goto IL_00a6_1;
				}
			}
			{
				String_t* L_15 = V_4;
				NullCheck(L_15);
				bool L_16;
				L_16 = String_EndsWith_mCD3754F5401E19CE7821CD398986E4EAA6AD87DC(L_15, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
				if (!L_16)
				{
					goto IL_00a6_1;
				}
			}
			{
				// logJsonResponse += "\"" + pair.Key + "\"" + ":" + valueString;
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
				String_t* L_19 = V_0;
				NullCheck(L_18);
				ArrayElementTypeCheck (L_18, L_19);
				(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_19);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_18;
				NullCheck(L_20);
				ArrayElementTypeCheck (L_20, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				(L_20)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
				String_t* L_22;
				L_22 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_3), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				NullCheck(L_21);
				ArrayElementTypeCheck (L_21, L_22);
				(L_21)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_22);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = L_21;
				NullCheck(L_23);
				ArrayElementTypeCheck (L_23, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
				(L_23)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
				String_t* L_25 = V_4;
				NullCheck(L_24);
				ArrayElementTypeCheck (L_24, L_25);
				(L_24)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_25);
				String_t* L_26;
				L_26 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_24, NULL);
				V_0 = L_26;
				goto IL_0127_1;
			}

IL_00a6_1:
			{
				// logJsonResponse += "\"" + pair.Key + "\"" + ":" + "\"" + valueString + "\"";
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
				String_t* L_29 = V_0;
				NullCheck(L_28);
				ArrayElementTypeCheck (L_28, L_29);
				(L_28)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_29);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_28;
				NullCheck(L_30);
				ArrayElementTypeCheck (L_30, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				(L_30)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
				String_t* L_32;
				L_32 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_3), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				NullCheck(L_31);
				ArrayElementTypeCheck (L_31, L_32);
				(L_31)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_32);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_31;
				NullCheck(L_33);
				ArrayElementTypeCheck (L_33, _stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
				(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralE1FA7984F63F6132B83FB4302371499FCEE3AAE0);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
				String_t* L_35 = V_4;
				NullCheck(L_34);
				ArrayElementTypeCheck (L_34, L_35);
				(L_34)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_35);
				StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_34;
				NullCheck(L_36);
				ArrayElementTypeCheck (L_36, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				(L_36)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
				String_t* L_37;
				L_37 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_36, NULL);
				V_0 = L_37;
				// continue;
				goto IL_0127_1;
			}

IL_00df_1:
			{
				// Dictionary<string, object> valueDictionary = pair.Value as Dictionary<string, object>;
				RuntimeObject* L_38;
				L_38 = KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_inline((&V_3), KeyValuePair_2_get_Value_m2052BF44A3FDE623D98B0E6B6E227B2900034235_RuntimeMethod_var);
				V_5 = ((Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)IsInstClass((RuntimeObject*)L_38, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var));
				// if (++preLoopCounter > 1)
				int32_t L_39 = V_1;
				int32_t L_40 = ((int32_t)il2cpp_codegen_add(L_39, 1));
				V_1 = L_40;
				if ((((int32_t)L_40) <= ((int32_t)1)))
				{
					goto IL_0101_1;
				}
			}
			{
				// logJsonResponse += ",";
				String_t* L_41 = V_0;
				String_t* L_42;
				L_42 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_41, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, NULL);
				V_0 = L_42;
			}

IL_0101_1:
			{
				// logJsonResponse += "\"" + pair.Key + "\"" + ":";
				String_t* L_43 = V_0;
				String_t* L_44;
				L_44 = KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_inline((&V_3), KeyValuePair_2_get_Key_mA64FF29A08423140758B0276333D1A89C71B793A_RuntimeMethod_var);
				String_t* L_45;
				L_45 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(L_43, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, L_44, _stringLiteralA333953DEB7B3F631AE4FEB93E9C3AD7F349F8C0, NULL);
				V_0 = L_45;
				// logJsonResponse += GetJsonResponseCompact(valueDictionary);
				String_t* L_46 = V_0;
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_47 = V_5;
				il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
				String_t* L_48;
				L_48 = AdjustUtils_GetJsonResponseCompact_mB1763C6F6A17665BAA0534CE919BCFB7D7D491F6(L_47, NULL);
				String_t* L_49;
				L_49 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_46, L_48, NULL);
				V_0 = L_49;
			}

IL_0127_1:
			{
				// foreach (KeyValuePair<string, object> pair in dictionary)
				bool L_50;
				L_50 = Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E((&V_2), Enumerator_MoveNext_mBB43E0B46CDCD47543052FDB890026C269E6D96E_RuntimeMethod_var);
				if (L_50)
				{
					goto IL_0025_1;
				}
			}
			{
				goto IL_0143;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0143:
	{
		// logJsonResponse += "}";
		String_t* L_51 = V_0;
		String_t* L_52;
		L_52 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_51, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		V_0 = L_52;
		// return logJsonResponse;
		String_t* L_53 = V_0;
		return L_53;
	}
}
// System.String com.adjust.sdk.AdjustUtils::GetJsonString(com.adjust.sdk.JSONNode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1 (JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* ___0_node, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* V_0 = NULL;
	{
		// if (node == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_0 = ___0_node;
		bool L_1;
		L_1 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_0, NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_000b:
	{
		// var nodeValue = node[key] as JSONData;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = ___0_node;
		String_t* L_3 = ___1_key;
		NullCheck(L_2);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_4;
		L_4 = VirtualFuncInvoker1< JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97*, String_t* >::Invoke(7 /* com.adjust.sdk.JSONNode com.adjust.sdk.JSONNode::get_Item(System.String) */, L_2, L_3);
		V_0 = ((JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412*)IsInstClass((RuntimeObject*)L_4, JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412_il2cpp_TypeInfo_var));
		// if (nodeValue == null)
		JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* L_5 = V_0;
		bool L_6;
		L_6 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_5, NULL, NULL);
		if (!L_6)
		{
			goto IL_0023;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0023:
	{
		// if (nodeValue == "")
		JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* L_7 = V_0;
		bool L_8;
		L_8 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_7, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0032:
	{
		// return nodeValue.Value;
		JSONData_t7E8A504C9072A28C852BB209E0DE7E3DA1161412* L_9 = V_0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String com.adjust.sdk.JSONNode::get_Value() */, L_9);
		return L_10;
	}
}
// System.Void com.adjust.sdk.AdjustUtils::WriteJsonResponseDictionary(com.adjust.sdk.JSONClass,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED (JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* ___0_jsonObject, Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___1_output, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m01BD798AD7B3C3ABC6CFC7A4B9D7A410A0E8C066_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E V_1;
	memset((&V_1), 0, sizeof(V_1));
	JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* V_2 = NULL;
	String_t* V_3 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_4 = NULL;
	String_t* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		// foreach (KeyValuePair<string, JSONNode> pair in jsonObject)
		JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_0 = ___0_jsonObject;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = JSONClass_GetEnumerator_mC63BF81FA10F977320F60BFF46CDA748A7F09DAD(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_6;
					if (!L_3)
					{
						goto IL_0081;
					}
				}
				{
					RuntimeObject* L_4 = V_6;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0081:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0064_1;
			}

IL_0009_1:
			{
				// foreach (KeyValuePair<string, JSONNode> pair in jsonObject)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = ((*(KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E*)((KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E*)(KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E*)UnBox(L_6, KeyValuePair_2_t4DCC69D7653407AEFEEBFEED308DEAD714A01F6E_il2cpp_TypeInfo_var))));
				// var subNode = pair.Value.AsObject;
				JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_7;
				L_7 = KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_inline((&V_1), KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_RuntimeMethod_var);
				NullCheck(L_7);
				JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_8;
				L_8 = VirtualFuncInvoker0< JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* >::Invoke(27 /* com.adjust.sdk.JSONClass com.adjust.sdk.JSONNode::get_AsObject() */, L_7);
				V_2 = L_8;
				// var key = pair.Key;
				String_t* L_9;
				L_9 = KeyValuePair_2_get_Key_m01BD798AD7B3C3ABC6CFC7A4B9D7A410A0E8C066_inline((&V_1), KeyValuePair_2_get_Key_m01BD798AD7B3C3ABC6CFC7A4B9D7A410A0E8C066_RuntimeMethod_var);
				V_3 = L_9;
				// if (subNode == null)
				JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_10 = V_2;
				bool L_11;
				L_11 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_10, NULL, NULL);
				if (!L_11)
				{
					goto IL_004c_1;
				}
			}
			{
				// var value = pair.Value.Value;
				JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_12;
				L_12 = KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_inline((&V_1), KeyValuePair_2_get_Value_m9B7CF8794FDED0F052A78AA57AC88C205BE6B8FD_RuntimeMethod_var);
				NullCheck(L_12);
				String_t* L_13;
				L_13 = VirtualFuncInvoker0< String_t* >::Invoke(9 /* System.String com.adjust.sdk.JSONNode::get_Value() */, L_12);
				V_5 = L_13;
				// output.Add(key, value);
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_14 = ___1_output;
				String_t* L_15 = V_3;
				String_t* L_16 = V_5;
				NullCheck(L_14);
				Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_14, L_15, L_16, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
				// continue;
				goto IL_0064_1;
			}

IL_004c_1:
			{
				// var newSubDictionary = new Dictionary<string, object>();
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_17 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
				NullCheck(L_17);
				Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_17, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
				V_4 = L_17;
				// output.Add(key, newSubDictionary);
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_18 = ___1_output;
				String_t* L_19 = V_3;
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_20 = V_4;
				NullCheck(L_18);
				Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443(L_18, L_19, L_20, Dictionary_2_Add_m5875DF2ACE933D734119C088B2E7C9C63F49B443_RuntimeMethod_var);
				// WriteJsonResponseDictionary(subNode, newSubDictionary);
				JSONClass_t42103CB1D51E3167BF9750407778639AAD7D719B* L_21 = V_2;
				Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_22 = V_4;
				il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
				AdjustUtils_WriteJsonResponseDictionary_m45C6F803D1190D8144D7E3441A4CF870606463ED(L_21, L_22, NULL);
			}

IL_0064_1:
			{
				// foreach (KeyValuePair<string, JSONNode> pair in jsonObject)
				RuntimeObject* L_23 = V_0;
				NullCheck(L_23);
				bool L_24;
				L_24 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_23);
				if (L_24)
				{
					goto IL_0009_1;
				}
			}
			{
				goto IL_0082;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0082:
	{
		// }
		return;
	}
}
// System.String com.adjust.sdk.AdjustUtils::TryGetValue(System.Collections.Generic.Dictionary`2<System.String,System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_TryGetValue_m3BF1818C3435B2DD8794C6BF52073DE2D50A57E9 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_dictionary, String_t* ___1_key, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (dictionary.TryGetValue(key, out value))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_dictionary;
		String_t* L_1 = ___1_key;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mA86D965CB5F74CE8675B7995C61945BEB6E594CB_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// if (value == "")
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		if (!L_4)
		{
			goto IL_001a;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_001a:
	{
		// return value;
		String_t* L_5 = V_0;
		return L_5;
	}

IL_001c:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// System.Int32 com.adjust.sdk.AdjustUtils::GetSkad4ConversionValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdjustUtils_GetSkad4ConversionValue_mF1B95F499F7AECC0987FA3A4DD57E10F9582741E (String_t* ___0_conversionValueUpdate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var jsonNode = JSON.Parse(conversionValueUpdate);
		String_t* L_0 = ___0_conversionValueUpdate;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_1;
		L_1 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_0, NULL);
		V_0 = L_1;
		// if (jsonNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = V_0;
		bool L_3;
		L_3 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_2, NULL, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0012:
	{
		// string strConversionValue = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeySkadConversionValue);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadConversionValue_18;
		String_t* L_6;
		L_6 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_4, L_5, NULL);
		// int conversionValue = 0;
		V_1 = 0;
		// if (Int32.TryParse(strConversionValue, out conversionValue))
		bool L_7;
		L_7 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_6, (&V_1), NULL);
		if (!L_7)
		{
			goto IL_002a;
		}
	}
	{
		// return conversionValue;
		int32_t L_8 = V_1;
		return L_8;
	}

IL_002a:
	{
		// return -1;
		return (-1);
	}
}
// System.String com.adjust.sdk.AdjustUtils::GetSkad4CoarseValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdjustUtils_GetSkad4CoarseValue_m6A96D9597EAAD2D606A7B8730683A1870E324FCA (String_t* ___0_conversionValueUpdate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_0 = NULL;
	{
		// var jsonNode = JSON.Parse(conversionValueUpdate);
		String_t* L_0 = ___0_conversionValueUpdate;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_1;
		L_1 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_0, NULL);
		V_0 = L_1;
		// if (jsonNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = V_0;
		bool L_3;
		L_3 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_2, NULL, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0012:
	{
		// string coarseValue = AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeySkadCoarseValue);
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadCoarseValue_19;
		String_t* L_6;
		L_6 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_4, L_5, NULL);
		// return coarseValue;
		return L_6;
	}
}
// System.Boolean com.adjust.sdk.AdjustUtils::GetSkad4LockWindow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdjustUtils_GetSkad4LockWindow_mE9E55E3A5B683CDF1BF463568133655A4BEEA39C (String_t* ___0_conversionValueUpdate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* V_0 = NULL;
	{
		// var jsonNode = JSON.Parse(conversionValueUpdate);
		String_t* L_0 = ___0_conversionValueUpdate;
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_1;
		L_1 = JSON_Parse_m64D44E2E2DCDC73C4FC5A08B5D13F92209F2482E(L_0, NULL);
		V_0 = L_1;
		// if (jsonNode == null)
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_2 = V_0;
		bool L_3;
		L_3 = JSONNode_op_Equality_mF53AB65ABCF70E4C7D035DF059648FED12577634(L_2, NULL, NULL);
		if (!L_3)
		{
			goto IL_0012;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0012:
	{
		// bool lockWindow = Convert.ToBoolean(AdjustUtils.GetJsonString(jsonNode, AdjustUtils.KeySkadLockWindow));
		JSONNode_tC53BF5744519F4E94EEFA09E2186A2783A560D97* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_5 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadLockWindow_20;
		String_t* L_6;
		L_6 = AdjustUtils_GetJsonString_m7E4ABC127B656F2CF1D6D5C2973CCDC9345477A1(L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Convert_ToBoolean_m3DEA64CC166C14DD2B3461A04C227A05BC06DFEC(L_6, NULL);
		// return lockWindow;
		return L_7;
	}
}
// UnityEngine.AndroidJavaObject com.adjust.sdk.AdjustUtils::TestOptionsMap2AndroidJavaObject(System.Collections.Generic.Dictionary`2<System.String,System.String>,UnityEngine.AndroidJavaObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* AdjustUtils_TestOptionsMap2AndroidJavaObject_m898CB8FB47E84D854197B546786A2AD9C160FCAB (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_testOptionsMap, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* ___1_ajoCurrentActivity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25E049EC7B4CD14D8602F67EE0C37C9AB40177F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6F6EDA7F146F65D72B4809F9E8F843CC687A82AE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA02A5838DA1B746B34D0B4661576E1D6ED6515);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCED2B25A49F5AB8A840818C053B996994270607);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C);
		s_Il2CppMethodInitialized = true;
	}
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_0 = NULL;
	bool V_1 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_2 = NULL;
	int64_t V_3 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_4 = NULL;
	int64_t V_5 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_6 = NULL;
	int64_t V_7 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_8 = NULL;
	int64_t V_9 = 0;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_10 = NULL;
	bool V_11 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_12 = NULL;
	bool V_13 = false;
	AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* V_14 = NULL;
	{
		// AndroidJavaObject ajoTestOptions = new AndroidJavaObject("com.adjust.sdk.AdjustTestOptions");
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_1 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_1, _stringLiteralACA02A5838DA1B746B34D0B4661576E1D6ED6515, L_0, NULL);
		V_0 = L_1;
		// ajoTestOptions.Set<String>("baseUrl", testOptionsMap[KeyTestOptionsBaseUrl]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_2 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_4 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsBaseUrl_21;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_3, L_4, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_2);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_2, _stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46, L_5, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// ajoTestOptions.Set<String>("gdprUrl", testOptionsMap[KeyTestOptionsGdprUrl]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_6 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_7 = ___0_testOptionsMap;
		String_t* L_8 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsGdprUrl_22;
		NullCheck(L_7);
		String_t* L_9;
		L_9 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_7, L_8, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_6);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_6, _stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888, L_9, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// ajoTestOptions.Set<String>("subscriptionUrl", testOptionsMap[KeyTestOptionsSubscriptionUrl]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_10 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_11 = ___0_testOptionsMap;
		String_t* L_12 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubscriptionUrl_23;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_11, L_12, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_10);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_10, _stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C, L_13, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// if (testOptionsMap.ContainsKey(KeyTestOptionsExtraPath) && !string.IsNullOrEmpty(testOptionsMap[KeyTestOptionsExtraPath]))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_14 = ___0_testOptionsMap;
		String_t* L_15 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_24;
		NullCheck(L_14);
		bool L_16;
		L_16 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_14, L_15, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_00b3;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_17 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_18 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_24;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_17, L_18, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		bool L_20;
		L_20 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_19, NULL);
		if (L_20)
		{
			goto IL_00b3;
		}
	}
	{
		// ajoTestOptions.Set<String>("basePath", testOptionsMap[KeyTestOptionsExtraPath]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_21 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_22 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_23 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_24;
		NullCheck(L_22);
		String_t* L_24;
		L_24 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_22, L_23, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_21);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_21, _stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84, L_24, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// ajoTestOptions.Set<String>("gdprPath", testOptionsMap[KeyTestOptionsExtraPath]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_25 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_26 = ___0_testOptionsMap;
		String_t* L_27 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_24;
		NullCheck(L_26);
		String_t* L_28;
		L_28 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_26, L_27, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_25);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_25, _stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309, L_28, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
		// ajoTestOptions.Set<String>("subscriptionPath", testOptionsMap[KeyTestOptionsExtraPath]);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_29 = V_0;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_30 = ___0_testOptionsMap;
		String_t* L_31 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_24;
		NullCheck(L_30);
		String_t* L_32;
		L_32 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_30, L_31, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_29);
		AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE(L_29, _stringLiteral25E049EC7B4CD14D8602F67EE0C37C9AB40177F0, L_32, AndroidJavaObject_Set_TisString_t_mC45E99DE5239B327CDD9B412DEADE7EA827797DE_RuntimeMethod_var);
	}

IL_00b3:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsDeleteState) && ajoCurrentActivity != null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_33 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_34 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsDeleteState_27;
		NullCheck(L_33);
		bool L_35;
		L_35 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_33, L_34, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_35)
		{
			goto IL_00cf;
		}
	}
	{
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_36 = ___1_ajoCurrentActivity;
		if (!L_36)
		{
			goto IL_00cf;
		}
	}
	{
		// ajoTestOptions.Set<AndroidJavaObject>("context", ajoCurrentActivity);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_37 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_38 = ___1_ajoCurrentActivity;
		NullCheck(L_37);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_37, _stringLiteral6F6EDA7F146F65D72B4809F9E8F843CC687A82AE, L_38, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_00cf:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsUseTestConnectionOptions))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_39 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_40 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsUseTestConnectionOptions_28;
		NullCheck(L_39);
		bool L_41;
		L_41 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_39, L_40, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_41)
		{
			goto IL_011d;
		}
	}
	{
		// bool useTestConnectionOptions = testOptionsMap[KeyTestOptionsUseTestConnectionOptions].ToLower() == "true";
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_42 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_43 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsUseTestConnectionOptions_28;
		NullCheck(L_42);
		String_t* L_44;
		L_44 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_42, L_43, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_44);
		String_t* L_45;
		L_45 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_44, NULL);
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		V_1 = L_46;
		// AndroidJavaObject ajoUseTestConnectionOptions = new AndroidJavaObject("java.lang.Boolean", useTestConnectionOptions);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = L_47;
		bool L_49 = V_1;
		bool L_50 = L_49;
		RuntimeObject* L_51 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_50);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_51);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_51);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_52 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_52, _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_48, NULL);
		V_2 = L_52;
		// ajoTestOptions.Set<AndroidJavaObject>("useTestConnectionOptions", ajoUseTestConnectionOptions);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_53 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_54 = V_2;
		NullCheck(L_53);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_53, _stringLiteralCCED2B25A49F5AB8A840818C053B996994270607, L_54, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_011d:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsTimerIntervalInMilliseconds))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_55 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_56 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerIntervalInMilliseconds_29;
		NullCheck(L_55);
		bool L_57;
		L_57 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_55, L_56, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_57)
		{
			goto IL_0163;
		}
	}
	{
		// var timerIntervalInMilliseconds = long.Parse(testOptionsMap[KeyTestOptionsTimerIntervalInMilliseconds]);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_58 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_59 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerIntervalInMilliseconds_29;
		NullCheck(L_58);
		String_t* L_60;
		L_60 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_58, L_59, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		int64_t L_61;
		L_61 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(L_60, NULL);
		V_3 = L_61;
		// AndroidJavaObject ajoTimerIntervalInMilliseconds = new AndroidJavaObject("java.lang.Long", timerIntervalInMilliseconds);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_62 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_63 = L_62;
		int64_t L_64 = V_3;
		int64_t L_65 = L_64;
		RuntimeObject* L_66 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_65);
		NullCheck(L_63);
		ArrayElementTypeCheck (L_63, L_66);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_66);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_67 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_67, _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_63, NULL);
		V_4 = L_67;
		// ajoTestOptions.Set<AndroidJavaObject>("timerIntervalInMilliseconds", ajoTimerIntervalInMilliseconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_68 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_69 = V_4;
		NullCheck(L_68);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_68, _stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36, L_69, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_0163:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsTimerStartInMilliseconds))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_70 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_71 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerStartInMilliseconds_30;
		NullCheck(L_70);
		bool L_72;
		L_72 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_70, L_71, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_72)
		{
			goto IL_01ab;
		}
	}
	{
		// var timerStartInMilliseconds = long.Parse(testOptionsMap[KeyTestOptionsTimerStartInMilliseconds]);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_73 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_74 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerStartInMilliseconds_30;
		NullCheck(L_73);
		String_t* L_75;
		L_75 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_73, L_74, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		int64_t L_76;
		L_76 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(L_75, NULL);
		V_5 = L_76;
		// AndroidJavaObject ajoTimerStartInMilliseconds = new AndroidJavaObject("java.lang.Long", timerStartInMilliseconds);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_77 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_78 = L_77;
		int64_t L_79 = V_5;
		int64_t L_80 = L_79;
		RuntimeObject* L_81 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_80);
		NullCheck(L_78);
		ArrayElementTypeCheck (L_78, L_81);
		(L_78)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_81);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_82 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_82);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_82, _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_78, NULL);
		V_6 = L_82;
		// ajoTestOptions.Set<AndroidJavaObject>("timerStartInMilliseconds", ajoTimerStartInMilliseconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_83 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_84 = V_6;
		NullCheck(L_83);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_83, _stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86, L_84, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_01ab:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsSessionIntervalInMilliseconds))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_85 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_86 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSessionIntervalInMilliseconds_31;
		NullCheck(L_85);
		bool L_87;
		L_87 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_85, L_86, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_87)
		{
			goto IL_01f3;
		}
	}
	{
		// var sessionIntervalInMilliseconds = long.Parse(testOptionsMap[KeyTestOptionsSessionIntervalInMilliseconds]);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_88 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_89 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSessionIntervalInMilliseconds_31;
		NullCheck(L_88);
		String_t* L_90;
		L_90 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_88, L_89, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		int64_t L_91;
		L_91 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(L_90, NULL);
		V_7 = L_91;
		// AndroidJavaObject ajoSessionIntervalInMilliseconds = new AndroidJavaObject("java.lang.Long", sessionIntervalInMilliseconds);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_92 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_93 = L_92;
		int64_t L_94 = V_7;
		int64_t L_95 = L_94;
		RuntimeObject* L_96 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_95);
		NullCheck(L_93);
		ArrayElementTypeCheck (L_93, L_96);
		(L_93)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_96);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_97 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_97);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_97, _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_93, NULL);
		V_8 = L_97;
		// ajoTestOptions.Set<AndroidJavaObject>("sessionIntervalInMilliseconds", ajoSessionIntervalInMilliseconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_98 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_99 = V_8;
		NullCheck(L_98);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_98, _stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467, L_99, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_01f3:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsSubsessionIntervalInMilliseconds))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_100 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_101 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubsessionIntervalInMilliseconds_32;
		NullCheck(L_100);
		bool L_102;
		L_102 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_100, L_101, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_102)
		{
			goto IL_023b;
		}
	}
	{
		// var subsessionIntervalInMilliseconds = long.Parse(testOptionsMap[KeyTestOptionsSubsessionIntervalInMilliseconds]);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_103 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_104 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubsessionIntervalInMilliseconds_32;
		NullCheck(L_103);
		String_t* L_105;
		L_105 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_103, L_104, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		int64_t L_106;
		L_106 = Int64_Parse_m466621B41F074263D83527F8FC85405AEF6CDEE6(L_105, NULL);
		V_9 = L_106;
		// AndroidJavaObject ajoSubsessionIntervalInMilliseconds = new AndroidJavaObject("java.lang.Long", subsessionIntervalInMilliseconds);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_107 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_108 = L_107;
		int64_t L_109 = V_9;
		int64_t L_110 = L_109;
		RuntimeObject* L_111 = Box(Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var, &L_110);
		NullCheck(L_108);
		ArrayElementTypeCheck (L_108, L_111);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_111);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_112 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_112);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_112, _stringLiteral8D72771221931EA82C15C15FDE3ED02FC39BD069, L_108, NULL);
		V_10 = L_112;
		// ajoTestOptions.Set<AndroidJavaObject>("subsessionIntervalInMilliseconds", ajoSubsessionIntervalInMilliseconds);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_113 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_114 = V_10;
		NullCheck(L_113);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_113, _stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C, L_114, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_023b:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsTeardown))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_115 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_116 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTeardown_33;
		NullCheck(L_115);
		bool L_117;
		L_117 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_115, L_116, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_117)
		{
			goto IL_028d;
		}
	}
	{
		// bool teardown = testOptionsMap[KeyTestOptionsTeardown].ToLower() == "true";
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_118 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_119 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTeardown_33;
		NullCheck(L_118);
		String_t* L_120;
		L_120 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_118, L_119, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_120);
		String_t* L_121;
		L_121 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_120, NULL);
		bool L_122;
		L_122 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_121, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		V_11 = L_122;
		// AndroidJavaObject ajoTeardown = new AndroidJavaObject("java.lang.Boolean", teardown);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_123 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_124 = L_123;
		bool L_125 = V_11;
		bool L_126 = L_125;
		RuntimeObject* L_127 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_126);
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, L_127);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_127);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_128 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_128);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_128, _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_124, NULL);
		V_12 = L_128;
		// ajoTestOptions.Set<AndroidJavaObject>("teardown", ajoTeardown);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_129 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_130 = V_12;
		NullCheck(L_129);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_129, _stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12, L_130, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_028d:
	{
		// if (testOptionsMap.ContainsKey(KeyTestOptionsNoBackoffWait))
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_131 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_132 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsNoBackoffWait_34;
		NullCheck(L_131);
		bool L_133;
		L_133 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_131, L_132, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (!L_133)
		{
			goto IL_02df;
		}
	}
	{
		// bool noBackoffWait = testOptionsMap[KeyTestOptionsNoBackoffWait].ToLower() == "true";
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_134 = ___0_testOptionsMap;
		il2cpp_codegen_runtime_class_init_inline(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		String_t* L_135 = ((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsNoBackoffWait_34;
		NullCheck(L_134);
		String_t* L_136;
		L_136 = Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB(L_134, L_135, Dictionary_2_get_Item_mB13DFB3E7499031847CF544977D4EFB1AC0157AB_RuntimeMethod_var);
		NullCheck(L_136);
		String_t* L_137;
		L_137 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_136, NULL);
		bool L_138;
		L_138 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_137, _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2, NULL);
		V_13 = L_138;
		// AndroidJavaObject ajoNoBackoffWait = new AndroidJavaObject("java.lang.Boolean", noBackoffWait);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_139 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_140 = L_139;
		bool L_141 = V_13;
		bool L_142 = L_141;
		RuntimeObject* L_143 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_142);
		NullCheck(L_140);
		ArrayElementTypeCheck (L_140, L_143);
		(L_140)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_143);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_144 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_144);
		AndroidJavaObject__ctor_m5A65B5D325C2CEFAC4097A0D3813F8E158178DD7(L_144, _stringLiteral1C58321BD3C0DE4662E8E68A19634DEAC58F3251, L_140, NULL);
		V_14 = L_144;
		// ajoTestOptions.Set<AndroidJavaObject>("noBackoffWait", ajoNoBackoffWait);
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_145 = V_0;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_146 = V_14;
		NullCheck(L_145);
		AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2(L_145, _stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3, L_146, AndroidJavaObject_Set_TisAndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_mB31B4CD1FC5DFAABED4F3B6287A47C6A062C4BB2_RuntimeMethod_var);
	}

IL_02df:
	{
		// return ajoTestOptions;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_147 = V_0;
		return L_147;
	}
}
// System.Void com.adjust.sdk.AdjustUtils::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustUtils__ctor_mEE74F3B9A26BAE12B3C426FF63604FD7396544A2 (AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void com.adjust.sdk.AdjustUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdjustUtils__cctor_m4489DD780E5669549E8C7EDAF985BDEC7AC456E1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05E4ED4BBD99C86DD56D953A9D396662EB0F131F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06AFF2D4AB1C22D067B63A6E037A3DB80AA69664);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09F6BF5807F21976DC5A8B817678D0F3CA09B367);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E7889CA73C20C46B2F66AD10574288C6588120D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral199406D22C247C128830321CCA0F0AA8B9EA8AF2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral252C0671443017876C13A4B1405734D0B2A251E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D5ED547017EE65E294DEE1E52D286F1875F1660);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral587E53A8030FB45502AD4B59E2E80ED12683441E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C0B39AFA1D09BF84C4FF1412FDD072EBFBD3124);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ED04C43CC8F7FBE8FFFF015C5538190204F9C6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69711252401E05EA08F1FC661CC7158162B64332);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C3D1606B345A91CAEF8856B890202C2FB91632A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79129E77C99D9B997190424687919AB33976D848);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D046F7A5E043071C26805C1E921D468CAB706D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E6B368D708695D844FB24A36D0437AFFE064A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94FFD26B9FC865144CCBD5729EA8FAFF93163FB4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9ACD0102DF47E7CF98E660BDDEC79497C54A8EB3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F85DBEFEA5FADBE3465375963EFAA0318BDEB3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC122FD1744C24B2A4C733C7189953AF4AF702474);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC3135654FE5454A443D0D19C37529E7EE6B1408);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCED2B25A49F5AB8A840818C053B996994270607);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5A3CA0977C7EAB9154A7C6E8BEA40D60065C347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE7F2E90C1A80816B11CAE0EA9389988CBD19F97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string KeyAdid = "adid";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0 = _stringLiteral87E6B368D708695D844FB24A36D0437AFFE064A0;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdid_0), (void*)_stringLiteral87E6B368D708695D844FB24A36D0437AFFE064A0);
		// public static string KeyMessage = "message";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1 = _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyMessage_1), (void*)_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		// public static string KeyNetwork = "network";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyNetwork_2 = _stringLiteral199406D22C247C128830321CCA0F0AA8B9EA8AF2;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyNetwork_2), (void*)_stringLiteral199406D22C247C128830321CCA0F0AA8B9EA8AF2);
		// public static string KeyAdgroup = "adgroup";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdgroup_3 = _stringLiteral252C0671443017876C13A4B1405734D0B2A251E4;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyAdgroup_3), (void*)_stringLiteral252C0671443017876C13A4B1405734D0B2A251E4);
		// public static string KeyCampaign = "campaign";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCampaign_4 = _stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCampaign_4), (void*)_stringLiteral2492F08BCEBC6B4E86EA52B2DAFD8538DB7CCA9C);
		// public static string KeyCreative = "creative";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCreative_5 = _stringLiteral3D5ED547017EE65E294DEE1E52D286F1875F1660;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCreative_5), (void*)_stringLiteral3D5ED547017EE65E294DEE1E52D286F1875F1660);
		// public static string KeyWillRetry = "willRetry";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyWillRetry_6 = _stringLiteralC122FD1744C24B2A4C733C7189953AF4AF702474;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyWillRetry_6), (void*)_stringLiteralC122FD1744C24B2A4C733C7189953AF4AF702474);
		// public static string KeyTimestamp = "timestamp";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7 = _stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTimestamp_7), (void*)_stringLiteralCCE359C6B0ABE9D58CB588667F9A93BA52A1C294);
		// public static string KeyCallbackId = "callbackId";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCallbackId_8 = _stringLiteral69711252401E05EA08F1FC661CC7158162B64332;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCallbackId_8), (void*)_stringLiteral69711252401E05EA08F1FC661CC7158162B64332);
		// public static string KeyEventToken = "eventToken";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyEventToken_9 = _stringLiteral79129E77C99D9B997190424687919AB33976D848;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyEventToken_9), (void*)_stringLiteral79129E77C99D9B997190424687919AB33976D848);
		// public static string KeyClickLabel = "clickLabel";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyClickLabel_10 = _stringLiteral0E7889CA73C20C46B2F66AD10574288C6588120D;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyClickLabel_10), (void*)_stringLiteral0E7889CA73C20C46B2F66AD10574288C6588120D);
		// public static string KeyTrackerName = "trackerName";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerName_11 = _stringLiteral5C0B39AFA1D09BF84C4FF1412FDD072EBFBD3124;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerName_11), (void*)_stringLiteral5C0B39AFA1D09BF84C4FF1412FDD072EBFBD3124);
		// public static string KeyTrackerToken = "trackerToken";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerToken_12 = _stringLiteral5ED04C43CC8F7FBE8FFFF015C5538190204F9C6B;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTrackerToken_12), (void*)_stringLiteral5ED04C43CC8F7FBE8FFFF015C5538190204F9C6B);
		// public static string KeyJsonResponse = "jsonResponse";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13 = _stringLiteral9ACD0102DF47E7CF98E660BDDEC79497C54A8EB3;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyJsonResponse_13), (void*)_stringLiteral9ACD0102DF47E7CF98E660BDDEC79497C54A8EB3);
		// public static string KeyCostType = "costType";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostType_14 = _stringLiteral587E53A8030FB45502AD4B59E2E80ED12683441E;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostType_14), (void*)_stringLiteral587E53A8030FB45502AD4B59E2E80ED12683441E);
		// public static string KeyCostAmount = "costAmount";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostAmount_15 = _stringLiteralD5A3CA0977C7EAB9154A7C6E8BEA40D60065C347;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostAmount_15), (void*)_stringLiteralD5A3CA0977C7EAB9154A7C6E8BEA40D60065C347);
		// public static string KeyCostCurrency = "costCurrency";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostCurrency_16 = _stringLiteralEE7F2E90C1A80816B11CAE0EA9389988CBD19F97;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyCostCurrency_16), (void*)_stringLiteralEE7F2E90C1A80816B11CAE0EA9389988CBD19F97);
		// public static string KeyFbInstallReferrer = "fbInstallReferrer";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyFbInstallReferrer_17 = _stringLiteral06AFF2D4AB1C22D067B63A6E037A3DB80AA69664;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyFbInstallReferrer_17), (void*)_stringLiteral06AFF2D4AB1C22D067B63A6E037A3DB80AA69664);
		// public static string KeySkadConversionValue = "fineValue";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadConversionValue_18 = _stringLiteral6C3D1606B345A91CAEF8856B890202C2FB91632A;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadConversionValue_18), (void*)_stringLiteral6C3D1606B345A91CAEF8856B890202C2FB91632A);
		// public static string KeySkadCoarseValue = "coarseValue";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadCoarseValue_19 = _stringLiteral94FFD26B9FC865144CCBD5729EA8FAFF93163FB4;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadCoarseValue_19), (void*)_stringLiteral94FFD26B9FC865144CCBD5729EA8FAFF93163FB4);
		// public static string KeySkadLockWindow = "lockWindow";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadLockWindow_20 = _stringLiteral05E4ED4BBD99C86DD56D953A9D396662EB0F131F;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeySkadLockWindow_20), (void*)_stringLiteral05E4ED4BBD99C86DD56D953A9D396662EB0F131F);
		// public static string KeyTestOptionsBaseUrl = "baseUrl";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsBaseUrl_21 = _stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsBaseUrl_21), (void*)_stringLiteral62EEE5AB24B108CBF7AD1EA8323A060FA5C4FF46);
		// public static string KeyTestOptionsGdprUrl = "gdprUrl";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsGdprUrl_22 = _stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsGdprUrl_22), (void*)_stringLiteralD8A485D101F805D29BFCDD25C667CB04AD5CC888);
		// public static string KeyTestOptionsSubscriptionUrl = "subscriptionUrl";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubscriptionUrl_23 = _stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubscriptionUrl_23), (void*)_stringLiteralEC54F561E7F139CCBA98C2FC655446C34C074D4C);
		// public static string KeyTestOptionsExtraPath = "extraPath";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_24 = _stringLiteral9F85DBEFEA5FADBE3465375963EFAA0318BDEB3E;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsExtraPath_24), (void*)_stringLiteral9F85DBEFEA5FADBE3465375963EFAA0318BDEB3E);
		// public static string KeyTestOptionsBasePath = "basePath";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsBasePath_25 = _stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsBasePath_25), (void*)_stringLiteral5F02F365CDC640D33E644AC0D33DF8A23652EC84);
		// public static string KeyTestOptionsGdprPath = "gdprPath";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsGdprPath_26 = _stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsGdprPath_26), (void*)_stringLiteralB3C02481F1EF6B21AC4FFB169F97120EA8E71309);
		// public static string KeyTestOptionsDeleteState = "deleteState";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsDeleteState_27 = _stringLiteralCC3135654FE5454A443D0D19C37529E7EE6B1408;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsDeleteState_27), (void*)_stringLiteralCC3135654FE5454A443D0D19C37529E7EE6B1408);
		// public static string KeyTestOptionsUseTestConnectionOptions = "useTestConnectionOptions";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsUseTestConnectionOptions_28 = _stringLiteralCCED2B25A49F5AB8A840818C053B996994270607;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsUseTestConnectionOptions_28), (void*)_stringLiteralCCED2B25A49F5AB8A840818C053B996994270607);
		// public static string KeyTestOptionsTimerIntervalInMilliseconds = "timerIntervalInMilliseconds";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerIntervalInMilliseconds_29 = _stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerIntervalInMilliseconds_29), (void*)_stringLiteralF64BAE12AD307231B0FE01E55EB3DE58705EAE36);
		// public static string KeyTestOptionsTimerStartInMilliseconds = "timerStartInMilliseconds";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerStartInMilliseconds_30 = _stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTimerStartInMilliseconds_30), (void*)_stringLiteralCCE5B17A5BD05AD9EF1BD09EF01F0A033B402D86);
		// public static string KeyTestOptionsSessionIntervalInMilliseconds = "sessionIntervalInMilliseconds";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSessionIntervalInMilliseconds_31 = _stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSessionIntervalInMilliseconds_31), (void*)_stringLiteralF931DEE4A87FE21CBBACC583499FBCF32B68B467);
		// public static string KeyTestOptionsSubsessionIntervalInMilliseconds = "subsessionIntervalInMilliseconds";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubsessionIntervalInMilliseconds_32 = _stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsSubsessionIntervalInMilliseconds_32), (void*)_stringLiteralFC0ADAE748048E8066A24C5A9E285FE94437F54C);
		// public static string KeyTestOptionsTeardown = "teardown";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTeardown_33 = _stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsTeardown_33), (void*)_stringLiteralD4C9D2736EA3E360FBB7AB6F8774B3D92E886B12);
		// public static string KeyTestOptionsNoBackoffWait = "noBackoffWait";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsNoBackoffWait_34 = _stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsNoBackoffWait_34), (void*)_stringLiteral79FCA40744698D355AA21CA8D1C6D723796755E3);
		// public static string KeyTestOptionsiAdFrameworkEnabled = "iAdFrameworkEnabled";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsiAdFrameworkEnabled_35 = _stringLiteral7D046F7A5E043071C26805C1E921D468CAB706D4;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsiAdFrameworkEnabled_35), (void*)_stringLiteral7D046F7A5E043071C26805C1E921D468CAB706D4);
		// public static string KeyTestOptionsAdServicesFrameworkEnabled = "adServicesFrameworkEnabled";
		((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsAdServicesFrameworkEnabled_36 = _stringLiteral09F6BF5807F21976DC5A8B817678D0F3CA09B367;
		Il2CppCodeGenWriteBarrier((void**)(&((AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_StaticFields*)il2cpp_codegen_static_fields_for(AdjustUtils_t6E7EE6AEF4EAC64EA2764254CA559FA0012A256A_il2cpp_TypeInfo_var))->___KeyTestOptionsAdServicesFrameworkEnabled_36), (void*)_stringLiteral09F6BF5807F21976DC5A8B817678D0F3CA09B367);
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___0_s, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_s;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___0_s;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___0_s;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_gshared_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mC082C667C8EB3A6CA80E06BCAEA0BED00C6BC15A_gshared_inline (Nullable_1_t6E154519A812D040E3016229CD7638843A2CC165* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mCF2FD8B3055FA87FC9C504F2122B3B0FAEDE3EC9_gshared_inline (Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB4991C0F4C2664AB3CB2584DEECF5BCE6AB7757D_gshared_inline (Nullable_1_t365991B3904FDA7642A788423B28692FDC7CDB17* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
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
