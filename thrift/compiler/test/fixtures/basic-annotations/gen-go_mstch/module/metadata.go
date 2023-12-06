// @generated by Thrift for [[[ program path ]]]
// This file is probably not the place you want to edit!

package module // [[[ program thrift source path ]]]

import (
    thrift "github.com/facebook/fbthrift/thrift/lib/go/thrift"
    metadata "github.com/facebook/fbthrift/thrift/lib/thrift/metadata"
)

// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO
var _ = metadata.GoUnusedProtection__

// Premade Thrift types
var (
    premadeThriftType_string = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_STRING_TYPE.Ptr(),
            )
    premadeThriftType_i64 = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I64_TYPE.Ptr(),
            )
    premadeThriftType_module_MyEnum = metadata.NewThriftType().SetTEnum(
        metadata.NewThriftEnumType().
            SetName("module.MyEnum"),
            )
    premadeThriftType_list_string = metadata.NewThriftType().SetTList(
        metadata.NewThriftListType().
            SetValueType(premadeThriftType_string),
            )
    premadeThriftType_module_list_string_6884 = metadata.NewThriftType().SetTTypedef(
        metadata.NewThriftTypedefType().
            SetName("module.list_string_6884").
            SetUnderlyingType(premadeThriftType_list_string),
            )
    premadeThriftType_module_MyUnion = metadata.NewThriftType().SetTUnion(
        metadata.NewThriftUnionType().
            SetName("module.MyUnion"),
            )
    premadeThriftType_module_MyStruct = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module.MyStruct"),
            )
    premadeThriftType_void = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_VOID_TYPE.Ptr(),
            )
    premadeThriftType_module_MyException = metadata.NewThriftType().SetTStruct(
        metadata.NewThriftStructType().
            SetName("module.MyException"),
            )
    premadeThriftType_bool = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_BOOL_TYPE.Ptr(),
            )
    premadeThriftType_i32 = metadata.NewThriftType().SetTPrimitive(
        metadata.ThriftPrimitiveType_THRIFT_I32_TYPE.Ptr(),
            )
)

var structMetadatas = []*metadata.ThriftStruct{
    metadata.NewThriftStruct().
    SetName("module.MyStructNestedAnnotation").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("name").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ),
    metadata.NewThriftStruct().
    SetName("module.MyUnion").
    SetIsUnion(true),
    metadata.NewThriftStruct().
    SetName("module.MyStruct").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("package").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(2).
    SetName("major").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
            metadata.NewThriftField().
    SetId(3).
    SetName("annotation_with_quote").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(4).
    SetName("class_").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(5).
    SetName("annotation_with_trailing_comma").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(6).
    SetName("empty_annotations").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
            metadata.NewThriftField().
    SetId(7).
    SetName("my_enum").
    SetIsOptional(false).
    SetType(premadeThriftType_module_MyEnum),
            metadata.NewThriftField().
    SetId(8).
    SetName("cpp_type_annotation").
    SetIsOptional(false).
    SetType(premadeThriftType_module_list_string_6884),
            metadata.NewThriftField().
    SetId(9).
    SetName("my_union").
    SetIsOptional(false).
    SetType(premadeThriftType_module_MyUnion),
        },
    ),
    metadata.NewThriftStruct().
    SetName("module.SecretStruct").
    SetIsUnion(false).
    SetFields(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("id").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
            metadata.NewThriftField().
    SetId(2).
    SetName("password").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ),
}

var exceptionMetadatas = []*metadata.ThriftException{
    metadata.NewThriftException().
    SetName("module.MyException"),
}

var enumMetadatas = []*metadata.ThriftEnum{
    metadata.NewThriftEnum().
    SetName("module.MyEnum").
    SetElements(
        map[int32]string{
            0: "MyValue1",
            1: "MyValue2",
            2: "DOMAIN",
        },
    ),
}

var serviceMetadatas = []*metadata.ThriftService{
    metadata.NewThriftService().
    SetName("module.MyService").
    SetFunctions(
        []*metadata.ThriftFunction{
            metadata.NewThriftFunction().
    SetName("ping").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void).
    SetExceptions(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("myExcept").
    SetIsOptional(true).
    SetType(premadeThriftType_module_MyException),
        },
    ),
            metadata.NewThriftFunction().
    SetName("getRandomData").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_string),
            metadata.NewThriftFunction().
    SetName("hasDataById").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_bool).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("id").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
        },
    ),
            metadata.NewThriftFunction().
    SetName("getDataById").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_string).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("id").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
        },
    ),
            metadata.NewThriftFunction().
    SetName("putDataById").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("id").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
            metadata.NewThriftField().
    SetId(2).
    SetName("data").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ),
            metadata.NewThriftFunction().
    SetName("lobDataById").
    SetIsOneway(true).
    SetReturnType(premadeThriftType_void).
    SetArguments(
        []*metadata.ThriftField{
            metadata.NewThriftField().
    SetId(1).
    SetName("id").
    SetIsOptional(false).
    SetType(premadeThriftType_i64),
            metadata.NewThriftField().
    SetId(2).
    SetName("data").
    SetIsOptional(false).
    SetType(premadeThriftType_string),
        },
    ),
            metadata.NewThriftFunction().
    SetName("doNothing").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void),
        },
    ),
    metadata.NewThriftService().
    SetName("module.MyServicePrioParent").
    SetFunctions(
        []*metadata.ThriftFunction{
            metadata.NewThriftFunction().
    SetName("ping").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void),
            metadata.NewThriftFunction().
    SetName("pong").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void),
        },
    ),
    metadata.NewThriftService().
    SetName("module.MyServicePrioChild").
    SetParent(thrift.StringPtr("module.MyServicePrioParent")).
    SetFunctions(
        []*metadata.ThriftFunction{
            metadata.NewThriftFunction().
    SetName("pang").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void),
        },
    ),
    metadata.NewThriftService().
    SetName("module.BadService").
    SetFunctions(
        []*metadata.ThriftFunction{
            metadata.NewThriftFunction().
    SetName("bar").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_i32),
        },
    ),
    metadata.NewThriftService().
    SetName("module.FooBarBazService").
    SetFunctions(
        []*metadata.ThriftFunction{
            metadata.NewThriftFunction().
    SetName("foo").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void),
            metadata.NewThriftFunction().
    SetName("bar").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void),
            metadata.NewThriftFunction().
    SetName("baz").
    SetIsOneway(false).
    SetReturnType(premadeThriftType_void),
        },
    ),
}

// GetThriftMetadata returns complete Thrift metadata for current and imported packages.
func GetThriftMetadata() *metadata.ThriftMetadata {
    includedEnumsMetadatas := []map[string]*metadata.ThriftEnum{
        GetEnumsMetadata(),
    }
    includedStructsMetadatas := []map[string]*metadata.ThriftStruct{
        GetStructsMetadata(),
    }
    includedExceptionsMetadatas := []map[string]*metadata.ThriftException{
        GetExceptionsMetadata(),
    }
    includedServicesMetadatas := []map[string]*metadata.ThriftService{
        GetServicesMetadata(),
    }

	allEnums := make(map[string]*metadata.ThriftEnum)
	allStructs := make(map[string]*metadata.ThriftStruct)
	allExceptions := make(map[string]*metadata.ThriftException)
    allServices := make(map[string]*metadata.ThriftService)

    for _, includedEnumsMetadata := range includedEnumsMetadatas {
        for enumName, thriftEnum := range includedEnumsMetadata {
            allEnums[enumName] = thriftEnum
        }
    }
    for _, includedStructsMetadata := range includedStructsMetadatas {
        for structName, thriftStruct := range includedStructsMetadata {
            allStructs[structName] = thriftStruct
        }
    }
    for _, includedExceptionsMetadata := range includedExceptionsMetadatas {
        for exceptionName, thriftException := range includedExceptionsMetadata {
            allExceptions[exceptionName] = thriftException
        }
    }
    for _, includedServicesMetadata := range includedServicesMetadatas {
        for serviceName, thriftService := range includedServicesMetadata {
            allServices[serviceName] = thriftService
        }
    }

    return metadata.NewThriftMetadata().
        SetEnums(allEnums).
        SetStructs(allStructs).
        SetExceptions(allExceptions).
        SetServices(allServices)
}

// GetStructsMetadata returns Thrift metadata for enums in the current package.
func GetEnumsMetadata() map[string]*metadata.ThriftEnum {
    result := make(map[string]*metadata.ThriftEnum)
    for _, enumMetadata := range enumMetadatas {
        result[enumMetadata.GetName()] = enumMetadata
    }
    return result
}

// GetStructsMetadata returns Thrift metadata for structs in the current package.
func GetStructsMetadata() map[string]*metadata.ThriftStruct {
    result := make(map[string]*metadata.ThriftStruct)
    for _, structMetadata := range structMetadatas {
        result[structMetadata.GetName()] = structMetadata
    }
    return result
}

// GetStructsMetadata returns Thrift metadata for exceptions in the current package.
func GetExceptionsMetadata() map[string]*metadata.ThriftException {
    result := make(map[string]*metadata.ThriftException)
    for _, exceptionMetadata := range exceptionMetadatas {
        result[exceptionMetadata.GetName()] = exceptionMetadata
    }
    return result
}

// GetStructsMetadata returns Thrift metadata for services in the current package.
func GetServicesMetadata() map[string]*metadata.ThriftService {
    result := make(map[string]*metadata.ThriftService)
    for _, serviceMetadata := range serviceMetadatas {
        result[serviceMetadata.GetName()] = serviceMetadata
    }
    return result
}
