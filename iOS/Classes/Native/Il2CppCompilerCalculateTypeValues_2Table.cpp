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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.AttributeUsageAttribute
struct AttributeUsageAttribute_t290877318;
// System.Boolean[]
struct BooleanU5BU5D_t2897418192;
// System.ByteMatcher
struct ByteMatcher_t2129355737;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// System.Char
struct Char_t3634460470;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Collections.Hashtable
struct Hashtable_t1853889766;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Delegate
struct Delegate_t1188392813;
// System.Globalization.CompareInfo
struct CompareInfo_t1092934962;
// System.Globalization.DaylightTime
struct DaylightTime_t2582425773;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t435877138;
// System.IO.CStreamWriter
struct CStreamWriter_t3783449173;
// System.IO.StreamReader
struct StreamReader_t4009935899;
// System.Int32
struct Int32_t2950945753;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Int64
struct Int64_t3736567304;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.MonoEnumInfo/IntComparer
struct IntComparer_t3812095803;
// System.MonoEnumInfo/LongComparer
struct LongComparer_t1798269597;
// System.MonoEnumInfo/SByteComparer
struct SByteComparer_t2329725001;
// System.MonoEnumInfo/ShortComparer
struct ShortComparer_t2253094562;
// System.MonoTypeInfo
struct MonoTypeInfo_t3366989025;
// System.OperatingSystem
struct OperatingSystem_t3730783609;
// System.Reflection.Assembly
struct Assembly_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.TermInfoReader
struct TermInfoReader_t3116894478;
// System.TermInfoStrings[]
struct TermInfoStringsU5BU5D_t4121115714;
// System.Threading.Thread
struct Thread_t2300836069;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt64
struct UInt64_t4134040092;
// System.Version
struct Version_t3456873960;
// System.Void
struct Void_t1185182177;




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
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef BYTEMATCHER_T2129355737_H
#define BYTEMATCHER_T2129355737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ByteMatcher
struct  ByteMatcher_t2129355737  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.ByteMatcher::map
	Hashtable_t1853889766 * ___map_0;
	// System.Collections.Hashtable System.ByteMatcher::starts
	Hashtable_t1853889766 * ___starts_1;

public:
	inline static int32_t get_offset_of_map_0() { return static_cast<int32_t>(offsetof(ByteMatcher_t2129355737, ___map_0)); }
	inline Hashtable_t1853889766 * get_map_0() const { return ___map_0; }
	inline Hashtable_t1853889766 ** get_address_of_map_0() { return &___map_0; }
	inline void set_map_0(Hashtable_t1853889766 * value)
	{
		___map_0 = value;
		Il2CppCodeGenWriteBarrier((&___map_0), value);
	}

	inline static int32_t get_offset_of_starts_1() { return static_cast<int32_t>(offsetof(ByteMatcher_t2129355737, ___starts_1)); }
	inline Hashtable_t1853889766 * get_starts_1() const { return ___starts_1; }
	inline Hashtable_t1853889766 ** get_address_of_starts_1() { return &___starts_1; }
	inline void set_starts_1(Hashtable_t1853889766 * value)
	{
		___starts_1 = value;
		Il2CppCodeGenWriteBarrier((&___starts_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTEMATCHER_T2129355737_H
#ifndef DBNULL_T3725197148_H
#define DBNULL_T3725197148_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DBNull
struct  DBNull_t3725197148  : public RuntimeObject
{
public:

public:
};

struct DBNull_t3725197148_StaticFields
{
public:
	// System.DBNull System.DBNull::Value
	DBNull_t3725197148 * ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(DBNull_t3725197148_StaticFields, ___Value_0)); }
	inline DBNull_t3725197148 * get_Value_0() const { return ___Value_0; }
	inline DBNull_t3725197148 ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(DBNull_t3725197148 * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((&___Value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DBNULL_T3725197148_H
#ifndef DATETIMEUTILS_T3080864452_H
#define DATETIMEUTILS_T3080864452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeUtils
struct  DateTimeUtils_t3080864452  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEUTILS_T3080864452_H
#ifndef DELEGATEDATA_T1677132599_H
#define DELEGATEDATA_T1677132599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateData
struct  DelegateData_t1677132599  : public RuntimeObject
{
public:
	// System.Type System.DelegateData::target_type
	Type_t * ___target_type_0;
	// System.String System.DelegateData::method_name
	String_t* ___method_name_1;

public:
	inline static int32_t get_offset_of_target_type_0() { return static_cast<int32_t>(offsetof(DelegateData_t1677132599, ___target_type_0)); }
	inline Type_t * get_target_type_0() const { return ___target_type_0; }
	inline Type_t ** get_address_of_target_type_0() { return &___target_type_0; }
	inline void set_target_type_0(Type_t * value)
	{
		___target_type_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_type_0), value);
	}

	inline static int32_t get_offset_of_method_name_1() { return static_cast<int32_t>(offsetof(DelegateData_t1677132599, ___method_name_1)); }
	inline String_t* get_method_name_1() const { return ___method_name_1; }
	inline String_t** get_address_of_method_name_1() { return &___method_name_1; }
	inline void set_method_name_1(String_t* value)
	{
		___method_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___method_name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEDATA_T1677132599_H
#ifndef DELEGATESERIALIZATIONHOLDER_T3408600559_H
#define DELEGATESERIALIZATIONHOLDER_T3408600559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateSerializationHolder
struct  DelegateSerializationHolder_t3408600559  : public RuntimeObject
{
public:
	// System.Delegate System.DelegateSerializationHolder::_delegate
	Delegate_t1188392813 * ____delegate_0;

public:
	inline static int32_t get_offset_of__delegate_0() { return static_cast<int32_t>(offsetof(DelegateSerializationHolder_t3408600559, ____delegate_0)); }
	inline Delegate_t1188392813 * get__delegate_0() const { return ____delegate_0; }
	inline Delegate_t1188392813 ** get_address_of__delegate_0() { return &____delegate_0; }
	inline void set__delegate_0(Delegate_t1188392813 * value)
	{
		____delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&____delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATESERIALIZATIONHOLDER_T3408600559_H
#ifndef DELEGATEENTRY_T1019584161_H
#define DELEGATEENTRY_T1019584161_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DelegateSerializationHolder/DelegateEntry
struct  DelegateEntry_t1019584161  : public RuntimeObject
{
public:
	// System.String System.DelegateSerializationHolder/DelegateEntry::type
	String_t* ___type_0;
	// System.String System.DelegateSerializationHolder/DelegateEntry::assembly
	String_t* ___assembly_1;
	// System.Object System.DelegateSerializationHolder/DelegateEntry::target
	RuntimeObject * ___target_2;
	// System.String System.DelegateSerializationHolder/DelegateEntry::targetTypeAssembly
	String_t* ___targetTypeAssembly_3;
	// System.String System.DelegateSerializationHolder/DelegateEntry::targetTypeName
	String_t* ___targetTypeName_4;
	// System.String System.DelegateSerializationHolder/DelegateEntry::methodName
	String_t* ___methodName_5;
	// System.DelegateSerializationHolder/DelegateEntry System.DelegateSerializationHolder/DelegateEntry::delegateEntry
	DelegateEntry_t1019584161 * ___delegateEntry_6;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(DelegateEntry_t1019584161, ___type_0)); }
	inline String_t* get_type_0() const { return ___type_0; }
	inline String_t** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(String_t* value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_assembly_1() { return static_cast<int32_t>(offsetof(DelegateEntry_t1019584161, ___assembly_1)); }
	inline String_t* get_assembly_1() const { return ___assembly_1; }
	inline String_t** get_address_of_assembly_1() { return &___assembly_1; }
	inline void set_assembly_1(String_t* value)
	{
		___assembly_1 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_1), value);
	}

	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(DelegateEntry_t1019584161, ___target_2)); }
	inline RuntimeObject * get_target_2() const { return ___target_2; }
	inline RuntimeObject ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(RuntimeObject * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier((&___target_2), value);
	}

	inline static int32_t get_offset_of_targetTypeAssembly_3() { return static_cast<int32_t>(offsetof(DelegateEntry_t1019584161, ___targetTypeAssembly_3)); }
	inline String_t* get_targetTypeAssembly_3() const { return ___targetTypeAssembly_3; }
	inline String_t** get_address_of_targetTypeAssembly_3() { return &___targetTypeAssembly_3; }
	inline void set_targetTypeAssembly_3(String_t* value)
	{
		___targetTypeAssembly_3 = value;
		Il2CppCodeGenWriteBarrier((&___targetTypeAssembly_3), value);
	}

	inline static int32_t get_offset_of_targetTypeName_4() { return static_cast<int32_t>(offsetof(DelegateEntry_t1019584161, ___targetTypeName_4)); }
	inline String_t* get_targetTypeName_4() const { return ___targetTypeName_4; }
	inline String_t** get_address_of_targetTypeName_4() { return &___targetTypeName_4; }
	inline void set_targetTypeName_4(String_t* value)
	{
		___targetTypeName_4 = value;
		Il2CppCodeGenWriteBarrier((&___targetTypeName_4), value);
	}

	inline static int32_t get_offset_of_methodName_5() { return static_cast<int32_t>(offsetof(DelegateEntry_t1019584161, ___methodName_5)); }
	inline String_t* get_methodName_5() const { return ___methodName_5; }
	inline String_t** get_address_of_methodName_5() { return &___methodName_5; }
	inline void set_methodName_5(String_t* value)
	{
		___methodName_5 = value;
		Il2CppCodeGenWriteBarrier((&___methodName_5), value);
	}

	inline static int32_t get_offset_of_delegateEntry_6() { return static_cast<int32_t>(offsetof(DelegateEntry_t1019584161, ___delegateEntry_6)); }
	inline DelegateEntry_t1019584161 * get_delegateEntry_6() const { return ___delegateEntry_6; }
	inline DelegateEntry_t1019584161 ** get_address_of_delegateEntry_6() { return &___delegateEntry_6; }
	inline void set_delegateEntry_6(DelegateEntry_t1019584161 * value)
	{
		___delegateEntry_6 = value;
		Il2CppCodeGenWriteBarrier((&___delegateEntry_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATEENTRY_T1019584161_H
#ifndef ENVIRONMENT_T2712485525_H
#define ENVIRONMENT_T2712485525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment
struct  Environment_t2712485525  : public RuntimeObject
{
public:

public:
};

struct Environment_t2712485525_StaticFields
{
public:
	// System.OperatingSystem System.Environment::os
	OperatingSystem_t3730783609 * ___os_1;

public:
	inline static int32_t get_offset_of_os_1() { return static_cast<int32_t>(offsetof(Environment_t2712485525_StaticFields, ___os_1)); }
	inline OperatingSystem_t3730783609 * get_os_1() const { return ___os_1; }
	inline OperatingSystem_t3730783609 ** get_address_of_os_1() { return &___os_1; }
	inline void set_os_1(OperatingSystem_t3730783609 * value)
	{
		___os_1 = value;
		Il2CppCodeGenWriteBarrier((&___os_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVIRONMENT_T2712485525_H
#ifndef EVENTARGS_T3591816995_H
#define EVENTARGS_T3591816995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3591816995  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3591816995_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3591816995 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3591816995_StaticFields, ___Empty_0)); }
	inline EventArgs_t3591816995 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3591816995 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3591816995 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3591816995_H
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
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
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
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
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
#ifndef GC_T959872083_H
#define GC_T959872083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.GC
struct  GC_t959872083  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GC_T959872083_H
#ifndef GUIDPARSER_T2761237274_H
#define GUIDPARSER_T2761237274_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid/GuidParser
struct  GuidParser_t2761237274  : public RuntimeObject
{
public:
	// System.String System.Guid/GuidParser::_src
	String_t* ____src_0;
	// System.Int32 System.Guid/GuidParser::_length
	int32_t ____length_1;
	// System.Int32 System.Guid/GuidParser::_cur
	int32_t ____cur_2;

public:
	inline static int32_t get_offset_of__src_0() { return static_cast<int32_t>(offsetof(GuidParser_t2761237274, ____src_0)); }
	inline String_t* get__src_0() const { return ____src_0; }
	inline String_t** get_address_of__src_0() { return &____src_0; }
	inline void set__src_0(String_t* value)
	{
		____src_0 = value;
		Il2CppCodeGenWriteBarrier((&____src_0), value);
	}

	inline static int32_t get_offset_of__length_1() { return static_cast<int32_t>(offsetof(GuidParser_t2761237274, ____length_1)); }
	inline int32_t get__length_1() const { return ____length_1; }
	inline int32_t* get_address_of__length_1() { return &____length_1; }
	inline void set__length_1(int32_t value)
	{
		____length_1 = value;
	}

	inline static int32_t get_offset_of__cur_2() { return static_cast<int32_t>(offsetof(GuidParser_t2761237274, ____cur_2)); }
	inline int32_t get__cur_2() const { return ____cur_2; }
	inline int32_t* get_address_of__cur_2() { return &____cur_2; }
	inline void set__cur_2(int32_t value)
	{
		____cur_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDPARSER_T2761237274_H
#ifndef KNOWNTERMINALS_T4156625393_H
#define KNOWNTERMINALS_T4156625393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.KnownTerminals
struct  KnownTerminals_t4156625393  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KNOWNTERMINALS_T4156625393_H
#ifndef LOCALDATASTORESLOT_T740841968_H
#define LOCALDATASTORESLOT_T740841968_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LocalDataStoreSlot
struct  LocalDataStoreSlot_t740841968  : public RuntimeObject
{
public:
	// System.Int32 System.LocalDataStoreSlot::slot
	int32_t ___slot_0;
	// System.Boolean System.LocalDataStoreSlot::thread_local
	bool ___thread_local_1;

public:
	inline static int32_t get_offset_of_slot_0() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t740841968, ___slot_0)); }
	inline int32_t get_slot_0() const { return ___slot_0; }
	inline int32_t* get_address_of_slot_0() { return &___slot_0; }
	inline void set_slot_0(int32_t value)
	{
		___slot_0 = value;
	}

	inline static int32_t get_offset_of_thread_local_1() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t740841968, ___thread_local_1)); }
	inline bool get_thread_local_1() const { return ___thread_local_1; }
	inline bool* get_address_of_thread_local_1() { return &___thread_local_1; }
	inline void set_thread_local_1(bool value)
	{
		___thread_local_1 = value;
	}
};

struct LocalDataStoreSlot_t740841968_StaticFields
{
public:
	// System.Object System.LocalDataStoreSlot::lock_obj
	RuntimeObject * ___lock_obj_2;
	// System.Boolean[] System.LocalDataStoreSlot::slot_bitmap_thread
	BooleanU5BU5D_t2897418192* ___slot_bitmap_thread_3;
	// System.Boolean[] System.LocalDataStoreSlot::slot_bitmap_context
	BooleanU5BU5D_t2897418192* ___slot_bitmap_context_4;

public:
	inline static int32_t get_offset_of_lock_obj_2() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t740841968_StaticFields, ___lock_obj_2)); }
	inline RuntimeObject * get_lock_obj_2() const { return ___lock_obj_2; }
	inline RuntimeObject ** get_address_of_lock_obj_2() { return &___lock_obj_2; }
	inline void set_lock_obj_2(RuntimeObject * value)
	{
		___lock_obj_2 = value;
		Il2CppCodeGenWriteBarrier((&___lock_obj_2), value);
	}

	inline static int32_t get_offset_of_slot_bitmap_thread_3() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t740841968_StaticFields, ___slot_bitmap_thread_3)); }
	inline BooleanU5BU5D_t2897418192* get_slot_bitmap_thread_3() const { return ___slot_bitmap_thread_3; }
	inline BooleanU5BU5D_t2897418192** get_address_of_slot_bitmap_thread_3() { return &___slot_bitmap_thread_3; }
	inline void set_slot_bitmap_thread_3(BooleanU5BU5D_t2897418192* value)
	{
		___slot_bitmap_thread_3 = value;
		Il2CppCodeGenWriteBarrier((&___slot_bitmap_thread_3), value);
	}

	inline static int32_t get_offset_of_slot_bitmap_context_4() { return static_cast<int32_t>(offsetof(LocalDataStoreSlot_t740841968_StaticFields, ___slot_bitmap_context_4)); }
	inline BooleanU5BU5D_t2897418192* get_slot_bitmap_context_4() const { return ___slot_bitmap_context_4; }
	inline BooleanU5BU5D_t2897418192** get_address_of_slot_bitmap_context_4() { return &___slot_bitmap_context_4; }
	inline void set_slot_bitmap_context_4(BooleanU5BU5D_t2897418192* value)
	{
		___slot_bitmap_context_4 = value;
		Il2CppCodeGenWriteBarrier((&___slot_bitmap_context_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALDATASTORESLOT_T740841968_H
#ifndef MATH_T1671470975_H
#define MATH_T1671470975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Math
struct  Math_t1671470975  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATH_T1671470975_H
#ifndef MONOCUSTOMATTRS_T3634537737_H
#define MONOCUSTOMATTRS_T3634537737_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoCustomAttrs
struct  MonoCustomAttrs_t3634537737  : public RuntimeObject
{
public:

public:
};

struct MonoCustomAttrs_t3634537737_StaticFields
{
public:
	// System.Reflection.Assembly System.MonoCustomAttrs::corlib
	Assembly_t * ___corlib_0;
	// System.Type System.MonoCustomAttrs::AttributeUsageType
	Type_t * ___AttributeUsageType_1;
	// System.AttributeUsageAttribute System.MonoCustomAttrs::DefaultAttributeUsage
	AttributeUsageAttribute_t290877318 * ___DefaultAttributeUsage_2;

public:
	inline static int32_t get_offset_of_corlib_0() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t3634537737_StaticFields, ___corlib_0)); }
	inline Assembly_t * get_corlib_0() const { return ___corlib_0; }
	inline Assembly_t ** get_address_of_corlib_0() { return &___corlib_0; }
	inline void set_corlib_0(Assembly_t * value)
	{
		___corlib_0 = value;
		Il2CppCodeGenWriteBarrier((&___corlib_0), value);
	}

	inline static int32_t get_offset_of_AttributeUsageType_1() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t3634537737_StaticFields, ___AttributeUsageType_1)); }
	inline Type_t * get_AttributeUsageType_1() const { return ___AttributeUsageType_1; }
	inline Type_t ** get_address_of_AttributeUsageType_1() { return &___AttributeUsageType_1; }
	inline void set_AttributeUsageType_1(Type_t * value)
	{
		___AttributeUsageType_1 = value;
		Il2CppCodeGenWriteBarrier((&___AttributeUsageType_1), value);
	}

	inline static int32_t get_offset_of_DefaultAttributeUsage_2() { return static_cast<int32_t>(offsetof(MonoCustomAttrs_t3634537737_StaticFields, ___DefaultAttributeUsage_2)); }
	inline AttributeUsageAttribute_t290877318 * get_DefaultAttributeUsage_2() const { return ___DefaultAttributeUsage_2; }
	inline AttributeUsageAttribute_t290877318 ** get_address_of_DefaultAttributeUsage_2() { return &___DefaultAttributeUsage_2; }
	inline void set_DefaultAttributeUsage_2(AttributeUsageAttribute_t290877318 * value)
	{
		___DefaultAttributeUsage_2 = value;
		Il2CppCodeGenWriteBarrier((&___DefaultAttributeUsage_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOCUSTOMATTRS_T3634537737_H
#ifndef ATTRIBUTEINFO_T2216804170_H
#define ATTRIBUTEINFO_T2216804170_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoCustomAttrs/AttributeInfo
struct  AttributeInfo_t2216804170  : public RuntimeObject
{
public:
	// System.AttributeUsageAttribute System.MonoCustomAttrs/AttributeInfo::_usage
	AttributeUsageAttribute_t290877318 * ____usage_0;
	// System.Int32 System.MonoCustomAttrs/AttributeInfo::_inheritanceLevel
	int32_t ____inheritanceLevel_1;

public:
	inline static int32_t get_offset_of__usage_0() { return static_cast<int32_t>(offsetof(AttributeInfo_t2216804170, ____usage_0)); }
	inline AttributeUsageAttribute_t290877318 * get__usage_0() const { return ____usage_0; }
	inline AttributeUsageAttribute_t290877318 ** get_address_of__usage_0() { return &____usage_0; }
	inline void set__usage_0(AttributeUsageAttribute_t290877318 * value)
	{
		____usage_0 = value;
		Il2CppCodeGenWriteBarrier((&____usage_0), value);
	}

	inline static int32_t get_offset_of__inheritanceLevel_1() { return static_cast<int32_t>(offsetof(AttributeInfo_t2216804170, ____inheritanceLevel_1)); }
	inline int32_t get__inheritanceLevel_1() const { return ____inheritanceLevel_1; }
	inline int32_t* get_address_of__inheritanceLevel_1() { return &____inheritanceLevel_1; }
	inline void set__inheritanceLevel_1(int32_t value)
	{
		____inheritanceLevel_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEINFO_T2216804170_H
#ifndef INTCOMPARER_T3812095803_H
#define INTCOMPARER_T3812095803_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/IntComparer
struct  IntComparer_t3812095803  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTCOMPARER_T3812095803_H
#ifndef LONGCOMPARER_T1798269597_H
#define LONGCOMPARER_T1798269597_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/LongComparer
struct  LongComparer_t1798269597  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LONGCOMPARER_T1798269597_H
#ifndef SBYTECOMPARER_T2329725001_H
#define SBYTECOMPARER_T2329725001_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/SByteComparer
struct  SByteComparer_t2329725001  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECOMPARER_T2329725001_H
#ifndef SHORTCOMPARER_T2253094562_H
#define SHORTCOMPARER_T2253094562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo/ShortComparer
struct  ShortComparer_t2253094562  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHORTCOMPARER_T2253094562_H
#ifndef MONOTYPEINFO_T3366989025_H
#define MONOTYPEINFO_T3366989025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTypeInfo
struct  MonoTypeInfo_t3366989025  : public RuntimeObject
{
public:
	// System.String System.MonoTypeInfo::full_name
	String_t* ___full_name_0;
	// System.Reflection.ConstructorInfo System.MonoTypeInfo::default_ctor
	ConstructorInfo_t5769829 * ___default_ctor_1;

public:
	inline static int32_t get_offset_of_full_name_0() { return static_cast<int32_t>(offsetof(MonoTypeInfo_t3366989025, ___full_name_0)); }
	inline String_t* get_full_name_0() const { return ___full_name_0; }
	inline String_t** get_address_of_full_name_0() { return &___full_name_0; }
	inline void set_full_name_0(String_t* value)
	{
		___full_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___full_name_0), value);
	}

	inline static int32_t get_offset_of_default_ctor_1() { return static_cast<int32_t>(offsetof(MonoTypeInfo_t3366989025, ___default_ctor_1)); }
	inline ConstructorInfo_t5769829 * get_default_ctor_1() const { return ___default_ctor_1; }
	inline ConstructorInfo_t5769829 ** get_address_of_default_ctor_1() { return &___default_ctor_1; }
	inline void set_default_ctor_1(ConstructorInfo_t5769829 * value)
	{
		___default_ctor_1 = value;
		Il2CppCodeGenWriteBarrier((&___default_ctor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTYPEINFO_T3366989025_H
#ifndef NULLCONSOLEDRIVER_T3569194954_H
#define NULLCONSOLEDRIVER_T3569194954_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullConsoleDriver
struct  NullConsoleDriver_t3569194954  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLCONSOLEDRIVER_T3569194954_H
#ifndef NUMBERFORMATTER_T1182924621_H
#define NUMBERFORMATTER_T1182924621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NumberFormatter
struct  NumberFormatter_t1182924621  : public RuntimeObject
{
public:
	// System.Threading.Thread System.NumberFormatter::_thread
	Thread_t2300836069 * ____thread_6;
	// System.Globalization.NumberFormatInfo System.NumberFormatter::_nfi
	NumberFormatInfo_t435877138 * ____nfi_7;
	// System.Boolean System.NumberFormatter::_NaN
	bool ____NaN_8;
	// System.Boolean System.NumberFormatter::_infinity
	bool ____infinity_9;
	// System.Boolean System.NumberFormatter::_isCustomFormat
	bool ____isCustomFormat_10;
	// System.Boolean System.NumberFormatter::_specifierIsUpper
	bool ____specifierIsUpper_11;
	// System.Boolean System.NumberFormatter::_positive
	bool ____positive_12;
	// System.Char System.NumberFormatter::_specifier
	Il2CppChar ____specifier_13;
	// System.Int32 System.NumberFormatter::_precision
	int32_t ____precision_14;
	// System.Int32 System.NumberFormatter::_defPrecision
	int32_t ____defPrecision_15;
	// System.Int32 System.NumberFormatter::_digitsLen
	int32_t ____digitsLen_16;
	// System.Int32 System.NumberFormatter::_offset
	int32_t ____offset_17;
	// System.Int32 System.NumberFormatter::_decPointPos
	int32_t ____decPointPos_18;
	// System.UInt32 System.NumberFormatter::_val1
	uint32_t ____val1_19;
	// System.UInt32 System.NumberFormatter::_val2
	uint32_t ____val2_20;
	// System.UInt32 System.NumberFormatter::_val3
	uint32_t ____val3_21;
	// System.UInt32 System.NumberFormatter::_val4
	uint32_t ____val4_22;
	// System.Char[] System.NumberFormatter::_cbuf
	CharU5BU5D_t3528271667* ____cbuf_23;
	// System.Int32 System.NumberFormatter::_ind
	int32_t ____ind_24;

public:
	inline static int32_t get_offset_of__thread_6() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____thread_6)); }
	inline Thread_t2300836069 * get__thread_6() const { return ____thread_6; }
	inline Thread_t2300836069 ** get_address_of__thread_6() { return &____thread_6; }
	inline void set__thread_6(Thread_t2300836069 * value)
	{
		____thread_6 = value;
		Il2CppCodeGenWriteBarrier((&____thread_6), value);
	}

	inline static int32_t get_offset_of__nfi_7() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____nfi_7)); }
	inline NumberFormatInfo_t435877138 * get__nfi_7() const { return ____nfi_7; }
	inline NumberFormatInfo_t435877138 ** get_address_of__nfi_7() { return &____nfi_7; }
	inline void set__nfi_7(NumberFormatInfo_t435877138 * value)
	{
		____nfi_7 = value;
		Il2CppCodeGenWriteBarrier((&____nfi_7), value);
	}

	inline static int32_t get_offset_of__NaN_8() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____NaN_8)); }
	inline bool get__NaN_8() const { return ____NaN_8; }
	inline bool* get_address_of__NaN_8() { return &____NaN_8; }
	inline void set__NaN_8(bool value)
	{
		____NaN_8 = value;
	}

	inline static int32_t get_offset_of__infinity_9() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____infinity_9)); }
	inline bool get__infinity_9() const { return ____infinity_9; }
	inline bool* get_address_of__infinity_9() { return &____infinity_9; }
	inline void set__infinity_9(bool value)
	{
		____infinity_9 = value;
	}

	inline static int32_t get_offset_of__isCustomFormat_10() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____isCustomFormat_10)); }
	inline bool get__isCustomFormat_10() const { return ____isCustomFormat_10; }
	inline bool* get_address_of__isCustomFormat_10() { return &____isCustomFormat_10; }
	inline void set__isCustomFormat_10(bool value)
	{
		____isCustomFormat_10 = value;
	}

	inline static int32_t get_offset_of__specifierIsUpper_11() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____specifierIsUpper_11)); }
	inline bool get__specifierIsUpper_11() const { return ____specifierIsUpper_11; }
	inline bool* get_address_of__specifierIsUpper_11() { return &____specifierIsUpper_11; }
	inline void set__specifierIsUpper_11(bool value)
	{
		____specifierIsUpper_11 = value;
	}

	inline static int32_t get_offset_of__positive_12() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____positive_12)); }
	inline bool get__positive_12() const { return ____positive_12; }
	inline bool* get_address_of__positive_12() { return &____positive_12; }
	inline void set__positive_12(bool value)
	{
		____positive_12 = value;
	}

	inline static int32_t get_offset_of__specifier_13() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____specifier_13)); }
	inline Il2CppChar get__specifier_13() const { return ____specifier_13; }
	inline Il2CppChar* get_address_of__specifier_13() { return &____specifier_13; }
	inline void set__specifier_13(Il2CppChar value)
	{
		____specifier_13 = value;
	}

	inline static int32_t get_offset_of__precision_14() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____precision_14)); }
	inline int32_t get__precision_14() const { return ____precision_14; }
	inline int32_t* get_address_of__precision_14() { return &____precision_14; }
	inline void set__precision_14(int32_t value)
	{
		____precision_14 = value;
	}

	inline static int32_t get_offset_of__defPrecision_15() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____defPrecision_15)); }
	inline int32_t get__defPrecision_15() const { return ____defPrecision_15; }
	inline int32_t* get_address_of__defPrecision_15() { return &____defPrecision_15; }
	inline void set__defPrecision_15(int32_t value)
	{
		____defPrecision_15 = value;
	}

	inline static int32_t get_offset_of__digitsLen_16() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____digitsLen_16)); }
	inline int32_t get__digitsLen_16() const { return ____digitsLen_16; }
	inline int32_t* get_address_of__digitsLen_16() { return &____digitsLen_16; }
	inline void set__digitsLen_16(int32_t value)
	{
		____digitsLen_16 = value;
	}

	inline static int32_t get_offset_of__offset_17() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____offset_17)); }
	inline int32_t get__offset_17() const { return ____offset_17; }
	inline int32_t* get_address_of__offset_17() { return &____offset_17; }
	inline void set__offset_17(int32_t value)
	{
		____offset_17 = value;
	}

	inline static int32_t get_offset_of__decPointPos_18() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____decPointPos_18)); }
	inline int32_t get__decPointPos_18() const { return ____decPointPos_18; }
	inline int32_t* get_address_of__decPointPos_18() { return &____decPointPos_18; }
	inline void set__decPointPos_18(int32_t value)
	{
		____decPointPos_18 = value;
	}

	inline static int32_t get_offset_of__val1_19() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____val1_19)); }
	inline uint32_t get__val1_19() const { return ____val1_19; }
	inline uint32_t* get_address_of__val1_19() { return &____val1_19; }
	inline void set__val1_19(uint32_t value)
	{
		____val1_19 = value;
	}

	inline static int32_t get_offset_of__val2_20() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____val2_20)); }
	inline uint32_t get__val2_20() const { return ____val2_20; }
	inline uint32_t* get_address_of__val2_20() { return &____val2_20; }
	inline void set__val2_20(uint32_t value)
	{
		____val2_20 = value;
	}

	inline static int32_t get_offset_of__val3_21() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____val3_21)); }
	inline uint32_t get__val3_21() const { return ____val3_21; }
	inline uint32_t* get_address_of__val3_21() { return &____val3_21; }
	inline void set__val3_21(uint32_t value)
	{
		____val3_21 = value;
	}

	inline static int32_t get_offset_of__val4_22() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____val4_22)); }
	inline uint32_t get__val4_22() const { return ____val4_22; }
	inline uint32_t* get_address_of__val4_22() { return &____val4_22; }
	inline void set__val4_22(uint32_t value)
	{
		____val4_22 = value;
	}

	inline static int32_t get_offset_of__cbuf_23() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____cbuf_23)); }
	inline CharU5BU5D_t3528271667* get__cbuf_23() const { return ____cbuf_23; }
	inline CharU5BU5D_t3528271667** get_address_of__cbuf_23() { return &____cbuf_23; }
	inline void set__cbuf_23(CharU5BU5D_t3528271667* value)
	{
		____cbuf_23 = value;
		Il2CppCodeGenWriteBarrier((&____cbuf_23), value);
	}

	inline static int32_t get_offset_of__ind_24() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621, ____ind_24)); }
	inline int32_t get__ind_24() const { return ____ind_24; }
	inline int32_t* get_address_of__ind_24() { return &____ind_24; }
	inline void set__ind_24(int32_t value)
	{
		____ind_24 = value;
	}
};

struct NumberFormatter_t1182924621_StaticFields
{
public:
	// System.UInt64* System.NumberFormatter::MantissaBitsTable
	uint64_t* ___MantissaBitsTable_0;
	// System.Int32* System.NumberFormatter::TensExponentTable
	int32_t* ___TensExponentTable_1;
	// System.Char* System.NumberFormatter::DigitLowerTable
	Il2CppChar* ___DigitLowerTable_2;
	// System.Char* System.NumberFormatter::DigitUpperTable
	Il2CppChar* ___DigitUpperTable_3;
	// System.Int64* System.NumberFormatter::TenPowersList
	int64_t* ___TenPowersList_4;
	// System.Int32* System.NumberFormatter::DecHexDigits
	int32_t* ___DecHexDigits_5;

public:
	inline static int32_t get_offset_of_MantissaBitsTable_0() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621_StaticFields, ___MantissaBitsTable_0)); }
	inline uint64_t* get_MantissaBitsTable_0() const { return ___MantissaBitsTable_0; }
	inline uint64_t** get_address_of_MantissaBitsTable_0() { return &___MantissaBitsTable_0; }
	inline void set_MantissaBitsTable_0(uint64_t* value)
	{
		___MantissaBitsTable_0 = value;
	}

	inline static int32_t get_offset_of_TensExponentTable_1() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621_StaticFields, ___TensExponentTable_1)); }
	inline int32_t* get_TensExponentTable_1() const { return ___TensExponentTable_1; }
	inline int32_t** get_address_of_TensExponentTable_1() { return &___TensExponentTable_1; }
	inline void set_TensExponentTable_1(int32_t* value)
	{
		___TensExponentTable_1 = value;
	}

	inline static int32_t get_offset_of_DigitLowerTable_2() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621_StaticFields, ___DigitLowerTable_2)); }
	inline Il2CppChar* get_DigitLowerTable_2() const { return ___DigitLowerTable_2; }
	inline Il2CppChar** get_address_of_DigitLowerTable_2() { return &___DigitLowerTable_2; }
	inline void set_DigitLowerTable_2(Il2CppChar* value)
	{
		___DigitLowerTable_2 = value;
	}

	inline static int32_t get_offset_of_DigitUpperTable_3() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621_StaticFields, ___DigitUpperTable_3)); }
	inline Il2CppChar* get_DigitUpperTable_3() const { return ___DigitUpperTable_3; }
	inline Il2CppChar** get_address_of_DigitUpperTable_3() { return &___DigitUpperTable_3; }
	inline void set_DigitUpperTable_3(Il2CppChar* value)
	{
		___DigitUpperTable_3 = value;
	}

	inline static int32_t get_offset_of_TenPowersList_4() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621_StaticFields, ___TenPowersList_4)); }
	inline int64_t* get_TenPowersList_4() const { return ___TenPowersList_4; }
	inline int64_t** get_address_of_TenPowersList_4() { return &___TenPowersList_4; }
	inline void set_TenPowersList_4(int64_t* value)
	{
		___TenPowersList_4 = value;
	}

	inline static int32_t get_offset_of_DecHexDigits_5() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621_StaticFields, ___DecHexDigits_5)); }
	inline int32_t* get_DecHexDigits_5() const { return ___DecHexDigits_5; }
	inline int32_t** get_address_of_DecHexDigits_5() { return &___DecHexDigits_5; }
	inline void set_DecHexDigits_5(int32_t* value)
	{
		___DecHexDigits_5 = value;
	}
};

struct NumberFormatter_t1182924621_ThreadStaticFields
{
public:
	// System.NumberFormatter System.NumberFormatter::threadNumberFormatter
	NumberFormatter_t1182924621 * ___threadNumberFormatter_25;

public:
	inline static int32_t get_offset_of_threadNumberFormatter_25() { return static_cast<int32_t>(offsetof(NumberFormatter_t1182924621_ThreadStaticFields, ___threadNumberFormatter_25)); }
	inline NumberFormatter_t1182924621 * get_threadNumberFormatter_25() const { return ___threadNumberFormatter_25; }
	inline NumberFormatter_t1182924621 ** get_address_of_threadNumberFormatter_25() { return &___threadNumberFormatter_25; }
	inline void set_threadNumberFormatter_25(NumberFormatter_t1182924621 * value)
	{
		___threadNumberFormatter_25 = value;
		Il2CppCodeGenWriteBarrier((&___threadNumberFormatter_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NUMBERFORMATTER_T1182924621_H
#ifndef CUSTOMINFO_T435179798_H
#define CUSTOMINFO_T435179798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NumberFormatter/CustomInfo
struct  CustomInfo_t435179798  : public RuntimeObject
{
public:
	// System.Boolean System.NumberFormatter/CustomInfo::UseGroup
	bool ___UseGroup_0;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalDigits
	int32_t ___DecimalDigits_1;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalPointPos
	int32_t ___DecimalPointPos_2;
	// System.Int32 System.NumberFormatter/CustomInfo::DecimalTailSharpDigits
	int32_t ___DecimalTailSharpDigits_3;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerDigits
	int32_t ___IntegerDigits_4;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerHeadSharpDigits
	int32_t ___IntegerHeadSharpDigits_5;
	// System.Int32 System.NumberFormatter/CustomInfo::IntegerHeadPos
	int32_t ___IntegerHeadPos_6;
	// System.Boolean System.NumberFormatter/CustomInfo::UseExponent
	bool ___UseExponent_7;
	// System.Int32 System.NumberFormatter/CustomInfo::ExponentDigits
	int32_t ___ExponentDigits_8;
	// System.Int32 System.NumberFormatter/CustomInfo::ExponentTailSharpDigits
	int32_t ___ExponentTailSharpDigits_9;
	// System.Boolean System.NumberFormatter/CustomInfo::ExponentNegativeSignOnly
	bool ___ExponentNegativeSignOnly_10;
	// System.Int32 System.NumberFormatter/CustomInfo::DividePlaces
	int32_t ___DividePlaces_11;
	// System.Int32 System.NumberFormatter/CustomInfo::Percents
	int32_t ___Percents_12;
	// System.Int32 System.NumberFormatter/CustomInfo::Permilles
	int32_t ___Permilles_13;

public:
	inline static int32_t get_offset_of_UseGroup_0() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___UseGroup_0)); }
	inline bool get_UseGroup_0() const { return ___UseGroup_0; }
	inline bool* get_address_of_UseGroup_0() { return &___UseGroup_0; }
	inline void set_UseGroup_0(bool value)
	{
		___UseGroup_0 = value;
	}

	inline static int32_t get_offset_of_DecimalDigits_1() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___DecimalDigits_1)); }
	inline int32_t get_DecimalDigits_1() const { return ___DecimalDigits_1; }
	inline int32_t* get_address_of_DecimalDigits_1() { return &___DecimalDigits_1; }
	inline void set_DecimalDigits_1(int32_t value)
	{
		___DecimalDigits_1 = value;
	}

	inline static int32_t get_offset_of_DecimalPointPos_2() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___DecimalPointPos_2)); }
	inline int32_t get_DecimalPointPos_2() const { return ___DecimalPointPos_2; }
	inline int32_t* get_address_of_DecimalPointPos_2() { return &___DecimalPointPos_2; }
	inline void set_DecimalPointPos_2(int32_t value)
	{
		___DecimalPointPos_2 = value;
	}

	inline static int32_t get_offset_of_DecimalTailSharpDigits_3() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___DecimalTailSharpDigits_3)); }
	inline int32_t get_DecimalTailSharpDigits_3() const { return ___DecimalTailSharpDigits_3; }
	inline int32_t* get_address_of_DecimalTailSharpDigits_3() { return &___DecimalTailSharpDigits_3; }
	inline void set_DecimalTailSharpDigits_3(int32_t value)
	{
		___DecimalTailSharpDigits_3 = value;
	}

	inline static int32_t get_offset_of_IntegerDigits_4() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___IntegerDigits_4)); }
	inline int32_t get_IntegerDigits_4() const { return ___IntegerDigits_4; }
	inline int32_t* get_address_of_IntegerDigits_4() { return &___IntegerDigits_4; }
	inline void set_IntegerDigits_4(int32_t value)
	{
		___IntegerDigits_4 = value;
	}

	inline static int32_t get_offset_of_IntegerHeadSharpDigits_5() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___IntegerHeadSharpDigits_5)); }
	inline int32_t get_IntegerHeadSharpDigits_5() const { return ___IntegerHeadSharpDigits_5; }
	inline int32_t* get_address_of_IntegerHeadSharpDigits_5() { return &___IntegerHeadSharpDigits_5; }
	inline void set_IntegerHeadSharpDigits_5(int32_t value)
	{
		___IntegerHeadSharpDigits_5 = value;
	}

	inline static int32_t get_offset_of_IntegerHeadPos_6() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___IntegerHeadPos_6)); }
	inline int32_t get_IntegerHeadPos_6() const { return ___IntegerHeadPos_6; }
	inline int32_t* get_address_of_IntegerHeadPos_6() { return &___IntegerHeadPos_6; }
	inline void set_IntegerHeadPos_6(int32_t value)
	{
		___IntegerHeadPos_6 = value;
	}

	inline static int32_t get_offset_of_UseExponent_7() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___UseExponent_7)); }
	inline bool get_UseExponent_7() const { return ___UseExponent_7; }
	inline bool* get_address_of_UseExponent_7() { return &___UseExponent_7; }
	inline void set_UseExponent_7(bool value)
	{
		___UseExponent_7 = value;
	}

	inline static int32_t get_offset_of_ExponentDigits_8() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___ExponentDigits_8)); }
	inline int32_t get_ExponentDigits_8() const { return ___ExponentDigits_8; }
	inline int32_t* get_address_of_ExponentDigits_8() { return &___ExponentDigits_8; }
	inline void set_ExponentDigits_8(int32_t value)
	{
		___ExponentDigits_8 = value;
	}

	inline static int32_t get_offset_of_ExponentTailSharpDigits_9() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___ExponentTailSharpDigits_9)); }
	inline int32_t get_ExponentTailSharpDigits_9() const { return ___ExponentTailSharpDigits_9; }
	inline int32_t* get_address_of_ExponentTailSharpDigits_9() { return &___ExponentTailSharpDigits_9; }
	inline void set_ExponentTailSharpDigits_9(int32_t value)
	{
		___ExponentTailSharpDigits_9 = value;
	}

	inline static int32_t get_offset_of_ExponentNegativeSignOnly_10() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___ExponentNegativeSignOnly_10)); }
	inline bool get_ExponentNegativeSignOnly_10() const { return ___ExponentNegativeSignOnly_10; }
	inline bool* get_address_of_ExponentNegativeSignOnly_10() { return &___ExponentNegativeSignOnly_10; }
	inline void set_ExponentNegativeSignOnly_10(bool value)
	{
		___ExponentNegativeSignOnly_10 = value;
	}

	inline static int32_t get_offset_of_DividePlaces_11() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___DividePlaces_11)); }
	inline int32_t get_DividePlaces_11() const { return ___DividePlaces_11; }
	inline int32_t* get_address_of_DividePlaces_11() { return &___DividePlaces_11; }
	inline void set_DividePlaces_11(int32_t value)
	{
		___DividePlaces_11 = value;
	}

	inline static int32_t get_offset_of_Percents_12() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___Percents_12)); }
	inline int32_t get_Percents_12() const { return ___Percents_12; }
	inline int32_t* get_address_of_Percents_12() { return &___Percents_12; }
	inline void set_Percents_12(int32_t value)
	{
		___Percents_12 = value;
	}

	inline static int32_t get_offset_of_Permilles_13() { return static_cast<int32_t>(offsetof(CustomInfo_t435179798, ___Permilles_13)); }
	inline int32_t get_Permilles_13() const { return ___Permilles_13; }
	inline int32_t* get_address_of_Permilles_13() { return &___Permilles_13; }
	inline void set_Permilles_13(int32_t value)
	{
		___Permilles_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMINFO_T435179798_H
#ifndef RANDOM_T108471755_H
#define RANDOM_T108471755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Random
struct  Random_t108471755  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_0;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_1;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t385246372* ___SeedArray_2;

public:
	inline static int32_t get_offset_of_inext_0() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inext_0)); }
	inline int32_t get_inext_0() const { return ___inext_0; }
	inline int32_t* get_address_of_inext_0() { return &___inext_0; }
	inline void set_inext_0(int32_t value)
	{
		___inext_0 = value;
	}

	inline static int32_t get_offset_of_inextp_1() { return static_cast<int32_t>(offsetof(Random_t108471755, ___inextp_1)); }
	inline int32_t get_inextp_1() const { return ___inextp_1; }
	inline int32_t* get_address_of_inextp_1() { return &___inextp_1; }
	inline void set_inextp_1(int32_t value)
	{
		___inextp_1 = value;
	}

	inline static int32_t get_offset_of_SeedArray_2() { return static_cast<int32_t>(offsetof(Random_t108471755, ___SeedArray_2)); }
	inline Int32U5BU5D_t385246372* get_SeedArray_2() const { return ___SeedArray_2; }
	inline Int32U5BU5D_t385246372** get_address_of_SeedArray_2() { return &___SeedArray_2; }
	inline void set_SeedArray_2(Int32U5BU5D_t385246372* value)
	{
		___SeedArray_2 = value;
		Il2CppCodeGenWriteBarrier((&___SeedArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOM_T108471755_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRINGCOMPARER_T3301955079_H
#define STRINGCOMPARER_T3301955079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparer
struct  StringComparer_t3301955079  : public RuntimeObject
{
public:

public:
};

struct StringComparer_t3301955079_StaticFields
{
public:
	// System.StringComparer System.StringComparer::invariantCultureIgnoreCase
	StringComparer_t3301955079 * ___invariantCultureIgnoreCase_0;
	// System.StringComparer System.StringComparer::invariantCulture
	StringComparer_t3301955079 * ___invariantCulture_1;
	// System.StringComparer System.StringComparer::ordinalIgnoreCase
	StringComparer_t3301955079 * ___ordinalIgnoreCase_2;
	// System.StringComparer System.StringComparer::ordinal
	StringComparer_t3301955079 * ___ordinal_3;

public:
	inline static int32_t get_offset_of_invariantCultureIgnoreCase_0() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___invariantCultureIgnoreCase_0)); }
	inline StringComparer_t3301955079 * get_invariantCultureIgnoreCase_0() const { return ___invariantCultureIgnoreCase_0; }
	inline StringComparer_t3301955079 ** get_address_of_invariantCultureIgnoreCase_0() { return &___invariantCultureIgnoreCase_0; }
	inline void set_invariantCultureIgnoreCase_0(StringComparer_t3301955079 * value)
	{
		___invariantCultureIgnoreCase_0 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCultureIgnoreCase_0), value);
	}

	inline static int32_t get_offset_of_invariantCulture_1() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___invariantCulture_1)); }
	inline StringComparer_t3301955079 * get_invariantCulture_1() const { return ___invariantCulture_1; }
	inline StringComparer_t3301955079 ** get_address_of_invariantCulture_1() { return &___invariantCulture_1; }
	inline void set_invariantCulture_1(StringComparer_t3301955079 * value)
	{
		___invariantCulture_1 = value;
		Il2CppCodeGenWriteBarrier((&___invariantCulture_1), value);
	}

	inline static int32_t get_offset_of_ordinalIgnoreCase_2() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___ordinalIgnoreCase_2)); }
	inline StringComparer_t3301955079 * get_ordinalIgnoreCase_2() const { return ___ordinalIgnoreCase_2; }
	inline StringComparer_t3301955079 ** get_address_of_ordinalIgnoreCase_2() { return &___ordinalIgnoreCase_2; }
	inline void set_ordinalIgnoreCase_2(StringComparer_t3301955079 * value)
	{
		___ordinalIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((&___ordinalIgnoreCase_2), value);
	}

	inline static int32_t get_offset_of_ordinal_3() { return static_cast<int32_t>(offsetof(StringComparer_t3301955079_StaticFields, ___ordinal_3)); }
	inline StringComparer_t3301955079 * get_ordinal_3() const { return ___ordinal_3; }
	inline StringComparer_t3301955079 ** get_address_of_ordinal_3() { return &___ordinal_3; }
	inline void set_ordinal_3(StringComparer_t3301955079 * value)
	{
		___ordinal_3 = value;
		Il2CppCodeGenWriteBarrier((&___ordinal_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOMPARER_T3301955079_H
#ifndef TERMINFOREADER_T3116894478_H
#define TERMINFOREADER_T3116894478_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TermInfoReader
struct  TermInfoReader_t3116894478  : public RuntimeObject
{
public:
	// System.Int16 System.TermInfoReader::boolSize
	int16_t ___boolSize_0;
	// System.Int16 System.TermInfoReader::numSize
	int16_t ___numSize_1;
	// System.Int16 System.TermInfoReader::strOffsets
	int16_t ___strOffsets_2;
	// System.Byte[] System.TermInfoReader::buffer
	ByteU5BU5D_t4116647657* ___buffer_3;
	// System.Int32 System.TermInfoReader::booleansOffset
	int32_t ___booleansOffset_4;

public:
	inline static int32_t get_offset_of_boolSize_0() { return static_cast<int32_t>(offsetof(TermInfoReader_t3116894478, ___boolSize_0)); }
	inline int16_t get_boolSize_0() const { return ___boolSize_0; }
	inline int16_t* get_address_of_boolSize_0() { return &___boolSize_0; }
	inline void set_boolSize_0(int16_t value)
	{
		___boolSize_0 = value;
	}

	inline static int32_t get_offset_of_numSize_1() { return static_cast<int32_t>(offsetof(TermInfoReader_t3116894478, ___numSize_1)); }
	inline int16_t get_numSize_1() const { return ___numSize_1; }
	inline int16_t* get_address_of_numSize_1() { return &___numSize_1; }
	inline void set_numSize_1(int16_t value)
	{
		___numSize_1 = value;
	}

	inline static int32_t get_offset_of_strOffsets_2() { return static_cast<int32_t>(offsetof(TermInfoReader_t3116894478, ___strOffsets_2)); }
	inline int16_t get_strOffsets_2() const { return ___strOffsets_2; }
	inline int16_t* get_address_of_strOffsets_2() { return &___strOffsets_2; }
	inline void set_strOffsets_2(int16_t value)
	{
		___strOffsets_2 = value;
	}

	inline static int32_t get_offset_of_buffer_3() { return static_cast<int32_t>(offsetof(TermInfoReader_t3116894478, ___buffer_3)); }
	inline ByteU5BU5D_t4116647657* get_buffer_3() const { return ___buffer_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_buffer_3() { return &___buffer_3; }
	inline void set_buffer_3(ByteU5BU5D_t4116647657* value)
	{
		___buffer_3 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_3), value);
	}

	inline static int32_t get_offset_of_booleansOffset_4() { return static_cast<int32_t>(offsetof(TermInfoReader_t3116894478, ___booleansOffset_4)); }
	inline int32_t get_booleansOffset_4() const { return ___booleansOffset_4; }
	inline int32_t* get_address_of_booleansOffset_4() { return &___booleansOffset_4; }
	inline void set_booleansOffset_4(int32_t value)
	{
		___booleansOffset_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERMINFOREADER_T3116894478_H
#ifndef PARSER_T2112344768_H
#define PARSER_T2112344768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan/Parser
struct  Parser_t2112344768  : public RuntimeObject
{
public:
	// System.String System.TimeSpan/Parser::_src
	String_t* ____src_0;
	// System.Int32 System.TimeSpan/Parser::_cur
	int32_t ____cur_1;
	// System.Int32 System.TimeSpan/Parser::_length
	int32_t ____length_2;
	// System.Boolean System.TimeSpan/Parser::formatError
	bool ___formatError_3;

public:
	inline static int32_t get_offset_of__src_0() { return static_cast<int32_t>(offsetof(Parser_t2112344768, ____src_0)); }
	inline String_t* get__src_0() const { return ____src_0; }
	inline String_t** get_address_of__src_0() { return &____src_0; }
	inline void set__src_0(String_t* value)
	{
		____src_0 = value;
		Il2CppCodeGenWriteBarrier((&____src_0), value);
	}

	inline static int32_t get_offset_of__cur_1() { return static_cast<int32_t>(offsetof(Parser_t2112344768, ____cur_1)); }
	inline int32_t get__cur_1() const { return ____cur_1; }
	inline int32_t* get_address_of__cur_1() { return &____cur_1; }
	inline void set__cur_1(int32_t value)
	{
		____cur_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(Parser_t2112344768, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}

	inline static int32_t get_offset_of_formatError_3() { return static_cast<int32_t>(offsetof(Parser_t2112344768, ___formatError_3)); }
	inline bool get_formatError_3() const { return ___formatError_3; }
	inline bool* get_address_of_formatError_3() { return &___formatError_3; }
	inline void set_formatError_3(bool value)
	{
		___formatError_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PARSER_T2112344768_H
#ifndef TIMEZONE_T2038656743_H
#define TIMEZONE_T2038656743_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeZone
struct  TimeZone_t2038656743  : public RuntimeObject
{
public:

public:
};

struct TimeZone_t2038656743_StaticFields
{
public:
	// System.TimeZone System.TimeZone::currentTimeZone
	TimeZone_t2038656743 * ___currentTimeZone_0;
	// System.Object System.TimeZone::tz_lock
	RuntimeObject * ___tz_lock_1;
	// System.Int64 System.TimeZone::timezone_check
	int64_t ___timezone_check_2;

public:
	inline static int32_t get_offset_of_currentTimeZone_0() { return static_cast<int32_t>(offsetof(TimeZone_t2038656743_StaticFields, ___currentTimeZone_0)); }
	inline TimeZone_t2038656743 * get_currentTimeZone_0() const { return ___currentTimeZone_0; }
	inline TimeZone_t2038656743 ** get_address_of_currentTimeZone_0() { return &___currentTimeZone_0; }
	inline void set_currentTimeZone_0(TimeZone_t2038656743 * value)
	{
		___currentTimeZone_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentTimeZone_0), value);
	}

	inline static int32_t get_offset_of_tz_lock_1() { return static_cast<int32_t>(offsetof(TimeZone_t2038656743_StaticFields, ___tz_lock_1)); }
	inline RuntimeObject * get_tz_lock_1() const { return ___tz_lock_1; }
	inline RuntimeObject ** get_address_of_tz_lock_1() { return &___tz_lock_1; }
	inline void set_tz_lock_1(RuntimeObject * value)
	{
		___tz_lock_1 = value;
		Il2CppCodeGenWriteBarrier((&___tz_lock_1), value);
	}

	inline static int32_t get_offset_of_timezone_check_2() { return static_cast<int32_t>(offsetof(TimeZone_t2038656743_StaticFields, ___timezone_check_2)); }
	inline int64_t get_timezone_check_2() const { return ___timezone_check_2; }
	inline int64_t* get_address_of_timezone_check_2() { return &___timezone_check_2; }
	inline void set_timezone_check_2(int64_t value)
	{
		___timezone_check_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEZONE_T2038656743_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef VERSION_T3456873960_H
#define VERSION_T3456873960_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Version
struct  Version_t3456873960  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_1;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_2;
	// System.Int32 System.Version::_Build
	int32_t ____Build_3;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_4;

public:
	inline static int32_t get_offset_of__Major_1() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Major_1)); }
	inline int32_t get__Major_1() const { return ____Major_1; }
	inline int32_t* get_address_of__Major_1() { return &____Major_1; }
	inline void set__Major_1(int32_t value)
	{
		____Major_1 = value;
	}

	inline static int32_t get_offset_of__Minor_2() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Minor_2)); }
	inline int32_t get__Minor_2() const { return ____Minor_2; }
	inline int32_t* get_address_of__Minor_2() { return &____Minor_2; }
	inline void set__Minor_2(int32_t value)
	{
		____Minor_2 = value;
	}

	inline static int32_t get_offset_of__Build_3() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Build_3)); }
	inline int32_t get__Build_3() const { return ____Build_3; }
	inline int32_t* get_address_of__Build_3() { return &____Build_3; }
	inline void set__Build_3(int32_t value)
	{
		____Build_3 = value;
	}

	inline static int32_t get_offset_of__Revision_4() { return static_cast<int32_t>(offsetof(Version_t3456873960, ____Revision_4)); }
	inline int32_t get__Revision_4() const { return ____Revision_4; }
	inline int32_t* get_address_of__Revision_4() { return &____Revision_4; }
	inline void set__Revision_4(int32_t value)
	{
		____Revision_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VERSION_T3456873960_H
#ifndef COORD_T397375283_H
#define COORD_T397375283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Coord
struct  Coord_t397375283 
{
public:
	// System.Int16 System.Coord::X
	int16_t ___X_0;
	// System.Int16 System.Coord::Y
	int16_t ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Coord_t397375283, ___X_0)); }
	inline int16_t get_X_0() const { return ___X_0; }
	inline int16_t* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(int16_t value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Coord_t397375283, ___Y_1)); }
	inline int16_t get_Y_1() const { return ___Y_1; }
	inline int16_t* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(int16_t value)
	{
		___Y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COORD_T397375283_H
#ifndef CULTUREAWARECOMPARER_T30646139_H
#define CULTUREAWARECOMPARER_T30646139_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CultureAwareComparer
struct  CultureAwareComparer_t30646139  : public StringComparer_t3301955079
{
public:
	// System.Boolean System.CultureAwareComparer::_ignoreCase
	bool ____ignoreCase_4;
	// System.Globalization.CompareInfo System.CultureAwareComparer::_compareInfo
	CompareInfo_t1092934962 * ____compareInfo_5;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t30646139, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}

	inline static int32_t get_offset_of__compareInfo_5() { return static_cast<int32_t>(offsetof(CultureAwareComparer_t30646139, ____compareInfo_5)); }
	inline CompareInfo_t1092934962 * get__compareInfo_5() const { return ____compareInfo_5; }
	inline CompareInfo_t1092934962 ** get_address_of__compareInfo_5() { return &____compareInfo_5; }
	inline void set__compareInfo_5(CompareInfo_t1092934962 * value)
	{
		____compareInfo_5 = value;
		Il2CppCodeGenWriteBarrier((&____compareInfo_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREAWARECOMPARER_T30646139_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef FLAGSATTRIBUTE_T2262502849_H
#define FLAGSATTRIBUTE_T2262502849_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FlagsAttribute
struct  FlagsAttribute_t2262502849  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGSATTRIBUTE_T2262502849_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_0;
	// System.Int16 System.Guid::_b
	int16_t ____b_1;
	// System.Int16 System.Guid::_c
	int16_t ____c_2;
	// System.Byte System.Guid::_d
	uint8_t ____d_3;
	// System.Byte System.Guid::_e
	uint8_t ____e_4;
	// System.Byte System.Guid::_f
	uint8_t ____f_5;
	// System.Byte System.Guid::_g
	uint8_t ____g_6;
	// System.Byte System.Guid::_h
	uint8_t ____h_7;
	// System.Byte System.Guid::_i
	uint8_t ____i_8;
	// System.Byte System.Guid::_j
	uint8_t ____j_9;
	// System.Byte System.Guid::_k
	uint8_t ____k_10;

public:
	inline static int32_t get_offset_of__a_0() { return static_cast<int32_t>(offsetof(Guid_t, ____a_0)); }
	inline int32_t get__a_0() const { return ____a_0; }
	inline int32_t* get_address_of__a_0() { return &____a_0; }
	inline void set__a_0(int32_t value)
	{
		____a_0 = value;
	}

	inline static int32_t get_offset_of__b_1() { return static_cast<int32_t>(offsetof(Guid_t, ____b_1)); }
	inline int16_t get__b_1() const { return ____b_1; }
	inline int16_t* get_address_of__b_1() { return &____b_1; }
	inline void set__b_1(int16_t value)
	{
		____b_1 = value;
	}

	inline static int32_t get_offset_of__c_2() { return static_cast<int32_t>(offsetof(Guid_t, ____c_2)); }
	inline int16_t get__c_2() const { return ____c_2; }
	inline int16_t* get_address_of__c_2() { return &____c_2; }
	inline void set__c_2(int16_t value)
	{
		____c_2 = value;
	}

	inline static int32_t get_offset_of__d_3() { return static_cast<int32_t>(offsetof(Guid_t, ____d_3)); }
	inline uint8_t get__d_3() const { return ____d_3; }
	inline uint8_t* get_address_of__d_3() { return &____d_3; }
	inline void set__d_3(uint8_t value)
	{
		____d_3 = value;
	}

	inline static int32_t get_offset_of__e_4() { return static_cast<int32_t>(offsetof(Guid_t, ____e_4)); }
	inline uint8_t get__e_4() const { return ____e_4; }
	inline uint8_t* get_address_of__e_4() { return &____e_4; }
	inline void set__e_4(uint8_t value)
	{
		____e_4 = value;
	}

	inline static int32_t get_offset_of__f_5() { return static_cast<int32_t>(offsetof(Guid_t, ____f_5)); }
	inline uint8_t get__f_5() const { return ____f_5; }
	inline uint8_t* get_address_of__f_5() { return &____f_5; }
	inline void set__f_5(uint8_t value)
	{
		____f_5 = value;
	}

	inline static int32_t get_offset_of__g_6() { return static_cast<int32_t>(offsetof(Guid_t, ____g_6)); }
	inline uint8_t get__g_6() const { return ____g_6; }
	inline uint8_t* get_address_of__g_6() { return &____g_6; }
	inline void set__g_6(uint8_t value)
	{
		____g_6 = value;
	}

	inline static int32_t get_offset_of__h_7() { return static_cast<int32_t>(offsetof(Guid_t, ____h_7)); }
	inline uint8_t get__h_7() const { return ____h_7; }
	inline uint8_t* get_address_of__h_7() { return &____h_7; }
	inline void set__h_7(uint8_t value)
	{
		____h_7 = value;
	}

	inline static int32_t get_offset_of__i_8() { return static_cast<int32_t>(offsetof(Guid_t, ____i_8)); }
	inline uint8_t get__i_8() const { return ____i_8; }
	inline uint8_t* get_address_of__i_8() { return &____i_8; }
	inline void set__i_8(uint8_t value)
	{
		____i_8 = value;
	}

	inline static int32_t get_offset_of__j_9() { return static_cast<int32_t>(offsetof(Guid_t, ____j_9)); }
	inline uint8_t get__j_9() const { return ____j_9; }
	inline uint8_t* get_address_of__j_9() { return &____j_9; }
	inline void set__j_9(uint8_t value)
	{
		____j_9 = value;
	}

	inline static int32_t get_offset_of__k_10() { return static_cast<int32_t>(offsetof(Guid_t, ____k_10)); }
	inline uint8_t get__k_10() const { return ____k_10; }
	inline uint8_t* get_address_of__k_10() { return &____k_10; }
	inline void set__k_10(uint8_t value)
	{
		____k_10 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_11;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_11() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_11)); }
	inline Guid_t  get_Empty_11() const { return ___Empty_11; }
	inline Guid_t * get_address_of_Empty_11() { return &___Empty_11; }
	inline void set_Empty_11(Guid_t  value)
	{
		___Empty_11 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_12), value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t386037858 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t386037858 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((&____rng_13), value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef INPUTRECORD_T2660212290_H
#define INPUTRECORD_T2660212290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InputRecord
struct  InputRecord_t2660212290 
{
public:
	// System.Int16 System.InputRecord::EventType
	int16_t ___EventType_0;
	// System.Boolean System.InputRecord::KeyDown
	bool ___KeyDown_1;
	// System.Int16 System.InputRecord::RepeatCount
	int16_t ___RepeatCount_2;
	// System.Int16 System.InputRecord::VirtualKeyCode
	int16_t ___VirtualKeyCode_3;
	// System.Int16 System.InputRecord::VirtualScanCode
	int16_t ___VirtualScanCode_4;
	// System.Char System.InputRecord::Character
	Il2CppChar ___Character_5;
	// System.Int32 System.InputRecord::ControlKeyState
	int32_t ___ControlKeyState_6;
	// System.Int32 System.InputRecord::pad1
	int32_t ___pad1_7;
	// System.Boolean System.InputRecord::pad2
	bool ___pad2_8;

public:
	inline static int32_t get_offset_of_EventType_0() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___EventType_0)); }
	inline int16_t get_EventType_0() const { return ___EventType_0; }
	inline int16_t* get_address_of_EventType_0() { return &___EventType_0; }
	inline void set_EventType_0(int16_t value)
	{
		___EventType_0 = value;
	}

	inline static int32_t get_offset_of_KeyDown_1() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___KeyDown_1)); }
	inline bool get_KeyDown_1() const { return ___KeyDown_1; }
	inline bool* get_address_of_KeyDown_1() { return &___KeyDown_1; }
	inline void set_KeyDown_1(bool value)
	{
		___KeyDown_1 = value;
	}

	inline static int32_t get_offset_of_RepeatCount_2() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___RepeatCount_2)); }
	inline int16_t get_RepeatCount_2() const { return ___RepeatCount_2; }
	inline int16_t* get_address_of_RepeatCount_2() { return &___RepeatCount_2; }
	inline void set_RepeatCount_2(int16_t value)
	{
		___RepeatCount_2 = value;
	}

	inline static int32_t get_offset_of_VirtualKeyCode_3() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___VirtualKeyCode_3)); }
	inline int16_t get_VirtualKeyCode_3() const { return ___VirtualKeyCode_3; }
	inline int16_t* get_address_of_VirtualKeyCode_3() { return &___VirtualKeyCode_3; }
	inline void set_VirtualKeyCode_3(int16_t value)
	{
		___VirtualKeyCode_3 = value;
	}

	inline static int32_t get_offset_of_VirtualScanCode_4() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___VirtualScanCode_4)); }
	inline int16_t get_VirtualScanCode_4() const { return ___VirtualScanCode_4; }
	inline int16_t* get_address_of_VirtualScanCode_4() { return &___VirtualScanCode_4; }
	inline void set_VirtualScanCode_4(int16_t value)
	{
		___VirtualScanCode_4 = value;
	}

	inline static int32_t get_offset_of_Character_5() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___Character_5)); }
	inline Il2CppChar get_Character_5() const { return ___Character_5; }
	inline Il2CppChar* get_address_of_Character_5() { return &___Character_5; }
	inline void set_Character_5(Il2CppChar value)
	{
		___Character_5 = value;
	}

	inline static int32_t get_offset_of_ControlKeyState_6() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___ControlKeyState_6)); }
	inline int32_t get_ControlKeyState_6() const { return ___ControlKeyState_6; }
	inline int32_t* get_address_of_ControlKeyState_6() { return &___ControlKeyState_6; }
	inline void set_ControlKeyState_6(int32_t value)
	{
		___ControlKeyState_6 = value;
	}

	inline static int32_t get_offset_of_pad1_7() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___pad1_7)); }
	inline int32_t get_pad1_7() const { return ___pad1_7; }
	inline int32_t* get_address_of_pad1_7() { return &___pad1_7; }
	inline void set_pad1_7(int32_t value)
	{
		___pad1_7 = value;
	}

	inline static int32_t get_offset_of_pad2_8() { return static_cast<int32_t>(offsetof(InputRecord_t2660212290, ___pad2_8)); }
	inline bool get_pad2_8() const { return ___pad2_8; }
	inline bool* get_address_of_pad2_8() { return &___pad2_8; }
	inline void set_pad2_8(bool value)
	{
		___pad2_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.InputRecord
struct InputRecord_t2660212290_marshaled_pinvoke
{
	int16_t ___EventType_0;
	int32_t ___KeyDown_1;
	int16_t ___RepeatCount_2;
	int16_t ___VirtualKeyCode_3;
	int16_t ___VirtualScanCode_4;
	uint8_t ___Character_5;
	int32_t ___ControlKeyState_6;
	int32_t ___pad1_7;
	int32_t ___pad2_8;
};
// Native definition for COM marshalling of System.InputRecord
struct InputRecord_t2660212290_marshaled_com
{
	int16_t ___EventType_0;
	int32_t ___KeyDown_1;
	int16_t ___RepeatCount_2;
	int16_t ___VirtualKeyCode_3;
	int16_t ___VirtualScanCode_4;
	uint8_t ___Character_5;
	int32_t ___ControlKeyState_6;
	int32_t ___pad1_7;
	int32_t ___pad2_8;
};
#endif // INPUTRECORD_T2660212290_H
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
#ifndef MONOENUMINFO_T3694469084_H
#define MONOENUMINFO_T3694469084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoEnumInfo
struct  MonoEnumInfo_t3694469084 
{
public:
	// System.Type System.MonoEnumInfo::utype
	Type_t * ___utype_0;
	// System.Array System.MonoEnumInfo::values
	RuntimeArray * ___values_1;
	// System.String[] System.MonoEnumInfo::names
	StringU5BU5D_t1281789340* ___names_2;
	// System.Collections.Hashtable System.MonoEnumInfo::name_hash
	Hashtable_t1853889766 * ___name_hash_3;

public:
	inline static int32_t get_offset_of_utype_0() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3694469084, ___utype_0)); }
	inline Type_t * get_utype_0() const { return ___utype_0; }
	inline Type_t ** get_address_of_utype_0() { return &___utype_0; }
	inline void set_utype_0(Type_t * value)
	{
		___utype_0 = value;
		Il2CppCodeGenWriteBarrier((&___utype_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3694469084, ___values_1)); }
	inline RuntimeArray * get_values_1() const { return ___values_1; }
	inline RuntimeArray ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(RuntimeArray * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_names_2() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3694469084, ___names_2)); }
	inline StringU5BU5D_t1281789340* get_names_2() const { return ___names_2; }
	inline StringU5BU5D_t1281789340** get_address_of_names_2() { return &___names_2; }
	inline void set_names_2(StringU5BU5D_t1281789340* value)
	{
		___names_2 = value;
		Il2CppCodeGenWriteBarrier((&___names_2), value);
	}

	inline static int32_t get_offset_of_name_hash_3() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3694469084, ___name_hash_3)); }
	inline Hashtable_t1853889766 * get_name_hash_3() const { return ___name_hash_3; }
	inline Hashtable_t1853889766 ** get_address_of_name_hash_3() { return &___name_hash_3; }
	inline void set_name_hash_3(Hashtable_t1853889766 * value)
	{
		___name_hash_3 = value;
		Il2CppCodeGenWriteBarrier((&___name_hash_3), value);
	}
};

struct MonoEnumInfo_t3694469084_StaticFields
{
public:
	// System.Collections.Hashtable System.MonoEnumInfo::global_cache
	Hashtable_t1853889766 * ___global_cache_5;
	// System.Object System.MonoEnumInfo::global_cache_monitor
	RuntimeObject * ___global_cache_monitor_6;
	// System.MonoEnumInfo/SByteComparer System.MonoEnumInfo::sbyte_comparer
	SByteComparer_t2329725001 * ___sbyte_comparer_7;
	// System.MonoEnumInfo/ShortComparer System.MonoEnumInfo::short_comparer
	ShortComparer_t2253094562 * ___short_comparer_8;
	// System.MonoEnumInfo/IntComparer System.MonoEnumInfo::int_comparer
	IntComparer_t3812095803 * ___int_comparer_9;
	// System.MonoEnumInfo/LongComparer System.MonoEnumInfo::long_comparer
	LongComparer_t1798269597 * ___long_comparer_10;

public:
	inline static int32_t get_offset_of_global_cache_5() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3694469084_StaticFields, ___global_cache_5)); }
	inline Hashtable_t1853889766 * get_global_cache_5() const { return ___global_cache_5; }
	inline Hashtable_t1853889766 ** get_address_of_global_cache_5() { return &___global_cache_5; }
	inline void set_global_cache_5(Hashtable_t1853889766 * value)
	{
		___global_cache_5 = value;
		Il2CppCodeGenWriteBarrier((&___global_cache_5), value);
	}

	inline static int32_t get_offset_of_global_cache_monitor_6() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3694469084_StaticFields, ___global_cache_monitor_6)); }
	inline RuntimeObject * get_global_cache_monitor_6() const { return ___global_cache_monitor_6; }
	inline RuntimeObject ** get_address_of_global_cache_monitor_6() { return &___global_cache_monitor_6; }
	inline void set_global_cache_monitor_6(RuntimeObject * value)
	{
		___global_cache_monitor_6 = value;
		Il2CppCodeGenWriteBarrier((&___global_cache_monitor_6), value);
	}

	inline static int32_t get_offset_of_sbyte_comparer_7() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3694469084_StaticFields, ___sbyte_comparer_7)); }
	inline SByteComparer_t2329725001 * get_sbyte_comparer_7() const { return ___sbyte_comparer_7; }
	inline SByteComparer_t2329725001 ** get_address_of_sbyte_comparer_7() { return &___sbyte_comparer_7; }
	inline void set_sbyte_comparer_7(SByteComparer_t2329725001 * value)
	{
		___sbyte_comparer_7 = value;
		Il2CppCodeGenWriteBarrier((&___sbyte_comparer_7), value);
	}

	inline static int32_t get_offset_of_short_comparer_8() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3694469084_StaticFields, ___short_comparer_8)); }
	inline ShortComparer_t2253094562 * get_short_comparer_8() const { return ___short_comparer_8; }
	inline ShortComparer_t2253094562 ** get_address_of_short_comparer_8() { return &___short_comparer_8; }
	inline void set_short_comparer_8(ShortComparer_t2253094562 * value)
	{
		___short_comparer_8 = value;
		Il2CppCodeGenWriteBarrier((&___short_comparer_8), value);
	}

	inline static int32_t get_offset_of_int_comparer_9() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3694469084_StaticFields, ___int_comparer_9)); }
	inline IntComparer_t3812095803 * get_int_comparer_9() const { return ___int_comparer_9; }
	inline IntComparer_t3812095803 ** get_address_of_int_comparer_9() { return &___int_comparer_9; }
	inline void set_int_comparer_9(IntComparer_t3812095803 * value)
	{
		___int_comparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___int_comparer_9), value);
	}

	inline static int32_t get_offset_of_long_comparer_10() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3694469084_StaticFields, ___long_comparer_10)); }
	inline LongComparer_t1798269597 * get_long_comparer_10() const { return ___long_comparer_10; }
	inline LongComparer_t1798269597 ** get_address_of_long_comparer_10() { return &___long_comparer_10; }
	inline void set_long_comparer_10(LongComparer_t1798269597 * value)
	{
		___long_comparer_10 = value;
		Il2CppCodeGenWriteBarrier((&___long_comparer_10), value);
	}
};

struct MonoEnumInfo_t3694469084_ThreadStaticFields
{
public:
	// System.Collections.Hashtable System.MonoEnumInfo::cache
	Hashtable_t1853889766 * ___cache_4;

public:
	inline static int32_t get_offset_of_cache_4() { return static_cast<int32_t>(offsetof(MonoEnumInfo_t3694469084_ThreadStaticFields, ___cache_4)); }
	inline Hashtable_t1853889766 * get_cache_4() const { return ___cache_4; }
	inline Hashtable_t1853889766 ** get_address_of_cache_4() { return &___cache_4; }
	inline void set_cache_4(Hashtable_t1853889766 * value)
	{
		___cache_4 = value;
		Il2CppCodeGenWriteBarrier((&___cache_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MonoEnumInfo
struct MonoEnumInfo_t3694469084_marshaled_pinvoke
{
	Type_t * ___utype_0;
	RuntimeArray * ___values_1;
	char** ___names_2;
	Hashtable_t1853889766 * ___name_hash_3;
};
// Native definition for COM marshalling of System.MonoEnumInfo
struct MonoEnumInfo_t3694469084_marshaled_com
{
	Type_t * ___utype_0;
	RuntimeArray * ___values_1;
	Il2CppChar** ___names_2;
	Hashtable_t1853889766 * ___name_hash_3;
};
#endif // MONOENUMINFO_T3694469084_H
#ifndef MONOTODOATTRIBUTE_T4131080581_H
#define MONOTODOATTRIBUTE_T4131080581_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoTODOAttribute
struct  MonoTODOAttribute_t4131080581  : public Attribute_t861562559
{
public:
	// System.String System.MonoTODOAttribute::comment
	String_t* ___comment_0;

public:
	inline static int32_t get_offset_of_comment_0() { return static_cast<int32_t>(offsetof(MonoTODOAttribute_t4131080581, ___comment_0)); }
	inline String_t* get_comment_0() const { return ___comment_0; }
	inline String_t** get_address_of_comment_0() { return &___comment_0; }
	inline void set_comment_0(String_t* value)
	{
		___comment_0 = value;
		Il2CppCodeGenWriteBarrier((&___comment_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTODOATTRIBUTE_T4131080581_H
#ifndef NONSERIALIZEDATTRIBUTE_T2945079482_H
#define NONSERIALIZEDATTRIBUTE_T2945079482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NonSerializedAttribute
struct  NonSerializedAttribute_t2945079482  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NONSERIALIZEDATTRIBUTE_T2945079482_H
#ifndef ORDINALCOMPARER_T3407243298_H
#define ORDINALCOMPARER_T3407243298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OrdinalComparer
struct  OrdinalComparer_t3407243298  : public StringComparer_t3301955079
{
public:
	// System.Boolean System.OrdinalComparer::_ignoreCase
	bool ____ignoreCase_4;

public:
	inline static int32_t get_offset_of__ignoreCase_4() { return static_cast<int32_t>(offsetof(OrdinalComparer_t3407243298, ____ignoreCase_4)); }
	inline bool get__ignoreCase_4() const { return ____ignoreCase_4; }
	inline bool* get_address_of__ignoreCase_4() { return &____ignoreCase_4; }
	inline void set__ignoreCase_4(bool value)
	{
		____ignoreCase_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDINALCOMPARER_T3407243298_H
#ifndef RESOLVEEVENTARGS_T1779456501_H
#define RESOLVEEVENTARGS_T1779456501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ResolveEventArgs
struct  ResolveEventArgs_t1779456501  : public EventArgs_t3591816995
{
public:
	// System.String System.ResolveEventArgs::m_Name
	String_t* ___m_Name_1;

public:
	inline static int32_t get_offset_of_m_Name_1() { return static_cast<int32_t>(offsetof(ResolveEventArgs_t1779456501, ___m_Name_1)); }
	inline String_t* get_m_Name_1() const { return ___m_Name_1; }
	inline String_t** get_address_of_m_Name_1() { return &___m_Name_1; }
	inline void set_m_Name_1(String_t* value)
	{
		___m_Name_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLVEEVENTARGS_T1779456501_H
#ifndef GCHANDLE_T3351438187_H
#define GCHANDLE_T3351438187_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t3351438187 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t3351438187, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GCHANDLE_T3351438187_H
#ifndef SMALLRECT_T2930836963_H
#define SMALLRECT_T2930836963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SmallRect
struct  SmallRect_t2930836963 
{
public:
	// System.Int16 System.SmallRect::Left
	int16_t ___Left_0;
	// System.Int16 System.SmallRect::Top
	int16_t ___Top_1;
	// System.Int16 System.SmallRect::Right
	int16_t ___Right_2;
	// System.Int16 System.SmallRect::Bottom
	int16_t ___Bottom_3;

public:
	inline static int32_t get_offset_of_Left_0() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Left_0)); }
	inline int16_t get_Left_0() const { return ___Left_0; }
	inline int16_t* get_address_of_Left_0() { return &___Left_0; }
	inline void set_Left_0(int16_t value)
	{
		___Left_0 = value;
	}

	inline static int32_t get_offset_of_Top_1() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Top_1)); }
	inline int16_t get_Top_1() const { return ___Top_1; }
	inline int16_t* get_address_of_Top_1() { return &___Top_1; }
	inline void set_Top_1(int16_t value)
	{
		___Top_1 = value;
	}

	inline static int32_t get_offset_of_Right_2() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Right_2)); }
	inline int16_t get_Right_2() const { return ___Right_2; }
	inline int16_t* get_address_of_Right_2() { return &___Right_2; }
	inline void set_Right_2(int16_t value)
	{
		___Right_2 = value;
	}

	inline static int32_t get_offset_of_Bottom_3() { return static_cast<int32_t>(offsetof(SmallRect_t2930836963, ___Bottom_3)); }
	inline int16_t get_Bottom_3() const { return ___Bottom_3; }
	inline int16_t* get_address_of_Bottom_3() { return &___Bottom_3; }
	inline void set_Bottom_3(int16_t value)
	{
		___Bottom_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SMALLRECT_T2930836963_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef THREADSTATICATTRIBUTE_T3840787420_H
#define THREADSTATICATTRIBUTE_T3840787420_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ThreadStaticAttribute
struct  ThreadStaticAttribute_t3840787420  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADSTATICATTRIBUTE_T3840787420_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#define UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnhandledExceptionEventArgs
struct  UnhandledExceptionEventArgs_t2886101344  : public EventArgs_t3591816995
{
public:
	// System.Object System.UnhandledExceptionEventArgs::exception
	RuntimeObject * ___exception_1;
	// System.Boolean System.UnhandledExceptionEventArgs::m_isTerminating
	bool ___m_isTerminating_2;

public:
	inline static int32_t get_offset_of_exception_1() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2886101344, ___exception_1)); }
	inline RuntimeObject * get_exception_1() const { return ___exception_1; }
	inline RuntimeObject ** get_address_of_exception_1() { return &___exception_1; }
	inline void set_exception_1(RuntimeObject * value)
	{
		___exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___exception_1), value);
	}

	inline static int32_t get_offset_of_m_isTerminating_2() { return static_cast<int32_t>(offsetof(UnhandledExceptionEventArgs_t2886101344, ___m_isTerminating_2)); }
	inline bool get_m_isTerminating_2() const { return ___m_isTerminating_2; }
	inline bool* get_address_of_m_isTerminating_2() { return &___m_isTerminating_2; }
	inline void set_m_isTerminating_2(bool value)
	{
		___m_isTerminating_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNHANDLEDEXCEPTIONEVENTARGS_T2886101344_H
#ifndef ARITHMETICEXCEPTION_T4283546778_H
#define ARITHMETICEXCEPTION_T4283546778_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArithmeticException
struct  ArithmeticException_t4283546778  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARITHMETICEXCEPTION_T4283546778_H
#ifndef CONSOLECOLOR_T2680034144_H
#define CONSOLECOLOR_T2680034144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleColor
struct  ConsoleColor_t2680034144 
{
public:
	// System.Int32 System.ConsoleColor::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ConsoleColor_t2680034144, ___value___1)); }
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
#endif // CONSOLECOLOR_T2680034144_H
#ifndef CONSOLESCREENBUFFERINFO_T3095351730_H
#define CONSOLESCREENBUFFERINFO_T3095351730_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ConsoleScreenBufferInfo
struct  ConsoleScreenBufferInfo_t3095351730 
{
public:
	// System.Coord System.ConsoleScreenBufferInfo::Size
	Coord_t397375283  ___Size_0;
	// System.Coord System.ConsoleScreenBufferInfo::CursorPosition
	Coord_t397375283  ___CursorPosition_1;
	// System.Int16 System.ConsoleScreenBufferInfo::Attribute
	int16_t ___Attribute_2;
	// System.SmallRect System.ConsoleScreenBufferInfo::Window
	SmallRect_t2930836963  ___Window_3;
	// System.Coord System.ConsoleScreenBufferInfo::MaxWindowSize
	Coord_t397375283  ___MaxWindowSize_4;

public:
	inline static int32_t get_offset_of_Size_0() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Size_0)); }
	inline Coord_t397375283  get_Size_0() const { return ___Size_0; }
	inline Coord_t397375283 * get_address_of_Size_0() { return &___Size_0; }
	inline void set_Size_0(Coord_t397375283  value)
	{
		___Size_0 = value;
	}

	inline static int32_t get_offset_of_CursorPosition_1() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___CursorPosition_1)); }
	inline Coord_t397375283  get_CursorPosition_1() const { return ___CursorPosition_1; }
	inline Coord_t397375283 * get_address_of_CursorPosition_1() { return &___CursorPosition_1; }
	inline void set_CursorPosition_1(Coord_t397375283  value)
	{
		___CursorPosition_1 = value;
	}

	inline static int32_t get_offset_of_Attribute_2() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Attribute_2)); }
	inline int16_t get_Attribute_2() const { return ___Attribute_2; }
	inline int16_t* get_address_of_Attribute_2() { return &___Attribute_2; }
	inline void set_Attribute_2(int16_t value)
	{
		___Attribute_2 = value;
	}

	inline static int32_t get_offset_of_Window_3() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___Window_3)); }
	inline SmallRect_t2930836963  get_Window_3() const { return ___Window_3; }
	inline SmallRect_t2930836963 * get_address_of_Window_3() { return &___Window_3; }
	inline void set_Window_3(SmallRect_t2930836963  value)
	{
		___Window_3 = value;
	}

	inline static int32_t get_offset_of_MaxWindowSize_4() { return static_cast<int32_t>(offsetof(ConsoleScreenBufferInfo_t3095351730, ___MaxWindowSize_4)); }
	inline Coord_t397375283  get_MaxWindowSize_4() const { return ___MaxWindowSize_4; }
	inline Coord_t397375283 * get_address_of_MaxWindowSize_4() { return &___MaxWindowSize_4; }
	inline void set_MaxWindowSize_4(Coord_t397375283  value)
	{
		___MaxWindowSize_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSOLESCREENBUFFERINFO_T3095351730_H
#ifndef CURRENTSYSTEMTIMEZONE_T3998352255_H
#define CURRENTSYSTEMTIMEZONE_T3998352255_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.CurrentSystemTimeZone
struct  CurrentSystemTimeZone_t3998352255  : public TimeZone_t2038656743
{
public:
	// System.String System.CurrentSystemTimeZone::m_standardName
	String_t* ___m_standardName_3;
	// System.String System.CurrentSystemTimeZone::m_daylightName
	String_t* ___m_daylightName_4;
	// System.Collections.Hashtable System.CurrentSystemTimeZone::m_CachedDaylightChanges
	Hashtable_t1853889766 * ___m_CachedDaylightChanges_5;
	// System.Int64 System.CurrentSystemTimeZone::m_ticksOffset
	int64_t ___m_ticksOffset_6;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithOutDLS
	TimeSpan_t881159249  ___utcOffsetWithOutDLS_7;
	// System.TimeSpan System.CurrentSystemTimeZone::utcOffsetWithDLS
	TimeSpan_t881159249  ___utcOffsetWithDLS_8;

public:
	inline static int32_t get_offset_of_m_standardName_3() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___m_standardName_3)); }
	inline String_t* get_m_standardName_3() const { return ___m_standardName_3; }
	inline String_t** get_address_of_m_standardName_3() { return &___m_standardName_3; }
	inline void set_m_standardName_3(String_t* value)
	{
		___m_standardName_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_standardName_3), value);
	}

	inline static int32_t get_offset_of_m_daylightName_4() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___m_daylightName_4)); }
	inline String_t* get_m_daylightName_4() const { return ___m_daylightName_4; }
	inline String_t** get_address_of_m_daylightName_4() { return &___m_daylightName_4; }
	inline void set_m_daylightName_4(String_t* value)
	{
		___m_daylightName_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_daylightName_4), value);
	}

	inline static int32_t get_offset_of_m_CachedDaylightChanges_5() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___m_CachedDaylightChanges_5)); }
	inline Hashtable_t1853889766 * get_m_CachedDaylightChanges_5() const { return ___m_CachedDaylightChanges_5; }
	inline Hashtable_t1853889766 ** get_address_of_m_CachedDaylightChanges_5() { return &___m_CachedDaylightChanges_5; }
	inline void set_m_CachedDaylightChanges_5(Hashtable_t1853889766 * value)
	{
		___m_CachedDaylightChanges_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_CachedDaylightChanges_5), value);
	}

	inline static int32_t get_offset_of_m_ticksOffset_6() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___m_ticksOffset_6)); }
	inline int64_t get_m_ticksOffset_6() const { return ___m_ticksOffset_6; }
	inline int64_t* get_address_of_m_ticksOffset_6() { return &___m_ticksOffset_6; }
	inline void set_m_ticksOffset_6(int64_t value)
	{
		___m_ticksOffset_6 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithOutDLS_7() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___utcOffsetWithOutDLS_7)); }
	inline TimeSpan_t881159249  get_utcOffsetWithOutDLS_7() const { return ___utcOffsetWithOutDLS_7; }
	inline TimeSpan_t881159249 * get_address_of_utcOffsetWithOutDLS_7() { return &___utcOffsetWithOutDLS_7; }
	inline void set_utcOffsetWithOutDLS_7(TimeSpan_t881159249  value)
	{
		___utcOffsetWithOutDLS_7 = value;
	}

	inline static int32_t get_offset_of_utcOffsetWithDLS_8() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255, ___utcOffsetWithDLS_8)); }
	inline TimeSpan_t881159249  get_utcOffsetWithDLS_8() const { return ___utcOffsetWithDLS_8; }
	inline TimeSpan_t881159249 * get_address_of_utcOffsetWithDLS_8() { return &___utcOffsetWithDLS_8; }
	inline void set_utcOffsetWithDLS_8(TimeSpan_t881159249  value)
	{
		___utcOffsetWithDLS_8 = value;
	}
};

struct CurrentSystemTimeZone_t3998352255_StaticFields
{
public:
	// System.Int32 System.CurrentSystemTimeZone::this_year
	int32_t ___this_year_9;
	// System.Globalization.DaylightTime System.CurrentSystemTimeZone::this_year_dlt
	DaylightTime_t2582425773 * ___this_year_dlt_10;

public:
	inline static int32_t get_offset_of_this_year_9() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255_StaticFields, ___this_year_9)); }
	inline int32_t get_this_year_9() const { return ___this_year_9; }
	inline int32_t* get_address_of_this_year_9() { return &___this_year_9; }
	inline void set_this_year_9(int32_t value)
	{
		___this_year_9 = value;
	}

	inline static int32_t get_offset_of_this_year_dlt_10() { return static_cast<int32_t>(offsetof(CurrentSystemTimeZone_t3998352255_StaticFields, ___this_year_dlt_10)); }
	inline DaylightTime_t2582425773 * get_this_year_dlt_10() const { return ___this_year_dlt_10; }
	inline DaylightTime_t2582425773 ** get_address_of_this_year_dlt_10() { return &___this_year_dlt_10; }
	inline void set_this_year_dlt_10(DaylightTime_t2582425773 * value)
	{
		___this_year_dlt_10 = value;
		Il2CppCodeGenWriteBarrier((&___this_year_dlt_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CURRENTSYSTEMTIMEZONE_T3998352255_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
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
#endif // DATETIMEKIND_T3468814247_H
#ifndef DAYOFWEEK_T3650621421_H
#define DAYOFWEEK_T3650621421_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DayOfWeek
struct  DayOfWeek_t3650621421 
{
public:
	// System.Int32 System.DayOfWeek::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DayOfWeek_t3650621421, ___value___1)); }
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
#endif // DAYOFWEEK_T3650621421_H
#ifndef SPECIALFOLDER_T3871784040_H
#define SPECIALFOLDER_T3871784040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Environment/SpecialFolder
struct  SpecialFolder_t3871784040 
{
public:
	// System.Int32 System.Environment/SpecialFolder::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SpecialFolder_t3871784040, ___value___1)); }
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
#endif // SPECIALFOLDER_T3871784040_H
#ifndef EXECUTIONENGINEEXCEPTION_T1142598034_H
#define EXECUTIONENGINEEXCEPTION_T1142598034_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ExecutionEngineException
struct  ExecutionEngineException_t1142598034  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTIONENGINEEXCEPTION_T1142598034_H
#ifndef FORMATEXCEPTION_T154580423_H
#define FORMATEXCEPTION_T154580423_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FormatException
struct  FormatException_t154580423  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATEXCEPTION_T154580423_H
#ifndef HANDLES_T3280152003_H
#define HANDLES_T3280152003_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Handles
struct  Handles_t3280152003 
{
public:
	// System.Int32 System.Handles::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Handles_t3280152003, ___value___1)); }
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
#endif // HANDLES_T3280152003_H
#ifndef INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#define INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_t1578797820  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INDEXOUTOFRANGEEXCEPTION_T1578797820_H
#ifndef INVALIDCASTEXCEPTION_T3927145244_H
#define INVALIDCASTEXCEPTION_T3927145244_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidCastException
struct  InvalidCastException_t3927145244  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDCASTEXCEPTION_T3927145244_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef LOADEROPTIMIZATION_T1484956347_H
#define LOADEROPTIMIZATION_T1484956347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.LoaderOptimization
struct  LoaderOptimization_t1484956347 
{
public:
	// System.Int32 System.LoaderOptimization::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LoaderOptimization_t1484956347, ___value___1)); }
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
#endif // LOADEROPTIMIZATION_T1484956347_H
#ifndef MEMBERACCESSEXCEPTION_T1734467078_H
#define MEMBERACCESSEXCEPTION_T1734467078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MemberAccessException
struct  MemberAccessException_t1734467078  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERACCESSEXCEPTION_T1734467078_H
#ifndef MONOASYNCCALL_T3023670838_H
#define MONOASYNCCALL_T3023670838_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoAsyncCall
struct  MonoAsyncCall_t3023670838  : public RuntimeObject
{
public:
	// System.Object System.MonoAsyncCall::msg
	RuntimeObject * ___msg_0;
	// System.IntPtr System.MonoAsyncCall::cb_method
	intptr_t ___cb_method_1;
	// System.Object System.MonoAsyncCall::cb_target
	RuntimeObject * ___cb_target_2;
	// System.Object System.MonoAsyncCall::state
	RuntimeObject * ___state_3;
	// System.Object System.MonoAsyncCall::res
	RuntimeObject * ___res_4;
	// System.Object System.MonoAsyncCall::out_args
	RuntimeObject * ___out_args_5;
	// System.Int64 System.MonoAsyncCall::wait_event
	int64_t ___wait_event_6;

public:
	inline static int32_t get_offset_of_msg_0() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3023670838, ___msg_0)); }
	inline RuntimeObject * get_msg_0() const { return ___msg_0; }
	inline RuntimeObject ** get_address_of_msg_0() { return &___msg_0; }
	inline void set_msg_0(RuntimeObject * value)
	{
		___msg_0 = value;
		Il2CppCodeGenWriteBarrier((&___msg_0), value);
	}

	inline static int32_t get_offset_of_cb_method_1() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3023670838, ___cb_method_1)); }
	inline intptr_t get_cb_method_1() const { return ___cb_method_1; }
	inline intptr_t* get_address_of_cb_method_1() { return &___cb_method_1; }
	inline void set_cb_method_1(intptr_t value)
	{
		___cb_method_1 = value;
	}

	inline static int32_t get_offset_of_cb_target_2() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3023670838, ___cb_target_2)); }
	inline RuntimeObject * get_cb_target_2() const { return ___cb_target_2; }
	inline RuntimeObject ** get_address_of_cb_target_2() { return &___cb_target_2; }
	inline void set_cb_target_2(RuntimeObject * value)
	{
		___cb_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___cb_target_2), value);
	}

	inline static int32_t get_offset_of_state_3() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3023670838, ___state_3)); }
	inline RuntimeObject * get_state_3() const { return ___state_3; }
	inline RuntimeObject ** get_address_of_state_3() { return &___state_3; }
	inline void set_state_3(RuntimeObject * value)
	{
		___state_3 = value;
		Il2CppCodeGenWriteBarrier((&___state_3), value);
	}

	inline static int32_t get_offset_of_res_4() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3023670838, ___res_4)); }
	inline RuntimeObject * get_res_4() const { return ___res_4; }
	inline RuntimeObject ** get_address_of_res_4() { return &___res_4; }
	inline void set_res_4(RuntimeObject * value)
	{
		___res_4 = value;
		Il2CppCodeGenWriteBarrier((&___res_4), value);
	}

	inline static int32_t get_offset_of_out_args_5() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3023670838, ___out_args_5)); }
	inline RuntimeObject * get_out_args_5() const { return ___out_args_5; }
	inline RuntimeObject ** get_address_of_out_args_5() { return &___out_args_5; }
	inline void set_out_args_5(RuntimeObject * value)
	{
		___out_args_5 = value;
		Il2CppCodeGenWriteBarrier((&___out_args_5), value);
	}

	inline static int32_t get_offset_of_wait_event_6() { return static_cast<int32_t>(offsetof(MonoAsyncCall_t3023670838, ___wait_event_6)); }
	inline int64_t get_wait_event_6() const { return ___wait_event_6; }
	inline int64_t* get_address_of_wait_event_6() { return &___wait_event_6; }
	inline void set_wait_event_6(int64_t value)
	{
		___wait_event_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOASYNCCALL_T3023670838_H
#ifndef MONODOCUMENTATIONNOTEATTRIBUTE_T493035051_H
#define MONODOCUMENTATIONNOTEATTRIBUTE_T493035051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoDocumentationNoteAttribute
struct  MonoDocumentationNoteAttribute_t493035051  : public MonoTODOAttribute_t4131080581
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONODOCUMENTATIONNOTEATTRIBUTE_T493035051_H
#ifndef MONOLIMITATIONATTRIBUTE_T3672514598_H
#define MONOLIMITATIONATTRIBUTE_T3672514598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoLimitationAttribute
struct  MonoLimitationAttribute_t3672514598  : public MonoTODOAttribute_t4131080581
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOLIMITATIONATTRIBUTE_T3672514598_H
#ifndef MULTICASTNOTSUPPORTEDEXCEPTION_T3095221246_H
#define MULTICASTNOTSUPPORTEDEXCEPTION_T3095221246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastNotSupportedException
struct  MulticastNotSupportedException_t3095221246  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTNOTSUPPORTEDEXCEPTION_T3095221246_H
#ifndef NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#define NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotImplementedException
struct  NotImplementedException_t3489357830  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTIMPLEMENTEDEXCEPTION_T3489357830_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef NULLREFERENCEEXCEPTION_T1023182353_H
#define NULLREFERENCEEXCEPTION_T1023182353_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NullReferenceException
struct  NullReferenceException_t1023182353  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLREFERENCEEXCEPTION_T1023182353_H
#ifndef OUTOFMEMORYEXCEPTION_T2437671686_H
#define OUTOFMEMORYEXCEPTION_T2437671686_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OutOfMemoryException
struct  OutOfMemoryException_t2437671686  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OUTOFMEMORYEXCEPTION_T2437671686_H
#ifndef PLATFORMID_T897822290_H
#define PLATFORMID_T897822290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformID
struct  PlatformID_t897822290 
{
public:
	// System.Int32 System.PlatformID::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PlatformID_t897822290, ___value___1)); }
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
#endif // PLATFORMID_T897822290_H
#ifndef RANKEXCEPTION_T3812021567_H
#define RANKEXCEPTION_T3812021567_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RankException
struct  RankException_t3812021567  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANKEXCEPTION_T3812021567_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef RUNTIMEMETHODHANDLE_T1133924984_H
#define RUNTIMEMETHODHANDLE_T1133924984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeMethodHandle
struct  RuntimeMethodHandle_t1133924984 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t1133924984, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEMETHODHANDLE_T1133924984_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef STACKOVERFLOWEXCEPTION_T3629451388_H
#define STACKOVERFLOWEXCEPTION_T3629451388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StackOverflowException
struct  StackOverflowException_t3629451388  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKOVERFLOWEXCEPTION_T3629451388_H
#ifndef STRINGCOMPARISON_T3657712135_H
#define STRINGCOMPARISON_T3657712135_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringComparison
struct  StringComparison_t3657712135 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringComparison_t3657712135, ___value___1)); }
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
#endif // STRINGCOMPARISON_T3657712135_H
#ifndef STRINGSPLITOPTIONS_T641086070_H
#define STRINGSPLITOPTIONS_T641086070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.StringSplitOptions
struct  StringSplitOptions_t641086070 
{
public:
	// System.Int32 System.StringSplitOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StringSplitOptions_t641086070, ___value___1)); }
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
#endif // STRINGSPLITOPTIONS_T641086070_H
#ifndef TERMINFONUMBERS_T2028216776_H
#define TERMINFONUMBERS_T2028216776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TermInfoNumbers
struct  TermInfoNumbers_t2028216776 
{
public:
	// System.Int32 System.TermInfoNumbers::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TermInfoNumbers_t2028216776, ___value___1)); }
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
#endif // TERMINFONUMBERS_T2028216776_H
#ifndef TERMINFOSTRINGS_T290279955_H
#define TERMINFOSTRINGS_T290279955_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TermInfoStrings
struct  TermInfoStrings_t290279955 
{
public:
	// System.Int32 System.TermInfoStrings::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TermInfoStrings_t290279955, ___value___1)); }
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
#endif // TERMINFOSTRINGS_T290279955_H
#ifndef TYPECODE_T2987224087_H
#define TYPECODE_T2987224087_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeCode
struct  TypeCode_t2987224087 
{
public:
	// System.Int32 System.TypeCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeCode_t2987224087, ___value___1)); }
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
#endif // TYPECODE_T2987224087_H
#ifndef TYPEINITIALIZATIONEXCEPTION_T2973684290_H
#define TYPEINITIALIZATIONEXCEPTION_T2973684290_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeInitializationException
struct  TypeInitializationException_t2973684290  : public SystemException_t176217640
{
public:
	// System.String System.TypeInitializationException::type_name
	String_t* ___type_name_11;

public:
	inline static int32_t get_offset_of_type_name_11() { return static_cast<int32_t>(offsetof(TypeInitializationException_t2973684290, ___type_name_11)); }
	inline String_t* get_type_name_11() const { return ___type_name_11; }
	inline String_t** get_address_of_type_name_11() { return &___type_name_11; }
	inline void set_type_name_11(String_t* value)
	{
		___type_name_11 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINITIALIZATIONEXCEPTION_T2973684290_H
#ifndef TYPELOADEXCEPTION_T3707937253_H
#define TYPELOADEXCEPTION_T3707937253_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TypeLoadException
struct  TypeLoadException_t3707937253  : public SystemException_t176217640
{
public:
	// System.String System.TypeLoadException::className
	String_t* ___className_12;
	// System.String System.TypeLoadException::assemblyName
	String_t* ___assemblyName_13;

public:
	inline static int32_t get_offset_of_className_12() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___className_12)); }
	inline String_t* get_className_12() const { return ___className_12; }
	inline String_t** get_address_of_className_12() { return &___className_12; }
	inline void set_className_12(String_t* value)
	{
		___className_12 = value;
		Il2CppCodeGenWriteBarrier((&___className_12), value);
	}

	inline static int32_t get_offset_of_assemblyName_13() { return static_cast<int32_t>(offsetof(TypeLoadException_t3707937253, ___assemblyName_13)); }
	inline String_t* get_assemblyName_13() const { return ___assemblyName_13; }
	inline String_t** get_address_of_assemblyName_13() { return &___assemblyName_13; }
	inline void set_assemblyName_13(String_t* value)
	{
		___assemblyName_13 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPELOADEXCEPTION_T3707937253_H
#ifndef UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#define UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnauthorizedAccessException
struct  UnauthorizedAccessException_t490705335  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNAUTHORIZEDACCESSEXCEPTION_T490705335_H
#ifndef UNITYTYPE_T3666003507_H
#define UNITYTYPE_T3666003507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder/UnityType
struct  UnityType_t3666003507 
{
public:
	// System.Byte System.UnitySerializationHolder/UnityType::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityType_t3666003507, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYTYPE_T3666003507_H
#ifndef WEAKREFERENCE_T1334886716_H
#define WEAKREFERENCE_T1334886716_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.WeakReference
struct  WeakReference_t1334886716  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t3351438187  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_t1334886716, ___gcHandle_1)); }
	inline GCHandle_t3351438187  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t3351438187 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t3351438187  value)
	{
		___gcHandle_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKREFERENCE_T1334886716_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef DIVIDEBYZEROEXCEPTION_T1856388118_H
#define DIVIDEBYZEROEXCEPTION_T1856388118_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DivideByZeroException
struct  DivideByZeroException_t1856388118  : public ArithmeticException_t4283546778
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIVIDEBYZEROEXCEPTION_T1856388118_H
#ifndef DLLNOTFOUNDEXCEPTION_T2721418633_H
#define DLLNOTFOUNDEXCEPTION_T2721418633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DllNotFoundException
struct  DllNotFoundException_t2721418633  : public TypeLoadException_t3707937253
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DLLNOTFOUNDEXCEPTION_T2721418633_H
#ifndef ENTRYPOINTNOTFOUNDEXCEPTION_T1356862416_H
#define ENTRYPOINTNOTFOUNDEXCEPTION_T1356862416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EntryPointNotFoundException
struct  EntryPointNotFoundException_t1356862416  : public TypeLoadException_t3707937253
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRYPOINTNOTFOUNDEXCEPTION_T1356862416_H
#ifndef FIELDACCESSEXCEPTION_T238379456_H
#define FIELDACCESSEXCEPTION_T238379456_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.FieldAccessException
struct  FieldAccessException_t238379456  : public MemberAccessException_t1734467078
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIELDACCESSEXCEPTION_T238379456_H
#ifndef METHODACCESSEXCEPTION_T190175859_H
#define METHODACCESSEXCEPTION_T190175859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MethodAccessException
struct  MethodAccessException_t190175859  : public MemberAccessException_t1734467078
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODACCESSEXCEPTION_T190175859_H
#ifndef MISSINGMEMBEREXCEPTION_T1385081665_H
#define MISSINGMEMBEREXCEPTION_T1385081665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMemberException
struct  MissingMemberException_t1385081665  : public MemberAccessException_t1734467078
{
public:
	// System.String System.MissingMemberException::ClassName
	String_t* ___ClassName_11;
	// System.String System.MissingMemberException::MemberName
	String_t* ___MemberName_12;
	// System.Byte[] System.MissingMemberException::Signature
	ByteU5BU5D_t4116647657* ___Signature_13;

public:
	inline static int32_t get_offset_of_ClassName_11() { return static_cast<int32_t>(offsetof(MissingMemberException_t1385081665, ___ClassName_11)); }
	inline String_t* get_ClassName_11() const { return ___ClassName_11; }
	inline String_t** get_address_of_ClassName_11() { return &___ClassName_11; }
	inline void set_ClassName_11(String_t* value)
	{
		___ClassName_11 = value;
		Il2CppCodeGenWriteBarrier((&___ClassName_11), value);
	}

	inline static int32_t get_offset_of_MemberName_12() { return static_cast<int32_t>(offsetof(MissingMemberException_t1385081665, ___MemberName_12)); }
	inline String_t* get_MemberName_12() const { return ___MemberName_12; }
	inline String_t** get_address_of_MemberName_12() { return &___MemberName_12; }
	inline void set_MemberName_12(String_t* value)
	{
		___MemberName_12 = value;
		Il2CppCodeGenWriteBarrier((&___MemberName_12), value);
	}

	inline static int32_t get_offset_of_Signature_13() { return static_cast<int32_t>(offsetof(MissingMemberException_t1385081665, ___Signature_13)); }
	inline ByteU5BU5D_t4116647657* get_Signature_13() const { return ___Signature_13; }
	inline ByteU5BU5D_t4116647657** get_address_of_Signature_13() { return &___Signature_13; }
	inline void set_Signature_13(ByteU5BU5D_t4116647657* value)
	{
		___Signature_13 = value;
		Il2CppCodeGenWriteBarrier((&___Signature_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMEMBEREXCEPTION_T1385081665_H
#ifndef OBJECTDISPOSEDEXCEPTION_T21392786_H
#define OBJECTDISPOSEDEXCEPTION_T21392786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ObjectDisposedException
struct  ObjectDisposedException_t21392786  : public InvalidOperationException_t56020091
{
public:
	// System.String System.ObjectDisposedException::obj_name
	String_t* ___obj_name_12;
	// System.String System.ObjectDisposedException::msg
	String_t* ___msg_13;

public:
	inline static int32_t get_offset_of_obj_name_12() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t21392786, ___obj_name_12)); }
	inline String_t* get_obj_name_12() const { return ___obj_name_12; }
	inline String_t** get_address_of_obj_name_12() { return &___obj_name_12; }
	inline void set_obj_name_12(String_t* value)
	{
		___obj_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___obj_name_12), value);
	}

	inline static int32_t get_offset_of_msg_13() { return static_cast<int32_t>(offsetof(ObjectDisposedException_t21392786, ___msg_13)); }
	inline String_t* get_msg_13() const { return ___msg_13; }
	inline String_t** get_address_of_msg_13() { return &___msg_13; }
	inline void set_msg_13(String_t* value)
	{
		___msg_13 = value;
		Il2CppCodeGenWriteBarrier((&___msg_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTDISPOSEDEXCEPTION_T21392786_H
#ifndef OPERATINGSYSTEM_T3730783609_H
#define OPERATINGSYSTEM_T3730783609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OperatingSystem
struct  OperatingSystem_t3730783609  : public RuntimeObject
{
public:
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_0;
	// System.Version System.OperatingSystem::_version
	Version_t3456873960 * ____version_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;

public:
	inline static int32_t get_offset_of__platform_0() { return static_cast<int32_t>(offsetof(OperatingSystem_t3730783609, ____platform_0)); }
	inline int32_t get__platform_0() const { return ____platform_0; }
	inline int32_t* get_address_of__platform_0() { return &____platform_0; }
	inline void set__platform_0(int32_t value)
	{
		____platform_0 = value;
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(OperatingSystem_t3730783609, ____version_1)); }
	inline Version_t3456873960 * get__version_1() const { return ____version_1; }
	inline Version_t3456873960 ** get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(Version_t3456873960 * value)
	{
		____version_1 = value;
		Il2CppCodeGenWriteBarrier((&____version_1), value);
	}

	inline static int32_t get_offset_of__servicePack_2() { return static_cast<int32_t>(offsetof(OperatingSystem_t3730783609, ____servicePack_2)); }
	inline String_t* get__servicePack_2() const { return ____servicePack_2; }
	inline String_t** get_address_of__servicePack_2() { return &____servicePack_2; }
	inline void set__servicePack_2(String_t* value)
	{
		____servicePack_2 = value;
		Il2CppCodeGenWriteBarrier((&____servicePack_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPERATINGSYSTEM_T3730783609_H
#ifndef OVERFLOWEXCEPTION_T2020128637_H
#define OVERFLOWEXCEPTION_T2020128637_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.OverflowException
struct  OverflowException_t2020128637  : public ArithmeticException_t4283546778
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OVERFLOWEXCEPTION_T2020128637_H
#ifndef PLATFORMNOTSUPPORTEDEXCEPTION_T3572244504_H
#define PLATFORMNOTSUPPORTEDEXCEPTION_T3572244504_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t3572244504  : public NotSupportedException_t1314879016
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLATFORMNOTSUPPORTEDEXCEPTION_T3572244504_H
#ifndef TERMINFODRIVER_T2335718621_H
#define TERMINFODRIVER_T2335718621_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TermInfoDriver
struct  TermInfoDriver_t2335718621  : public RuntimeObject
{
public:
	// System.TermInfoReader System.TermInfoDriver::reader
	TermInfoReader_t3116894478 * ___reader_3;
	// System.Int32 System.TermInfoDriver::cursorLeft
	int32_t ___cursorLeft_4;
	// System.Int32 System.TermInfoDriver::cursorTop
	int32_t ___cursorTop_5;
	// System.String System.TermInfoDriver::title
	String_t* ___title_6;
	// System.String System.TermInfoDriver::titleFormat
	String_t* ___titleFormat_7;
	// System.Boolean System.TermInfoDriver::cursorVisible
	bool ___cursorVisible_8;
	// System.String System.TermInfoDriver::csrVisible
	String_t* ___csrVisible_9;
	// System.String System.TermInfoDriver::csrInvisible
	String_t* ___csrInvisible_10;
	// System.String System.TermInfoDriver::clear
	String_t* ___clear_11;
	// System.String System.TermInfoDriver::bell
	String_t* ___bell_12;
	// System.String System.TermInfoDriver::term
	String_t* ___term_13;
	// System.IO.StreamReader System.TermInfoDriver::stdin
	StreamReader_t4009935899 * ___stdin_14;
	// System.IO.CStreamWriter System.TermInfoDriver::stdout
	CStreamWriter_t3783449173 * ___stdout_15;
	// System.Int32 System.TermInfoDriver::windowWidth
	int32_t ___windowWidth_16;
	// System.Int32 System.TermInfoDriver::windowHeight
	int32_t ___windowHeight_17;
	// System.Int32 System.TermInfoDriver::bufferHeight
	int32_t ___bufferHeight_18;
	// System.Int32 System.TermInfoDriver::bufferWidth
	int32_t ___bufferWidth_19;
	// System.Char[] System.TermInfoDriver::buffer
	CharU5BU5D_t3528271667* ___buffer_20;
	// System.Int32 System.TermInfoDriver::readpos
	int32_t ___readpos_21;
	// System.Int32 System.TermInfoDriver::writepos
	int32_t ___writepos_22;
	// System.String System.TermInfoDriver::keypadXmit
	String_t* ___keypadXmit_23;
	// System.String System.TermInfoDriver::keypadLocal
	String_t* ___keypadLocal_24;
	// System.Boolean System.TermInfoDriver::inited
	bool ___inited_25;
	// System.Object System.TermInfoDriver::initLock
	RuntimeObject * ___initLock_26;
	// System.Boolean System.TermInfoDriver::initKeys
	bool ___initKeys_27;
	// System.String System.TermInfoDriver::origPair
	String_t* ___origPair_28;
	// System.String System.TermInfoDriver::origColors
	String_t* ___origColors_29;
	// System.String System.TermInfoDriver::cursorAddress
	String_t* ___cursorAddress_30;
	// System.ConsoleColor System.TermInfoDriver::fgcolor
	int32_t ___fgcolor_31;
	// System.Boolean System.TermInfoDriver::color16
	bool ___color16_32;
	// System.String System.TermInfoDriver::setlfgcolor
	String_t* ___setlfgcolor_33;
	// System.String System.TermInfoDriver::setlbgcolor
	String_t* ___setlbgcolor_34;
	// System.String System.TermInfoDriver::setfgcolor
	String_t* ___setfgcolor_35;
	// System.String System.TermInfoDriver::setbgcolor
	String_t* ___setbgcolor_36;
	// System.Boolean System.TermInfoDriver::noGetPosition
	bool ___noGetPosition_37;
	// System.Collections.Hashtable System.TermInfoDriver::keymap
	Hashtable_t1853889766 * ___keymap_38;
	// System.ByteMatcher System.TermInfoDriver::rootmap
	ByteMatcher_t2129355737 * ___rootmap_39;
	// System.Boolean System.TermInfoDriver::home_1_1
	bool ___home_1_1_40;
	// System.Int32 System.TermInfoDriver::rl_startx
	int32_t ___rl_startx_41;
	// System.Int32 System.TermInfoDriver::rl_starty
	int32_t ___rl_starty_42;
	// System.Byte[] System.TermInfoDriver::control_characters
	ByteU5BU5D_t4116647657* ___control_characters_43;
	// System.Char[] System.TermInfoDriver::echobuf
	CharU5BU5D_t3528271667* ___echobuf_44;
	// System.Int32 System.TermInfoDriver::echon
	int32_t ___echon_45;

public:
	inline static int32_t get_offset_of_reader_3() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___reader_3)); }
	inline TermInfoReader_t3116894478 * get_reader_3() const { return ___reader_3; }
	inline TermInfoReader_t3116894478 ** get_address_of_reader_3() { return &___reader_3; }
	inline void set_reader_3(TermInfoReader_t3116894478 * value)
	{
		___reader_3 = value;
		Il2CppCodeGenWriteBarrier((&___reader_3), value);
	}

	inline static int32_t get_offset_of_cursorLeft_4() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___cursorLeft_4)); }
	inline int32_t get_cursorLeft_4() const { return ___cursorLeft_4; }
	inline int32_t* get_address_of_cursorLeft_4() { return &___cursorLeft_4; }
	inline void set_cursorLeft_4(int32_t value)
	{
		___cursorLeft_4 = value;
	}

	inline static int32_t get_offset_of_cursorTop_5() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___cursorTop_5)); }
	inline int32_t get_cursorTop_5() const { return ___cursorTop_5; }
	inline int32_t* get_address_of_cursorTop_5() { return &___cursorTop_5; }
	inline void set_cursorTop_5(int32_t value)
	{
		___cursorTop_5 = value;
	}

	inline static int32_t get_offset_of_title_6() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___title_6)); }
	inline String_t* get_title_6() const { return ___title_6; }
	inline String_t** get_address_of_title_6() { return &___title_6; }
	inline void set_title_6(String_t* value)
	{
		___title_6 = value;
		Il2CppCodeGenWriteBarrier((&___title_6), value);
	}

	inline static int32_t get_offset_of_titleFormat_7() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___titleFormat_7)); }
	inline String_t* get_titleFormat_7() const { return ___titleFormat_7; }
	inline String_t** get_address_of_titleFormat_7() { return &___titleFormat_7; }
	inline void set_titleFormat_7(String_t* value)
	{
		___titleFormat_7 = value;
		Il2CppCodeGenWriteBarrier((&___titleFormat_7), value);
	}

	inline static int32_t get_offset_of_cursorVisible_8() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___cursorVisible_8)); }
	inline bool get_cursorVisible_8() const { return ___cursorVisible_8; }
	inline bool* get_address_of_cursorVisible_8() { return &___cursorVisible_8; }
	inline void set_cursorVisible_8(bool value)
	{
		___cursorVisible_8 = value;
	}

	inline static int32_t get_offset_of_csrVisible_9() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___csrVisible_9)); }
	inline String_t* get_csrVisible_9() const { return ___csrVisible_9; }
	inline String_t** get_address_of_csrVisible_9() { return &___csrVisible_9; }
	inline void set_csrVisible_9(String_t* value)
	{
		___csrVisible_9 = value;
		Il2CppCodeGenWriteBarrier((&___csrVisible_9), value);
	}

	inline static int32_t get_offset_of_csrInvisible_10() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___csrInvisible_10)); }
	inline String_t* get_csrInvisible_10() const { return ___csrInvisible_10; }
	inline String_t** get_address_of_csrInvisible_10() { return &___csrInvisible_10; }
	inline void set_csrInvisible_10(String_t* value)
	{
		___csrInvisible_10 = value;
		Il2CppCodeGenWriteBarrier((&___csrInvisible_10), value);
	}

	inline static int32_t get_offset_of_clear_11() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___clear_11)); }
	inline String_t* get_clear_11() const { return ___clear_11; }
	inline String_t** get_address_of_clear_11() { return &___clear_11; }
	inline void set_clear_11(String_t* value)
	{
		___clear_11 = value;
		Il2CppCodeGenWriteBarrier((&___clear_11), value);
	}

	inline static int32_t get_offset_of_bell_12() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___bell_12)); }
	inline String_t* get_bell_12() const { return ___bell_12; }
	inline String_t** get_address_of_bell_12() { return &___bell_12; }
	inline void set_bell_12(String_t* value)
	{
		___bell_12 = value;
		Il2CppCodeGenWriteBarrier((&___bell_12), value);
	}

	inline static int32_t get_offset_of_term_13() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___term_13)); }
	inline String_t* get_term_13() const { return ___term_13; }
	inline String_t** get_address_of_term_13() { return &___term_13; }
	inline void set_term_13(String_t* value)
	{
		___term_13 = value;
		Il2CppCodeGenWriteBarrier((&___term_13), value);
	}

	inline static int32_t get_offset_of_stdin_14() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___stdin_14)); }
	inline StreamReader_t4009935899 * get_stdin_14() const { return ___stdin_14; }
	inline StreamReader_t4009935899 ** get_address_of_stdin_14() { return &___stdin_14; }
	inline void set_stdin_14(StreamReader_t4009935899 * value)
	{
		___stdin_14 = value;
		Il2CppCodeGenWriteBarrier((&___stdin_14), value);
	}

	inline static int32_t get_offset_of_stdout_15() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___stdout_15)); }
	inline CStreamWriter_t3783449173 * get_stdout_15() const { return ___stdout_15; }
	inline CStreamWriter_t3783449173 ** get_address_of_stdout_15() { return &___stdout_15; }
	inline void set_stdout_15(CStreamWriter_t3783449173 * value)
	{
		___stdout_15 = value;
		Il2CppCodeGenWriteBarrier((&___stdout_15), value);
	}

	inline static int32_t get_offset_of_windowWidth_16() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___windowWidth_16)); }
	inline int32_t get_windowWidth_16() const { return ___windowWidth_16; }
	inline int32_t* get_address_of_windowWidth_16() { return &___windowWidth_16; }
	inline void set_windowWidth_16(int32_t value)
	{
		___windowWidth_16 = value;
	}

	inline static int32_t get_offset_of_windowHeight_17() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___windowHeight_17)); }
	inline int32_t get_windowHeight_17() const { return ___windowHeight_17; }
	inline int32_t* get_address_of_windowHeight_17() { return &___windowHeight_17; }
	inline void set_windowHeight_17(int32_t value)
	{
		___windowHeight_17 = value;
	}

	inline static int32_t get_offset_of_bufferHeight_18() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___bufferHeight_18)); }
	inline int32_t get_bufferHeight_18() const { return ___bufferHeight_18; }
	inline int32_t* get_address_of_bufferHeight_18() { return &___bufferHeight_18; }
	inline void set_bufferHeight_18(int32_t value)
	{
		___bufferHeight_18 = value;
	}

	inline static int32_t get_offset_of_bufferWidth_19() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___bufferWidth_19)); }
	inline int32_t get_bufferWidth_19() const { return ___bufferWidth_19; }
	inline int32_t* get_address_of_bufferWidth_19() { return &___bufferWidth_19; }
	inline void set_bufferWidth_19(int32_t value)
	{
		___bufferWidth_19 = value;
	}

	inline static int32_t get_offset_of_buffer_20() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___buffer_20)); }
	inline CharU5BU5D_t3528271667* get_buffer_20() const { return ___buffer_20; }
	inline CharU5BU5D_t3528271667** get_address_of_buffer_20() { return &___buffer_20; }
	inline void set_buffer_20(CharU5BU5D_t3528271667* value)
	{
		___buffer_20 = value;
		Il2CppCodeGenWriteBarrier((&___buffer_20), value);
	}

	inline static int32_t get_offset_of_readpos_21() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___readpos_21)); }
	inline int32_t get_readpos_21() const { return ___readpos_21; }
	inline int32_t* get_address_of_readpos_21() { return &___readpos_21; }
	inline void set_readpos_21(int32_t value)
	{
		___readpos_21 = value;
	}

	inline static int32_t get_offset_of_writepos_22() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___writepos_22)); }
	inline int32_t get_writepos_22() const { return ___writepos_22; }
	inline int32_t* get_address_of_writepos_22() { return &___writepos_22; }
	inline void set_writepos_22(int32_t value)
	{
		___writepos_22 = value;
	}

	inline static int32_t get_offset_of_keypadXmit_23() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___keypadXmit_23)); }
	inline String_t* get_keypadXmit_23() const { return ___keypadXmit_23; }
	inline String_t** get_address_of_keypadXmit_23() { return &___keypadXmit_23; }
	inline void set_keypadXmit_23(String_t* value)
	{
		___keypadXmit_23 = value;
		Il2CppCodeGenWriteBarrier((&___keypadXmit_23), value);
	}

	inline static int32_t get_offset_of_keypadLocal_24() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___keypadLocal_24)); }
	inline String_t* get_keypadLocal_24() const { return ___keypadLocal_24; }
	inline String_t** get_address_of_keypadLocal_24() { return &___keypadLocal_24; }
	inline void set_keypadLocal_24(String_t* value)
	{
		___keypadLocal_24 = value;
		Il2CppCodeGenWriteBarrier((&___keypadLocal_24), value);
	}

	inline static int32_t get_offset_of_inited_25() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___inited_25)); }
	inline bool get_inited_25() const { return ___inited_25; }
	inline bool* get_address_of_inited_25() { return &___inited_25; }
	inline void set_inited_25(bool value)
	{
		___inited_25 = value;
	}

	inline static int32_t get_offset_of_initLock_26() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___initLock_26)); }
	inline RuntimeObject * get_initLock_26() const { return ___initLock_26; }
	inline RuntimeObject ** get_address_of_initLock_26() { return &___initLock_26; }
	inline void set_initLock_26(RuntimeObject * value)
	{
		___initLock_26 = value;
		Il2CppCodeGenWriteBarrier((&___initLock_26), value);
	}

	inline static int32_t get_offset_of_initKeys_27() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___initKeys_27)); }
	inline bool get_initKeys_27() const { return ___initKeys_27; }
	inline bool* get_address_of_initKeys_27() { return &___initKeys_27; }
	inline void set_initKeys_27(bool value)
	{
		___initKeys_27 = value;
	}

	inline static int32_t get_offset_of_origPair_28() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___origPair_28)); }
	inline String_t* get_origPair_28() const { return ___origPair_28; }
	inline String_t** get_address_of_origPair_28() { return &___origPair_28; }
	inline void set_origPair_28(String_t* value)
	{
		___origPair_28 = value;
		Il2CppCodeGenWriteBarrier((&___origPair_28), value);
	}

	inline static int32_t get_offset_of_origColors_29() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___origColors_29)); }
	inline String_t* get_origColors_29() const { return ___origColors_29; }
	inline String_t** get_address_of_origColors_29() { return &___origColors_29; }
	inline void set_origColors_29(String_t* value)
	{
		___origColors_29 = value;
		Il2CppCodeGenWriteBarrier((&___origColors_29), value);
	}

	inline static int32_t get_offset_of_cursorAddress_30() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___cursorAddress_30)); }
	inline String_t* get_cursorAddress_30() const { return ___cursorAddress_30; }
	inline String_t** get_address_of_cursorAddress_30() { return &___cursorAddress_30; }
	inline void set_cursorAddress_30(String_t* value)
	{
		___cursorAddress_30 = value;
		Il2CppCodeGenWriteBarrier((&___cursorAddress_30), value);
	}

	inline static int32_t get_offset_of_fgcolor_31() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___fgcolor_31)); }
	inline int32_t get_fgcolor_31() const { return ___fgcolor_31; }
	inline int32_t* get_address_of_fgcolor_31() { return &___fgcolor_31; }
	inline void set_fgcolor_31(int32_t value)
	{
		___fgcolor_31 = value;
	}

	inline static int32_t get_offset_of_color16_32() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___color16_32)); }
	inline bool get_color16_32() const { return ___color16_32; }
	inline bool* get_address_of_color16_32() { return &___color16_32; }
	inline void set_color16_32(bool value)
	{
		___color16_32 = value;
	}

	inline static int32_t get_offset_of_setlfgcolor_33() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___setlfgcolor_33)); }
	inline String_t* get_setlfgcolor_33() const { return ___setlfgcolor_33; }
	inline String_t** get_address_of_setlfgcolor_33() { return &___setlfgcolor_33; }
	inline void set_setlfgcolor_33(String_t* value)
	{
		___setlfgcolor_33 = value;
		Il2CppCodeGenWriteBarrier((&___setlfgcolor_33), value);
	}

	inline static int32_t get_offset_of_setlbgcolor_34() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___setlbgcolor_34)); }
	inline String_t* get_setlbgcolor_34() const { return ___setlbgcolor_34; }
	inline String_t** get_address_of_setlbgcolor_34() { return &___setlbgcolor_34; }
	inline void set_setlbgcolor_34(String_t* value)
	{
		___setlbgcolor_34 = value;
		Il2CppCodeGenWriteBarrier((&___setlbgcolor_34), value);
	}

	inline static int32_t get_offset_of_setfgcolor_35() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___setfgcolor_35)); }
	inline String_t* get_setfgcolor_35() const { return ___setfgcolor_35; }
	inline String_t** get_address_of_setfgcolor_35() { return &___setfgcolor_35; }
	inline void set_setfgcolor_35(String_t* value)
	{
		___setfgcolor_35 = value;
		Il2CppCodeGenWriteBarrier((&___setfgcolor_35), value);
	}

	inline static int32_t get_offset_of_setbgcolor_36() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___setbgcolor_36)); }
	inline String_t* get_setbgcolor_36() const { return ___setbgcolor_36; }
	inline String_t** get_address_of_setbgcolor_36() { return &___setbgcolor_36; }
	inline void set_setbgcolor_36(String_t* value)
	{
		___setbgcolor_36 = value;
		Il2CppCodeGenWriteBarrier((&___setbgcolor_36), value);
	}

	inline static int32_t get_offset_of_noGetPosition_37() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___noGetPosition_37)); }
	inline bool get_noGetPosition_37() const { return ___noGetPosition_37; }
	inline bool* get_address_of_noGetPosition_37() { return &___noGetPosition_37; }
	inline void set_noGetPosition_37(bool value)
	{
		___noGetPosition_37 = value;
	}

	inline static int32_t get_offset_of_keymap_38() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___keymap_38)); }
	inline Hashtable_t1853889766 * get_keymap_38() const { return ___keymap_38; }
	inline Hashtable_t1853889766 ** get_address_of_keymap_38() { return &___keymap_38; }
	inline void set_keymap_38(Hashtable_t1853889766 * value)
	{
		___keymap_38 = value;
		Il2CppCodeGenWriteBarrier((&___keymap_38), value);
	}

	inline static int32_t get_offset_of_rootmap_39() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___rootmap_39)); }
	inline ByteMatcher_t2129355737 * get_rootmap_39() const { return ___rootmap_39; }
	inline ByteMatcher_t2129355737 ** get_address_of_rootmap_39() { return &___rootmap_39; }
	inline void set_rootmap_39(ByteMatcher_t2129355737 * value)
	{
		___rootmap_39 = value;
		Il2CppCodeGenWriteBarrier((&___rootmap_39), value);
	}

	inline static int32_t get_offset_of_home_1_1_40() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___home_1_1_40)); }
	inline bool get_home_1_1_40() const { return ___home_1_1_40; }
	inline bool* get_address_of_home_1_1_40() { return &___home_1_1_40; }
	inline void set_home_1_1_40(bool value)
	{
		___home_1_1_40 = value;
	}

	inline static int32_t get_offset_of_rl_startx_41() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___rl_startx_41)); }
	inline int32_t get_rl_startx_41() const { return ___rl_startx_41; }
	inline int32_t* get_address_of_rl_startx_41() { return &___rl_startx_41; }
	inline void set_rl_startx_41(int32_t value)
	{
		___rl_startx_41 = value;
	}

	inline static int32_t get_offset_of_rl_starty_42() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___rl_starty_42)); }
	inline int32_t get_rl_starty_42() const { return ___rl_starty_42; }
	inline int32_t* get_address_of_rl_starty_42() { return &___rl_starty_42; }
	inline void set_rl_starty_42(int32_t value)
	{
		___rl_starty_42 = value;
	}

	inline static int32_t get_offset_of_control_characters_43() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___control_characters_43)); }
	inline ByteU5BU5D_t4116647657* get_control_characters_43() const { return ___control_characters_43; }
	inline ByteU5BU5D_t4116647657** get_address_of_control_characters_43() { return &___control_characters_43; }
	inline void set_control_characters_43(ByteU5BU5D_t4116647657* value)
	{
		___control_characters_43 = value;
		Il2CppCodeGenWriteBarrier((&___control_characters_43), value);
	}

	inline static int32_t get_offset_of_echobuf_44() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___echobuf_44)); }
	inline CharU5BU5D_t3528271667* get_echobuf_44() const { return ___echobuf_44; }
	inline CharU5BU5D_t3528271667** get_address_of_echobuf_44() { return &___echobuf_44; }
	inline void set_echobuf_44(CharU5BU5D_t3528271667* value)
	{
		___echobuf_44 = value;
		Il2CppCodeGenWriteBarrier((&___echobuf_44), value);
	}

	inline static int32_t get_offset_of_echon_45() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621, ___echon_45)); }
	inline int32_t get_echon_45() const { return ___echon_45; }
	inline int32_t* get_address_of_echon_45() { return &___echon_45; }
	inline void set_echon_45(int32_t value)
	{
		___echon_45 = value;
	}
};

struct TermInfoDriver_t2335718621_StaticFields
{
public:
	// System.Int32* System.TermInfoDriver::native_terminal_size
	int32_t* ___native_terminal_size_0;
	// System.Int32 System.TermInfoDriver::terminal_size
	int32_t ___terminal_size_1;
	// System.String[] System.TermInfoDriver::locations
	StringU5BU5D_t1281789340* ___locations_2;
	// System.TermInfoStrings[] System.TermInfoDriver::UsedKeys
	TermInfoStringsU5BU5D_t4121115714* ___UsedKeys_46;

public:
	inline static int32_t get_offset_of_native_terminal_size_0() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621_StaticFields, ___native_terminal_size_0)); }
	inline int32_t* get_native_terminal_size_0() const { return ___native_terminal_size_0; }
	inline int32_t** get_address_of_native_terminal_size_0() { return &___native_terminal_size_0; }
	inline void set_native_terminal_size_0(int32_t* value)
	{
		___native_terminal_size_0 = value;
	}

	inline static int32_t get_offset_of_terminal_size_1() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621_StaticFields, ___terminal_size_1)); }
	inline int32_t get_terminal_size_1() const { return ___terminal_size_1; }
	inline int32_t* get_address_of_terminal_size_1() { return &___terminal_size_1; }
	inline void set_terminal_size_1(int32_t value)
	{
		___terminal_size_1 = value;
	}

	inline static int32_t get_offset_of_locations_2() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621_StaticFields, ___locations_2)); }
	inline StringU5BU5D_t1281789340* get_locations_2() const { return ___locations_2; }
	inline StringU5BU5D_t1281789340** get_address_of_locations_2() { return &___locations_2; }
	inline void set_locations_2(StringU5BU5D_t1281789340* value)
	{
		___locations_2 = value;
		Il2CppCodeGenWriteBarrier((&___locations_2), value);
	}

	inline static int32_t get_offset_of_UsedKeys_46() { return static_cast<int32_t>(offsetof(TermInfoDriver_t2335718621_StaticFields, ___UsedKeys_46)); }
	inline TermInfoStringsU5BU5D_t4121115714* get_UsedKeys_46() const { return ___UsedKeys_46; }
	inline TermInfoStringsU5BU5D_t4121115714** get_address_of_UsedKeys_46() { return &___UsedKeys_46; }
	inline void set_UsedKeys_46(TermInfoStringsU5BU5D_t4121115714* value)
	{
		___UsedKeys_46 = value;
		Il2CppCodeGenWriteBarrier((&___UsedKeys_46), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TERMINFODRIVER_T2335718621_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef UNITYSERIALIZATIONHOLDER_T431912834_H
#define UNITYSERIALIZATIONHOLDER_T431912834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UnitySerializationHolder
struct  UnitySerializationHolder_t431912834  : public RuntimeObject
{
public:
	// System.String System.UnitySerializationHolder::_data
	String_t* ____data_0;
	// System.UnitySerializationHolder/UnityType System.UnitySerializationHolder::_unityType
	uint8_t ____unityType_1;
	// System.String System.UnitySerializationHolder::_assemblyName
	String_t* ____assemblyName_2;

public:
	inline static int32_t get_offset_of__data_0() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ____data_0)); }
	inline String_t* get__data_0() const { return ____data_0; }
	inline String_t** get_address_of__data_0() { return &____data_0; }
	inline void set__data_0(String_t* value)
	{
		____data_0 = value;
		Il2CppCodeGenWriteBarrier((&____data_0), value);
	}

	inline static int32_t get_offset_of__unityType_1() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ____unityType_1)); }
	inline uint8_t get__unityType_1() const { return ____unityType_1; }
	inline uint8_t* get_address_of__unityType_1() { return &____unityType_1; }
	inline void set__unityType_1(uint8_t value)
	{
		____unityType_1 = value;
	}

	inline static int32_t get_offset_of__assemblyName_2() { return static_cast<int32_t>(offsetof(UnitySerializationHolder_t431912834, ____assemblyName_2)); }
	inline String_t* get__assemblyName_2() const { return ____assemblyName_2; }
	inline String_t** get_address_of__assemblyName_2() { return &____assemblyName_2; }
	inline void set__assemblyName_2(String_t* value)
	{
		____assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&____assemblyName_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSERIALIZATIONHOLDER_T431912834_H
#ifndef DATETIMEOFFSET_T3229287507_H
#define DATETIMEOFFSET_T3229287507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t3229287507 
{
public:
	// System.DateTime System.DateTimeOffset::dt
	DateTime_t3738529785  ___dt_2;
	// System.TimeSpan System.DateTimeOffset::utc_offset
	TimeSpan_t881159249  ___utc_offset_3;

public:
	inline static int32_t get_offset_of_dt_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___dt_2)); }
	inline DateTime_t3738529785  get_dt_2() const { return ___dt_2; }
	inline DateTime_t3738529785 * get_address_of_dt_2() { return &___dt_2; }
	inline void set_dt_2(DateTime_t3738529785  value)
	{
		___dt_2 = value;
	}

	inline static int32_t get_offset_of_utc_offset_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___utc_offset_3)); }
	inline TimeSpan_t881159249  get_utc_offset_3() const { return ___utc_offset_3; }
	inline TimeSpan_t881159249 * get_address_of_utc_offset_3() { return &___utc_offset_3; }
	inline void set_utc_offset_3(TimeSpan_t881159249  value)
	{
		___utc_offset_3 = value;
	}
};

struct DateTimeOffset_t3229287507_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t3229287507  ___MaxValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t3229287507  ___MinValue_1;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MaxValue_0)); }
	inline DateTimeOffset_t3229287507  get_MaxValue_0() const { return ___MaxValue_0; }
	inline DateTimeOffset_t3229287507 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(DateTimeOffset_t3229287507  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MinValue_1)); }
	inline DateTimeOffset_t3229287507  get_MinValue_1() const { return ___MinValue_1; }
	inline DateTimeOffset_t3229287507 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(DateTimeOffset_t3229287507  value)
	{
		___MinValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T3229287507_H
#ifndef MISSINGFIELDEXCEPTION_T1989070983_H
#define MISSINGFIELDEXCEPTION_T1989070983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingFieldException
struct  MissingFieldException_t1989070983  : public MissingMemberException_t1385081665
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGFIELDEXCEPTION_T1989070983_H
#ifndef MISSINGMETHODEXCEPTION_T1274661534_H
#define MISSINGMETHODEXCEPTION_T1274661534_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MissingMethodException
struct  MissingMethodException_t1274661534  : public MissingMemberException_t1385081665
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MISSINGMETHODEXCEPTION_T1274661534_H
#ifndef MONOTYPE_T_H
#define MONOTYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MonoType
struct  MonoType_t  : public Type_t
{
public:
	// System.MonoTypeInfo System.MonoType::type_info
	MonoTypeInfo_t3366989025 * ___type_info_8;

public:
	inline static int32_t get_offset_of_type_info_8() { return static_cast<int32_t>(offsetof(MonoType_t, ___type_info_8)); }
	inline MonoTypeInfo_t3366989025 * get_type_info_8() const { return ___type_info_8; }
	inline MonoTypeInfo_t3366989025 ** get_address_of_type_info_8() { return &___type_info_8; }
	inline void set_type_info_8(MonoTypeInfo_t3366989025 * value)
	{
		___type_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___type_info_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOTYPE_T_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize200 = { sizeof (DateTimeKind_t3468814247)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable200[4] = 
{
	DateTimeKind_t3468814247::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize201 = { sizeof (DateTimeOffset_t3229287507)+ sizeof (RuntimeObject), -1, sizeof(DateTimeOffset_t3229287507_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable201[4] = 
{
	DateTimeOffset_t3229287507_StaticFields::get_offset_of_MaxValue_0(),
	DateTimeOffset_t3229287507_StaticFields::get_offset_of_MinValue_1(),
	DateTimeOffset_t3229287507::get_offset_of_dt_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DateTimeOffset_t3229287507::get_offset_of_utc_offset_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize202 = { sizeof (DateTimeUtils_t3080864452), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize203 = { sizeof (DayOfWeek_t3650621421)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable203[8] = 
{
	DayOfWeek_t3650621421::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize204 = { sizeof (DBNull_t3725197148), -1, sizeof(DBNull_t3725197148_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable204[1] = 
{
	DBNull_t3725197148_StaticFields::get_offset_of_Value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize205 = { sizeof (DelegateData_t1677132599), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable205[2] = 
{
	DelegateData_t1677132599::get_offset_of_target_type_0(),
	DelegateData_t1677132599::get_offset_of_method_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize206 = { sizeof (DelegateSerializationHolder_t3408600559), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable206[1] = 
{
	DelegateSerializationHolder_t3408600559::get_offset_of__delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize207 = { sizeof (DelegateEntry_t1019584161), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable207[7] = 
{
	DelegateEntry_t1019584161::get_offset_of_type_0(),
	DelegateEntry_t1019584161::get_offset_of_assembly_1(),
	DelegateEntry_t1019584161::get_offset_of_target_2(),
	DelegateEntry_t1019584161::get_offset_of_targetTypeAssembly_3(),
	DelegateEntry_t1019584161::get_offset_of_targetTypeName_4(),
	DelegateEntry_t1019584161::get_offset_of_methodName_5(),
	DelegateEntry_t1019584161::get_offset_of_delegateEntry_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize208 = { sizeof (DivideByZeroException_t1856388118), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable208[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize209 = { sizeof (DllNotFoundException_t2721418633), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable209[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize210 = { sizeof (EntryPointNotFoundException_t1356862416), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable210[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize211 = { sizeof (MonoEnumInfo_t3694469084)+ sizeof (RuntimeObject), -1, sizeof(MonoEnumInfo_t3694469084_StaticFields), sizeof(MonoEnumInfo_t3694469084_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable211[11] = 
{
	MonoEnumInfo_t3694469084::get_offset_of_utype_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t3694469084::get_offset_of_values_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t3694469084::get_offset_of_names_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t3694469084::get_offset_of_name_hash_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	MonoEnumInfo_t3694469084_ThreadStaticFields::get_offset_of_cache_4() | THREAD_LOCAL_STATIC_MASK,
	MonoEnumInfo_t3694469084_StaticFields::get_offset_of_global_cache_5(),
	MonoEnumInfo_t3694469084_StaticFields::get_offset_of_global_cache_monitor_6(),
	MonoEnumInfo_t3694469084_StaticFields::get_offset_of_sbyte_comparer_7(),
	MonoEnumInfo_t3694469084_StaticFields::get_offset_of_short_comparer_8(),
	MonoEnumInfo_t3694469084_StaticFields::get_offset_of_int_comparer_9(),
	MonoEnumInfo_t3694469084_StaticFields::get_offset_of_long_comparer_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize212 = { sizeof (SByteComparer_t2329725001), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize213 = { sizeof (ShortComparer_t2253094562), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize214 = { sizeof (IntComparer_t3812095803), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize215 = { sizeof (LongComparer_t1798269597), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize216 = { sizeof (Environment_t2712485525), -1, sizeof(Environment_t2712485525_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable216[2] = 
{
	0,
	Environment_t2712485525_StaticFields::get_offset_of_os_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize217 = { sizeof (SpecialFolder_t3871784040)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable217[24] = 
{
	SpecialFolder_t3871784040::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize218 = { sizeof (EventArgs_t3591816995), -1, sizeof(EventArgs_t3591816995_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable218[1] = 
{
	EventArgs_t3591816995_StaticFields::get_offset_of_Empty_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize219 = { sizeof (ExecutionEngineException_t1142598034), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize220 = { sizeof (FieldAccessException_t238379456), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize221 = { sizeof (FlagsAttribute_t2262502849), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize222 = { sizeof (FormatException_t154580423), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable222[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize223 = { sizeof (GC_t959872083), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize224 = { sizeof (Guid_t)+ sizeof (RuntimeObject), sizeof(Guid_t ), sizeof(Guid_t_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable224[15] = 
{
	Guid_t::get_offset_of__a_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__b_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__c_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__d_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__e_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__f_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__g_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__h_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__i_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__j_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t::get_offset_of__k_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Guid_t_StaticFields::get_offset_of_Empty_11(),
	Guid_t_StaticFields::get_offset_of__rngAccess_12(),
	Guid_t_StaticFields::get_offset_of__rng_13(),
	Guid_t_StaticFields::get_offset_of__fastRng_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize225 = { sizeof (GuidParser_t2761237274), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable225[3] = 
{
	GuidParser_t2761237274::get_offset_of__src_0(),
	GuidParser_t2761237274::get_offset_of__length_1(),
	GuidParser_t2761237274::get_offset_of__cur_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize226 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize227 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize228 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize229 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize230 = { sizeof (IndexOutOfRangeException_t1578797820), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize231 = { sizeof (InvalidCastException_t3927145244), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable231[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize232 = { sizeof (InvalidOperationException_t56020091), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable232[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize233 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize234 = { sizeof (KnownTerminals_t4156625393), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize235 = { sizeof (LoaderOptimization_t1484956347)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable235[7] = 
{
	LoaderOptimization_t1484956347::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize236 = { sizeof (LocalDataStoreSlot_t740841968), -1, sizeof(LocalDataStoreSlot_t740841968_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable236[5] = 
{
	LocalDataStoreSlot_t740841968::get_offset_of_slot_0(),
	LocalDataStoreSlot_t740841968::get_offset_of_thread_local_1(),
	LocalDataStoreSlot_t740841968_StaticFields::get_offset_of_lock_obj_2(),
	LocalDataStoreSlot_t740841968_StaticFields::get_offset_of_slot_bitmap_thread_3(),
	LocalDataStoreSlot_t740841968_StaticFields::get_offset_of_slot_bitmap_context_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize237 = { sizeof (Math_t1671470975), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize238 = { sizeof (MemberAccessException_t1734467078), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize239 = { sizeof (MethodAccessException_t190175859), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable239[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize240 = { sizeof (MissingFieldException_t1989070983), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize241 = { sizeof (MissingMemberException_t1385081665), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable241[3] = 
{
	MissingMemberException_t1385081665::get_offset_of_ClassName_11(),
	MissingMemberException_t1385081665::get_offset_of_MemberName_12(),
	MissingMemberException_t1385081665::get_offset_of_Signature_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize242 = { sizeof (MissingMethodException_t1274661534), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable242[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize243 = { sizeof (MonoAsyncCall_t3023670838), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable243[7] = 
{
	MonoAsyncCall_t3023670838::get_offset_of_msg_0(),
	MonoAsyncCall_t3023670838::get_offset_of_cb_method_1(),
	MonoAsyncCall_t3023670838::get_offset_of_cb_target_2(),
	MonoAsyncCall_t3023670838::get_offset_of_state_3(),
	MonoAsyncCall_t3023670838::get_offset_of_res_4(),
	MonoAsyncCall_t3023670838::get_offset_of_out_args_5(),
	MonoAsyncCall_t3023670838::get_offset_of_wait_event_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize244 = { sizeof (MonoCustomAttrs_t3634537737), -1, sizeof(MonoCustomAttrs_t3634537737_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable244[3] = 
{
	MonoCustomAttrs_t3634537737_StaticFields::get_offset_of_corlib_0(),
	MonoCustomAttrs_t3634537737_StaticFields::get_offset_of_AttributeUsageType_1(),
	MonoCustomAttrs_t3634537737_StaticFields::get_offset_of_DefaultAttributeUsage_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize245 = { sizeof (AttributeInfo_t2216804170), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable245[2] = 
{
	AttributeInfo_t2216804170::get_offset_of__usage_0(),
	AttributeInfo_t2216804170::get_offset_of__inheritanceLevel_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize246 = { sizeof (MonoTypeInfo_t3366989025), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable246[2] = 
{
	MonoTypeInfo_t3366989025::get_offset_of_full_name_0(),
	MonoTypeInfo_t3366989025::get_offset_of_default_ctor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize247 = { sizeof (MonoType_t), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable247[1] = 
{
	MonoType_t::get_offset_of_type_info_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize248 = { sizeof (MulticastNotSupportedException_t3095221246), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize249 = { sizeof (NonSerializedAttribute_t2945079482), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize250 = { sizeof (NotImplementedException_t3489357830), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize251 = { sizeof (NotSupportedException_t1314879016), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable251[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize252 = { sizeof (NullConsoleDriver_t3569194954), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize253 = { sizeof (NullReferenceException_t1023182353), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable253[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize254 = { sizeof (NumberFormatter_t1182924621), -1, sizeof(NumberFormatter_t1182924621_StaticFields), sizeof(NumberFormatter_t1182924621_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable254[26] = 
{
	NumberFormatter_t1182924621_StaticFields::get_offset_of_MantissaBitsTable_0(),
	NumberFormatter_t1182924621_StaticFields::get_offset_of_TensExponentTable_1(),
	NumberFormatter_t1182924621_StaticFields::get_offset_of_DigitLowerTable_2(),
	NumberFormatter_t1182924621_StaticFields::get_offset_of_DigitUpperTable_3(),
	NumberFormatter_t1182924621_StaticFields::get_offset_of_TenPowersList_4(),
	NumberFormatter_t1182924621_StaticFields::get_offset_of_DecHexDigits_5(),
	NumberFormatter_t1182924621::get_offset_of__thread_6(),
	NumberFormatter_t1182924621::get_offset_of__nfi_7(),
	NumberFormatter_t1182924621::get_offset_of__NaN_8(),
	NumberFormatter_t1182924621::get_offset_of__infinity_9(),
	NumberFormatter_t1182924621::get_offset_of__isCustomFormat_10(),
	NumberFormatter_t1182924621::get_offset_of__specifierIsUpper_11(),
	NumberFormatter_t1182924621::get_offset_of__positive_12(),
	NumberFormatter_t1182924621::get_offset_of__specifier_13(),
	NumberFormatter_t1182924621::get_offset_of__precision_14(),
	NumberFormatter_t1182924621::get_offset_of__defPrecision_15(),
	NumberFormatter_t1182924621::get_offset_of__digitsLen_16(),
	NumberFormatter_t1182924621::get_offset_of__offset_17(),
	NumberFormatter_t1182924621::get_offset_of__decPointPos_18(),
	NumberFormatter_t1182924621::get_offset_of__val1_19(),
	NumberFormatter_t1182924621::get_offset_of__val2_20(),
	NumberFormatter_t1182924621::get_offset_of__val3_21(),
	NumberFormatter_t1182924621::get_offset_of__val4_22(),
	NumberFormatter_t1182924621::get_offset_of__cbuf_23(),
	NumberFormatter_t1182924621::get_offset_of__ind_24(),
	NumberFormatter_t1182924621_ThreadStaticFields::get_offset_of_threadNumberFormatter_25() | THREAD_LOCAL_STATIC_MASK,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize255 = { sizeof (CustomInfo_t435179798), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable255[14] = 
{
	CustomInfo_t435179798::get_offset_of_UseGroup_0(),
	CustomInfo_t435179798::get_offset_of_DecimalDigits_1(),
	CustomInfo_t435179798::get_offset_of_DecimalPointPos_2(),
	CustomInfo_t435179798::get_offset_of_DecimalTailSharpDigits_3(),
	CustomInfo_t435179798::get_offset_of_IntegerDigits_4(),
	CustomInfo_t435179798::get_offset_of_IntegerHeadSharpDigits_5(),
	CustomInfo_t435179798::get_offset_of_IntegerHeadPos_6(),
	CustomInfo_t435179798::get_offset_of_UseExponent_7(),
	CustomInfo_t435179798::get_offset_of_ExponentDigits_8(),
	CustomInfo_t435179798::get_offset_of_ExponentTailSharpDigits_9(),
	CustomInfo_t435179798::get_offset_of_ExponentNegativeSignOnly_10(),
	CustomInfo_t435179798::get_offset_of_DividePlaces_11(),
	CustomInfo_t435179798::get_offset_of_Percents_12(),
	CustomInfo_t435179798::get_offset_of_Permilles_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize256 = { sizeof (ObjectDisposedException_t21392786), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable256[2] = 
{
	ObjectDisposedException_t21392786::get_offset_of_obj_name_12(),
	ObjectDisposedException_t21392786::get_offset_of_msg_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize257 = { sizeof (OperatingSystem_t3730783609), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable257[3] = 
{
	OperatingSystem_t3730783609::get_offset_of__platform_0(),
	OperatingSystem_t3730783609::get_offset_of__version_1(),
	OperatingSystem_t3730783609::get_offset_of__servicePack_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize258 = { sizeof (OutOfMemoryException_t2437671686), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable258[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize259 = { sizeof (OverflowException_t2020128637), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable259[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize260 = { sizeof (PlatformID_t897822290)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable260[8] = 
{
	PlatformID_t897822290::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize261 = { sizeof (PlatformNotSupportedException_t3572244504), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable261[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize262 = { sizeof (Random_t108471755), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable262[3] = 
{
	Random_t108471755::get_offset_of_inext_0(),
	Random_t108471755::get_offset_of_inextp_1(),
	Random_t108471755::get_offset_of_SeedArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize263 = { sizeof (RankException_t3812021567), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize264 = { sizeof (ResolveEventArgs_t1779456501), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable264[1] = 
{
	ResolveEventArgs_t1779456501::get_offset_of_m_Name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize265 = { sizeof (RuntimeMethodHandle_t1133924984)+ sizeof (RuntimeObject), sizeof(RuntimeMethodHandle_t1133924984 ), 0, 0 };
extern const int32_t g_FieldOffsetTable265[1] = 
{
	RuntimeMethodHandle_t1133924984::get_offset_of_value_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize266 = { sizeof (StackOverflowException_t3629451388), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize267 = { sizeof (StringSplitOptions_t641086070)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable267[3] = 
{
	StringSplitOptions_t641086070::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize268 = { sizeof (StringComparer_t3301955079), -1, sizeof(StringComparer_t3301955079_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable268[4] = 
{
	StringComparer_t3301955079_StaticFields::get_offset_of_invariantCultureIgnoreCase_0(),
	StringComparer_t3301955079_StaticFields::get_offset_of_invariantCulture_1(),
	StringComparer_t3301955079_StaticFields::get_offset_of_ordinalIgnoreCase_2(),
	StringComparer_t3301955079_StaticFields::get_offset_of_ordinal_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize269 = { sizeof (CultureAwareComparer_t30646139), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable269[2] = 
{
	CultureAwareComparer_t30646139::get_offset_of__ignoreCase_4(),
	CultureAwareComparer_t30646139::get_offset_of__compareInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize270 = { sizeof (OrdinalComparer_t3407243298), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable270[1] = 
{
	OrdinalComparer_t3407243298::get_offset_of__ignoreCase_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize271 = { sizeof (StringComparison_t3657712135)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable271[7] = 
{
	StringComparison_t3657712135::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize272 = { sizeof (SystemException_t176217640), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize273 = { sizeof (TermInfoDriver_t2335718621), -1, sizeof(TermInfoDriver_t2335718621_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable273[47] = 
{
	TermInfoDriver_t2335718621_StaticFields::get_offset_of_native_terminal_size_0(),
	TermInfoDriver_t2335718621_StaticFields::get_offset_of_terminal_size_1(),
	TermInfoDriver_t2335718621_StaticFields::get_offset_of_locations_2(),
	TermInfoDriver_t2335718621::get_offset_of_reader_3(),
	TermInfoDriver_t2335718621::get_offset_of_cursorLeft_4(),
	TermInfoDriver_t2335718621::get_offset_of_cursorTop_5(),
	TermInfoDriver_t2335718621::get_offset_of_title_6(),
	TermInfoDriver_t2335718621::get_offset_of_titleFormat_7(),
	TermInfoDriver_t2335718621::get_offset_of_cursorVisible_8(),
	TermInfoDriver_t2335718621::get_offset_of_csrVisible_9(),
	TermInfoDriver_t2335718621::get_offset_of_csrInvisible_10(),
	TermInfoDriver_t2335718621::get_offset_of_clear_11(),
	TermInfoDriver_t2335718621::get_offset_of_bell_12(),
	TermInfoDriver_t2335718621::get_offset_of_term_13(),
	TermInfoDriver_t2335718621::get_offset_of_stdin_14(),
	TermInfoDriver_t2335718621::get_offset_of_stdout_15(),
	TermInfoDriver_t2335718621::get_offset_of_windowWidth_16(),
	TermInfoDriver_t2335718621::get_offset_of_windowHeight_17(),
	TermInfoDriver_t2335718621::get_offset_of_bufferHeight_18(),
	TermInfoDriver_t2335718621::get_offset_of_bufferWidth_19(),
	TermInfoDriver_t2335718621::get_offset_of_buffer_20(),
	TermInfoDriver_t2335718621::get_offset_of_readpos_21(),
	TermInfoDriver_t2335718621::get_offset_of_writepos_22(),
	TermInfoDriver_t2335718621::get_offset_of_keypadXmit_23(),
	TermInfoDriver_t2335718621::get_offset_of_keypadLocal_24(),
	TermInfoDriver_t2335718621::get_offset_of_inited_25(),
	TermInfoDriver_t2335718621::get_offset_of_initLock_26(),
	TermInfoDriver_t2335718621::get_offset_of_initKeys_27(),
	TermInfoDriver_t2335718621::get_offset_of_origPair_28(),
	TermInfoDriver_t2335718621::get_offset_of_origColors_29(),
	TermInfoDriver_t2335718621::get_offset_of_cursorAddress_30(),
	TermInfoDriver_t2335718621::get_offset_of_fgcolor_31(),
	TermInfoDriver_t2335718621::get_offset_of_color16_32(),
	TermInfoDriver_t2335718621::get_offset_of_setlfgcolor_33(),
	TermInfoDriver_t2335718621::get_offset_of_setlbgcolor_34(),
	TermInfoDriver_t2335718621::get_offset_of_setfgcolor_35(),
	TermInfoDriver_t2335718621::get_offset_of_setbgcolor_36(),
	TermInfoDriver_t2335718621::get_offset_of_noGetPosition_37(),
	TermInfoDriver_t2335718621::get_offset_of_keymap_38(),
	TermInfoDriver_t2335718621::get_offset_of_rootmap_39(),
	TermInfoDriver_t2335718621::get_offset_of_home_1_1_40(),
	TermInfoDriver_t2335718621::get_offset_of_rl_startx_41(),
	TermInfoDriver_t2335718621::get_offset_of_rl_starty_42(),
	TermInfoDriver_t2335718621::get_offset_of_control_characters_43(),
	TermInfoDriver_t2335718621::get_offset_of_echobuf_44(),
	TermInfoDriver_t2335718621::get_offset_of_echon_45(),
	TermInfoDriver_t2335718621_StaticFields::get_offset_of_UsedKeys_46(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize274 = { sizeof (ByteMatcher_t2129355737), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable274[2] = 
{
	ByteMatcher_t2129355737::get_offset_of_map_0(),
	ByteMatcher_t2129355737::get_offset_of_starts_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize275 = { sizeof (TermInfoNumbers_t2028216776)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable275[35] = 
{
	TermInfoNumbers_t2028216776::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize276 = { sizeof (TermInfoReader_t3116894478), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable276[5] = 
{
	TermInfoReader_t3116894478::get_offset_of_boolSize_0(),
	TermInfoReader_t3116894478::get_offset_of_numSize_1(),
	TermInfoReader_t3116894478::get_offset_of_strOffsets_2(),
	TermInfoReader_t3116894478::get_offset_of_buffer_3(),
	TermInfoReader_t3116894478::get_offset_of_booleansOffset_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize277 = { sizeof (TermInfoStrings_t290279955)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable277[396] = 
{
	TermInfoStrings_t290279955::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize278 = { sizeof (ThreadStaticAttribute_t3840787420), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize279 = { sizeof (TimeSpan_t881159249)+ sizeof (RuntimeObject), sizeof(TimeSpan_t881159249 ), sizeof(TimeSpan_t881159249_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable279[4] = 
{
	TimeSpan_t881159249_StaticFields::get_offset_of_MaxValue_0(),
	TimeSpan_t881159249_StaticFields::get_offset_of_MinValue_1(),
	TimeSpan_t881159249_StaticFields::get_offset_of_Zero_2(),
	TimeSpan_t881159249::get_offset_of__ticks_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize280 = { sizeof (Parser_t2112344768), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable280[4] = 
{
	Parser_t2112344768::get_offset_of__src_0(),
	Parser_t2112344768::get_offset_of__cur_1(),
	Parser_t2112344768::get_offset_of__length_2(),
	Parser_t2112344768::get_offset_of_formatError_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize281 = { sizeof (TimeZone_t2038656743), -1, sizeof(TimeZone_t2038656743_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable281[3] = 
{
	TimeZone_t2038656743_StaticFields::get_offset_of_currentTimeZone_0(),
	TimeZone_t2038656743_StaticFields::get_offset_of_tz_lock_1(),
	TimeZone_t2038656743_StaticFields::get_offset_of_timezone_check_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize282 = { sizeof (CurrentSystemTimeZone_t3998352255), -1, sizeof(CurrentSystemTimeZone_t3998352255_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable282[8] = 
{
	CurrentSystemTimeZone_t3998352255::get_offset_of_m_standardName_3(),
	CurrentSystemTimeZone_t3998352255::get_offset_of_m_daylightName_4(),
	CurrentSystemTimeZone_t3998352255::get_offset_of_m_CachedDaylightChanges_5(),
	CurrentSystemTimeZone_t3998352255::get_offset_of_m_ticksOffset_6(),
	CurrentSystemTimeZone_t3998352255::get_offset_of_utcOffsetWithOutDLS_7(),
	CurrentSystemTimeZone_t3998352255::get_offset_of_utcOffsetWithDLS_8(),
	CurrentSystemTimeZone_t3998352255_StaticFields::get_offset_of_this_year_9(),
	CurrentSystemTimeZone_t3998352255_StaticFields::get_offset_of_this_year_dlt_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize283 = { sizeof (MonoTODOAttribute_t4131080581), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable283[1] = 
{
	MonoTODOAttribute_t4131080581::get_offset_of_comment_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize284 = { sizeof (MonoDocumentationNoteAttribute_t493035051), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize285 = { sizeof (MonoLimitationAttribute_t3672514598), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize286 = { sizeof (TypeCode_t2987224087)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable286[19] = 
{
	TypeCode_t2987224087::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
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
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize287 = { sizeof (TypeInitializationException_t2973684290), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable287[1] = 
{
	TypeInitializationException_t2973684290::get_offset_of_type_name_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize288 = { sizeof (TypeLoadException_t3707937253), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable288[3] = 
{
	0,
	TypeLoadException_t3707937253::get_offset_of_className_12(),
	TypeLoadException_t3707937253::get_offset_of_assemblyName_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize289 = { sizeof (UnauthorizedAccessException_t490705335), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize290 = { sizeof (UnhandledExceptionEventArgs_t2886101344), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable290[2] = 
{
	UnhandledExceptionEventArgs_t2886101344::get_offset_of_exception_1(),
	UnhandledExceptionEventArgs_t2886101344::get_offset_of_m_isTerminating_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize291 = { sizeof (UnitySerializationHolder_t431912834), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable291[3] = 
{
	UnitySerializationHolder_t431912834::get_offset_of__data_0(),
	UnitySerializationHolder_t431912834::get_offset_of__unityType_1(),
	UnitySerializationHolder_t431912834::get_offset_of__assemblyName_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize292 = { sizeof (UnityType_t3666003507)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable292[5] = 
{
	UnityType_t3666003507::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize293 = { sizeof (Version_t3456873960), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable293[5] = 
{
	0,
	Version_t3456873960::get_offset_of__Major_1(),
	Version_t3456873960::get_offset_of__Minor_2(),
	Version_t3456873960::get_offset_of__Build_3(),
	Version_t3456873960::get_offset_of__Revision_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize294 = { sizeof (WeakReference_t1334886716), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable294[2] = 
{
	WeakReference_t1334886716::get_offset_of_isLongReference_0(),
	WeakReference_t1334886716::get_offset_of_gcHandle_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize295 = { sizeof (InputRecord_t2660212290)+ sizeof (RuntimeObject), sizeof(InputRecord_t2660212290_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable295[9] = 
{
	InputRecord_t2660212290::get_offset_of_EventType_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_KeyDown_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_RepeatCount_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_VirtualKeyCode_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_VirtualScanCode_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_Character_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_ControlKeyState_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_pad1_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	InputRecord_t2660212290::get_offset_of_pad2_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize296 = { sizeof (Coord_t397375283)+ sizeof (RuntimeObject), sizeof(Coord_t397375283 ), 0, 0 };
extern const int32_t g_FieldOffsetTable296[2] = 
{
	Coord_t397375283::get_offset_of_X_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Coord_t397375283::get_offset_of_Y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize297 = { sizeof (SmallRect_t2930836963)+ sizeof (RuntimeObject), sizeof(SmallRect_t2930836963 ), 0, 0 };
extern const int32_t g_FieldOffsetTable297[4] = 
{
	SmallRect_t2930836963::get_offset_of_Left_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SmallRect_t2930836963::get_offset_of_Top_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SmallRect_t2930836963::get_offset_of_Right_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SmallRect_t2930836963::get_offset_of_Bottom_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize298 = { sizeof (ConsoleScreenBufferInfo_t3095351730)+ sizeof (RuntimeObject), sizeof(ConsoleScreenBufferInfo_t3095351730 ), 0, 0 };
extern const int32_t g_FieldOffsetTable298[5] = 
{
	ConsoleScreenBufferInfo_t3095351730::get_offset_of_Size_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleScreenBufferInfo_t3095351730::get_offset_of_CursorPosition_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleScreenBufferInfo_t3095351730::get_offset_of_Attribute_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleScreenBufferInfo_t3095351730::get_offset_of_Window_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ConsoleScreenBufferInfo_t3095351730::get_offset_of_MaxWindowSize_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize299 = { sizeof (Handles_t3280152003)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable299[4] = 
{
	Handles_t3280152003::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
