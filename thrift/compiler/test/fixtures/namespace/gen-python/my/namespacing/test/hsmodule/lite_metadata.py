#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import apache.thrift.metadata.lite_types as _fbthrift_metadata


# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_HsFoo(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "hsmodule.HsFoo"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="MyInt", is_optional=False, structured_annotations=[
        ]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[
        ])
    new_struct = metadata_struct(structs=struct_dict)

     # MyInt

    return new_struct
def gen_metadata_struct_HsFoo() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_HsFoo(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))


def gen_metadata_service_HsTestService() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_service_HsTestService(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

def _fbthrift_gen_metadata_service_HsTestService(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "hsmodule.HsTestService"

    if qualified_name in metadata_struct.services:
        return metadata_struct

    functions = [
        _fbthrift_metadata.ThriftFunction(name="init", return_type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), arguments=[
            _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="int1", is_optional=False, structured_annotations=[
            ]),
        ], exceptions = [
        ], is_oneway=False, structured_annotations=[
        ]),
    ]

    service_dict = dict(metadata_struct.services)
    service_dict[qualified_name] = _fbthrift_metadata.ThriftService(name=qualified_name, functions=functions,  structured_annotations=[
    ])
    new_struct = metadata_struct(services=service_dict)

     # int1


     # return value


    return new_struct



def getThriftModuleMetadata() -> _fbthrift_metadata.ThriftMetadata:
    meta = _fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={})
    meta = _fbthrift_gen_metadata_struct_HsFoo(meta)
    meta = _fbthrift_gen_metadata_service_HsTestService(meta)
    return meta
