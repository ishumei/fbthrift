
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

cdef api int can_extract__module__FooStreamEx(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.FooStreamEx) else 0


cdef api object init__module__FooStreamEx(object data):
    return __thrift_types.FooStreamEx._fbthrift_create(data)

cdef api int can_extract__module__FooEx(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.FooEx) else 0


cdef api object init__module__FooEx(object data):
    return __thrift_types.FooEx._fbthrift_create(data)

cdef api int can_extract__module__FooEx2(object __obj) except -1:
    return 1 if isinstance(__obj, __thrift_types.FooEx2) else 0


cdef api object init__module__FooEx2(object data):
    return __thrift_types.FooEx2._fbthrift_create(data)
