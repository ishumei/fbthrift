#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import folly.iobuf as _fbthrift_iobuf

from thrift.py3.reflection import (
    NumberType as __NumberType,
    StructType as __StructType,
    Qualifier as __Qualifier,
    StructSpec as __StructSpec,
    ListSpec as __ListSpec,
    SetSpec as __SetSpec,
    MapSpec as __MapSpec,
    FieldSpec as __FieldSpec,
)


import module.types as _module_types



def get_reflection__ComplexUnion() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="ComplexUnion",
        kind=__StructType.UNION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="intValue",
            py_name="intValue",
            type=int,
            kind=__NumberType.I64,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=5,
            name="stringValue",
            py_name="stringValue",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="intListValue",
            py_name="intListValue",
            type=_module_types.List__i64,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="stringListValue",
            py_name="stringListValue",
            type=_module_types.List__string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=9,
            name="typedefValue",
            py_name="typedefValue",
            type=_module_types.Map__i16_string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=14,
            name="stringRef",
            py_name="stringRef",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__ListUnion() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="ListUnion",
        kind=__StructType.UNION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="intListValue",
            py_name="intListValue",
            type=_module_types.List__i64,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="stringListValue",
            py_name="stringListValue",
            type=_module_types.List__string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__DataUnion() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="DataUnion",
        kind=__StructType.UNION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="binaryData",
            py_name="binaryData",
            type=bytes,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="stringData",
            py_name="stringData",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__Val() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="Val",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="strVal",
            py_name="strVal",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="intVal",
            py_name="intVal",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=9,
            name="typedefValue",
            py_name="typedefValue",
            type=_module_types.Map__i16_string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__ValUnion() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="ValUnion",
        kind=__StructType.UNION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="v1",
            py_name="v1",
            type=_module_types.Val,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="v2",
            py_name="v2",
            type=_module_types.Val,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__VirtualComplexUnion() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="VirtualComplexUnion",
        kind=__StructType.UNION,
        annotations={
            """cpp.virtual""": """1""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="thingOne",
            py_name="thingOne",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="thingTwo",
            py_name="thingTwo",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__NonCopyableStruct() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="NonCopyableStruct",
        kind=__StructType.STRUCT,
        annotations={
            """cpp.noncopyable""": """1""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="num",
            py_name="num",
            type=int,
            kind=__NumberType.I64,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__NonCopyableUnion() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="NonCopyableUnion",
        kind=__StructType.UNION,
        annotations={
            """cpp.noncopyable""": """1""",        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="s",
            py_name="s",
            type=_module_types.NonCopyableStruct,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__List__i64() -> __ListSpec :
    return __ListSpec._fbthrift_create(
        value=int,
        kind=__NumberType.I64,
    )

def get_reflection__List__string() -> __ListSpec :
    return __ListSpec._fbthrift_create(
        value=str,
        kind=__NumberType.NOT_A_NUMBER,
    )

def get_reflection__Map__i16_string() -> __MapSpec:
    return __MapSpec._fbthrift_create(
        key=int,
        key_kind=__NumberType.I16,
        value=str,
        value_kind=__NumberType.NOT_A_NUMBER,
    )
