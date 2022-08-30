#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct GenericVirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<Enemy>
struct List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Enemy[]
struct EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// Readme/Section[]
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioListener
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// BoardManager
struct BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// MovingObject
struct MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// TutorialInfo
struct TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Wall
struct Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334;
// BoardManager/Count
struct Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3;
// GameManager/<MoveEnemies>d__20
struct U3CMoveEnemiesU3Ed__20_t3D00603E4983073DFBAE406DEEB4B54D35E85B4D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// MovingObject/<SmoothMovement>d__8
struct U3CSmoothMovementU3Ed__8_t1ACE915D87470313E8FF67EAD03CB2F8F1400FAC;
// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMoveEnemiesU3Ed__20_t3D00603E4983073DFBAE406DEEB4B54D35E85B4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSmoothMovementU3Ed__8_t1ACE915D87470313E8FF67EAD03CB2F8F1400FAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2D27A0203C53BC4282C98D19D53EA1CB55CD40E5;
IL2CPP_EXTERN_C String_t* _stringLiteral406571F3CE85E4DDA59A9AEAAEFAB85852D1CC08;
IL2CPP_EXTERN_C String_t* _stringLiteral52B816C6658ED49AB58DCC8F80AF287443796630;
IL2CPP_EXTERN_C String_t* _stringLiteral5A135CD2AD82D069CD3A4AF0011DF7A9E307A55E;
IL2CPP_EXTERN_C String_t* _stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420;
IL2CPP_EXTERN_C String_t* _stringLiteral715D5D81CA09CC53FDF62B8A5075F9D5E378D34C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral838E394589B5693706685699154545855BEAE0B2;
IL2CPP_EXTERN_C String_t* _stringLiteral908221B36A67B730DB9A759C8B7A77FE8D4283C2;
IL2CPP_EXTERN_C String_t* _stringLiteral95D7F28AC82AF9DC3FFC83E8E3CB141475CE1A86;
IL2CPP_EXTERN_C String_t* _stringLiteral99C28659C4502AFE9B20B0946CB18792D3D52567;
IL2CPP_EXTERN_C String_t* _stringLiteralB1179CA563495DAD3C4398E39ED24AC0BDB025A4;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralCBC092B38E3735861A7E64054D21030A081C9491;
IL2CPP_EXTERN_C String_t* _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_m73A6E2D09CAA87DA44F0872922430ABC1A14FFFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_OnSceneLoaded_m493DEFC27D67D3152EA9FA5A7FD9EB1E2B986A36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5212A0E073717BF79B93BBA707AB20B862DEC2C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m950E53871A8E9E2338BC4F382D94D7A5F5F7B8A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_m60D3B14293FFCFAB03D463B1F88FBC8AB695C991_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1508A8255188F2CDBCE32D3835B8FF2E5044318E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m06491E24E76E12248772D510B36BB496FE85048E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1B277B53168A4876E1F5CC6CE3F9A8C66F178962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MovingObject_AttemptMove_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA591E82DE871B7A44D8C55108BA0AFB711E9009A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MovingObject_AttemptMove_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m7EDE2FC9F2507BB8C2A62E57A0BFD2C56542F470_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMoveEnemiesU3Ed__20_System_Collections_IEnumerator_Reset_m4E044B41012DBBF4F2ABF0DD9B7D022B90C4062D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSmoothMovementU3Ed__8_System_Collections_IEnumerator_Reset_m78C56E4A414CE6A3AB17DD2AC76E9E12AAFD6831_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<Enemy>
struct List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	EnemyU5BU5D_t17F646169909105322498EFD67B34945C9A08B6F* ___s_emptyArray_5;
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// BoardManager/Count
struct Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3  : public RuntimeObject
{
	// System.Int32 BoardManager/Count::minimum
	int32_t ___minimum_0;
	// System.Int32 BoardManager/Count::maximum
	int32_t ___maximum_1;
};

// GameManager/<MoveEnemies>d__20
struct U3CMoveEnemiesU3Ed__20_t3D00603E4983073DFBAE406DEEB4B54D35E85B4D  : public RuntimeObject
{
	// System.Int32 GameManager/<MoveEnemies>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<MoveEnemies>d__20::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameManager GameManager/<MoveEnemies>d__20::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_2;
	// System.Int32 GameManager/<MoveEnemies>d__20::<i>5__2
	int32_t ___U3CiU3E5__2_3;
};

// Readme/Section
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
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

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA 
{
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;
};

// MovingObject/<SmoothMovement>d__8
struct U3CSmoothMovementU3Ed__8_t1ACE915D87470313E8FF67EAD03CB2F8F1400FAC  : public RuntimeObject
{
	// System.Int32 MovingObject/<SmoothMovement>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object MovingObject/<SmoothMovement>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// MovingObject MovingObject/<SmoothMovement>d__8::<>4__this
	MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* ___U3CU3E4__this_2;
	// UnityEngine.Vector3 MovingObject/<SmoothMovement>d__8::end
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end_3;
	// System.Single MovingObject/<SmoothMovement>d__8::<sqrRemainingDistance>5__2
	float ___U3CsqrRemainingDistanceU3E5__2_4;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Readme
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D Readme::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.AudioListener
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BoardManager
struct BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 BoardManager::columns
	int32_t ___columns_4;
	// System.Int32 BoardManager::rows
	int32_t ___rows_5;
	// BoardManager/Count BoardManager::wallCount
	Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3* ___wallCount_6;
	// BoardManager/Count BoardManager::foodCount
	Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3* ___foodCount_7;
	// UnityEngine.GameObject BoardManager::exit
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___exit_8;
	// UnityEngine.GameObject[] BoardManager::floorTiles
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___floorTiles_9;
	// UnityEngine.GameObject[] BoardManager::wallTiles
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___wallTiles_10;
	// UnityEngine.GameObject[] BoardManager::foodTiles
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___foodTiles_11;
	// UnityEngine.GameObject[] BoardManager::enemyTiles
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___enemyTiles_12;
	// UnityEngine.Transform BoardManager::boardHolder
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___boardHolder_13;
	// System.Collections.Generic.List`1<UnityEngine.Vector2> BoardManager::gridPositions
	List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* ___gridPositions_14;
};

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GameManager::turnDelay
	float ___turnDelay_4;
	// System.Single GameManager::levelStartDelay
	float ___levelStartDelay_5;
	// BoardManager GameManager::boardManager
	BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* ___boardManager_7;
	// System.Int32 GameManager::level
	int32_t ___level_8;
	// System.Int32 GameManager::playerEnergy
	int32_t ___playerEnergy_9;
	// System.Boolean GameManager::playersTurn
	bool ___playersTurn_10;
	// System.Collections.Generic.List`1<Enemy> GameManager::enemies
	List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* ___enemies_11;
	// System.Boolean GameManager::enemiesMoving
	bool ___enemiesMoving_12;
	// UnityEngine.UI.Text GameManager::levelText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___levelText_13;
	// UnityEngine.GameObject GameManager::levelImage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___levelImage_14;
	// System.Boolean GameManager::doingSetup
	bool ___doingSetup_15;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_6;
};

// MovingObject
struct MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single MovingObject::moveTime
	float ___moveTime_4;
	// UnityEngine.LayerMask MovingObject::blockingLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___blockingLayer_5;
	// UnityEngine.BoxCollider2D MovingObject::boxCollider
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___boxCollider_6;
	// UnityEngine.Rigidbody2D MovingObject::rb2D
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb2D_7;
	// System.Single MovingObject::inverseMoveTime
	float ___inverseMoveTime_8;
	// System.Boolean MovingObject::isMoving
	bool ___isMoving_9;
};

// TutorialInfo
struct TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean TutorialInfo::showAtStart
	bool ___showAtStart_4;
	// System.String TutorialInfo::url
	String_t* ___url_5;
	// UnityEngine.GameObject TutorialInfo::overlay
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___overlay_6;
	// UnityEngine.AudioListener TutorialInfo::mainListener
	AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* ___mainListener_7;
	// UnityEngine.UI.Toggle TutorialInfo::showAtStartToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___showAtStartToggle_8;
};

struct TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_StaticFields
{
	// System.String TutorialInfo::showAtStartPrefsKey
	String_t* ___showAtStartPrefsKey_9;
	// System.Boolean TutorialInfo::alreadyShownThisSession
	bool ___alreadyShownThisSession_10;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Wall
struct Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Sprite Wall::dmgSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___dmgSprite_4;
	// System.Int32 Wall::hp
	int32_t ___hp_5;
	// UnityEngine.SpriteRenderer Wall::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_6;
};

// Enemy
struct Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB  : public MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE
{
	// System.Int32 Enemy::playerDamage
	int32_t ___playerDamage_10;
	// UnityEngine.Animator Enemy::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_11;
	// UnityEngine.Transform Enemy::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_12;
	// System.Boolean Enemy::skipMove
	bool ___skipMove_13;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE
{
	// System.Int32 Player::wallDamage
	int32_t ___wallDamage_10;
	// System.Int32 Player::pointsPerFood
	int32_t ___pointsPerFood_11;
	// System.Single Player::restartLevelDelay
	float ___restartLevelDelay_12;
	// UnityEngine.UI.Text Player::energyText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___energyText_13;
	// UnityEngine.Animator Player::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_14;
	// System.Int32 Player::energy
	int32_t ___energy_15;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
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


// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m60D3B14293FFCFAB03D463B1F88FBC8AB695C991_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared (UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Clear()
inline void List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::Add(T)
inline void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Count()
inline int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Vector2>::get_Item(System.Int32)
inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, int32_t, const RuntimeMethod*))List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_m60D3B14293FFCFAB03D463B1F88FBC8AB695C991 (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m60D3B14293FFCFAB03D463B1F88FBC8AB695C991_gshared)(__this, ___index0, method);
}
// UnityEngine.Vector3 BoardManager::RandomPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoardManager_RandomPosition_m74216C300DB9FBE4BF63899CB8B8B0C625E62D08 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void BoardManager::BoardSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_BoardSetup_m79DD5A3E1FA0B7DFD1B32E8834F49920FFB6E994 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) ;
// System.Void BoardManager::InitialiseList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_InitialiseList_mA9D7BE5DB24FCE7D1187BAFD5D0770F408A6C576 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) ;
// System.Void BoardManager::LayoutObjectAtRandom(UnityEngine.GameObject[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_LayoutObjectAtRandom_m8D5CE56DE20494F0AF5D0CDE0B8C6A81F61325A0 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___tileArray0, int32_t ___minimum1, int32_t ___maximum2, const RuntimeMethod* method) ;
// System.Void BoardManager/Count::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Count__ctor_m4C2B0541D04BA53780301C59B6541A58A716FF4B (Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3* __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector2>::.ctor()
inline void List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, const RuntimeMethod*))List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void GameManager::AddEnemyToList(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddEnemyToList_m0139FAEF10D798C716E8B52B80E66CFB42BCA66A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9 (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Void MovingObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_Start_m0C6E23E9EFB7BBF2B653F8C194A8E1FAF030A011 (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void MovingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject__ctor_m8C4852F93E00E1456255E1775B6C56654158E0E4 (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Enemy>::.ctor()
inline void List_1__ctor_m1508A8255188F2CDBCE32D3835B8FF2E5044318E (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<BoardManager>()
inline BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* Component_GetComponent_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_m73A6E2D09CAA87DA44F0872922430ABC1A14FFFD (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void GameManager::InitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InitGame_mDF7FADBA0B49B6C48C3F0D2333F55208ED9023E9 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_mDE45940CCEC5D17EB92EB76DB8931E5483FBCD2C (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Enemy>::Clear()
inline void List_1_Clear_m950E53871A8E9E2338BC4F382D94D7A5F5F7B8A6_inline (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Void BoardManager::SetupScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_SetupScene_m605D571EEB0DA94B6ABE05E8ACDD0A1DD9DE4CE8 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___level0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::MoveEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_MoveEnemies_m1FD1927DE407D55E504072283762D162BCBB3E72 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Enemy>::Add(T)
inline void List_1_Add_m5212A0E073717BF79B93BBA707AB20B862DEC2C0_inline (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* __this, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B*, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void GameManager/<MoveEnemies>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__20__ctor_m784C4889850C858F5F3A36091C6ACF22B03F3A28 (U3CMoveEnemiesU3Ed__20_t3D00603E4983073DFBAE406DEEB4B54D35E85B4D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Enemy>::get_Count()
inline int32_t List_1_get_Count_m06491E24E76E12248772D510B36BB496FE85048E_inline (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<Enemy>::get_Item(System.Int32)
inline Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* List_1_get_Item_m1B277B53168A4876E1F5CC6CE3F9A8C66F178962 (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* (*) (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void Enemy::MoveEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_MoveEnemy_mE424F5EA8BFA373D83BE01185480DF870FC5A1AF (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763 (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___mask0, const RuntimeMethod* method) ;
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Linecast(UnityEngine.Vector2,UnityEngine.Vector2,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA Physics2D_Linecast_m38BDCA98A5B3B55B46E7AD91B9B3C0B1F60ADA43 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___start0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___end1, int32_t ___layerMask2, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A (RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator MovingObject::SmoothMovement(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MovingObject_SmoothMovement_mC10FD7B9D388565C35D83790F138A14E271A6369 (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end0, const RuntimeMethod* method) ;
// System.Void MovingObject/<SmoothMovement>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__8__ctor_m57B0D6E2567B92B01B82C118A7FDA3D30EF0D03E (U3CSmoothMovementU3Ed__8_t1ACE915D87470313E8FF67EAD03CB2F8F1400FAC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m4781751459C8DE7A3E3D593004FD3A5CBFC31A37 (int32_t ___sceneBuildIndex0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void Player::CheckIfGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CheckIfGameOver_m6A76E5B4D294F0F548B8EE2AE22035C6351CADCD (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void TutorialInfo::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_StartGame_m161CEAA09AC241DFE222F1731316A7A781EDA7AE (TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F (String_t* ___key0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void TutorialInfo::ShowLaunchScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_ShowLaunchScreen_mC88AEB0F1DC9DB63ECC7FBF58E93F3532659B583 (TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564 (String_t* ___url0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void BoardManager::InitialiseList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_InitialiseList_mA9D7BE5DB24FCE7D1187BAFD5D0770F408A6C576 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// gridPositions.Clear();
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = __this->___gridPositions_14;
		List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_inline(L_0, List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_RuntimeMethod_var);
		// for (int x = 1; x < columns - 1; x++)
		V_0 = 1;
		goto IL_003a;
	}

IL_000f:
	{
		// for (int y = 1; y < rows - 1; y++)
		V_1 = 1;
		goto IL_002b;
	}

IL_0013:
	{
		// gridPositions.Add(new Vector2(x, y));
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_1 = __this->___gridPositions_14;
		int32_t L_2 = V_0;
		int32_t L_3 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((float)L_2), ((float)L_3), /*hidden argument*/NULL);
		List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_inline(L_1, L_4, List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_RuntimeMethod_var);
		// for (int y = 1; y < rows - 1; y++)
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_002b:
	{
		// for (int y = 1; y < rows - 1; y++)
		int32_t L_6 = V_1;
		int32_t L_7 = __this->___rows_5;
		if ((((int32_t)L_6) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_7, 1)))))
		{
			goto IL_0013;
		}
	}
	{
		// for (int x = 1; x < columns - 1; x++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003a:
	{
		// for (int x = 1; x < columns - 1; x++)
		int32_t L_9 = V_0;
		int32_t L_10 = __this->___columns_4;
		if ((((int32_t)L_9) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_10, 1)))))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardManager::BoardSetup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_BoardSetup_m79DD5A3E1FA0B7DFD1B32E8834F49920FFB6E994 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A135CD2AD82D069CD3A4AF0011DF7A9E307A55E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// boardHolder = new GameObject("Board").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral5A135CD2AD82D069CD3A4AF0011DF7A9E307A55E, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		__this->___boardHolder_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boardHolder_13), (void*)L_1);
		// for (int x = -1; x < columns + 1; x++)
		V_0 = (-1);
		goto IL_006d;
	}

IL_0019:
	{
		// for (int y = -1; y < rows + 1; y++)
		V_1 = (-1);
		goto IL_005e;
	}

IL_001d:
	{
		// GameObject toInstantiate = floorTiles[Random.Range(0, floorTiles.Length)];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___floorTiles_9;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_3 = __this->___floorTiles_9;
		int32_t L_4;
		L_4 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_3)->max_length)), NULL);
		int32_t L_5 = L_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		// GameObject instance =
		//     Instantiate(toInstantiate, new Vector2(x, y), Quaternion.identity) as GameObject;
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), ((float)L_7), ((float)L_8), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_6, L_10, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// instance.transform.SetParent(boardHolder);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___boardHolder_13;
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_13, L_14, NULL);
		// for (int y = -1; y < rows + 1; y++)
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005e:
	{
		// for (int y = -1; y < rows + 1; y++)
		int32_t L_16 = V_1;
		int32_t L_17 = __this->___rows_5;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)il2cpp_codegen_add(L_17, 1)))))
		{
			goto IL_001d;
		}
	}
	{
		// for (int x = -1; x < columns + 1; x++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_006d:
	{
		// for (int x = -1; x < columns + 1; x++)
		int32_t L_19 = V_0;
		int32_t L_20 = __this->___columns_4;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_add(L_20, 1)))))
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 BoardManager::RandomPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 BoardManager_RandomPosition_m74216C300DB9FBE4BF63899CB8B8B0C625E62D08 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_m60D3B14293FFCFAB03D463B1F88FBC8AB695C991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int randomIndex = Random.Range(0, gridPositions.Count);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_0 = __this->___gridPositions_14;
		int32_t L_1;
		L_1 = List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_inline(L_0, List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, L_1, NULL);
		V_0 = L_2;
		// Vector3 randomPosition = gridPositions[randomIndex];
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_3 = __this->___gridPositions_14;
		int32_t L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543(L_3, L_4, List_1_get_Item_m1F8E226CAD72B83C5E75BB66B43025247806B543_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_5, NULL);
		// gridPositions.RemoveAt(randomIndex);
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_7 = __this->___gridPositions_14;
		int32_t L_8 = V_0;
		List_1_RemoveAt_m60D3B14293FFCFAB03D463B1F88FBC8AB695C991(L_7, L_8, List_1_RemoveAt_m60D3B14293FFCFAB03D463B1F88FBC8AB695C991_RuntimeMethod_var);
		// return randomPosition;
		return L_6;
	}
}
// System.Void BoardManager::LayoutObjectAtRandom(UnityEngine.GameObject[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_LayoutObjectAtRandom_m8D5CE56DE20494F0AF5D0CDE0B8C6A81F61325A0 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___tileArray0, int32_t ___minimum1, int32_t ___maximum2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// int objectCount = Random.Range(minimum, maximum + 1);
		int32_t L_0 = ___minimum1;
		int32_t L_1 = ___maximum2;
		int32_t L_2;
		L_2 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(L_0, ((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		V_0 = L_2;
		// for (int i = 0; i < objectCount; i++)
		V_1 = 0;
		goto IL_003a;
	}

IL_000e:
	{
		// Vector2 randomPosition = RandomPosition();
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = BoardManager_RandomPosition_m74216C300DB9FBE4BF63899CB8B8B0C625E62D08(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_3, NULL);
		V_2 = L_4;
		// GameObject tileChoice = tileArray[Random.Range(0, tileArray.Length)];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = ___tileArray0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = ___tileArray0;
		int32_t L_7;
		L_7 = Random_Range_mD4D2DEE3D2E75D07740C9A6F93B3088B03BBB8F8(0, ((int32_t)(((RuntimeArray*)L_6)->max_length)), NULL);
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		// Instantiate(tileChoice, randomPosition, Quaternion.identity);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_10, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_9, L_11, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// for (int i = 0; i < objectCount; i++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003a:
	{
		// for (int i = 0; i < objectCount; i++)
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		if ((((int32_t)L_15) < ((int32_t)L_16)))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void BoardManager::SetupScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager_SetupScene_m605D571EEB0DA94B6ABE05E8ACDD0A1DD9DE4CE8 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, int32_t ___level0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// BoardSetup();
		BoardManager_BoardSetup_m79DD5A3E1FA0B7DFD1B32E8834F49920FFB6E994(__this, NULL);
		// InitialiseList();
		BoardManager_InitialiseList_mA9D7BE5DB24FCE7D1187BAFD5D0770F408A6C576(__this, NULL);
		// LayoutObjectAtRandom (wallTiles, wallCount.minimum, wallCount.maximum);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___wallTiles_10;
		Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3* L_1 = __this->___wallCount_6;
		int32_t L_2 = L_1->___minimum_0;
		Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3* L_3 = __this->___wallCount_6;
		int32_t L_4 = L_3->___maximum_1;
		BoardManager_LayoutObjectAtRandom_m8D5CE56DE20494F0AF5D0CDE0B8C6A81F61325A0(__this, L_0, L_2, L_4, NULL);
		// LayoutObjectAtRandom (foodTiles, foodCount.minimum, foodCount.maximum);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___foodTiles_11;
		Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3* L_6 = __this->___foodCount_7;
		int32_t L_7 = L_6->___minimum_0;
		Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3* L_8 = __this->___foodCount_7;
		int32_t L_9 = L_8->___maximum_1;
		BoardManager_LayoutObjectAtRandom_m8D5CE56DE20494F0AF5D0CDE0B8C6A81F61325A0(__this, L_5, L_7, L_9, NULL);
		// int enemyCount = level;
		int32_t L_10 = ___level0;
		V_0 = L_10;
		// LayoutObjectAtRandom(enemyTiles, enemyCount, enemyCount);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___enemyTiles_12;
		int32_t L_12 = V_0;
		int32_t L_13 = V_0;
		BoardManager_LayoutObjectAtRandom_m8D5CE56DE20494F0AF5D0CDE0B8C6A81F61325A0(__this, L_11, L_12, L_13, NULL);
		// Instantiate (exit, new Vector2(columns - 1, rows - 1), Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___exit_8;
		int32_t L_15 = __this->___columns_4;
		int32_t L_16 = __this->___rows_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_17), ((float)((int32_t)il2cpp_codegen_subtract(L_15, 1))), ((float)((int32_t)il2cpp_codegen_subtract(L_16, 1))), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_17, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_14, L_18, L_19, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void BoardManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoardManager__ctor_m611C494A213953B5600647FBC3585123518899E0 (BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int columns = 8;                                         //Number of columns in our game board.
		__this->___columns_4 = 8;
		// public int rows = 8;                                            //Number of rows in our game board.
		__this->___rows_5 = 8;
		// public Count wallCount = new Count(5, 9);                       //Lower and upper limit for our random number of walls per level.
		Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3* L_0 = (Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3*)il2cpp_codegen_object_new(Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3_il2cpp_TypeInfo_var);
		Count__ctor_m4C2B0541D04BA53780301C59B6541A58A716FF4B(L_0, 5, ((int32_t)9), NULL);
		__this->___wallCount_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wallCount_6), (void*)L_0);
		// public Count foodCount = new Count(1, 5);                       //Lower and upper limit for our random number of food items per level.
		Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3* L_1 = (Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3*)il2cpp_codegen_object_new(Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3_il2cpp_TypeInfo_var);
		Count__ctor_m4C2B0541D04BA53780301C59B6541A58A716FF4B(L_1, 1, 5, NULL);
		__this->___foodCount_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___foodCount_7), (void*)L_1);
		// private List<Vector2> gridPositions = new List<Vector2>();  //A list of possible locations to place tiles.
		List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* L_2 = (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*)il2cpp_codegen_object_new(List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B_il2cpp_TypeInfo_var);
		List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F(L_2, List_1__ctor_m88C4BD8AC607DB3585552068F4DC437406358D5F_RuntimeMethod_var);
		__this->___gridPositions_14 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gridPositions_14), (void*)L_2);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BoardManager/Count::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Count__ctor_m4C2B0541D04BA53780301C59B6541A58A716FF4B (Count_t35028C167B30D47ACF748289ED8A25C7A9CD0CB3* __this, int32_t ___min0, int32_t ___max1, const RuntimeMethod* method) 
{
	{
		// public Count(int min, int max)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// minimum = min;
		int32_t L_0 = ___min0;
		__this->___minimum_0 = L_0;
		// maximum = max;
		int32_t L_1 = ___max1;
		__this->___maximum_1 = L_1;
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m8BBD9A5AE10A27ABDFCD9168B93CD9C69D229034 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.instance.AddEnemyToList(this);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_6;
		GameManager_AddEnemyToList_m0139FAEF10D798C716E8B52B80E66CFB42BCA66A(L_0, __this, NULL);
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_11), (void*)L_1);
		// target = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = GameObject_FindGameObjectWithTag_m17078A0823CA9699710251C617B95D04D57098A9(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		__this->___target_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_12), (void*)L_3);
		// base.Start();
		MovingObject_Start_m0C6E23E9EFB7BBF2B653F8C194A8E1FAF030A011(__this, NULL);
		// }
		return;
	}
}
// System.Void Enemy::MoveEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_MoveEnemy_mE424F5EA8BFA373D83BE01185480DF870FC5A1AF (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovingObject_AttemptMove_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA591E82DE871B7A44D8C55108BA0AFB711E9009A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// int xDir = 0;
		V_0 = 0;
		// int yDir = 0;
		V_1 = 0;
		// if (Mathf.Abs(target.position.x - transform.position.x) < float.Epsilon)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		float L_6;
		L_6 = fabsf(((float)il2cpp_codegen_subtract(L_2, L_5)));
		if ((!(((float)L_6) < ((float)(1.40129846E-45f)))))
		{
			goto IL_005a;
		}
	}
	{
		// yDir = target.position.y > transform.position.y ? 1 : -1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___target_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___y_3;
		if ((((float)L_9) > ((float)L_12)))
		{
			goto IL_0056;
		}
	}
	{
		G_B4_0 = (-1);
		goto IL_0057;
	}

IL_0056:
	{
		G_B4_0 = 1;
	}

IL_0057:
	{
		V_1 = G_B4_0;
		goto IL_0081;
	}

IL_005a:
	{
		// xDir = target.position.x > transform.position.x ? 1 : -1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___target_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		float L_15 = L_14.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___x_2;
		if ((((float)L_15) > ((float)L_18)))
		{
			goto IL_007f;
		}
	}
	{
		G_B8_0 = (-1);
		goto IL_0080;
	}

IL_007f:
	{
		G_B8_0 = 1;
	}

IL_0080:
	{
		V_0 = G_B8_0;
	}

IL_0081:
	{
		// AttemptMove<Player>(xDir, yDir);
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		GenericVirtualActionInvoker2< int32_t, int32_t >::Invoke(MovingObject_AttemptMove_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mA591E82DE871B7A44D8C55108BA0AFB711E9009A_RuntimeMethod_var, __this, L_19, L_20);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mB6697627910F785A971C20C671DEFBA9D921D933 (Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* __this, const RuntimeMethod* method) 
{
	{
		MovingObject__ctor_m8C4852F93E00E1456255E1775B6C56654158E0E4(__this, NULL);
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_m73A6E2D09CAA87DA44F0872922430ABC1A14FFFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1508A8255188F2CDBCE32D3835B8FF2E5044318E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemies = new List<Enemy>();
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_0 = (List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B*)il2cpp_codegen_object_new(List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B_il2cpp_TypeInfo_var);
		List_1__ctor_m1508A8255188F2CDBCE32D3835B8FF2E5044318E(L_0, List_1__ctor_m1508A8255188F2CDBCE32D3835B8FF2E5044318E_RuntimeMethod_var);
		__this->___enemies_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemies_11), (void*)L_0);
		// boardManager = GetComponent<BoardManager>();
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_1;
		L_1 = Component_GetComponent_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_m73A6E2D09CAA87DA44F0872922430ABC1A14FFFD(__this, Component_GetComponent_TisBoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7_m73A6E2D09CAA87DA44F0872922430ABC1A14FFFD_RuntimeMethod_var);
		__this->___boardManager_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boardManager_7), (void*)L_1);
		// if (instance == null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_6), (void*)__this);
		// InitGame();
		GameManager_InitGame_mDF7FADBA0B49B6C48C3F0D2333F55208ED9023E9(__this, NULL);
		goto IL_004a;
	}

IL_0032:
	{
		// else if (instance != this)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_4, __this, NULL);
		if (!L_5)
		{
			goto IL_004a;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_6, NULL);
	}

IL_004a:
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_7, NULL);
		// }
		return;
	}
}
// System.Void GameManager::CallbackInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CallbackInitialization_m9F18F9FC464A81190B2AED3929D887FF932BE8E6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_OnSceneLoaded_m493DEFC27D67D3152EA9FA5A7FD9EB1E2B986A36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.sceneLoaded += OnSceneLoaded;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_0 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_0, NULL, (intptr_t)((void*)GameManager_OnSceneLoaded_m493DEFC27D67D3152EA9FA5A7FD9EB1E2B986A36_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_mDE45940CCEC5D17EB92EB76DB8931E5483FBCD2C(L_0, NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnSceneLoaded(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnSceneLoaded_m493DEFC27D67D3152EA9FA5A7FD9EB1E2B986A36 (Scene_tA1DC762B79745EB5140F054C884855B922318356 ___arg00, int32_t ___arg11, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance.level++;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_6;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = L_0;
		int32_t L_2 = L_1->___level_8;
		L_1->___level_8 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// instance.InitGame();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_6;
		GameManager_InitGame_mDF7FADBA0B49B6C48C3F0D2333F55208ED9023E9(L_3, NULL);
		// }
		return;
	}
}
// System.Void GameManager::InitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_InitGame_mDF7FADBA0B49B6C48C3F0D2333F55208ED9023E9 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m950E53871A8E9E2338BC4F382D94D7A5F5F7B8A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral406571F3CE85E4DDA59A9AEAAEFAB85852D1CC08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52B816C6658ED49AB58DCC8F80AF287443796630);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral908221B36A67B730DB9A759C8B7A77FE8D4283C2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1179CA563495DAD3C4398E39ED24AC0BDB025A4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// doingSetup = true;
		__this->___doingSetup_15 = (bool)1;
		// levelImage = GameObject.Find("LevelImage");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral406571F3CE85E4DDA59A9AEAAEFAB85852D1CC08, NULL);
		__this->___levelImage_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___levelImage_14), (void*)L_0);
		// levelText = GameObject.Find("LevelText").GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral908221B36A67B730DB9A759C8B7A77FE8D4283C2, NULL);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2;
		L_2 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_1, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		__this->___levelText_13 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___levelText_13), (void*)L_2);
		// levelText.text = $"Day {level}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___levelText_13;
		int32_t L_4 = __this->___level_8;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral52B816C6658ED49AB58DCC8F80AF287443796630, L_6, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_7);
		// levelImage.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___levelImage_14;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// Invoke("HideLevelImage", levelStartDelay);
		float L_9 = __this->___levelStartDelay_5;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteralB1179CA563495DAD3C4398E39ED24AC0BDB025A4, L_9, NULL);
		// enemies.Clear();
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_10 = __this->___enemies_11;
		List_1_Clear_m950E53871A8E9E2338BC4F382D94D7A5F5F7B8A6_inline(L_10, List_1_Clear_m950E53871A8E9E2338BC4F382D94D7A5F5F7B8A6_RuntimeMethod_var);
		// boardManager.SetupScene(level);
		BoardManager_t96314EF4E2C929E1F6AD3A6B67552C4BA1E882D7* L_11 = __this->___boardManager_7;
		int32_t L_12 = __this->___level_8;
		BoardManager_SetupScene_m605D571EEB0DA94B6ABE05E8ACDD0A1DD9DE4CE8(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void GameManager::HideLevelImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_HideLevelImage_mEAB24002620D90F9549D6F6B74655B1F661050D1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// levelImage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___levelImage_14;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// doingSetup = false;
		__this->___doingSetup_15 = (bool)0;
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// if (playersTurn || enemiesMoving || doingSetup)
		bool L_0 = __this->___playersTurn_10;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = __this->___enemiesMoving_12;
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = __this->___doingSetup_15;
		if (!L_2)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		// return;
		return;
	}

IL_0019:
	{
		// StartCoroutine(MoveEnemies());
		RuntimeObject* L_3;
		L_3 = GameManager_MoveEnemies_m1FD1927DE407D55E504072283762D162BCBB3E72(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void GameManager::AddEnemyToList(Enemy)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddEnemyToList_m0139FAEF10D798C716E8B52B80E66CFB42BCA66A (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* ___enemy0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5212A0E073717BF79B93BBA707AB20B862DEC2C0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// enemies.Add(enemy);
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_0 = __this->___enemies_11;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_1 = ___enemy0;
		List_1_Add_m5212A0E073717BF79B93BBA707AB20B862DEC2C0_inline(L_0, L_1, List_1_Add_m5212A0E073717BF79B93BBA707AB20B862DEC2C0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void GameManager::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C28659C4502AFE9B20B0946CB18792D3D52567);
		s_Il2CppMethodInitialized = true;
	}
	{
		// levelText.text = $"After {level} days, you ran out of energy.";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___levelText_13;
		int32_t L_1 = __this->___level_8;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_2);
		String_t* L_4;
		L_4 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral99C28659C4502AFE9B20B0946CB18792D3D52567, L_3, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// levelImage.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___levelImage_14;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::MoveEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_MoveEnemies_m1FD1927DE407D55E504072283762D162BCBB3E72 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMoveEnemiesU3Ed__20_t3D00603E4983073DFBAE406DEEB4B54D35E85B4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMoveEnemiesU3Ed__20_t3D00603E4983073DFBAE406DEEB4B54D35E85B4D* L_0 = (U3CMoveEnemiesU3Ed__20_t3D00603E4983073DFBAE406DEEB4B54D35E85B4D*)il2cpp_codegen_object_new(U3CMoveEnemiesU3Ed__20_t3D00603E4983073DFBAE406DEEB4B54D35E85B4D_il2cpp_TypeInfo_var);
		U3CMoveEnemiesU3Ed__20__ctor_m784C4889850C858F5F3A36091C6ACF22B03F3A28(L_0, 0, NULL);
		U3CMoveEnemiesU3Ed__20_t3D00603E4983073DFBAE406DEEB4B54D35E85B4D* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// public float turnDelay = .1f;
		__this->___turnDelay_4 = (0.100000001f);
		// public float levelStartDelay = 2f;
		__this->___levelStartDelay_5 = (2.0f);
		// public int level = 1;                      //Boolean to check if we're setting up board, prevent Player from moving during setup.
		__this->___level_8 = 1;
		// public int playerEnergy = 100;
		__this->___playerEnergy_9 = ((int32_t)100);
		// [HideInInspector] public bool playersTurn = true;
		__this->___playersTurn_10 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameManager/<MoveEnemies>d__20::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__20__ctor_m784C4889850C858F5F3A36091C6ACF22B03F3A28 (U3CMoveEnemiesU3Ed__20_t3D00603E4983073DFBAE406DEEB4B54D35E85B4D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<MoveEnemies>d__20::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__20_System_IDisposable_Dispose_mACFCEC81FB00BDF5B54836EA58D8A4A7168A662E (U3CMoveEnemiesU3Ed__20_t3D00603E4983073DFBAE406DEEB4B54D35E85B4D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<MoveEnemies>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMoveEnemiesU3Ed__20_MoveNext_m6DA022E136FFCDCEE365F1EC1309B5BBABDAA263 (U3CMoveEnemiesU3Ed__20_t3D00603E4983073DFBAE406DEEB4B54D35E85B4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m06491E24E76E12248772D510B36BB496FE85048E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1B277B53168A4876E1F5CC6CE3F9A8C66F178962_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_007c;
			}
			case 3:
			{
				goto IL_00cc;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// enemiesMoving = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3 = V_1;
		L_3->___enemiesMoving_12 = (bool)1;
		// yield return new WaitForSeconds(turnDelay);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_4 = V_1;
		float L_5 = L_4->___turnDelay_4;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (enemies.Count == 0)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = V_1;
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_8 = L_7->___enemies_11;
		int32_t L_9;
		L_9 = List_1_get_Count_m06491E24E76E12248772D510B36BB496FE85048E_inline(L_8, List_1_get_Count_m06491E24E76E12248772D510B36BB496FE85048E_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_0083;
		}
	}
	{
		// yield return new WaitForSeconds(turnDelay);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_10 = V_1;
		float L_11 = L_10->___turnDelay_4;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_12 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_12, L_11, NULL);
		__this->___U3CU3E2__current_1 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_12);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_007c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0083:
	{
		// for (int i = 0; i < enemies.Count; i++)
		__this->___U3CiU3E5__2_3 = 0;
		goto IL_00e3;
	}

IL_008c:
	{
		// enemies[i].MoveEnemy();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = V_1;
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_14 = L_13->___enemies_11;
		int32_t L_15 = __this->___U3CiU3E5__2_3;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_16;
		L_16 = List_1_get_Item_m1B277B53168A4876E1F5CC6CE3F9A8C66F178962(L_14, L_15, List_1_get_Item_m1B277B53168A4876E1F5CC6CE3F9A8C66F178962_RuntimeMethod_var);
		Enemy_MoveEnemy_mE424F5EA8BFA373D83BE01185480DF870FC5A1AF(L_16, NULL);
		// yield return new WaitForSeconds(enemies[i].moveTime);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_17 = V_1;
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_18 = L_17->___enemies_11;
		int32_t L_19 = __this->___U3CiU3E5__2_3;
		Enemy_t10DB314C96B1CE78B8D967CD3B39F05126409BBB* L_20;
		L_20 = List_1_get_Item_m1B277B53168A4876E1F5CC6CE3F9A8C66F178962(L_18, L_19, List_1_get_Item_m1B277B53168A4876E1F5CC6CE3F9A8C66F178962_RuntimeMethod_var);
		float L_21 = ((MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE*)L_20)->___moveTime_4;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_22 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_22, L_21, NULL);
		__this->___U3CU3E2__current_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_22);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00cc:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (int i = 0; i < enemies.Count; i++)
		int32_t L_23 = __this->___U3CiU3E5__2_3;
		V_2 = L_23;
		int32_t L_24 = V_2;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_00e3:
	{
		// for (int i = 0; i < enemies.Count; i++)
		int32_t L_25 = __this->___U3CiU3E5__2_3;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_26 = V_1;
		List_1_tAF2833BCF7AB13A184BFFC2F17FA72478CA1686B* L_27 = L_26->___enemies_11;
		int32_t L_28;
		L_28 = List_1_get_Count_m06491E24E76E12248772D510B36BB496FE85048E_inline(L_27, List_1_get_Count_m06491E24E76E12248772D510B36BB496FE85048E_RuntimeMethod_var);
		if ((((int32_t)L_25) < ((int32_t)L_28)))
		{
			goto IL_008c;
		}
	}
	{
		// playersTurn = true;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_29 = V_1;
		L_29->___playersTurn_10 = (bool)1;
		// enemiesMoving = false;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_30 = V_1;
		L_30->___enemiesMoving_12 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<MoveEnemies>d__20::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveEnemiesU3Ed__20_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCE9AAD05281C92B4E1DCAA899E2F8ED65C3D766B (U3CMoveEnemiesU3Ed__20_t3D00603E4983073DFBAE406DEEB4B54D35E85B4D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<MoveEnemies>d__20::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveEnemiesU3Ed__20_System_Collections_IEnumerator_Reset_m4E044B41012DBBF4F2ABF0DD9B7D022B90C4062D (U3CMoveEnemiesU3Ed__20_t3D00603E4983073DFBAE406DEEB4B54D35E85B4D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMoveEnemiesU3Ed__20_System_Collections_IEnumerator_Reset_m4E044B41012DBBF4F2ABF0DD9B7D022B90C4062D_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<MoveEnemies>d__20::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMoveEnemiesU3Ed__20_System_Collections_IEnumerator_get_Current_m687A6BE566069C70370E239C578BDF6031CFE329 (U3CMoveEnemiesU3Ed__20_t3D00603E4983073DFBAE406DEEB4B54D35E85B4D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void MovingObject::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject_Start_m0C6E23E9EFB7BBF2B653F8C194A8E1FAF030A011 (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// boxCollider = GetComponent<BoxCollider2D>();
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0;
		L_0 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		__this->___boxCollider_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boxCollider_6), (void*)L_0);
		// rb2D = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1;
		L_1 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb2D_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb2D_7), (void*)L_1);
		// inverseMoveTime = 1f / moveTime;
		float L_2 = __this->___moveTime_4;
		__this->___inverseMoveTime_8 = ((float)((1.0f)/L_2));
		// }
		return;
	}
}
// System.Boolean MovingObject::Move(System.Int32,System.Int32,UnityEngine.RaycastHit2D&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MovingObject_Move_m9B58F8D199C144BFFFADCBC99576F2B371C70D52 (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, int32_t ___xDir0, int32_t ___yDir1, RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* ___hit2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 start = transform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_1, NULL);
		V_0 = L_2;
		// Vector2 end = start + new Vector2(xDir, yDir);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_0;
		int32_t L_4 = ___xDir0;
		int32_t L_5 = ___yDir1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)L_4), ((float)L_5), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline(L_3, L_6, NULL);
		V_1 = L_7;
		// boxCollider.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_8 = __this->___boxCollider_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_8, (bool)0, NULL);
		// hit = Physics2D.Linecast(start, end, blockingLayer);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_9 = ___hit2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_12 = __this->___blockingLayer_5;
		int32_t L_13;
		L_13 = LayerMask_op_Implicit_m5D697E103A7CB05CADCED9F90FD4F6BAE955E763(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Physics2D_t64C0DB5246067DAC2E83A52558A0AC68AF3BE94D_il2cpp_TypeInfo_var);
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA L_14;
		L_14 = Physics2D_Linecast_m38BDCA98A5B3B55B46E7AD91B9B3C0B1F60ADA43(L_10, L_11, L_13, NULL);
		*(RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA*)L_9 = L_14;
		// boxCollider.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_15 = __this->___boxCollider_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_15, (bool)1, NULL);
		// if (hit.transform == null && !isMoving)
		RaycastHit2D_t3EAAA06E6603C6BC61AC1291DD881C5C1E23BDFA* L_16 = ___hit2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = RaycastHit2D_get_transform_mA5E3F8DC9914E79D3C9F6F3F2515B49EEBB4564A(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_007c;
		}
	}
	{
		bool L_19 = __this->___isMoving_9;
		if (L_19)
		{
			goto IL_007c;
		}
	}
	{
		// StartCoroutine(SmoothMovement(end));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_20, NULL);
		RuntimeObject* L_22;
		L_22 = MovingObject_SmoothMovement_mC10FD7B9D388565C35D83790F138A14E271A6369(__this, L_21, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_23;
		L_23 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_22, NULL);
		// return true;
		return (bool)1;
	}

IL_007c:
	{
		// return false;
		return (bool)0;
	}
}
// System.Collections.IEnumerator MovingObject::SmoothMovement(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MovingObject_SmoothMovement_mC10FD7B9D388565C35D83790F138A14E271A6369 (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSmoothMovementU3Ed__8_t1ACE915D87470313E8FF67EAD03CB2F8F1400FAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSmoothMovementU3Ed__8_t1ACE915D87470313E8FF67EAD03CB2F8F1400FAC* L_0 = (U3CSmoothMovementU3Ed__8_t1ACE915D87470313E8FF67EAD03CB2F8F1400FAC*)il2cpp_codegen_object_new(U3CSmoothMovementU3Ed__8_t1ACE915D87470313E8FF67EAD03CB2F8F1400FAC_il2cpp_TypeInfo_var);
		U3CSmoothMovementU3Ed__8__ctor_m57B0D6E2567B92B01B82C118A7FDA3D30EF0D03E(L_0, 0, NULL);
		U3CSmoothMovementU3Ed__8_t1ACE915D87470313E8FF67EAD03CB2F8F1400FAC* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CSmoothMovementU3Ed__8_t1ACE915D87470313E8FF67EAD03CB2F8F1400FAC* L_2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___end0;
		L_2->___end_3 = L_3;
		return L_2;
	}
}
// System.Void MovingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovingObject__ctor_m8C4852F93E00E1456255E1775B6C56654158E0E4 (MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* __this, const RuntimeMethod* method) 
{
	{
		// public float moveTime = 0.1f;           //Time it will take object to move, in seconds.
		__this->___moveTime_4 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MovingObject/<SmoothMovement>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__8__ctor_m57B0D6E2567B92B01B82C118A7FDA3D30EF0D03E (U3CSmoothMovementU3Ed__8_t1ACE915D87470313E8FF67EAD03CB2F8F1400FAC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void MovingObject/<SmoothMovement>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__8_System_IDisposable_Dispose_m8BC6CBB8CF368928D784A468F714F31F35476155 (U3CSmoothMovementU3Ed__8_t1ACE915D87470313E8FF67EAD03CB2F8F1400FAC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean MovingObject/<SmoothMovement>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSmoothMovementU3Ed__8_MoveNext_m443BFC2118A7A85B52E12560453EEF80ECD12E21 (U3CSmoothMovementU3Ed__8_t1ACE915D87470313E8FF67EAD03CB2F8F1400FAC* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00bb;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// isMoving = true;
		MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* L_4 = V_1;
		L_4->___isMoving_9 = (bool)1;
		// float sqrRemainingDistance = (transform.position - end).sqrMagnitude;
		MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* L_5 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___end_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_7, L_8, NULL);
		V_2 = L_9;
		float L_10;
		L_10 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_2), NULL);
		__this->___U3CsqrRemainingDistanceU3E5__2_4 = L_10;
		goto IL_00c2;
	}

IL_004e:
	{
		// Vector2 newPostion = Vector2.MoveTowards(rb2D.position, end, inverseMoveTime * Time.deltaTime);
		MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* L_11 = V_1;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_12 = L_11->___rb2D_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Rigidbody2D_get_position_m07070C4416DFE2229070F95B349E411AE4869276(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___end_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_14, NULL);
		MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* L_16 = V_1;
		float L_17 = L_16->___inverseMoveTime_8;
		float L_18;
		L_18 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline(L_13, L_15, ((float)il2cpp_codegen_multiply(L_17, L_18)), NULL);
		V_3 = L_19;
		// transform.position = newPostion;
		MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* L_20 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline(L_22, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_21, L_23, NULL);
		// sqrRemainingDistance = (transform.position - end).sqrMagnitude;
		MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* L_24 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = __this->___end_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_26, L_27, NULL);
		V_2 = L_28;
		float L_29;
		L_29 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_2), NULL);
		__this->___U3CsqrRemainingDistanceU3E5__2_4 = L_29;
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00bb:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00c2:
	{
		// while (sqrRemainingDistance > float.Epsilon)
		float L_30 = __this->___U3CsqrRemainingDistanceU3E5__2_4;
		if ((((float)L_30) > ((float)(1.40129846E-45f))))
		{
			goto IL_004e;
		}
	}
	{
		// rb2D.MovePosition(end);
		MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* L_31 = V_1;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_32 = L_31->___rb2D_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = __this->___end_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_33, NULL);
		Rigidbody2D_MovePosition_m7F24879BB78DA0587168B257C56DCFD248A90895(L_32, L_34, NULL);
		// isMoving = false;
		MovingObject_t9550A57CAD42D7ACDD86126A2819A435C93E6EEE* L_35 = V_1;
		L_35->___isMoving_9 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object MovingObject/<SmoothMovement>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSmoothMovementU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m25E57B8C273A8AE38FC4026B829BDF6CE4EB1E5C (U3CSmoothMovementU3Ed__8_t1ACE915D87470313E8FF67EAD03CB2F8F1400FAC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void MovingObject/<SmoothMovement>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSmoothMovementU3Ed__8_System_Collections_IEnumerator_Reset_m78C56E4A414CE6A3AB17DD2AC76E9E12AAFD6831 (U3CSmoothMovementU3Ed__8_t1ACE915D87470313E8FF67EAD03CB2F8F1400FAC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSmoothMovementU3Ed__8_System_Collections_IEnumerator_Reset_m78C56E4A414CE6A3AB17DD2AC76E9E12AAFD6831_RuntimeMethod_var)));
	}
}
// System.Object MovingObject/<SmoothMovement>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSmoothMovementU3Ed__8_System_Collections_IEnumerator_get_Current_m906707DA52A16A28A5FCDACB9BED072483AD08AA (U3CSmoothMovementU3Ed__8_t1ACE915D87470313E8FF67EAD03CB2F8F1400FAC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mC31CF4F40DDEA35C5E39E8C43EC37284AE7C453D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D27A0203C53BC4282C98D19D53EA1CB55CD40E5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_14), (void*)L_0);
		// energy = GameManager.instance.playerEnergy;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_6;
		int32_t L_2 = L_1->___playerEnergy_9;
		__this->___energy_15 = L_2;
		// energyText.text = $"Energy: {energy}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___energyText_13;
		int32_t L_4 = __this->___energy_15;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		String_t* L_7;
		L_7 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral2D27A0203C53BC4282C98D19D53EA1CB55CD40E5, L_6, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_7);
		// base.Start();
		MovingObject_Start_m0C6E23E9EFB7BBF2B653F8C194A8E1FAF030A011(__this, NULL);
		// }
		return;
	}
}
// System.Void Player::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnDisable_m37872CE0A672A116C94A05662826159004ECB59C (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.instance.playerEnergy = energy;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_6;
		int32_t L_1 = __this->___energy_15;
		L_0->___playerEnergy_9 = L_1;
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m95E134A5EF1B5164EA281F61D7FA436F59BE3C9F (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MovingObject_AttemptMove_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m7EDE2FC9F2507BB8C2A62E57A0BFD2C56542F470_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (!GameManager.instance.playersTurn)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_6;
		bool L_1 = L_0->___playersTurn_10;
		if (L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// var horizontal = (int)Input.GetAxisRaw("Horizontal");
		float L_2;
		L_2 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_2);
		// var vertical = (int)Input.GetAxisRaw("Vertical");
		float L_3;
		L_3 = Input_GetAxisRaw_m86E17FE275E361C5DFB7CD42C3C404177B6689AA(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_3);
		// if (horizontal != 0)
		int32_t L_4 = V_0;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// vertical = 0;
		V_1 = 0;
	}

IL_002a:
	{
		// if (horizontal != 0 || vertical != 0)
		int32_t L_5 = V_0;
		if (L_5)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_6 = V_1;
		if (!L_6)
		{
			goto IL_0038;
		}
	}

IL_0030:
	{
		// AttemptMove<Transform>(horizontal, vertical);
		int32_t L_7 = V_0;
		int32_t L_8 = V_1;
		GenericVirtualActionInvoker2< int32_t, int32_t >::Invoke(MovingObject_AttemptMove_TisTransform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_m7EDE2FC9F2507BB8C2A62E57A0BFD2C56542F470_RuntimeMethod_var, __this, L_7, L_8);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_m6E01BC069CDBBED27A57ABF1E3A77B49504CD433 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___collision0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral715D5D81CA09CC53FDF62B8A5075F9D5E378D34C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral838E394589B5693706685699154545855BEAE0B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.tag == "Exit")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___collision0;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral687D9BA523E32A2B8A4FEAD5E5EAE89D357E1420, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		// Invoke("Restart", restartLevelDelay);
		float L_3 = __this->___restartLevelDelay_12;
		MonoBehaviour_Invoke_mF724350C59362B0F1BFE26383209A274A29A63FB(__this, _stringLiteral838E394589B5693706685699154545855BEAE0B2, L_3, NULL);
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		return;
	}

IL_002b:
	{
		// else if (collision.tag == "Food")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_4 = ___collision0;
		String_t* L_5;
		L_5 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteralE1121026DDC9AE966F16E04A751E4BA1D3B20C8B, NULL);
		if (!L_6)
		{
			goto IL_0087;
		}
	}
	{
		// energy += pointsPerFood;
		int32_t L_7 = __this->___energy_15;
		int32_t L_8 = __this->___pointsPerFood_11;
		__this->___energy_15 = ((int32_t)il2cpp_codegen_add(L_7, L_8));
		// energyText.text = $"+ {pointsPerFood} Energy: {energy}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___energyText_13;
		int32_t L_10 = __this->___pointsPerFood_11;
		int32_t L_11 = L_10;
		RuntimeObject* L_12 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_11);
		int32_t L_13 = __this->___energy_15;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral715D5D81CA09CC53FDF62B8A5075F9D5E378D34C, L_12, L_15, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_16);
		// collision.gameObject.SetActive(false);
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_17 = ___collision0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_17, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)0, NULL);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void Player::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Restart_m2C4A1B84E4210191A68766B6C0CE7AE924FD5818 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex, LoadSceneMode.Single);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_m4781751459C8DE7A3E3D593004FD3A5CBFC31A37(L_1, 0, NULL);
		// }
		return;
	}
}
// System.Void Player::LoseEnergy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_LoseEnergy_m31D0BE82D3F91325F3BC25821FA9EFB14459D350 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, int32_t ___amount0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCBC092B38E3735861A7E64054D21030A081C9491);
		s_Il2CppMethodInitialized = true;
	}
	{
		// energy -= amount;
		int32_t L_0 = __this->___energy_15;
		int32_t L_1 = ___amount0;
		__this->___energy_15 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// energyText.text = $"-{amount} Energy: {energy}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___energyText_13;
		int32_t L_3 = ___amount0;
		int32_t L_4 = L_3;
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->___energy_15;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteralCBC092B38E3735861A7E64054D21030A081C9491, L_5, L_8, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_9);
		// CheckIfGameOver();
		Player_CheckIfGameOver_m6A76E5B4D294F0F548B8EE2AE22035C6351CADCD(__this, NULL);
		// }
		return;
	}
}
// System.Void Player::CheckIfGameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_CheckIfGameOver_m6A76E5B4D294F0F548B8EE2AE22035C6351CADCD (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (energy <= 0)
		int32_t L_0 = __this->___energy_15;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		// GameManager.instance.GameOver();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_6;
		GameManager_GameOver_mF1BD400E7F84A0B533A58E80ADA7CCB89C964625(L_1, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public int wallDamage = 1;
		__this->___wallDamage_10 = 1;
		// public int pointsPerFood = 10;
		__this->___pointsPerFood_11 = ((int32_t)10);
		// public float restartLevelDelay = 1f;
		__this->___restartLevelDelay_12 = (1.0f);
		MovingObject__ctor_m8C4852F93E00E1456255E1775B6C56654158E0E4(__this, NULL);
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
// System.Void Wall::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_Awake_mCF0F68285709FF0C93C0004C77159AF64EC66A0E (Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void Wall::DamageWall(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall_DamageWall_mADF39384B74CEBA244C98768055EE3E5C6B90FFC (Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* __this, int32_t ___loss0, const RuntimeMethod* method) 
{
	{
		// spriteRenderer.sprite = dmgSprite;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___spriteRenderer_6;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = __this->___dmgSprite_4;
		SpriteRenderer_set_sprite_m7B176E33955108C60CAE21DFC153A0FAC674CB53(L_0, L_1, NULL);
		// hp -= loss;
		int32_t L_2 = __this->___hp_5;
		int32_t L_3 = ___loss0;
		__this->___hp_5 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// if (hp <= 0)
		int32_t L_4 = __this->___hp_5;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void Wall::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Wall__ctor_m04126D2E920BD90F76660E756CDC65BCFEF2711B (Wall_t937177F3C848F0B028993DB85C6BDFF844EB1334* __this, const RuntimeMethod* method) 
{
	{
		// public int hp = 4;
		__this->___hp_5 = 4;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void Readme/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
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
// System.Void TutorialInfo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_Awake_mCFE0999660F778C76EA4DC4499AC6111483B4924 (TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(alreadyShownThisSession)
		il2cpp_codegen_runtime_class_init_inline(TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_il2cpp_TypeInfo_var);
		bool L_0 = ((TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_il2cpp_TypeInfo_var))->___alreadyShownThisSession_10;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// StartGame();
		TutorialInfo_StartGame_m161CEAA09AC241DFE222F1731316A7A781EDA7AE(__this, NULL);
		return;
	}

IL_000e:
	{
		// alreadyShownThisSession = true;
		il2cpp_codegen_runtime_class_init_inline(TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_il2cpp_TypeInfo_var);
		((TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_il2cpp_TypeInfo_var))->___alreadyShownThisSession_10 = (bool)1;
		// if (PlayerPrefs.HasKey(showAtStartPrefsKey))
		String_t* L_1 = ((TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_il2cpp_TypeInfo_var))->___showAtStartPrefsKey_9;
		bool L_2;
		L_2 = PlayerPrefs_HasKey_m9EB15A18BE611107251F2E2F6CE70636F88CAB5F(L_1, NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		// showAtStart = PlayerPrefs.GetInt(showAtStartPrefsKey) == 1;
		il2cpp_codegen_runtime_class_init_inline(TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_il2cpp_TypeInfo_var);
		String_t* L_3 = ((TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_il2cpp_TypeInfo_var))->___showAtStartPrefsKey_9;
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(L_3, NULL);
		__this->___showAtStart_4 = (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
	}

IL_0033:
	{
		// showAtStartToggle.isOn = showAtStart;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_5 = __this->___showAtStartToggle_8;
		bool L_6 = __this->___showAtStart_4;
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_5, L_6, NULL);
		// if (showAtStart)
		bool L_7 = __this->___showAtStart_4;
		if (!L_7)
		{
			goto IL_0053;
		}
	}
	{
		// ShowLaunchScreen();
		TutorialInfo_ShowLaunchScreen_mC88AEB0F1DC9DB63ECC7FBF58E93F3532659B583(__this, NULL);
		return;
	}

IL_0053:
	{
		// StartGame ();
		TutorialInfo_StartGame_m161CEAA09AC241DFE222F1731316A7A781EDA7AE(__this, NULL);
		// }
		return;
	}
}
// System.Void TutorialInfo::ShowLaunchScreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_ShowLaunchScreen_mC88AEB0F1DC9DB63ECC7FBF58E93F3532659B583 (TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((0.0f), NULL);
		// mainListener.enabled = false;
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_0 = __this->___mainListener_7;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// overlay.SetActive (true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___overlay_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void TutorialInfo::LaunchTutorial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_LaunchTutorial_m077F3FCB557E2148AEADCD0F3826CE95D92E7665 (TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A* __this, const RuntimeMethod* method) 
{
	{
		// Application.OpenURL (url);
		String_t* L_0 = __this->___url_5;
		Application_OpenURL_m9F74228B576891156330C84B72218C08BEB9F564(L_0, NULL);
		// }
		return;
	}
}
// System.Void TutorialInfo::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_StartGame_m161CEAA09AC241DFE222F1731316A7A781EDA7AE (TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A* __this, const RuntimeMethod* method) 
{
	{
		// overlay.SetActive (false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___overlay_6;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// mainListener.enabled = true;
		AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* L_1 = __this->___mainListener_7;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)1, NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mD6CAA4968D796C4AF198ACFB2267BDBD06DB349C((1.0f), NULL);
		// }
		return;
	}
}
// System.Void TutorialInfo::ToggleShowAtLaunch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo_ToggleShowAtLaunch_m602EC457F105CAD29B7DF6206053CE1CBD2FF702 (TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	{
		// showAtStart = showAtStartToggle.isOn;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___showAtStartToggle_8;
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		__this->___showAtStart_4 = L_1;
		// PlayerPrefs.SetInt(showAtStartPrefsKey, showAtStart ? 1 : 0);
		il2cpp_codegen_runtime_class_init_inline(TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_il2cpp_TypeInfo_var);
		String_t* L_2 = ((TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_il2cpp_TypeInfo_var))->___showAtStartPrefsKey_9;
		bool L_3 = __this->___showAtStart_4;
		G_B1_0 = L_2;
		if (L_3)
		{
			G_B2_0 = L_2;
			goto IL_0021;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		goto IL_0022;
	}

IL_0021:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0022:
	{
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void TutorialInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo__ctor_m23733EA333C0FD64CF5069211257085E9ACDC671 (TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A* __this, const RuntimeMethod* method) 
{
	{
		// public bool showAtStart = true;
		__this->___showAtStart_4 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void TutorialInfo::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialInfo__cctor_mE118EF18A3A015DC952A36017E6AC21365366361 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95D7F28AC82AF9DC3FFC83E8E3CB141475CE1A86);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static string showAtStartPrefsKey = "showLaunchScreen";
		((TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_il2cpp_TypeInfo_var))->___showAtStartPrefsKey_9 = _stringLiteral95D7F28AC82AF9DC3FFC83E8E3CB141475CE1A86;
		Il2CppCodeGenWriteBarrier((void**)(&((TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_il2cpp_TypeInfo_var))->___showAtStartPrefsKey_9), (void*)_stringLiteral95D7F28AC82AF9DC3FFC83E8E3CB141475CE1A86);
		// private static bool alreadyShownThisSession = false;
		((TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_StaticFields*)il2cpp_codegen_static_fields_for(TutorialInfo_t5AD0B925BF1D97209030C9CB53DFC47AE54F682A_il2cpp_TypeInfo_var))->___alreadyShownThisSession_10 = (bool)0;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_mCD214B04BC52AED3C89C3BEF664B6247E5F8954A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m704B5B98EAFE885978381E21B7F89D9DF83C2A60_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_MoveTowards_mB3BF0AFF0BE0D3E6264CD1564AE14DE94A909878_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___target1;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___current0;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___target1;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___current0;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))));
		float L_12 = V_2;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0043;
		}
	}
	{
		float L_13 = ___maxDistanceDelta2;
		if ((!(((float)L_13) >= ((float)(0.0f)))))
		{
			goto IL_0040;
		}
	}
	{
		float L_14 = V_2;
		float L_15 = ___maxDistanceDelta2;
		float L_16 = ___maxDistanceDelta2;
		G_B4_0 = ((((int32_t)((!(((float)L_14) <= ((float)((float)il2cpp_codegen_multiply(L_15, L_16)))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0041;
	}

IL_0040:
	{
		G_B4_0 = 0;
	}

IL_0041:
	{
		G_B6_0 = G_B4_0;
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 1;
	}

IL_0044:
	{
		V_4 = (bool)G_B6_0;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_004f;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18 = ___target1;
		V_5 = L_18;
		goto IL_0079;
	}

IL_004f:
	{
		float L_19 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = sqrt(((double)L_19));
		V_3 = ((float)L_20);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = ___current0;
		float L_22 = L_21.___x_0;
		float L_23 = V_0;
		float L_24 = V_3;
		float L_25 = ___maxDistanceDelta2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26 = ___current0;
		float L_27 = L_26.___y_1;
		float L_28 = V_1;
		float L_29 = V_3;
		float L_30 = ___maxDistanceDelta2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_31), ((float)il2cpp_codegen_add(L_22, ((float)il2cpp_codegen_multiply(((float)(L_23/L_24)), L_25)))), ((float)il2cpp_codegen_add(L_27, ((float)il2cpp_codegen_multiply(((float)(L_28/L_29)), L_30)))), /*hidden argument*/NULL);
		V_5 = L_31;
		goto IL_0079;
	}

IL_0079:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32 = V_5;
		return L_32;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m4F04D407852735E68667980C26DA866BAE103B37_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_3 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mB5FDF069171C4CB1778BFAC3B9015A22EA7DFBCD_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___item0, const RuntimeMethod* method) 
{
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_1 = (Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_6 = V_0;
		int32_t L_7 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_8);
		return;
	}

IL_0034:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___item0;
		((  void (*) (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B*, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mF1C0C56457C655BDFFC6EE5B46FAD8BAEC1F588B_gshared_inline (List_1_t8F3790B7F8C471B3A1336522C7415FB0AC36D47B* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
