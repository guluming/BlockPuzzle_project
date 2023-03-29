#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void FlurrySDKInternal.FlurryAgent::SetContinueSessionMillis(System.Int64)
// 0x00000002 System.Void FlurrySDKInternal.FlurryAgent::SetCrashReporting(System.Boolean)
// 0x00000003 System.Void FlurrySDKInternal.FlurryAgent::SetIncludeBackgroundSessionsInMetrics(System.Boolean)
// 0x00000004 System.Void FlurrySDKInternal.FlurryAgent::SetLogEnabled(System.Boolean)
// 0x00000005 System.Void FlurrySDKInternal.FlurryAgent::SetLogLevel(FlurrySDK.Flurry/LogLevel)
// 0x00000006 System.Void FlurrySDKInternal.FlurryAgent::SetSslPinningEnabled(System.Boolean)
// 0x00000007 System.Void FlurrySDKInternal.FlurryAgent::SetAge(System.Int32)
// 0x00000008 System.Void FlurrySDKInternal.FlurryAgent::SetGender(FlurrySDK.Flurry/Gender)
// 0x00000009 System.Void FlurrySDKInternal.FlurryAgent::SetReportLocation(System.Boolean)
// 0x0000000A System.Void FlurrySDKInternal.FlurryAgent::SetSessionOrigin(System.String,System.String)
// 0x0000000B System.Void FlurrySDKInternal.FlurryAgent::SetUserId(System.String)
// 0x0000000C System.Void FlurrySDKInternal.FlurryAgent::SetVersionName(System.String)
// 0x0000000D System.Void FlurrySDKInternal.FlurryAgent::AddOrigin(System.String,System.String)
// 0x0000000E System.Void FlurrySDKInternal.FlurryAgent::AddOrigin(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x0000000F System.Void FlurrySDKInternal.FlurryAgent::AddSessionProperty(System.String,System.String)
// 0x00000010 System.Void FlurrySDKInternal.FlurryAgent::SetDataSaleOptOut(System.Boolean)
// 0x00000011 System.Void FlurrySDKInternal.FlurryAgent::DeleteData()
// 0x00000012 System.Void FlurrySDKInternal.FlurryAgent::OpenPrivacyDashboard()
// 0x00000013 System.Int32 FlurrySDKInternal.FlurryAgent::GetAgentVersion()
// 0x00000014 System.String FlurrySDKInternal.FlurryAgent::GetReleaseVersion()
// 0x00000015 System.String FlurrySDKInternal.FlurryAgent::GetSessionId()
// 0x00000016 System.Int32 FlurrySDKInternal.FlurryAgent::LogEvent(System.String)
// 0x00000017 System.Int32 FlurrySDKInternal.FlurryAgent::LogEvent(System.String,System.Boolean)
// 0x00000018 System.Int32 FlurrySDKInternal.FlurryAgent::LogEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000019 System.Int32 FlurrySDKInternal.FlurryAgent::LogEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Boolean)
// 0x0000001A System.Void FlurrySDKInternal.FlurryAgent::EndTimedEvent(System.String)
// 0x0000001B System.Void FlurrySDKInternal.FlurryAgent::EndTimedEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x0000001C System.Int32 FlurrySDKInternal.FlurryAgent::LogEvent(FlurrySDK.Flurry/Event,FlurrySDK.Flurry/EventParams)
// 0x0000001D System.Void FlurrySDKInternal.FlurryAgent::OnPageView()
// 0x0000001E System.Void FlurrySDKInternal.FlurryAgent::OnError(System.String,System.String,System.String)
// 0x0000001F System.Void FlurrySDKInternal.FlurryAgent::OnError(System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000020 System.Void FlurrySDKInternal.FlurryAgent::LogBreadcrumb(System.String)
// 0x00000021 System.Int32 FlurrySDKInternal.FlurryAgent::LogPayment(System.String,System.String,System.Int32,System.Double,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x00000022 System.Void FlurrySDKInternal.FlurryAgent::SetIAPReportingEnabled(System.Boolean)
// 0x00000023 System.Void FlurrySDKInternal.FlurryAgent::UpdateConversionValue(System.Int32)
// 0x00000024 System.Void FlurrySDKInternal.FlurryAgent::UpdateConversionValueWithEvent(FlurrySDK.Flurry/SKAdNetworkEvent)
// 0x00000025 System.Void FlurrySDKInternal.FlurryAgent::SetMessagingListener(FlurrySDK.Flurry/IMessagingListener)
// 0x00000026 System.Collections.Generic.IDictionary`2<System.String,System.String> FlurrySDKInternal.FlurryAgent::GetPublisherSegmentation()
// 0x00000027 System.Void FlurrySDKInternal.FlurryAgent::FetchPublisherSegmentation()
// 0x00000028 System.Void FlurrySDKInternal.FlurryAgent::SetPublisherSegmentationListener(FlurrySDK.Flurry/IFlurryPublisherSegmentationListener)
// 0x00000029 System.Void FlurrySDKInternal.FlurryAgent::Dispose()
// 0x0000002A System.Void FlurrySDKInternal.FlurryAgent::.ctor()
extern void FlurryAgent__ctor_mC8068385ECEDB3BFD05AC21EF615B6712CED70F1 (void);
// 0x0000002B System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::Build(System.String)
// 0x0000002C System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithAppVersion(System.String)
// 0x0000002D System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithContinueSessionMillis(System.Int64)
// 0x0000002E System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithCrashReporting(System.Boolean)
// 0x0000002F System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithIncludeBackgroundSessionsInMetrics(System.Boolean)
// 0x00000030 System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithLogEnabled(System.Boolean)
// 0x00000031 System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithLogLevel(FlurrySDK.Flurry/LogLevel)
// 0x00000032 System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithReportLocation(System.Boolean)
// 0x00000033 System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithMessaging(System.Boolean,FlurrySDK.Flurry/IMessagingListener)
// 0x00000034 System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithDataSaleOptOut(System.Boolean)
// 0x00000035 System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithPerformanceMetrics(System.Int32)
// 0x00000036 System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::WithSslPinningEnabled(System.Boolean)
// 0x00000037 System.Void FlurrySDKInternal.FlurryAgent/AgentBuilder::.ctor()
extern void AgentBuilder__ctor_mC3AF259B904B9731705C0916A70D564410723983 (void);
// 0x00000038 System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::Set(System.String,System.String)
// 0x00000039 System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::Set(System.String,System.Collections.Generic.List`1<System.String>)
// 0x0000003A System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::Add(System.String,System.String)
// 0x0000003B System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::Add(System.String,System.Collections.Generic.List`1<System.String>)
// 0x0000003C System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::Remove(System.String,System.String)
// 0x0000003D System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::Remove(System.String,System.Collections.Generic.List`1<System.String>)
// 0x0000003E System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::Remove(System.String)
// 0x0000003F System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::Flag(System.String)
// 0x00000040 System.Void FlurrySDKInternal.FlurryAgent/AgentUserProperties::.ctor()
extern void AgentUserProperties__ctor_mCAEC2A99DD1D818B0CB161FCA98E836A1D14304B (void);
// 0x00000041 System.Void FlurrySDKInternal.FlurryAgent/AgentPerformance::ReportFullyDrawn()
// 0x00000042 System.Void FlurrySDKInternal.FlurryAgent/AgentPerformance::StartResourceLogger()
// 0x00000043 System.Void FlurrySDKInternal.FlurryAgent/AgentPerformance::LogResourceLogger(System.String)
// 0x00000044 System.Void FlurrySDKInternal.FlurryAgent/AgentPerformance::.ctor()
extern void AgentPerformance__ctor_m2DDDD20B9F377F7A1BDEE8B1D0B04CDB43B6DF97 (void);
// 0x00000045 System.Void FlurrySDKInternal.FlurryAgent/AgentConfig::Fetch()
// 0x00000046 System.Void FlurrySDKInternal.FlurryAgent/AgentConfig::Activate()
// 0x00000047 System.Void FlurrySDKInternal.FlurryAgent/AgentConfig::SetListener(FlurrySDK.Flurry/IConfigListener)
// 0x00000048 System.String FlurrySDKInternal.FlurryAgent/AgentConfig::GetString(System.String,System.String)
// 0x00000049 System.Void FlurrySDKInternal.FlurryAgent/AgentConfig::.ctor()
extern void AgentConfig__ctor_mAA639CA3070EC37B2FA128E1C2842824E4647FAD (void);
// 0x0000004A System.Void FlurrySDKInternal.FlurryAgent/AgentPublisherSegmentation::Fetch()
// 0x0000004B System.Void FlurrySDKInternal.FlurryAgent/AgentPublisherSegmentation::SetListener(FlurrySDK.Flurry/IPublisherSegmentationListener)
// 0x0000004C System.Collections.Generic.IDictionary`2<System.String,System.String> FlurrySDKInternal.FlurryAgent/AgentPublisherSegmentation::GetData()
// 0x0000004D System.Void FlurrySDKInternal.FlurryAgent/AgentPublisherSegmentation::.ctor()
extern void AgentPublisherSegmentation__ctor_mD5994473BF035B1000C5833FB3E605CE317F3243 (void);
// 0x0000004E System.Void FlurrySDKInternal.FlurryAgentAndroid::SetContinueSessionMillis(System.Int64)
extern void FlurryAgentAndroid_SetContinueSessionMillis_m4431CB03795CFBF8B66545974CA803CCEC99A6B0 (void);
// 0x0000004F System.Void FlurrySDKInternal.FlurryAgentAndroid::SetCrashReporting(System.Boolean)
extern void FlurryAgentAndroid_SetCrashReporting_m474A462B4F78DD7B3A60B83113CC5BBFE8594D30 (void);
// 0x00000050 System.Void FlurrySDKInternal.FlurryAgentAndroid::SetIncludeBackgroundSessionsInMetrics(System.Boolean)
extern void FlurryAgentAndroid_SetIncludeBackgroundSessionsInMetrics_m31CF909FC4E49DB0208967CB0AF29F4F80BC9ABD (void);
// 0x00000051 System.Void FlurrySDKInternal.FlurryAgentAndroid::SetLogEnabled(System.Boolean)
extern void FlurryAgentAndroid_SetLogEnabled_m9DEB6E5938D50BE74C77BE1908431FC21EF210E8 (void);
// 0x00000052 System.Void FlurrySDKInternal.FlurryAgentAndroid::SetLogLevel(FlurrySDK.Flurry/LogLevel)
extern void FlurryAgentAndroid_SetLogLevel_m8B271E7F440202626AFE9B54847341585D2CB122 (void);
// 0x00000053 System.Void FlurrySDKInternal.FlurryAgentAndroid::SetSslPinningEnabled(System.Boolean)
extern void FlurryAgentAndroid_SetSslPinningEnabled_mAF6186CB34BC6BE06239C1D8933B10EB050A67D2 (void);
// 0x00000054 System.Void FlurrySDKInternal.FlurryAgentAndroid::SetAge(System.Int32)
extern void FlurryAgentAndroid_SetAge_mD3A5A080EDEB00DB2A76FCFA818C738EDC134B0D (void);
// 0x00000055 System.Void FlurrySDKInternal.FlurryAgentAndroid::SetGender(FlurrySDK.Flurry/Gender)
extern void FlurryAgentAndroid_SetGender_m3B9BE010F9373F5AC93F43ABF47844951E806A13 (void);
// 0x00000056 System.Void FlurrySDKInternal.FlurryAgentAndroid::SetReportLocation(System.Boolean)
extern void FlurryAgentAndroid_SetReportLocation_m261A7C8BE2484A27B8DA571731EFD81B0DE47D19 (void);
// 0x00000057 System.Void FlurrySDKInternal.FlurryAgentAndroid::SetSessionOrigin(System.String,System.String)
extern void FlurryAgentAndroid_SetSessionOrigin_mCB9A0F687CD3E9EC917C0451FA8DEBD077537FC4 (void);
// 0x00000058 System.Void FlurrySDKInternal.FlurryAgentAndroid::SetUserId(System.String)
extern void FlurryAgentAndroid_SetUserId_mAC7081007E9FA3A5641F3E7922BDAB1FC754C381 (void);
// 0x00000059 System.Void FlurrySDKInternal.FlurryAgentAndroid::SetVersionName(System.String)
extern void FlurryAgentAndroid_SetVersionName_m6779CEB0A950ABFA2EA64AD3823C4A88612A0147 (void);
// 0x0000005A System.Void FlurrySDKInternal.FlurryAgentAndroid::AddOrigin(System.String,System.String)
extern void FlurryAgentAndroid_AddOrigin_m2AF5011B6DD0E79538F03168B3192D55B1CCC2D5 (void);
// 0x0000005B System.Void FlurrySDKInternal.FlurryAgentAndroid::AddOrigin(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void FlurryAgentAndroid_AddOrigin_m0CC71AE33ABA11260E076E760C71EC5A9BDBE3A3 (void);
// 0x0000005C System.Void FlurrySDKInternal.FlurryAgentAndroid::AddSessionProperty(System.String,System.String)
extern void FlurryAgentAndroid_AddSessionProperty_m81FC47461B84575C49FAE50CD5CB5F3A9915577F (void);
// 0x0000005D System.Void FlurrySDKInternal.FlurryAgentAndroid::SetDataSaleOptOut(System.Boolean)
extern void FlurryAgentAndroid_SetDataSaleOptOut_m85D59A37A7219C1B151FB787A588EE4885CCC044 (void);
// 0x0000005E System.Void FlurrySDKInternal.FlurryAgentAndroid::DeleteData()
extern void FlurryAgentAndroid_DeleteData_m878ED11168075F15468376A3FE800EEF77BBF4D3 (void);
// 0x0000005F System.Void FlurrySDKInternal.FlurryAgentAndroid::OpenPrivacyDashboard()
extern void FlurryAgentAndroid_OpenPrivacyDashboard_m77E8FF4D6369BAA2E2D8E11CBF5679756846440C (void);
// 0x00000060 System.Int32 FlurrySDKInternal.FlurryAgentAndroid::GetAgentVersion()
extern void FlurryAgentAndroid_GetAgentVersion_mE9E94EEB9C72E574E317A1069BE868F4586099F6 (void);
// 0x00000061 System.String FlurrySDKInternal.FlurryAgentAndroid::GetReleaseVersion()
extern void FlurryAgentAndroid_GetReleaseVersion_m40A1374AE3FBA6B6CEEEFD7A9A44AF75187D0233 (void);
// 0x00000062 System.String FlurrySDKInternal.FlurryAgentAndroid::GetSessionId()
extern void FlurryAgentAndroid_GetSessionId_mF64728074E41D841E0C3DF3D348FCAC537DD7A46 (void);
// 0x00000063 System.Int32 FlurrySDKInternal.FlurryAgentAndroid::LogEvent(System.String)
extern void FlurryAgentAndroid_LogEvent_m61DAA62F009BD9F2043E3AC81AC36F8A231CBCCE (void);
// 0x00000064 System.Int32 FlurrySDKInternal.FlurryAgentAndroid::LogEvent(System.String,System.Boolean)
extern void FlurryAgentAndroid_LogEvent_m2A6C46C20F7B16A30E3E4436863141069FFDD212 (void);
// 0x00000065 System.Int32 FlurrySDKInternal.FlurryAgentAndroid::LogEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void FlurryAgentAndroid_LogEvent_m9073CA9328B5E73BAFDD3A21E103941F4B7A0AAF (void);
// 0x00000066 System.Int32 FlurrySDKInternal.FlurryAgentAndroid::LogEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Boolean)
extern void FlurryAgentAndroid_LogEvent_m4CEB0786057E1522D581DA38EB86D810E994E346 (void);
// 0x00000067 System.Void FlurrySDKInternal.FlurryAgentAndroid::EndTimedEvent(System.String)
extern void FlurryAgentAndroid_EndTimedEvent_m8A0BF1E51E9394A4B726961B66700416A5892F3F (void);
// 0x00000068 System.Void FlurrySDKInternal.FlurryAgentAndroid::EndTimedEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void FlurryAgentAndroid_EndTimedEvent_m235020EAB97D8A30296FF11843A90191E9881040 (void);
// 0x00000069 System.Int32 FlurrySDKInternal.FlurryAgentAndroid::LogEvent(FlurrySDK.Flurry/Event,FlurrySDK.Flurry/EventParams)
extern void FlurryAgentAndroid_LogEvent_mF6A1D5E80799BD1FD6FBF5F35DC802652114D631 (void);
// 0x0000006A UnityEngine.AndroidJavaObject FlurrySDKInternal.FlurryAgentAndroid::ConvertToEventParams(FlurrySDK.Flurry/EventParams)
extern void FlurryAgentAndroid_ConvertToEventParams_mE23395ED5D7CE24EFF591EAC24ED46FA33770F65 (void);
// 0x0000006B System.Void FlurrySDKInternal.FlurryAgentAndroid::OnPageView()
extern void FlurryAgentAndroid_OnPageView_m35A9B02DF32C2B2B623FFEFA2268E4E77CF07017 (void);
// 0x0000006C System.Void FlurrySDKInternal.FlurryAgentAndroid::OnError(System.String,System.String,System.String)
extern void FlurryAgentAndroid_OnError_m43CBDC5BE1C90A6C6E26ED4664FA7DD5C5EBB233 (void);
// 0x0000006D System.Void FlurrySDKInternal.FlurryAgentAndroid::OnError(System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void FlurryAgentAndroid_OnError_m624B582E4ECA3721E94A56456398238B781605C0 (void);
// 0x0000006E System.Void FlurrySDKInternal.FlurryAgentAndroid::LogBreadcrumb(System.String)
extern void FlurryAgentAndroid_LogBreadcrumb_mF217F9AF248D42436C810E16277F2F7452BED20E (void);
// 0x0000006F System.Int32 FlurrySDKInternal.FlurryAgentAndroid::LogPayment(System.String,System.String,System.Int32,System.Double,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void FlurryAgentAndroid_LogPayment_m7417E80BB467680808A3A1244AEC8446B58AB52A (void);
// 0x00000070 System.Void FlurrySDKInternal.FlurryAgentAndroid::SetIAPReportingEnabled(System.Boolean)
extern void FlurryAgentAndroid_SetIAPReportingEnabled_mC7A94CF69CE45445051346CD75A7AF205E7A25BD (void);
// 0x00000071 System.Void FlurrySDKInternal.FlurryAgentAndroid::UpdateConversionValue(System.Int32)
extern void FlurryAgentAndroid_UpdateConversionValue_m80C69B0CCA7AE4563CC86A8B2610B68D83DA623F (void);
// 0x00000072 System.Void FlurrySDKInternal.FlurryAgentAndroid::UpdateConversionValueWithEvent(FlurrySDK.Flurry/SKAdNetworkEvent)
extern void FlurryAgentAndroid_UpdateConversionValueWithEvent_mB907AECD478E210FDF7EC095F8BD1210EA767A39 (void);
// 0x00000073 System.Void FlurrySDKInternal.FlurryAgentAndroid::SetMessagingListener(FlurrySDK.Flurry/IMessagingListener)
extern void FlurryAgentAndroid_SetMessagingListener_m20B6F148B8C9F11D60DC4D74CB5C7446092A8DF9 (void);
// 0x00000074 System.Collections.Generic.IDictionary`2<System.String,System.String> FlurrySDKInternal.FlurryAgentAndroid::GetPublisherSegmentation()
extern void FlurryAgentAndroid_GetPublisherSegmentation_mC8C7BE0B16B78B560BDD9EB858610851C80C9E57 (void);
// 0x00000075 System.Void FlurrySDKInternal.FlurryAgentAndroid::FetchPublisherSegmentation()
extern void FlurryAgentAndroid_FetchPublisherSegmentation_m1883FE7181BE8CE61DCC2F2242183A6B7E477655 (void);
// 0x00000076 System.Void FlurrySDKInternal.FlurryAgentAndroid::SetPublisherSegmentationListener(FlurrySDK.Flurry/IFlurryPublisherSegmentationListener)
extern void FlurryAgentAndroid_SetPublisherSegmentationListener_m7B6C28458717B1C34AB362C0EBA7E383A00D917D (void);
// 0x00000077 UnityEngine.AndroidJavaObject FlurrySDKInternal.FlurryAgentAndroid::ConvertToList(System.Collections.Generic.List`1<TValue>)
// 0x00000078 UnityEngine.AndroidJavaObject FlurrySDKInternal.FlurryAgentAndroid::ConvertToMap(System.Collections.Generic.IDictionary`2<TKey,TValue>)
// 0x00000079 System.Collections.Generic.IDictionary`2<TKey,TValue> FlurrySDKInternal.FlurryAgentAndroid::ConvertToDictionary(UnityEngine.AndroidJavaObject)
// 0x0000007A System.Void FlurrySDKInternal.FlurryAgentAndroid::Dispose()
extern void FlurryAgentAndroid_Dispose_mCBBAD15DD40615AC39B6442F4A54FC40BC9A0D2A (void);
// 0x0000007B System.Void FlurrySDKInternal.FlurryAgentAndroid::.ctor()
extern void FlurryAgentAndroid__ctor_m91A3FFC2E252885661C84E4545B6249DD459D940 (void);
// 0x0000007C System.Void FlurrySDKInternal.FlurryAgentAndroid::.cctor()
extern void FlurryAgentAndroid__cctor_m76AB04E8B03D20A9AFEE76EA54E874ECD2368C66 (void);
// 0x0000007D System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::.ctor()
extern void AgentBuilderAndroid__ctor_m2435A012639C74FF7182F50C1AE2946178350FF0 (void);
// 0x0000007E System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::Build(System.String)
extern void AgentBuilderAndroid_Build_m8230980393E660920406DDB59F080937B33DA460 (void);
// 0x0000007F System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithAppVersion(System.String)
extern void AgentBuilderAndroid_WithAppVersion_m61CED3D7164FCA590310C416D2CD9B07B5CC1593 (void);
// 0x00000080 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithContinueSessionMillis(System.Int64)
extern void AgentBuilderAndroid_WithContinueSessionMillis_m0CC80221CE73F905BA5927DE38083F0D2E4768FD (void);
// 0x00000081 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithCrashReporting(System.Boolean)
extern void AgentBuilderAndroid_WithCrashReporting_m89D14C4417C8C8447F175EBEF4404C63334CC2A9 (void);
// 0x00000082 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithIncludeBackgroundSessionsInMetrics(System.Boolean)
extern void AgentBuilderAndroid_WithIncludeBackgroundSessionsInMetrics_m83ECD667EE632099CF808ED9717CB20E400ED19A (void);
// 0x00000083 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithLogEnabled(System.Boolean)
extern void AgentBuilderAndroid_WithLogEnabled_m5FA00681B3E8F8554FBD4495D0492788269F4622 (void);
// 0x00000084 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithLogLevel(FlurrySDK.Flurry/LogLevel)
extern void AgentBuilderAndroid_WithLogLevel_m849AB786EB5FA14645D2F1D7AE6B7B270F96C9F6 (void);
// 0x00000085 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithReportLocation(System.Boolean)
extern void AgentBuilderAndroid_WithReportLocation_m5ABDEA2A6F432DDBBA7E4BA302EDB42809FBA47F (void);
// 0x00000086 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithMessaging(System.Boolean,FlurrySDK.Flurry/IMessagingListener)
extern void AgentBuilderAndroid_WithMessaging_m431963E7DDB550EFA104421E7E090A1DC02EF12A (void);
// 0x00000087 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithDataSaleOptOut(System.Boolean)
extern void AgentBuilderAndroid_WithDataSaleOptOut_m46C6800F5A1D367307F540C7CB18276EDFC5A4EB (void);
// 0x00000088 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithPerformanceMetrics(System.Int32)
extern void AgentBuilderAndroid_WithPerformanceMetrics_m684E3265416C21244BB48EF2FD708BA26B2EBD71 (void);
// 0x00000089 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentBuilderAndroid::WithSslPinningEnabled(System.Boolean)
extern void AgentBuilderAndroid_WithSslPinningEnabled_m13F06644C5EA640D68C6AC6EDBB178D6C662F586 (void);
// 0x0000008A System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::Set(System.String,System.String)
extern void AgentUserPropertiesAndroid_Set_m76FC5839879B5AB044065E65F18B6B2F5F54BD35 (void);
// 0x0000008B System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::Set(System.String,System.Collections.Generic.List`1<System.String>)
extern void AgentUserPropertiesAndroid_Set_m5D9F958D61441D7779958F5617C6478FA9B77B71 (void);
// 0x0000008C System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::Add(System.String,System.String)
extern void AgentUserPropertiesAndroid_Add_mFB608F676D845EA2A325ADEE4E74F254AFB686B0 (void);
// 0x0000008D System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::Add(System.String,System.Collections.Generic.List`1<System.String>)
extern void AgentUserPropertiesAndroid_Add_m6559D9DE57FADB16DB968681DBCA5672CECF0DB8 (void);
// 0x0000008E System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::Remove(System.String,System.String)
extern void AgentUserPropertiesAndroid_Remove_mBFED6150B95DD09B869DB6795F79CFF6E116E55C (void);
// 0x0000008F System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::Remove(System.String,System.Collections.Generic.List`1<System.String>)
extern void AgentUserPropertiesAndroid_Remove_m6E142AAD31D298902EE45EE91D295883A0E585C8 (void);
// 0x00000090 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::Remove(System.String)
extern void AgentUserPropertiesAndroid_Remove_m8772648B39BAED5FDC7CED764E48222EF5877967 (void);
// 0x00000091 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::Flag(System.String)
extern void AgentUserPropertiesAndroid_Flag_m0680E4F041BD3FF97D7508F2895DAA9069EDC701 (void);
// 0x00000092 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::.ctor()
extern void AgentUserPropertiesAndroid__ctor_m57F3C97A091D5C0998C9487E2D8980640964557D (void);
// 0x00000093 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentUserPropertiesAndroid::.cctor()
extern void AgentUserPropertiesAndroid__cctor_mDAB60E41FEE3671E73F0B37057625C84F79E8475 (void);
// 0x00000094 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPerformanceAndroid::ReportFullyDrawn()
extern void AgentPerformanceAndroid_ReportFullyDrawn_m8DFBEF0B881651F2B245AF8795FDA36B0B3F842C (void);
// 0x00000095 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPerformanceAndroid::StartResourceLogger()
extern void AgentPerformanceAndroid_StartResourceLogger_mFBA73B6FB461610B4A64518EA95873501F020A92 (void);
// 0x00000096 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPerformanceAndroid::LogResourceLogger(System.String)
extern void AgentPerformanceAndroid_LogResourceLogger_m6899E8B108D6ED4A6109EBD2BEE3EA1859AC61C6 (void);
// 0x00000097 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPerformanceAndroid::.ctor()
extern void AgentPerformanceAndroid__ctor_mC3A07283B3BB3872BEAC46EA1038372EF0153C2D (void);
// 0x00000098 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPerformanceAndroid::.cctor()
extern void AgentPerformanceAndroid__cctor_mBBFE2EB59A82D8BD7C60A86DB2E9D17C7B4B6B6E (void);
// 0x00000099 UnityEngine.AndroidJavaObject FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::getInstance()
extern void AgentConfigAndroid_getInstance_m6223EA8899B2474C91C5B61DE4966830DF074851 (void);
// 0x0000009A System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::Fetch()
extern void AgentConfigAndroid_Fetch_mD3EF2248FEA8CD77D5B3BDAF11A0A7B6C2BB17B8 (void);
// 0x0000009B System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::Activate()
extern void AgentConfigAndroid_Activate_m0EEFEA59FCCE8D367EFC92CB41DC063EED4A9BB0 (void);
// 0x0000009C System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::SetListener(FlurrySDK.Flurry/IConfigListener)
extern void AgentConfigAndroid_SetListener_m0E9A56AA14062686B8C5E8CFCFBE443EFF9E2816 (void);
// 0x0000009D System.String FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::GetString(System.String,System.String)
extern void AgentConfigAndroid_GetString_m94F76851C2221E3ACB82FBE84B976B51961731E1 (void);
// 0x0000009E System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::.ctor()
extern void AgentConfigAndroid__ctor_mE2832F625ADC526F3A7C9A2D3EDA8FDB1BE1AF9D (void);
// 0x0000009F System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentConfigAndroid::.cctor()
extern void AgentConfigAndroid__cctor_m6EA9540AF13E938161DE7C778E6D5B5F5A2801DB (void);
// 0x000000A0 System.Void FlurrySDKInternal.FlurryAgentAndroid/ConfigCallback::.ctor(FlurrySDK.Flurry/IConfigListener)
extern void ConfigCallback__ctor_mDA2B1827622E4CA07A8F7BC9D8979C10B649A601 (void);
// 0x000000A1 System.Void FlurrySDKInternal.FlurryAgentAndroid/ConfigCallback::onFetchSuccess()
extern void ConfigCallback_onFetchSuccess_m28CFBA421B45E1CD5C2BF482B1717AF2FAF36C4F (void);
// 0x000000A2 System.Void FlurrySDKInternal.FlurryAgentAndroid/ConfigCallback::onFetchNoChange()
extern void ConfigCallback_onFetchNoChange_mD877699306BC0AE466DE2E960C83DE8BEF224E3A (void);
// 0x000000A3 System.Void FlurrySDKInternal.FlurryAgentAndroid/ConfigCallback::onFetchError(System.Boolean)
extern void ConfigCallback_onFetchError_m37DAEE8960176A1B76EB5D34D3E7E90CE0CDE3DC (void);
// 0x000000A4 System.Void FlurrySDKInternal.FlurryAgentAndroid/ConfigCallback::onActivateComplete(System.Boolean)
extern void ConfigCallback_onActivateComplete_m1A39C0E1DF0B22B147A191E7E40F8849CAA35B31 (void);
// 0x000000A5 System.Void FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback::.ctor(FlurrySDK.Flurry/IMessagingListener)
extern void MessagingCallback__ctor_m9557FDF28A5DF704DAEFC0691F6E765A90A9F083 (void);
// 0x000000A6 System.Boolean FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback::onNotificationReceived(UnityEngine.AndroidJavaObject)
extern void MessagingCallback_onNotificationReceived_m553FB1A2DA3FE6D057924B8260804823C8F6D6F9 (void);
// 0x000000A7 System.Boolean FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback::onNotificationClicked(UnityEngine.AndroidJavaObject)
extern void MessagingCallback_onNotificationClicked_m64411F8AA45852FBD3B701A4D52F7F384FB1E435 (void);
// 0x000000A8 System.Void FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback::onNotificationCancelled(UnityEngine.AndroidJavaObject)
extern void MessagingCallback_onNotificationCancelled_mEE4D8B563E215AB859B5ADF21F78A0DFC0317F41 (void);
// 0x000000A9 System.Void FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback::onTokenRefresh(System.String)
extern void MessagingCallback_onTokenRefresh_mE2F5F9CE4EB175141A79E6FE6F0F5A1EE9CAF690 (void);
// 0x000000AA System.Void FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback::onNonFlurryNotificationReceived(UnityEngine.AndroidJavaObject)
extern void MessagingCallback_onNonFlurryNotificationReceived_m1336B046BE54251DF5B6987C5A5468AFD95F92B3 (void);
// 0x000000AB FlurrySDK.Flurry/FlurryMessage FlurrySDKInternal.FlurryAgentAndroid/MessagingCallback::GetFlurryMessage(UnityEngine.AndroidJavaObject)
extern void MessagingCallback_GetFlurryMessage_m322FDC5709F5E14A65DBF036621C9274D7E70820 (void);
// 0x000000AC System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPublisherSegmentationAndroid::Fetch()
extern void AgentPublisherSegmentationAndroid_Fetch_mF39AD340B864E9A8B147BBF97CC5BEA2F85AB439 (void);
// 0x000000AD System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPublisherSegmentationAndroid::SetListener(FlurrySDK.Flurry/IPublisherSegmentationListener)
extern void AgentPublisherSegmentationAndroid_SetListener_m297502606D14A153DD4B91DFF4BA4EC44B625558 (void);
// 0x000000AE System.Collections.Generic.IDictionary`2<System.String,System.String> FlurrySDKInternal.FlurryAgentAndroid/AgentPublisherSegmentationAndroid::GetData()
extern void AgentPublisherSegmentationAndroid_GetData_m7C67D98EA998C1DFC4DABD2633E8FD97B674971F (void);
// 0x000000AF System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPublisherSegmentationAndroid::.ctor()
extern void AgentPublisherSegmentationAndroid__ctor_m8D9B53238946497E82A35239EE4667E7840FFD45 (void);
// 0x000000B0 System.Void FlurrySDKInternal.FlurryAgentAndroid/AgentPublisherSegmentationAndroid::.cctor()
extern void AgentPublisherSegmentationAndroid__cctor_m4AECD9CFB9183D7F5379D02925745E0FD841FEDA (void);
// 0x000000B1 System.Void FlurrySDKInternal.FlurryAgentAndroid/PublisherSegmentationCallback::.ctor(FlurrySDK.Flurry/IPublisherSegmentationListener)
extern void PublisherSegmentationCallback__ctor_m3FB92C23E0B12B35D904004A3CA7C746483EA2EA (void);
// 0x000000B2 System.Void FlurrySDKInternal.FlurryAgentAndroid/PublisherSegmentationCallback::onFetched(UnityEngine.AndroidJavaObject)
extern void PublisherSegmentationCallback_onFetched_m1B5B0D2CF27D3C4012112B6457087725C34AEADE (void);
// 0x000000B3 System.Void FlurrySDKInternal.FlurryAgentAndroid/PrivacySessionCallback::.ctor()
extern void PrivacySessionCallback__ctor_m159CB135F9CA290AF23EE86BF1000570CEF3C9B2 (void);
// 0x000000B4 System.Void FlurrySDKInternal.FlurryAgentAndroid/PrivacySessionCallback::success()
extern void PrivacySessionCallback_success_m1B1274A053B7163447512CE7E1B82948861C7F1B (void);
// 0x000000B5 System.Void FlurrySDKInternal.FlurryAgentAndroid/PrivacySessionCallback::failure()
extern void PrivacySessionCallback_failure_m9CA92C8E7C912E9DCFAE4AB9198F9DC9E5C1B70D (void);
// 0x000000B6 System.Void FlurrySDK.Flurry::.cctor()
extern void Flurry__cctor_mC8FF422C27C08B59B734CDB3039B2B89CA75F7A4 (void);
// 0x000000B7 System.Void FlurrySDK.Flurry::SetContinueSessionMillis(System.Int64)
extern void Flurry_SetContinueSessionMillis_mB2B76D880320794460DC9E25738CD4156C89B183 (void);
// 0x000000B8 System.Void FlurrySDK.Flurry::SetCrashReporting(System.Boolean)
extern void Flurry_SetCrashReporting_m06791BF863E13BB34272359E537A473FB1E88AE0 (void);
// 0x000000B9 System.Void FlurrySDK.Flurry::SetIncludeBackgroundSessionsInMetrics(System.Boolean)
extern void Flurry_SetIncludeBackgroundSessionsInMetrics_mEBE6E82E7AFC7F685292E19C41E8E432C21A70E1 (void);
// 0x000000BA System.Void FlurrySDK.Flurry::SetLogEnabled(System.Boolean)
extern void Flurry_SetLogEnabled_mC902BDF79B61834E8642DB1CF2729866D39EF9C2 (void);
// 0x000000BB System.Void FlurrySDK.Flurry::SetLogLevel(FlurrySDK.Flurry/LogLevel)
extern void Flurry_SetLogLevel_mAD55159C5B4F6B1272CBF535DB825425171AA577 (void);
// 0x000000BC System.Void FlurrySDK.Flurry::SetSslPinningEnabled(System.Boolean)
extern void Flurry_SetSslPinningEnabled_mE73D672911D3D485D94AFAB98F2FF5A0067855CF (void);
// 0x000000BD System.Void FlurrySDK.Flurry::SetAge(System.Int32)
extern void Flurry_SetAge_mDE08C58C87540338D04C4A149BDD1D8A24170E04 (void);
// 0x000000BE System.Void FlurrySDK.Flurry::SetGender(FlurrySDK.Flurry/Gender)
extern void Flurry_SetGender_m54E447026C2EED083190AE4BAA8F5B599568DC39 (void);
// 0x000000BF System.Void FlurrySDK.Flurry::SetReportLocation(System.Boolean)
extern void Flurry_SetReportLocation_mB7A61DDE474CE34DB345F5B74E4561EDD438315C (void);
// 0x000000C0 System.Void FlurrySDK.Flurry::SetSessionOrigin(System.String,System.String)
extern void Flurry_SetSessionOrigin_m65A5294D0743D9A475202380B6BFA824BD7B1FA5 (void);
// 0x000000C1 System.Void FlurrySDK.Flurry::SetUserId(System.String)
extern void Flurry_SetUserId_m2C1E29609BC7D71B63DDEBB9B5864AD40D2AF468 (void);
// 0x000000C2 System.Void FlurrySDK.Flurry::SetVersionName(System.String)
extern void Flurry_SetVersionName_m4FF94261C74D6C3467B6887312CE9D2228136CCA (void);
// 0x000000C3 System.Void FlurrySDK.Flurry::AddOrigin(System.String,System.String)
extern void Flurry_AddOrigin_mB1FDCE124F4B20C888A144033A0649928B2FD78F (void);
// 0x000000C4 System.Void FlurrySDK.Flurry::AddOrigin(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void Flurry_AddOrigin_mDCB3C43802EEB14574F6DBF800DBF5F8434CF62D (void);
// 0x000000C5 System.Void FlurrySDK.Flurry::AddSessionProperty(System.String,System.String)
extern void Flurry_AddSessionProperty_m98780518959178E50C5A98971D557CA3F52B3C69 (void);
// 0x000000C6 System.Void FlurrySDK.Flurry::SetDataSaleOptOut(System.Boolean)
extern void Flurry_SetDataSaleOptOut_mE0C3C15123367F74F195F366A948485179CB58E5 (void);
// 0x000000C7 System.Void FlurrySDK.Flurry::DeleteData()
extern void Flurry_DeleteData_m9C84926380CEE6F36E4CF02253C64A3F91B9BACE (void);
// 0x000000C8 System.Void FlurrySDK.Flurry::OpenPrivacyDashboard()
extern void Flurry_OpenPrivacyDashboard_mC54941303659055580F44A9C1EC20689A21E7C8D (void);
// 0x000000C9 System.Int32 FlurrySDK.Flurry::GetAgentVersion()
extern void Flurry_GetAgentVersion_m3B321A69E3F4A234387ED05EFB695D9A54EB43C4 (void);
// 0x000000CA System.String FlurrySDK.Flurry::GetReleaseVersion()
extern void Flurry_GetReleaseVersion_mC56A2103ECCD3384EDE496BD015E7DFA98E6848E (void);
// 0x000000CB System.String FlurrySDK.Flurry::GetSessionId()
extern void Flurry_GetSessionId_mFDB617C17EB6B8BD57AD4D0B289DFBCB567388FF (void);
// 0x000000CC FlurrySDK.Flurry/EventRecordStatus FlurrySDK.Flurry::LogEvent(System.String)
extern void Flurry_LogEvent_mF9598B6FE52032DF0F70DFA61576977220D9544F (void);
// 0x000000CD FlurrySDK.Flurry/EventRecordStatus FlurrySDK.Flurry::LogEvent(System.String,System.Boolean)
extern void Flurry_LogEvent_m4A92FB81C7A3B9E07474E198C2CA52A9E7DB31CC (void);
// 0x000000CE FlurrySDK.Flurry/EventRecordStatus FlurrySDK.Flurry::LogEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void Flurry_LogEvent_m9AB0B74D04C099B202FBBFC94F4F1CCAD0894ECB (void);
// 0x000000CF FlurrySDK.Flurry/EventRecordStatus FlurrySDK.Flurry::LogEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Boolean)
extern void Flurry_LogEvent_m151BEE1EF3DB88682DBFF82132863566B1F375D2 (void);
// 0x000000D0 System.Void FlurrySDK.Flurry::EndTimedEvent(System.String)
extern void Flurry_EndTimedEvent_mED6F6CE1D1F245774A701EC957ECAD24DBAD56EE (void);
// 0x000000D1 System.Void FlurrySDK.Flurry::EndTimedEvent(System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void Flurry_EndTimedEvent_m4AF27897674C067CD439148B65DF9CAEFE8876AB (void);
// 0x000000D2 FlurrySDK.Flurry/EventRecordStatus FlurrySDK.Flurry::LogEvent(FlurrySDK.Flurry/Event)
extern void Flurry_LogEvent_m8E2E53D6735B501A2CDEE3592831576CD47EF538 (void);
// 0x000000D3 FlurrySDK.Flurry/EventRecordStatus FlurrySDK.Flurry::LogEvent(FlurrySDK.Flurry/Event,FlurrySDK.Flurry/EventParams)
extern void Flurry_LogEvent_m8D8F359102DF89BDA8C1949987BD352F3C1484BC (void);
// 0x000000D4 System.Void FlurrySDK.Flurry::OnPageView()
extern void Flurry_OnPageView_mC4AD44A38D0E19B91368A356F39EF99C21CEFA86 (void);
// 0x000000D5 System.Void FlurrySDK.Flurry::OnError(System.String,System.String,System.String)
extern void Flurry_OnError_m0600B44D9A2E554E096408030F32DF3DF80EBB06 (void);
// 0x000000D6 System.Void FlurrySDK.Flurry::OnError(System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void Flurry_OnError_m457D72DBB55F6CCA0BBAF5B5F4D6F737B83E3CEA (void);
// 0x000000D7 System.Void FlurrySDK.Flurry::LogBreadcrumb(System.String)
extern void Flurry_LogBreadcrumb_mCDC846CF1DF9B51E9459C12EE733E2DCC0C6118D (void);
// 0x000000D8 FlurrySDK.Flurry/EventRecordStatus FlurrySDK.Flurry::LogPayment(System.String,System.String,System.Int32,System.Double,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void Flurry_LogPayment_mADA906E0C6B247EABB856A10605197DB20798B0B (void);
// 0x000000D9 System.Void FlurrySDK.Flurry::SetIAPReportingEnabled(System.Boolean)
extern void Flurry_SetIAPReportingEnabled_mFDB637E8B47AA34FCB39966F5CCB4F15CC8FAC07 (void);
// 0x000000DA System.Void FlurrySDK.Flurry::UpdateConversionValue(System.Int32)
extern void Flurry_UpdateConversionValue_mF0E730B37727F6F6427E2D25C5BD4A9CDDB605E0 (void);
// 0x000000DB System.Void FlurrySDK.Flurry::UpdateConversionValueWithEvent(FlurrySDK.Flurry/SKAdNetworkEvent)
extern void Flurry_UpdateConversionValueWithEvent_m90BB11708AFAF8DA7CEEF435BD04987ADA99D314 (void);
// 0x000000DC System.Void FlurrySDK.Flurry::SetMessagingListener(FlurrySDK.Flurry/IMessagingListener)
extern void Flurry_SetMessagingListener_mA163FB246E5D970F98743186B20BCDE326039E84 (void);
// 0x000000DD System.Collections.Generic.IDictionary`2<System.String,System.String> FlurrySDK.Flurry::GetPublisherSegmentation()
extern void Flurry_GetPublisherSegmentation_m833087237C0F45C14697B0ADBEFBBBF3AD3EC072 (void);
// 0x000000DE System.Void FlurrySDK.Flurry::FetchPublisherSegmentation()
extern void Flurry_FetchPublisherSegmentation_m09D63040B4B1A416C2EBE5F6E61C06277FCBC1A6 (void);
// 0x000000DF System.Void FlurrySDK.Flurry::SetPublisherSegmentationListener(FlurrySDK.Flurry/IFlurryPublisherSegmentationListener)
extern void Flurry_SetPublisherSegmentationListener_mA058A738ACD287642CD1CD979A769DC3DEA87D77 (void);
// 0x000000E0 System.Void FlurrySDK.Flurry::Dispose()
extern void Flurry_Dispose_mD2294973CB652CD6A3066EE6D556B25338017EBC (void);
// 0x000000E1 System.Void FlurrySDK.Flurry::.ctor()
extern void Flurry__ctor_mF1774244E6B6D10566ACC439D0373A45F51ECADA (void);
// 0x000000E2 System.Void FlurrySDK.Flurry/Builder::.ctor()
extern void Builder__ctor_m2892CAECF7FE4FFF67D25C66E7E0B84EE64D79FF (void);
// 0x000000E3 System.Void FlurrySDK.Flurry/Builder::Build(System.String)
extern void Builder_Build_m3045C5B046DAF417FBDF1F72F5198E1946D65001 (void);
// 0x000000E4 FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithCrashReporting(System.Boolean)
extern void Builder_WithCrashReporting_m20FC8A7D89CDC4BE555B972E696FCDAA1E218C40 (void);
// 0x000000E5 FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithDataSaleOptOut(System.Boolean)
extern void Builder_WithDataSaleOptOut_m9BB726C46C0DA5DB37B617FF9CD8E4B18469580F (void);
// 0x000000E6 FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithContinueSessionMillis(System.Int64)
extern void Builder_WithContinueSessionMillis_m602E658FBB7362AB1ED1655BFC58CBCFCBFB41EB (void);
// 0x000000E7 FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithIncludeBackgroundSessionsInMetrics(System.Boolean)
extern void Builder_WithIncludeBackgroundSessionsInMetrics_m4A158DA52F6D02F869494E107E628872FE669248 (void);
// 0x000000E8 FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithLogEnabled(System.Boolean)
extern void Builder_WithLogEnabled_m6CDA81F25E7C5BE833C14892A3B3337AB72DF69C (void);
// 0x000000E9 FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithLogLevel(FlurrySDK.Flurry/LogLevel)
extern void Builder_WithLogLevel_m5D680B6D4A003DCEF929EEA45AB9EB706A93715C (void);
// 0x000000EA FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithReportLocation(System.Boolean)
extern void Builder_WithReportLocation_m0C37DCE7ABC043ADF2BA38C02390331FB7C126A2 (void);
// 0x000000EB FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithMessaging(System.Boolean,FlurrySDK.Flurry/IMessagingListener)
extern void Builder_WithMessaging_mA797B7B9D40FEBBCE5C587E7809A75918E0E182B (void);
// 0x000000EC FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithAppVersion(System.String)
extern void Builder_WithAppVersion_mD3E2B92C1BAC4BF09F27B8BD10CC5BAD2BBAD0A6 (void);
// 0x000000ED FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithPerformanceMetrics(System.Int32)
extern void Builder_WithPerformanceMetrics_mC60B646967B569721C8734E2F60609A728091ECE (void);
// 0x000000EE FlurrySDK.Flurry/Builder FlurrySDK.Flurry/Builder::WithSslPinningEnabled(System.Boolean)
extern void Builder_WithSslPinningEnabled_m5F1BF7CCB47982105546DA725E3BC5E9F2FFC56F (void);
// 0x000000EF System.Void FlurrySDK.Flurry/UserProperties::.cctor()
extern void UserProperties__cctor_m38692BB4F9CBB8767C52C3B8068327A5CD7BB024 (void);
// 0x000000F0 System.Void FlurrySDK.Flurry/UserProperties::Set(System.String,System.String)
extern void UserProperties_Set_mD7FECAEA0CDBC9B18FAFB17086B99D409441C0F0 (void);
// 0x000000F1 System.Void FlurrySDK.Flurry/UserProperties::Set(System.String,System.Collections.Generic.List`1<System.String>)
extern void UserProperties_Set_mCC529A4673B3E92987A85A3343A726EAC7A1E4A9 (void);
// 0x000000F2 System.Void FlurrySDK.Flurry/UserProperties::Add(System.String,System.String)
extern void UserProperties_Add_mC368985ABD2394D53BE689A79A9F2F51B4E80B30 (void);
// 0x000000F3 System.Void FlurrySDK.Flurry/UserProperties::Add(System.String,System.Collections.Generic.List`1<System.String>)
extern void UserProperties_Add_mAEF4E1587C4746E1F8E8A1989D194D2387F0B29B (void);
// 0x000000F4 System.Void FlurrySDK.Flurry/UserProperties::Remove(System.String,System.String)
extern void UserProperties_Remove_mE8280F1D13B9F92DF8CCA6E97CF5B7178F62CF73 (void);
// 0x000000F5 System.Void FlurrySDK.Flurry/UserProperties::Remove(System.String,System.Collections.Generic.List`1<System.String>)
extern void UserProperties_Remove_mB95F8CDA5D8EC96BD5E061914C8B48B658D38538 (void);
// 0x000000F6 System.Void FlurrySDK.Flurry/UserProperties::Remove(System.String)
extern void UserProperties_Remove_mD6487A6D4F9F5FBEA46028B4DC0475A6976F6E08 (void);
// 0x000000F7 System.Void FlurrySDK.Flurry/UserProperties::Flag(System.String)
extern void UserProperties_Flag_mB3B56FAD04C06697A74375C13514C7E7FED73752 (void);
// 0x000000F8 System.Void FlurrySDK.Flurry/UserProperties::.ctor()
extern void UserProperties__ctor_mC79CAB7B7996170E4434B0C348D79B3DE7723E92 (void);
// 0x000000F9 System.Void FlurrySDK.Flurry/Performance::.cctor()
extern void Performance__cctor_m2EE6F8A2723A87067188E0119EF83711A5062C99 (void);
// 0x000000FA System.Void FlurrySDK.Flurry/Performance::ReportFullyDrawn()
extern void Performance_ReportFullyDrawn_m832DCA62DF22169A19A7AF3EBE57BD2B8EA34658 (void);
// 0x000000FB System.Void FlurrySDK.Flurry/Performance::StartResourceLogger()
extern void Performance_StartResourceLogger_mFF0253C6E7CA57CBDDD7C7BDB7DC615E19154B9C (void);
// 0x000000FC System.Void FlurrySDK.Flurry/Performance::LogResourceLogger(System.String)
extern void Performance_LogResourceLogger_m60B46B0448447CE4EF8BF5BACE25DCB9F03B5527 (void);
// 0x000000FD System.Void FlurrySDK.Flurry/Performance::.ctor()
extern void Performance__ctor_mBFAF7AB41EFAC3BCB81CAD8D794AD48A2B7F307E (void);
// 0x000000FE System.Void FlurrySDK.Flurry/Config::.cctor()
extern void Config__cctor_m64F3E45572FB6E251B394CA31267CC0B0354F9B3 (void);
// 0x000000FF System.Void FlurrySDK.Flurry/Config::Fetch()
extern void Config_Fetch_m3C8474CD98C5F4A6FD30CE140FDDDAC463C63B55 (void);
// 0x00000100 System.Void FlurrySDK.Flurry/Config::Activate()
extern void Config_Activate_m25143409C89B8F9A0FA3864492205F195672EA35 (void);
// 0x00000101 System.Void FlurrySDK.Flurry/Config::RegisterListener(FlurrySDK.Flurry/IConfigListener)
extern void Config_RegisterListener_m642A2714AB54D4E49661AD8A7933D21D7DED8631 (void);
// 0x00000102 System.Void FlurrySDK.Flurry/Config::UnregisterListener(FlurrySDK.Flurry/IConfigListener)
extern void Config_UnregisterListener_mCCC6691F69812D315B529C4019C991FFC8C72702 (void);
// 0x00000103 System.String FlurrySDK.Flurry/Config::GetString(System.String,System.String)
extern void Config_GetString_mD1CB83FCCCF176C76C44878ABC7DAD4A286D72A8 (void);
// 0x00000104 System.Void FlurrySDK.Flurry/Config::.ctor()
extern void Config__ctor_mBDA6501914D5B2F4CC343F8EE1E49A6FF46E2FD4 (void);
// 0x00000105 System.Void FlurrySDK.Flurry/Config/MainConfigListener::OnFetchSuccess()
extern void MainConfigListener_OnFetchSuccess_m4C7BE3B29C5254B4E48EA05226F4855E048902E0 (void);
// 0x00000106 System.Void FlurrySDK.Flurry/Config/MainConfigListener::OnFetchNoChange()
extern void MainConfigListener_OnFetchNoChange_m4A880586E4BB6407B85E16FC593E4A9EA725D7D8 (void);
// 0x00000107 System.Void FlurrySDK.Flurry/Config/MainConfigListener::OnFetchError(System.Boolean)
extern void MainConfigListener_OnFetchError_mE9D4FF7E1D4FA70CB9C273D9A5FA32C7425D632C (void);
// 0x00000108 System.Void FlurrySDK.Flurry/Config/MainConfigListener::OnActivateComplete(System.Boolean)
extern void MainConfigListener_OnActivateComplete_mDC9C6C700E50B7252A3B9E14F48D2114B53F74B9 (void);
// 0x00000109 System.Void FlurrySDK.Flurry/Config/MainConfigListener::.ctor()
extern void MainConfigListener__ctor_m5F50B031E124AC19E95FFC3F3CDEDF6A7EB83DCF (void);
// 0x0000010A System.Void FlurrySDK.Flurry/IConfigListener::OnFetchSuccess()
// 0x0000010B System.Void FlurrySDK.Flurry/IConfigListener::OnFetchNoChange()
// 0x0000010C System.Void FlurrySDK.Flurry/IConfigListener::OnFetchError(System.Boolean)
// 0x0000010D System.Void FlurrySDK.Flurry/IConfigListener::OnActivateComplete(System.Boolean)
// 0x0000010E System.Void FlurrySDK.Flurry/FlurryMessage::.ctor()
extern void FlurryMessage__ctor_mB2DA0B81D4F627360B4A410C8A79D1CA3EE5AAE7 (void);
// 0x0000010F System.Boolean FlurrySDK.Flurry/IMessagingListener::OnNotificationReceived(FlurrySDK.Flurry/FlurryMessage)
// 0x00000110 System.Boolean FlurrySDK.Flurry/IMessagingListener::OnNotificationClicked(FlurrySDK.Flurry/FlurryMessage)
// 0x00000111 System.Void FlurrySDK.Flurry/IMessagingListener::OnNotificationCancelled(FlurrySDK.Flurry/FlurryMessage)
// 0x00000112 System.Void FlurrySDK.Flurry/IMessagingListener::OnTokenRefresh(System.String)
// 0x00000113 System.Void FlurrySDK.Flurry/IMessagingListener::OnNonFlurryNotificationReceived(System.IDisposable)
// 0x00000114 System.Void FlurrySDK.Flurry/PublisherSegmentation::.cctor()
extern void PublisherSegmentation__cctor_m80E6D6668A53B891511B8A271584CD9DB4754A94 (void);
// 0x00000115 System.Void FlurrySDK.Flurry/PublisherSegmentation::Fetch()
extern void PublisherSegmentation_Fetch_m242B0839E400E478F2237874A89300EDD0019E79 (void);
// 0x00000116 System.Void FlurrySDK.Flurry/PublisherSegmentation::RegisterListener(FlurrySDK.Flurry/IPublisherSegmentationListener)
extern void PublisherSegmentation_RegisterListener_mCED04EA9BC1E28B9B159E5FEB45AD8829A86418F (void);
// 0x00000117 System.Void FlurrySDK.Flurry/PublisherSegmentation::UnregisterListener(FlurrySDK.Flurry/IPublisherSegmentationListener)
extern void PublisherSegmentation_UnregisterListener_m8FA63884DC25A56B258ADC09713A6BF667E1A1B5 (void);
// 0x00000118 System.Collections.Generic.IDictionary`2<System.String,System.String> FlurrySDK.Flurry/PublisherSegmentation::GetData()
extern void PublisherSegmentation_GetData_m8BED9B7B16BC9EBFB09EC33525C03513AA9F3F9B (void);
// 0x00000119 System.Void FlurrySDK.Flurry/PublisherSegmentation::.ctor()
extern void PublisherSegmentation__ctor_mD6C20C484A2B8780356B89BC4EE783F7AAF46912 (void);
// 0x0000011A System.Void FlurrySDK.Flurry/PublisherSegmentation/MainPublisherSegmentationListener::OnFetched(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern void MainPublisherSegmentationListener_OnFetched_m149ABD6706B008A3D5883CE69DF6D7F7A1EA4BA8 (void);
// 0x0000011B System.Void FlurrySDK.Flurry/PublisherSegmentation/MainPublisherSegmentationListener::.ctor()
extern void MainPublisherSegmentationListener__ctor_mCD1010690BB6C2D023E8F707E7896E74D94174F6 (void);
// 0x0000011C System.Void FlurrySDK.Flurry/IPublisherSegmentationListener::OnFetched(System.Collections.Generic.IDictionary`2<System.String,System.String>)
// 0x0000011D System.Void FlurrySDK.Flurry/EventParam::.cctor()
extern void EventParam__cctor_m81D74A63433CE9EE8035068A8F47A9E8C456DCC7 (void);
// 0x0000011E System.Void FlurrySDK.Flurry/EventParamBase::.ctor(System.String)
extern void EventParamBase__ctor_m5E21E27977D918ED1A976A4C82B65C02B0912DDD (void);
// 0x0000011F System.String FlurrySDK.Flurry/EventParamBase::ToString()
extern void EventParamBase_ToString_m4BD3FA8D7FAE1A9899BD1EDDB8DFB33A00C447D1 (void);
// 0x00000120 System.Void FlurrySDK.Flurry/StringEventParam::.ctor(System.String)
extern void StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A (void);
// 0x00000121 System.Void FlurrySDK.Flurry/DoubleEventParam::.ctor(System.String)
extern void DoubleEventParam__ctor_m176A6819BF4B1126D2F8C3B5CE53D1D767F81115 (void);
// 0x00000122 System.Void FlurrySDK.Flurry/IntegerEventParam::.ctor(System.String)
extern void IntegerEventParam__ctor_m410B3C941CDF9C7ECFB01F96E02CF47B9FBF8024 (void);
// 0x00000123 System.Void FlurrySDK.Flurry/BooleanEventParam::.ctor(System.String)
extern void BooleanEventParam__ctor_mEA5E9D4309DE18346DD25547E64F4AF57D142C28 (void);
// 0x00000124 System.Void FlurrySDK.Flurry/EventParams::.ctor()
extern void EventParams__ctor_m8342C866CDD3BE6F89092EDAE7F86B401CDEF43D (void);
// 0x00000125 System.Void FlurrySDK.Flurry/EventParams::.ctor(FlurrySDK.Flurry/EventParams)
extern void EventParams__ctor_mEE1A88EB07EFD35EC21A1787433C7C7896A372DA (void);
// 0x00000126 System.Collections.Generic.IDictionary`2<System.Object,System.String> FlurrySDK.Flurry/EventParams::GetParams()
extern void EventParams_GetParams_mB41875569AFF98D5E729200750F2056476B00C92 (void);
// 0x00000127 FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::Clear()
extern void EventParams_Clear_m7E39D6433EA353C7DEC5937C75C693C8A0FFC4B8 (void);
// 0x00000128 FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::Remove(FlurrySDK.Flurry/EventParamBase)
extern void EventParams_Remove_m8D2F4F077EC4E0FFB9C2F2645659B20D876EE59A (void);
// 0x00000129 FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::Remove(System.String)
extern void EventParams_Remove_m4459A26B1D76CFC31A895D07FFC612331CC97EF2 (void);
// 0x0000012A FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutAll(FlurrySDK.Flurry/EventParams)
extern void EventParams_PutAll_m481F3423DA2510502D07F1740A9EF3A52EFD8A73 (void);
// 0x0000012B FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutString(FlurrySDK.Flurry/StringEventParam,System.String)
extern void EventParams_PutString_mF45B2E3FD4733C96CDC9E0076CD64129AE4CA9C7 (void);
// 0x0000012C FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutString(System.String,System.String)
extern void EventParams_PutString_mBFD1D7EA9BEC0049C0070E2DD9DD7F235E8D77DD (void);
// 0x0000012D FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutInteger(FlurrySDK.Flurry/IntegerEventParam,System.Int32)
extern void EventParams_PutInteger_mA6E1D78A020C1E732889316BFC44C67C5164B6E2 (void);
// 0x0000012E FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutInteger(System.String,System.Int32)
extern void EventParams_PutInteger_m2C55203F0160FB6FF96568E0832E2ADA3E9A1139 (void);
// 0x0000012F FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutLong(FlurrySDK.Flurry/IntegerEventParam,System.Int64)
extern void EventParams_PutLong_mC5535EC3951B9624A9B94C0A235619F349F32F38 (void);
// 0x00000130 FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutLong(System.String,System.Int64)
extern void EventParams_PutLong_m34C3CC9072FC3F87429C804ECDCBBA6635C5C46D (void);
// 0x00000131 FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutDouble(FlurrySDK.Flurry/DoubleEventParam,System.Double)
extern void EventParams_PutDouble_mC8F89DE43096511D90D1D06D1062B1A7046D7DEC (void);
// 0x00000132 FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutDouble(System.String,System.Double)
extern void EventParams_PutDouble_m230AD9A7A18EE857F262BE2320262CD610F46D2C (void);
// 0x00000133 FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutBoolean(FlurrySDK.Flurry/BooleanEventParam,System.Boolean)
extern void EventParams_PutBoolean_mC8CC8EFF9C6322FE483AF16C22C8471245AC4FED (void);
// 0x00000134 FlurrySDK.Flurry/EventParams FlurrySDK.Flurry/EventParams::PutBoolean(System.String,System.Boolean)
extern void EventParams_PutBoolean_m76AB35484927169A7184215647A8AA28C50371D9 (void);
static Il2CppMethodPointer s_methodPointers[308] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	FlurryAgent__ctor_mC8068385ECEDB3BFD05AC21EF615B6712CED70F1,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AgentBuilder__ctor_mC3AF259B904B9731705C0916A70D564410723983,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	AgentUserProperties__ctor_mCAEC2A99DD1D818B0CB161FCA98E836A1D14304B,
	NULL,
	NULL,
	NULL,
	AgentPerformance__ctor_m2DDDD20B9F377F7A1BDEE8B1D0B04CDB43B6DF97,
	NULL,
	NULL,
	NULL,
	NULL,
	AgentConfig__ctor_mAA639CA3070EC37B2FA128E1C2842824E4647FAD,
	NULL,
	NULL,
	NULL,
	AgentPublisherSegmentation__ctor_mD5994473BF035B1000C5833FB3E605CE317F3243,
	FlurryAgentAndroid_SetContinueSessionMillis_m4431CB03795CFBF8B66545974CA803CCEC99A6B0,
	FlurryAgentAndroid_SetCrashReporting_m474A462B4F78DD7B3A60B83113CC5BBFE8594D30,
	FlurryAgentAndroid_SetIncludeBackgroundSessionsInMetrics_m31CF909FC4E49DB0208967CB0AF29F4F80BC9ABD,
	FlurryAgentAndroid_SetLogEnabled_m9DEB6E5938D50BE74C77BE1908431FC21EF210E8,
	FlurryAgentAndroid_SetLogLevel_m8B271E7F440202626AFE9B54847341585D2CB122,
	FlurryAgentAndroid_SetSslPinningEnabled_mAF6186CB34BC6BE06239C1D8933B10EB050A67D2,
	FlurryAgentAndroid_SetAge_mD3A5A080EDEB00DB2A76FCFA818C738EDC134B0D,
	FlurryAgentAndroid_SetGender_m3B9BE010F9373F5AC93F43ABF47844951E806A13,
	FlurryAgentAndroid_SetReportLocation_m261A7C8BE2484A27B8DA571731EFD81B0DE47D19,
	FlurryAgentAndroid_SetSessionOrigin_mCB9A0F687CD3E9EC917C0451FA8DEBD077537FC4,
	FlurryAgentAndroid_SetUserId_mAC7081007E9FA3A5641F3E7922BDAB1FC754C381,
	FlurryAgentAndroid_SetVersionName_m6779CEB0A950ABFA2EA64AD3823C4A88612A0147,
	FlurryAgentAndroid_AddOrigin_m2AF5011B6DD0E79538F03168B3192D55B1CCC2D5,
	FlurryAgentAndroid_AddOrigin_m0CC71AE33ABA11260E076E760C71EC5A9BDBE3A3,
	FlurryAgentAndroid_AddSessionProperty_m81FC47461B84575C49FAE50CD5CB5F3A9915577F,
	FlurryAgentAndroid_SetDataSaleOptOut_m85D59A37A7219C1B151FB787A588EE4885CCC044,
	FlurryAgentAndroid_DeleteData_m878ED11168075F15468376A3FE800EEF77BBF4D3,
	FlurryAgentAndroid_OpenPrivacyDashboard_m77E8FF4D6369BAA2E2D8E11CBF5679756846440C,
	FlurryAgentAndroid_GetAgentVersion_mE9E94EEB9C72E574E317A1069BE868F4586099F6,
	FlurryAgentAndroid_GetReleaseVersion_m40A1374AE3FBA6B6CEEEFD7A9A44AF75187D0233,
	FlurryAgentAndroid_GetSessionId_mF64728074E41D841E0C3DF3D348FCAC537DD7A46,
	FlurryAgentAndroid_LogEvent_m61DAA62F009BD9F2043E3AC81AC36F8A231CBCCE,
	FlurryAgentAndroid_LogEvent_m2A6C46C20F7B16A30E3E4436863141069FFDD212,
	FlurryAgentAndroid_LogEvent_m9073CA9328B5E73BAFDD3A21E103941F4B7A0AAF,
	FlurryAgentAndroid_LogEvent_m4CEB0786057E1522D581DA38EB86D810E994E346,
	FlurryAgentAndroid_EndTimedEvent_m8A0BF1E51E9394A4B726961B66700416A5892F3F,
	FlurryAgentAndroid_EndTimedEvent_m235020EAB97D8A30296FF11843A90191E9881040,
	FlurryAgentAndroid_LogEvent_mF6A1D5E80799BD1FD6FBF5F35DC802652114D631,
	FlurryAgentAndroid_ConvertToEventParams_mE23395ED5D7CE24EFF591EAC24ED46FA33770F65,
	FlurryAgentAndroid_OnPageView_m35A9B02DF32C2B2B623FFEFA2268E4E77CF07017,
	FlurryAgentAndroid_OnError_m43CBDC5BE1C90A6C6E26ED4664FA7DD5C5EBB233,
	FlurryAgentAndroid_OnError_m624B582E4ECA3721E94A56456398238B781605C0,
	FlurryAgentAndroid_LogBreadcrumb_mF217F9AF248D42436C810E16277F2F7452BED20E,
	FlurryAgentAndroid_LogPayment_m7417E80BB467680808A3A1244AEC8446B58AB52A,
	FlurryAgentAndroid_SetIAPReportingEnabled_mC7A94CF69CE45445051346CD75A7AF205E7A25BD,
	FlurryAgentAndroid_UpdateConversionValue_m80C69B0CCA7AE4563CC86A8B2610B68D83DA623F,
	FlurryAgentAndroid_UpdateConversionValueWithEvent_mB907AECD478E210FDF7EC095F8BD1210EA767A39,
	FlurryAgentAndroid_SetMessagingListener_m20B6F148B8C9F11D60DC4D74CB5C7446092A8DF9,
	FlurryAgentAndroid_GetPublisherSegmentation_mC8C7BE0B16B78B560BDD9EB858610851C80C9E57,
	FlurryAgentAndroid_FetchPublisherSegmentation_m1883FE7181BE8CE61DCC2F2242183A6B7E477655,
	FlurryAgentAndroid_SetPublisherSegmentationListener_m7B6C28458717B1C34AB362C0EBA7E383A00D917D,
	NULL,
	NULL,
	NULL,
	FlurryAgentAndroid_Dispose_mCBBAD15DD40615AC39B6442F4A54FC40BC9A0D2A,
	FlurryAgentAndroid__ctor_m91A3FFC2E252885661C84E4545B6249DD459D940,
	FlurryAgentAndroid__cctor_m76AB04E8B03D20A9AFEE76EA54E874ECD2368C66,
	AgentBuilderAndroid__ctor_m2435A012639C74FF7182F50C1AE2946178350FF0,
	AgentBuilderAndroid_Build_m8230980393E660920406DDB59F080937B33DA460,
	AgentBuilderAndroid_WithAppVersion_m61CED3D7164FCA590310C416D2CD9B07B5CC1593,
	AgentBuilderAndroid_WithContinueSessionMillis_m0CC80221CE73F905BA5927DE38083F0D2E4768FD,
	AgentBuilderAndroid_WithCrashReporting_m89D14C4417C8C8447F175EBEF4404C63334CC2A9,
	AgentBuilderAndroid_WithIncludeBackgroundSessionsInMetrics_m83ECD667EE632099CF808ED9717CB20E400ED19A,
	AgentBuilderAndroid_WithLogEnabled_m5FA00681B3E8F8554FBD4495D0492788269F4622,
	AgentBuilderAndroid_WithLogLevel_m849AB786EB5FA14645D2F1D7AE6B7B270F96C9F6,
	AgentBuilderAndroid_WithReportLocation_m5ABDEA2A6F432DDBBA7E4BA302EDB42809FBA47F,
	AgentBuilderAndroid_WithMessaging_m431963E7DDB550EFA104421E7E090A1DC02EF12A,
	AgentBuilderAndroid_WithDataSaleOptOut_m46C6800F5A1D367307F540C7CB18276EDFC5A4EB,
	AgentBuilderAndroid_WithPerformanceMetrics_m684E3265416C21244BB48EF2FD708BA26B2EBD71,
	AgentBuilderAndroid_WithSslPinningEnabled_m13F06644C5EA640D68C6AC6EDBB178D6C662F586,
	AgentUserPropertiesAndroid_Set_m76FC5839879B5AB044065E65F18B6B2F5F54BD35,
	AgentUserPropertiesAndroid_Set_m5D9F958D61441D7779958F5617C6478FA9B77B71,
	AgentUserPropertiesAndroid_Add_mFB608F676D845EA2A325ADEE4E74F254AFB686B0,
	AgentUserPropertiesAndroid_Add_m6559D9DE57FADB16DB968681DBCA5672CECF0DB8,
	AgentUserPropertiesAndroid_Remove_mBFED6150B95DD09B869DB6795F79CFF6E116E55C,
	AgentUserPropertiesAndroid_Remove_m6E142AAD31D298902EE45EE91D295883A0E585C8,
	AgentUserPropertiesAndroid_Remove_m8772648B39BAED5FDC7CED764E48222EF5877967,
	AgentUserPropertiesAndroid_Flag_m0680E4F041BD3FF97D7508F2895DAA9069EDC701,
	AgentUserPropertiesAndroid__ctor_m57F3C97A091D5C0998C9487E2D8980640964557D,
	AgentUserPropertiesAndroid__cctor_mDAB60E41FEE3671E73F0B37057625C84F79E8475,
	AgentPerformanceAndroid_ReportFullyDrawn_m8DFBEF0B881651F2B245AF8795FDA36B0B3F842C,
	AgentPerformanceAndroid_StartResourceLogger_mFBA73B6FB461610B4A64518EA95873501F020A92,
	AgentPerformanceAndroid_LogResourceLogger_m6899E8B108D6ED4A6109EBD2BEE3EA1859AC61C6,
	AgentPerformanceAndroid__ctor_mC3A07283B3BB3872BEAC46EA1038372EF0153C2D,
	AgentPerformanceAndroid__cctor_mBBFE2EB59A82D8BD7C60A86DB2E9D17C7B4B6B6E,
	AgentConfigAndroid_getInstance_m6223EA8899B2474C91C5B61DE4966830DF074851,
	AgentConfigAndroid_Fetch_mD3EF2248FEA8CD77D5B3BDAF11A0A7B6C2BB17B8,
	AgentConfigAndroid_Activate_m0EEFEA59FCCE8D367EFC92CB41DC063EED4A9BB0,
	AgentConfigAndroid_SetListener_m0E9A56AA14062686B8C5E8CFCFBE443EFF9E2816,
	AgentConfigAndroid_GetString_m94F76851C2221E3ACB82FBE84B976B51961731E1,
	AgentConfigAndroid__ctor_mE2832F625ADC526F3A7C9A2D3EDA8FDB1BE1AF9D,
	AgentConfigAndroid__cctor_m6EA9540AF13E938161DE7C778E6D5B5F5A2801DB,
	ConfigCallback__ctor_mDA2B1827622E4CA07A8F7BC9D8979C10B649A601,
	ConfigCallback_onFetchSuccess_m28CFBA421B45E1CD5C2BF482B1717AF2FAF36C4F,
	ConfigCallback_onFetchNoChange_mD877699306BC0AE466DE2E960C83DE8BEF224E3A,
	ConfigCallback_onFetchError_m37DAEE8960176A1B76EB5D34D3E7E90CE0CDE3DC,
	ConfigCallback_onActivateComplete_m1A39C0E1DF0B22B147A191E7E40F8849CAA35B31,
	MessagingCallback__ctor_m9557FDF28A5DF704DAEFC0691F6E765A90A9F083,
	MessagingCallback_onNotificationReceived_m553FB1A2DA3FE6D057924B8260804823C8F6D6F9,
	MessagingCallback_onNotificationClicked_m64411F8AA45852FBD3B701A4D52F7F384FB1E435,
	MessagingCallback_onNotificationCancelled_mEE4D8B563E215AB859B5ADF21F78A0DFC0317F41,
	MessagingCallback_onTokenRefresh_mE2F5F9CE4EB175141A79E6FE6F0F5A1EE9CAF690,
	MessagingCallback_onNonFlurryNotificationReceived_m1336B046BE54251DF5B6987C5A5468AFD95F92B3,
	MessagingCallback_GetFlurryMessage_m322FDC5709F5E14A65DBF036621C9274D7E70820,
	AgentPublisherSegmentationAndroid_Fetch_mF39AD340B864E9A8B147BBF97CC5BEA2F85AB439,
	AgentPublisherSegmentationAndroid_SetListener_m297502606D14A153DD4B91DFF4BA4EC44B625558,
	AgentPublisherSegmentationAndroid_GetData_m7C67D98EA998C1DFC4DABD2633E8FD97B674971F,
	AgentPublisherSegmentationAndroid__ctor_m8D9B53238946497E82A35239EE4667E7840FFD45,
	AgentPublisherSegmentationAndroid__cctor_m4AECD9CFB9183D7F5379D02925745E0FD841FEDA,
	PublisherSegmentationCallback__ctor_m3FB92C23E0B12B35D904004A3CA7C746483EA2EA,
	PublisherSegmentationCallback_onFetched_m1B5B0D2CF27D3C4012112B6457087725C34AEADE,
	PrivacySessionCallback__ctor_m159CB135F9CA290AF23EE86BF1000570CEF3C9B2,
	PrivacySessionCallback_success_m1B1274A053B7163447512CE7E1B82948861C7F1B,
	PrivacySessionCallback_failure_m9CA92C8E7C912E9DCFAE4AB9198F9DC9E5C1B70D,
	Flurry__cctor_mC8FF422C27C08B59B734CDB3039B2B89CA75F7A4,
	Flurry_SetContinueSessionMillis_mB2B76D880320794460DC9E25738CD4156C89B183,
	Flurry_SetCrashReporting_m06791BF863E13BB34272359E537A473FB1E88AE0,
	Flurry_SetIncludeBackgroundSessionsInMetrics_mEBE6E82E7AFC7F685292E19C41E8E432C21A70E1,
	Flurry_SetLogEnabled_mC902BDF79B61834E8642DB1CF2729866D39EF9C2,
	Flurry_SetLogLevel_mAD55159C5B4F6B1272CBF535DB825425171AA577,
	Flurry_SetSslPinningEnabled_mE73D672911D3D485D94AFAB98F2FF5A0067855CF,
	Flurry_SetAge_mDE08C58C87540338D04C4A149BDD1D8A24170E04,
	Flurry_SetGender_m54E447026C2EED083190AE4BAA8F5B599568DC39,
	Flurry_SetReportLocation_mB7A61DDE474CE34DB345F5B74E4561EDD438315C,
	Flurry_SetSessionOrigin_m65A5294D0743D9A475202380B6BFA824BD7B1FA5,
	Flurry_SetUserId_m2C1E29609BC7D71B63DDEBB9B5864AD40D2AF468,
	Flurry_SetVersionName_m4FF94261C74D6C3467B6887312CE9D2228136CCA,
	Flurry_AddOrigin_mB1FDCE124F4B20C888A144033A0649928B2FD78F,
	Flurry_AddOrigin_mDCB3C43802EEB14574F6DBF800DBF5F8434CF62D,
	Flurry_AddSessionProperty_m98780518959178E50C5A98971D557CA3F52B3C69,
	Flurry_SetDataSaleOptOut_mE0C3C15123367F74F195F366A948485179CB58E5,
	Flurry_DeleteData_m9C84926380CEE6F36E4CF02253C64A3F91B9BACE,
	Flurry_OpenPrivacyDashboard_mC54941303659055580F44A9C1EC20689A21E7C8D,
	Flurry_GetAgentVersion_m3B321A69E3F4A234387ED05EFB695D9A54EB43C4,
	Flurry_GetReleaseVersion_mC56A2103ECCD3384EDE496BD015E7DFA98E6848E,
	Flurry_GetSessionId_mFDB617C17EB6B8BD57AD4D0B289DFBCB567388FF,
	Flurry_LogEvent_mF9598B6FE52032DF0F70DFA61576977220D9544F,
	Flurry_LogEvent_m4A92FB81C7A3B9E07474E198C2CA52A9E7DB31CC,
	Flurry_LogEvent_m9AB0B74D04C099B202FBBFC94F4F1CCAD0894ECB,
	Flurry_LogEvent_m151BEE1EF3DB88682DBFF82132863566B1F375D2,
	Flurry_EndTimedEvent_mED6F6CE1D1F245774A701EC957ECAD24DBAD56EE,
	Flurry_EndTimedEvent_m4AF27897674C067CD439148B65DF9CAEFE8876AB,
	Flurry_LogEvent_m8E2E53D6735B501A2CDEE3592831576CD47EF538,
	Flurry_LogEvent_m8D8F359102DF89BDA8C1949987BD352F3C1484BC,
	Flurry_OnPageView_mC4AD44A38D0E19B91368A356F39EF99C21CEFA86,
	Flurry_OnError_m0600B44D9A2E554E096408030F32DF3DF80EBB06,
	Flurry_OnError_m457D72DBB55F6CCA0BBAF5B5F4D6F737B83E3CEA,
	Flurry_LogBreadcrumb_mCDC846CF1DF9B51E9459C12EE733E2DCC0C6118D,
	Flurry_LogPayment_mADA906E0C6B247EABB856A10605197DB20798B0B,
	Flurry_SetIAPReportingEnabled_mFDB637E8B47AA34FCB39966F5CCB4F15CC8FAC07,
	Flurry_UpdateConversionValue_mF0E730B37727F6F6427E2D25C5BD4A9CDDB605E0,
	Flurry_UpdateConversionValueWithEvent_m90BB11708AFAF8DA7CEEF435BD04987ADA99D314,
	Flurry_SetMessagingListener_mA163FB246E5D970F98743186B20BCDE326039E84,
	Flurry_GetPublisherSegmentation_m833087237C0F45C14697B0ADBEFBBBF3AD3EC072,
	Flurry_FetchPublisherSegmentation_m09D63040B4B1A416C2EBE5F6E61C06277FCBC1A6,
	Flurry_SetPublisherSegmentationListener_mA058A738ACD287642CD1CD979A769DC3DEA87D77,
	Flurry_Dispose_mD2294973CB652CD6A3066EE6D556B25338017EBC,
	Flurry__ctor_mF1774244E6B6D10566ACC439D0373A45F51ECADA,
	Builder__ctor_m2892CAECF7FE4FFF67D25C66E7E0B84EE64D79FF,
	Builder_Build_m3045C5B046DAF417FBDF1F72F5198E1946D65001,
	Builder_WithCrashReporting_m20FC8A7D89CDC4BE555B972E696FCDAA1E218C40,
	Builder_WithDataSaleOptOut_m9BB726C46C0DA5DB37B617FF9CD8E4B18469580F,
	Builder_WithContinueSessionMillis_m602E658FBB7362AB1ED1655BFC58CBCFCBFB41EB,
	Builder_WithIncludeBackgroundSessionsInMetrics_m4A158DA52F6D02F869494E107E628872FE669248,
	Builder_WithLogEnabled_m6CDA81F25E7C5BE833C14892A3B3337AB72DF69C,
	Builder_WithLogLevel_m5D680B6D4A003DCEF929EEA45AB9EB706A93715C,
	Builder_WithReportLocation_m0C37DCE7ABC043ADF2BA38C02390331FB7C126A2,
	Builder_WithMessaging_mA797B7B9D40FEBBCE5C587E7809A75918E0E182B,
	Builder_WithAppVersion_mD3E2B92C1BAC4BF09F27B8BD10CC5BAD2BBAD0A6,
	Builder_WithPerformanceMetrics_mC60B646967B569721C8734E2F60609A728091ECE,
	Builder_WithSslPinningEnabled_m5F1BF7CCB47982105546DA725E3BC5E9F2FFC56F,
	UserProperties__cctor_m38692BB4F9CBB8767C52C3B8068327A5CD7BB024,
	UserProperties_Set_mD7FECAEA0CDBC9B18FAFB17086B99D409441C0F0,
	UserProperties_Set_mCC529A4673B3E92987A85A3343A726EAC7A1E4A9,
	UserProperties_Add_mC368985ABD2394D53BE689A79A9F2F51B4E80B30,
	UserProperties_Add_mAEF4E1587C4746E1F8E8A1989D194D2387F0B29B,
	UserProperties_Remove_mE8280F1D13B9F92DF8CCA6E97CF5B7178F62CF73,
	UserProperties_Remove_mB95F8CDA5D8EC96BD5E061914C8B48B658D38538,
	UserProperties_Remove_mD6487A6D4F9F5FBEA46028B4DC0475A6976F6E08,
	UserProperties_Flag_mB3B56FAD04C06697A74375C13514C7E7FED73752,
	UserProperties__ctor_mC79CAB7B7996170E4434B0C348D79B3DE7723E92,
	Performance__cctor_m2EE6F8A2723A87067188E0119EF83711A5062C99,
	Performance_ReportFullyDrawn_m832DCA62DF22169A19A7AF3EBE57BD2B8EA34658,
	Performance_StartResourceLogger_mFF0253C6E7CA57CBDDD7C7BDB7DC615E19154B9C,
	Performance_LogResourceLogger_m60B46B0448447CE4EF8BF5BACE25DCB9F03B5527,
	Performance__ctor_mBFAF7AB41EFAC3BCB81CAD8D794AD48A2B7F307E,
	Config__cctor_m64F3E45572FB6E251B394CA31267CC0B0354F9B3,
	Config_Fetch_m3C8474CD98C5F4A6FD30CE140FDDDAC463C63B55,
	Config_Activate_m25143409C89B8F9A0FA3864492205F195672EA35,
	Config_RegisterListener_m642A2714AB54D4E49661AD8A7933D21D7DED8631,
	Config_UnregisterListener_mCCC6691F69812D315B529C4019C991FFC8C72702,
	Config_GetString_mD1CB83FCCCF176C76C44878ABC7DAD4A286D72A8,
	Config__ctor_mBDA6501914D5B2F4CC343F8EE1E49A6FF46E2FD4,
	MainConfigListener_OnFetchSuccess_m4C7BE3B29C5254B4E48EA05226F4855E048902E0,
	MainConfigListener_OnFetchNoChange_m4A880586E4BB6407B85E16FC593E4A9EA725D7D8,
	MainConfigListener_OnFetchError_mE9D4FF7E1D4FA70CB9C273D9A5FA32C7425D632C,
	MainConfigListener_OnActivateComplete_mDC9C6C700E50B7252A3B9E14F48D2114B53F74B9,
	MainConfigListener__ctor_m5F50B031E124AC19E95FFC3F3CDEDF6A7EB83DCF,
	NULL,
	NULL,
	NULL,
	NULL,
	FlurryMessage__ctor_mB2DA0B81D4F627360B4A410C8A79D1CA3EE5AAE7,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	PublisherSegmentation__cctor_m80E6D6668A53B891511B8A271584CD9DB4754A94,
	PublisherSegmentation_Fetch_m242B0839E400E478F2237874A89300EDD0019E79,
	PublisherSegmentation_RegisterListener_mCED04EA9BC1E28B9B159E5FEB45AD8829A86418F,
	PublisherSegmentation_UnregisterListener_m8FA63884DC25A56B258ADC09713A6BF667E1A1B5,
	PublisherSegmentation_GetData_m8BED9B7B16BC9EBFB09EC33525C03513AA9F3F9B,
	PublisherSegmentation__ctor_mD6C20C484A2B8780356B89BC4EE783F7AAF46912,
	MainPublisherSegmentationListener_OnFetched_m149ABD6706B008A3D5883CE69DF6D7F7A1EA4BA8,
	MainPublisherSegmentationListener__ctor_mCD1010690BB6C2D023E8F707E7896E74D94174F6,
	NULL,
	EventParam__cctor_m81D74A63433CE9EE8035068A8F47A9E8C456DCC7,
	EventParamBase__ctor_m5E21E27977D918ED1A976A4C82B65C02B0912DDD,
	EventParamBase_ToString_m4BD3FA8D7FAE1A9899BD1EDDB8DFB33A00C447D1,
	StringEventParam__ctor_mE777FE580F3E4AAA60465643A7C703FE90CA729A,
	DoubleEventParam__ctor_m176A6819BF4B1126D2F8C3B5CE53D1D767F81115,
	IntegerEventParam__ctor_m410B3C941CDF9C7ECFB01F96E02CF47B9FBF8024,
	BooleanEventParam__ctor_mEA5E9D4309DE18346DD25547E64F4AF57D142C28,
	EventParams__ctor_m8342C866CDD3BE6F89092EDAE7F86B401CDEF43D,
	EventParams__ctor_mEE1A88EB07EFD35EC21A1787433C7C7896A372DA,
	EventParams_GetParams_mB41875569AFF98D5E729200750F2056476B00C92,
	EventParams_Clear_m7E39D6433EA353C7DEC5937C75C693C8A0FFC4B8,
	EventParams_Remove_m8D2F4F077EC4E0FFB9C2F2645659B20D876EE59A,
	EventParams_Remove_m4459A26B1D76CFC31A895D07FFC612331CC97EF2,
	EventParams_PutAll_m481F3423DA2510502D07F1740A9EF3A52EFD8A73,
	EventParams_PutString_mF45B2E3FD4733C96CDC9E0076CD64129AE4CA9C7,
	EventParams_PutString_mBFD1D7EA9BEC0049C0070E2DD9DD7F235E8D77DD,
	EventParams_PutInteger_mA6E1D78A020C1E732889316BFC44C67C5164B6E2,
	EventParams_PutInteger_m2C55203F0160FB6FF96568E0832E2ADA3E9A1139,
	EventParams_PutLong_mC5535EC3951B9624A9B94C0A235619F349F32F38,
	EventParams_PutLong_m34C3CC9072FC3F87429C804ECDCBBA6635C5C46D,
	EventParams_PutDouble_mC8F89DE43096511D90D1D06D1062B1A7046D7DEC,
	EventParams_PutDouble_m230AD9A7A18EE857F262BE2320262CD610F46D2C,
	EventParams_PutBoolean_mC8CC8EFF9C6322FE483AF16C22C8471245AC4FED,
	EventParams_PutBoolean_m76AB35484927169A7184215647A8AA28C50371D9,
};
static const int32_t s_InvokerIndices[308] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	4030,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	4030,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	4030,
	0,
	0,
	0,
	4030,
	0,
	0,
	0,
	0,
	4030,
	0,
	0,
	0,
	4030,
	3274,
	3231,
	3231,
	3231,
	3273,
	3231,
	3273,
	3273,
	3231,
	1876,
	3289,
	3289,
	1876,
	1051,
	1876,
	3231,
	4030,
	4030,
	3926,
	3945,
	3945,
	2768,
	1354,
	1357,
	861,
	3289,
	1876,
	1344,
	5905,
	4030,
	1051,
	741,
	3289,
	96,
	3231,
	3273,
	3273,
	3289,
	3945,
	4030,
	3289,
	0,
	0,
	0,
	4030,
	4030,
	6178,
	4030,
	3289,
	3289,
	3274,
	3231,
	3231,
	3231,
	3273,
	3231,
	1569,
	3231,
	3273,
	3231,
	1876,
	1876,
	1876,
	1876,
	1876,
	1876,
	3289,
	3289,
	4030,
	6178,
	4030,
	4030,
	3289,
	4030,
	6178,
	6153,
	4030,
	4030,
	3289,
	1495,
	4030,
	6178,
	3289,
	4030,
	4030,
	3231,
	3231,
	3289,
	2374,
	2374,
	3289,
	3289,
	3289,
	2920,
	4030,
	3289,
	3945,
	4030,
	6178,
	3289,
	3289,
	4030,
	4030,
	4030,
	6178,
	6053,
	6048,
	6048,
	6048,
	6052,
	6048,
	6052,
	6052,
	6048,
	5599,
	6056,
	6056,
	5599,
	5139,
	5599,
	6048,
	6178,
	6178,
	6146,
	6153,
	6153,
	5819,
	5364,
	5366,
	4900,
	6056,
	5599,
	5815,
	5357,
	6178,
	5139,
	4757,
	6056,
	4176,
	6048,
	6052,
	6052,
	6056,
	6153,
	6178,
	6056,
	4030,
	4030,
	4030,
	3289,
	2908,
	2908,
	2918,
	2908,
	2908,
	2917,
	2908,
	1472,
	2920,
	2917,
	2908,
	6178,
	5599,
	5599,
	5599,
	5599,
	5599,
	5599,
	6056,
	6056,
	4030,
	6178,
	6178,
	6178,
	6056,
	4030,
	6178,
	6178,
	6178,
	6056,
	6056,
	5440,
	4030,
	4030,
	4030,
	3231,
	3231,
	4030,
	0,
	0,
	0,
	0,
	4030,
	0,
	0,
	0,
	0,
	0,
	6178,
	6178,
	6056,
	6056,
	6153,
	4030,
	3289,
	4030,
	0,
	6178,
	3289,
	3945,
	3289,
	3289,
	3289,
	3289,
	4030,
	3289,
	3945,
	3945,
	2920,
	2920,
	2920,
	1495,
	1495,
	1493,
	1493,
	1494,
	1494,
	1492,
	1492,
	1489,
	1489,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x06000077, { 0, 7 } },
	{ 0x06000078, { 7, 9 } },
	{ 0x06000079, { 16, 6 } },
};
extern const uint32_t g_rgctx_List_1_t02B07A7EB3CB8C505F1C642796BC5D995DB7C71E;
extern const uint32_t g_rgctx_List_1_GetEnumerator_m075B691F6CCCF4B0767D6D8E65BDA96EAAA2BE27;
extern const uint32_t g_rgctx_Enumerator_get_Current_m4921082AE73EC13134670737BE964140A39C4240;
extern const uint32_t g_rgctx_TValue_tD04D2BDA78791186E3924204D09B937415E7ED50;
extern const uint32_t g_rgctx_Enumerator_MoveNext_mB6A5D5987CC18A5BB963F73A51C6B19CE513A27B;
extern const uint32_t g_rgctx_Enumerator_t8C710F06A685071585E54858DFBC683AB1B1A3F0;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_t8C710F06A685071585E54858DFBC683AB1B1A3F0_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_IEnumerable_1_t04B4C90CEC9361A07250E2BC7F9456FABBBCD8CD;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m949CDE0D8C66FC3DDC7F24C52B33A60C8D111BA2;
extern const uint32_t g_rgctx_IEnumerator_1_tAA9660B680B8F38411F3CECB2DC5DB185FD78637;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m6D69ACF0D5C57B602A39D43B35E7E966380E31A2;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Key_mF366AB6CF588939C2AC39EBFC13820B23DD43475;
extern const uint32_t g_rgctx_TKey_t1916A75A6B7CFA8A0339A0AE07A66A8E6696A388;
extern const uint32_t g_rgctx_KeyValuePair_2_get_Value_m044B5F75F26D7F1584C1EB07357FA450FD6DAC8D;
extern const uint32_t g_rgctx_TValue_tA1C8D60480C83A517A135CFD69A1A73517D7D655;
extern const uint32_t g_rgctx_AndroidJavaObject_Call_TisTValue_tA1C8D60480C83A517A135CFD69A1A73517D7D655_mEE8144B439EBF267AFCACCC17D9FA667AA522CE2;
extern const uint32_t g_rgctx_Dictionary_2_tDB3619C9098EDDE8CB4650422195F28D956812EB;
extern const uint32_t g_rgctx_Dictionary_2__ctor_mF7141948B2EF47DA6DBB1E8C9B1B8EEED3CBEBE5;
extern const uint32_t g_rgctx_AndroidJavaObject_Call_TisTKey_t290739332F525EB013F8EE8B3D522F2A3B3BBF22_m7F63328F4DFD6BD42EED491831252F8266E2C2D6;
extern const uint32_t g_rgctx_AndroidJavaObject_Call_TisTValue_t8994C7E2059824ED6ABF4D447292F307ECEF9D61_m836A0076FBFEFB77FB7AA077F79F03AAE2211EF1;
extern const uint32_t g_rgctx_IDictionary_2_t24610E137DC309FACBB30CCD823FB93E1BD130BF;
extern const uint32_t g_rgctx_IDictionary_2_Add_m43D94542A2707C2C58BB2F5852C0E5B8575E09D9;
static const Il2CppRGCTXDefinition s_rgctxValues[22] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t02B07A7EB3CB8C505F1C642796BC5D995DB7C71E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_GetEnumerator_m075B691F6CCCF4B0767D6D8E65BDA96EAAA2BE27 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m4921082AE73EC13134670737BE964140A39C4240 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TValue_tD04D2BDA78791186E3924204D09B937415E7ED50 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_mB6A5D5987CC18A5BB963F73A51C6B19CE513A27B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t8C710F06A685071585E54858DFBC683AB1B1A3F0 },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_t8C710F06A685071585E54858DFBC683AB1B1A3F0_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t04B4C90CEC9361A07250E2BC7F9456FABBBCD8CD },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m949CDE0D8C66FC3DDC7F24C52B33A60C8D111BA2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_tAA9660B680B8F38411F3CECB2DC5DB185FD78637 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m6D69ACF0D5C57B602A39D43B35E7E966380E31A2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Key_mF366AB6CF588939C2AC39EBFC13820B23DD43475 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TKey_t1916A75A6B7CFA8A0339A0AE07A66A8E6696A388 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_KeyValuePair_2_get_Value_m044B5F75F26D7F1584C1EB07357FA450FD6DAC8D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TValue_tA1C8D60480C83A517A135CFD69A1A73517D7D655 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AndroidJavaObject_Call_TisTValue_tA1C8D60480C83A517A135CFD69A1A73517D7D655_mEE8144B439EBF267AFCACCC17D9FA667AA522CE2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Dictionary_2_tDB3619C9098EDDE8CB4650422195F28D956812EB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2__ctor_mF7141948B2EF47DA6DBB1E8C9B1B8EEED3CBEBE5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AndroidJavaObject_Call_TisTKey_t290739332F525EB013F8EE8B3D522F2A3B3BBF22_m7F63328F4DFD6BD42EED491831252F8266E2C2D6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_AndroidJavaObject_Call_TisTValue_t8994C7E2059824ED6ABF4D447292F307ECEF9D61_m836A0076FBFEFB77FB7AA077F79F03AAE2211EF1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IDictionary_2_t24610E137DC309FACBB30CCD823FB93E1BD130BF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IDictionary_2_Add_m43D94542A2707C2C58BB2F5852C0E5B8575E09D9 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_AssemblyU2DCSharpU2Dfirstpass_CodeGenModule;
const Il2CppCodeGenModule g_AssemblyU2DCSharpU2Dfirstpass_CodeGenModule = 
{
	"Assembly-CSharp-firstpass.dll",
	308,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	22,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
