
#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from cpython.ref cimport PyObject
from libcpp.utility cimport move as __move
from folly.iobuf cimport (
    from_unique_ptr as __IOBuf_from_unique_ptr,
    IOBuf as __IOBuf,
)
from thrift.python.serializer import (
    deserialize as __deserialize,
    Protocol as __Protocol,
    serialize_iobuf as __serialize_iobuf,
)
import module.thrift_types as __thrift_types

cdef api int can_extract__module__ComplexUnion(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.ComplexUnion) else 0


cdef api object init__module__ComplexUnion(object data):
    return __thrift_types.ComplexUnion._fbthrift_create(data)

cdef api int can_extract__module__ListUnion(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.ListUnion) else 0


cdef api object init__module__ListUnion(object data):
    return __thrift_types.ListUnion._fbthrift_create(data)

cdef api int can_extract__module__DataUnion(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.DataUnion) else 0


cdef api object init__module__DataUnion(object data):
    return __thrift_types.DataUnion._fbthrift_create(data)

cdef api int can_extract__module__Val(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.Val) else 0


cdef api object init__module__Val(object data):
    return __thrift_types.Val._fbthrift_create(data)

cdef api int can_extract__module__ValUnion(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.ValUnion) else 0


cdef api object init__module__ValUnion(object data):
    return __thrift_types.ValUnion._fbthrift_create(data)

cdef api int can_extract__module__VirtualComplexUnion(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.VirtualComplexUnion) else 0


cdef api object init__module__VirtualComplexUnion(object data):
    return __thrift_types.VirtualComplexUnion._fbthrift_create(data)

cdef api int can_extract__module__NonCopyableStruct(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.NonCopyableStruct) else 0


cdef api object init__module__NonCopyableStruct(object data):
    return __thrift_types.NonCopyableStruct._fbthrift_create(data)

cdef api int can_extract__module__NonCopyableUnion(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.NonCopyableUnion) else 0


cdef api object init__module__NonCopyableUnion(object data):
    return __thrift_types.NonCopyableUnion._fbthrift_create(data)
