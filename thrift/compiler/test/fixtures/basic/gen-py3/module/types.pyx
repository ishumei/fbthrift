#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.bytes cimport PyBytes_AsStringAndSize
from cpython.object cimport PyTypeObject, Py_LT, Py_LE, Py_EQ, Py_NE, Py_GT, Py_GE
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
cimport thrift.py3.types
cimport thrift.py3.exceptions
from thrift.py3.types cimport (
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    constant_shared_ptr,
    default_inst,
    NOTSET as __NOTSET,
)
cimport thrift.py3.std_libcpp as std_libcpp
cimport thrift.py3.serializer as serializer
from thrift.py3.serializer import deserialize, serialize
import folly.iobuf as __iobuf
from folly.optional cimport cOptional

import sys
import itertools
from collections.abc import Sequence, Set, Mapping, Iterable
import warnings
import weakref as __weakref
import builtins as _builtins

cimport module.types_reflection as _types_reflection

cdef object __MyEnumEnumInstances = None  # Set[MyEnum]
cdef object __MyEnumEnumMembers = {}      # Dict[str, MyEnum]
cdef object __MyEnumEnumUniqueValues = dict()    # Dict[int, MyEnum]

@__cython.internal
@__cython.auto_pickle(False)
cdef class __MyEnumMeta(type):
    def __call__(cls, value):
        cdef int cvalue
        if isinstance(value, cls):
            return value
        if isinstance(value, int):
            cvalue = value
            if cvalue == 0:
                return MyEnum.MyValue1
            elif cvalue == 1:
                return MyEnum.MyValue2

        raise ValueError(f'{value} is not a valid MyEnum')

    def __getitem__(cls, name):
        return __MyEnumEnumMembers[name]

    def __dir__(cls):
        return ['__class__', '__doc__', '__members__', '__module__',
        'MyValue1',
        'MyValue2',
        ]

    def __iter__(cls):
        return iter(__MyEnumEnumUniqueValues.values())

    def __reversed__(cls):
        return reversed(iter(cls))

    def __contains__(cls, item):
        if not isinstance(item, cls):
            return False
        return item in __MyEnumEnumInstances

    def __len__(cls):
        return len(__MyEnumEnumInstances)


cdef __MyEnum_unique_instance(int value, str name):
    inst = __MyEnumEnumUniqueValues.get(value)
    if inst is None:
        inst = __MyEnumEnumUniqueValues[value] = MyEnum.__new__(MyEnum, value, name)
    __MyEnumEnumMembers[name] = inst
    return inst


@__cython.final
@__cython.auto_pickle(False)
cdef class MyEnum(thrift.py3.types.CompiledEnum):
    MyValue1 = __MyEnum_unique_instance(0, "MyValue1")
    MyValue2 = __MyEnum_unique_instance(1, "MyValue2")
    __members__ = thrift.py3.types.MappingProxyType(__MyEnumEnumMembers)

    def __cinit__(self, value, name):
        if __MyEnumEnumInstances is not None:
            raise TypeError('__new__ is disabled in the interest of type-safety')
        self.value = value
        self.name = name
        self.__hash = hash(name)
        self.__str = f"MyEnum.{name}"
        self.__repr = f"<{self.__str}: {value}>"

    def __repr__(self):
        return self.__repr

    def __str__(self):
        return self.__str

    def __int__(self):
        return self.value

    def __eq__(self, other):
        if not isinstance(other, MyEnum):
            warnings.warn(f"comparison not supported between instances of { MyEnum } and {type(other)}", RuntimeWarning, stacklevel=2)
            return False
        return self is other

    def __hash__(self):
        return self.__hash

    def __reduce__(self):
        return MyEnum, (self.value,)


__SetMetaClass(<PyTypeObject*> MyEnum, <PyTypeObject*> __MyEnumMeta)
__MyEnumEnumInstances = set(__MyEnumEnumUniqueValues.values())


cdef inline cMyEnum MyEnum_to_cpp(MyEnum value):
    cdef int cvalue = value.value
    if cvalue == 0:
        return MyEnum__MyValue1
    elif cvalue == 1:
        return MyEnum__MyValue2


cdef object __MyUnion_Union_TypeEnumMembers = None


@__cython.internal
@__cython.auto_pickle(False)
cdef class __MyUnion_Union_TypeMeta(type):
    def __call__(cls, value):
        cdef int cvalue
        if isinstance(value, cls) and value in __MyUnion_Union_TypeEnumMembers:
            return value

        if isinstance(value, int):
            cvalue = value
            if cvalue == 0:
                return __MyUnionType.EMPTY
            elif cvalue == 1:
                return __MyUnionType.myEnum
            elif cvalue == 2:
                return __MyUnionType.myStruct
            elif cvalue == 3:
                return __MyUnionType.myDataItem

        raise ValueError(f'{value} is not a valid MyUnion.Type')

    def __getitem__(cls, name):
        if name == "EMPTY":
            return __MyUnionType.EMPTY
        elif name == "myEnum":
            return __MyUnionType.myEnum
        elif name == "myStruct":
            return __MyUnionType.myStruct
        elif name == "myDataItem":
            return __MyUnionType.myDataItem
        raise KeyError(name)

    def __dir__(cls):
        return ['__class__', '__doc__', '__members__', '__module__', 'EMPTY',
            'myEnum',
            'myStruct',
            'myDataItem',
        ]

    @property
    def __members__(cls):
        return {m.name: m for m in cls}

    def __iter__(cls):
        yield __MyUnionType.EMPTY
        yield __MyUnionType.myEnum
        yield __MyUnionType.myStruct
        yield __MyUnionType.myDataItem

    def __reversed__(cls):
        return reversed(iter(cls))

    def __contains__(cls, item):
        if not isinstance(item, cls):
            return False
        return item in __MyUnion_Union_TypeEnumMembers

    def __len__(cls):
        return 3+1  # For Empty


@__cython.final
@__cython.auto_pickle(False)
cdef class __MyUnionType(thrift.py3.types.CompiledEnum):
    EMPTY = __MyUnionType.__new__(__MyUnionType, 0, "EMPTY")
    myEnum = __MyUnionType.__new__(__MyUnionType, 1, "myEnum")
    myStruct = __MyUnionType.__new__(__MyUnionType, 2, "myStruct")
    myDataItem = __MyUnionType.__new__(__MyUnionType, 3, "myDataItem")

    def __cinit__(self, value, name):
        if __MyUnion_Union_TypeEnumMembers is not None:
            raise TypeError('For Safty we have disabled __new__')
        self.value = value
        self.name = name
        self.__hash = hash(name)
        self.__str = f"MyUnion.Type.{name}"
        self.__repr = f"<{self.__str}: {value}>"

    def __repr__(self):
        return self.__repr

    def __str__(self):
        return self.__str

    def __int__(self):
        return self.value

    def __eq__(self, other):
        if not isinstance(other, __MyUnionType):
            warnings.warn(f"comparison not supported between instances of { __MyUnionType } and {type(other)}", RuntimeWarning, stacklevel=2)
            return False
        return self is other

    def __hash__(self):
        return self.__hash

    def __reduce__(self):
        return __MyUnionType, (self.value,)

__SetMetaClass(<PyTypeObject*> __MyUnionType, <PyTypeObject*> __MyUnion_Union_TypeMeta)
__MyUnion_Union_TypeEnumMembers = set(__MyUnionType)


@__cython.auto_pickle(False)
cdef class MyStruct(thrift.py3.types.Struct):

    def __init__(
        MyStruct self, *,
        MyIntField=None,
        str MyStringField=None,
        MyDataItem MyDataField=None,
        MyEnum myEnum=None
    ):
        if MyIntField is not None:
            if not isinstance(MyIntField, int):
                raise TypeError(f'MyIntField is not a { int !r}.')
            MyIntField = <cint64_t> MyIntField

        self._cpp_obj = move(MyStruct._make_instance(
          NULL,
          NULL,
          MyIntField,
          MyStringField,
          MyDataField,
          myEnum,
        ))

    def __call__(
        MyStruct self,
        MyIntField=__NOTSET,
        MyStringField=__NOTSET,
        MyDataField=__NOTSET,
        myEnum=__NOTSET
    ):
        ___NOTSET = __NOTSET  # Cheaper for larger structs
        cdef bint[4] __isNOTSET  # so make_instance is typed

        changes = False
        if MyIntField is ___NOTSET:
            __isNOTSET[0] = True
            MyIntField = None
        else:
            __isNOTSET[0] = False
            changes = True

        if MyStringField is ___NOTSET:
            __isNOTSET[1] = True
            MyStringField = None
        else:
            __isNOTSET[1] = False
            changes = True

        if MyDataField is ___NOTSET:
            __isNOTSET[2] = True
            MyDataField = None
        else:
            __isNOTSET[2] = False
            changes = True

        if myEnum is ___NOTSET:
            __isNOTSET[3] = True
            myEnum = None
        else:
            __isNOTSET[3] = False
            changes = True


        if not changes:
            return self

        if MyIntField is not None:
            if not isinstance(MyIntField, int):
                raise TypeError(f'MyIntField is not a { int !r}.')
            MyIntField = <cint64_t> MyIntField

        if MyStringField is not None:
            if not isinstance(MyStringField, str):
                raise TypeError(f'MyStringField is not a { str !r}.')

        if MyDataField is not None:
            if not isinstance(MyDataField, MyDataItem):
                raise TypeError(f'MyDataField is not a { MyDataItem !r}.')

        if myEnum is not None:
            if not isinstance(myEnum, MyEnum):
                raise TypeError(f'field myEnum value: { myEnum !r} is not of the enum type { MyEnum }.')

        inst = <MyStruct>MyStruct.__new__(MyStruct)
        inst._cpp_obj = move(MyStruct._make_instance(
          self._cpp_obj.get(),
          __isNOTSET,
          MyIntField,
          MyStringField,
          MyDataField,
          myEnum,
        ))
        return inst

    @staticmethod
    cdef unique_ptr[cMyStruct] _make_instance(
        cMyStruct* base_instance,
        bint* __isNOTSET,
        object MyIntField ,
        str MyStringField ,
        MyDataItem MyDataField ,
        MyEnum myEnum 
    ) except *:
        cdef unique_ptr[cMyStruct] c_inst
        if base_instance:
            c_inst = make_unique[cMyStruct](deref(base_instance))
        else:
            c_inst = make_unique[cMyStruct]()

        if base_instance:
            # Convert None's to default value. (or unset)
            if not __isNOTSET[0] and MyIntField is None:
                deref(c_inst).MyIntField_ref().assign(default_inst[cMyStruct]().MyIntField_ref().value())
                deref(c_inst).__isset.MyIntField = False
                pass

            if not __isNOTSET[1] and MyStringField is None:
                deref(c_inst).MyStringField_ref().assign(default_inst[cMyStruct]().MyStringField_ref().value())
                deref(c_inst).__isset.MyStringField = False
                pass

            if not __isNOTSET[2] and MyDataField is None:
                deref(c_inst).MyDataField_ref().assign(default_inst[cMyStruct]().MyDataField_ref().value())
                deref(c_inst).__isset.MyDataField = False
                pass

            if not __isNOTSET[3] and myEnum is None:
                deref(c_inst).myEnum_ref().assign(default_inst[cMyStruct]().myEnum_ref().value())
                deref(c_inst).__isset.myEnum = False
                pass

        if MyIntField is not None:
            deref(c_inst).MyIntField_ref().assign(MyIntField)
            deref(c_inst).__isset.MyIntField = True
        if MyStringField is not None:
            deref(c_inst).MyStringField_ref().assign(thrift.py3.types.move(thrift.py3.types.bytes_to_string(MyStringField.encode('utf-8'))))
            deref(c_inst).__isset.MyStringField = True
        if MyDataField is not None:
            deref(c_inst).MyDataField_ref().assign(deref((<MyDataItem?> MyDataField)._cpp_obj))
            deref(c_inst).__isset.MyDataField = True
        if myEnum is not None:
            deref(c_inst).myEnum_ref().assign(MyEnum_to_cpp(myEnum))
            deref(c_inst).__isset.myEnum = True
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return move_unique(c_inst)

    cdef object __fbthrift_isset(self):
        cpp_obj = deref(self._cpp_obj)
        return thrift.py3.types._IsSet("MyStruct", {
          "MyIntField": cpp_obj.MyIntField_ref().has_value(),
          "MyStringField": cpp_obj.MyStringField_ref().has_value(),
          "MyDataField": cpp_obj.MyDataField_ref().has_value(),
          "myEnum": cpp_obj.myEnum_ref().has_value(),
        })

    def __iter__(self):
        yield 'MyIntField', self.MyIntField
        yield 'MyStringField', self.MyStringField
        yield 'MyDataField', self.MyDataField
        yield 'myEnum', self.myEnum

    def __bool__(self):
        return True

    @staticmethod
    cdef create(shared_ptr[cMyStruct] cpp_obj):
        inst = <MyStruct>MyStruct.__new__(MyStruct)
        inst._cpp_obj = move_shared(cpp_obj)
        return inst

    @property
    def MyIntField(self):

        return deref(self._cpp_obj).MyIntField_ref().value()

    @property
    def MyStringField(self):

        return (<bytes>deref(self._cpp_obj).MyStringField_ref().value()).decode('UTF-8')

    @property
    def MyDataField(self):

        if self.__field_MyDataField is None:
            self.__field_MyDataField = MyDataItem.create(reference_shared_ptr_MyDataField(self._cpp_obj, deref(self._cpp_obj).MyDataField_ref().value()))
        return self.__field_MyDataField

    @property
    def myEnum(self):

        return translate_cpp_enum_to_python(MyEnum, <int>(deref(self._cpp_obj).myEnum_ref().value()))


    def __hash__(MyStruct self):
        if not self.__hash:
            self.__hash = hash((
            self.MyIntField,
            self.MyStringField,
            self.MyDataField,
            self.myEnum,
            ))
        return self.__hash

    def __repr__(MyStruct self):
        return f'MyStruct(MyIntField={repr(self.MyIntField)}, MyStringField={repr(self.MyStringField)}, MyDataField={repr(self.MyDataField)}, myEnum={repr(self.myEnum)})'
    def __copy__(MyStruct self):
        cdef shared_ptr[cMyStruct] cpp_obj = make_shared[cMyStruct](
            deref(self._cpp_obj)
        )
        return MyStruct.create(move_shared(cpp_obj))

    def __richcmp__(self, other, op):
        cdef int cop = op
        if not (
                isinstance(self, MyStruct) and
                isinstance(other, MyStruct)):
            if cop == Py_EQ:  # different types are never equal
                return False
            elif cop == Py_NE:  # different types are always notequal
                return True
            else:
                return NotImplemented

        cdef cMyStruct* cself = (<MyStruct>self)._cpp_obj.get()
        cdef cMyStruct* cother = (<MyStruct>other)._cpp_obj.get()
        if cop == Py_EQ:
            return deref(cself) == deref(cother)
        elif cop == Py_NE:
            return deref(cself) != deref(cother)
        elif cop == Py_LT:
            return deref(cself) < deref(cother)
        elif cop == Py_LE:
            return deref(cself) <= deref(cother)
        elif cop == Py_GT:
            return deref(cself) > deref(cother)
        elif cop == Py_GE:
            return deref(cself) >= deref(cother)
        else:
            return NotImplemented

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__MyStruct()

    cdef __iobuf.IOBuf _serialize(MyStruct self, __Protocol proto):
        cdef __iobuf.cIOBufQueue queue = __iobuf.cIOBufQueue(__iobuf.cacheChainLength())
        cdef cMyStruct* cpp_obj = self._cpp_obj.get()
        if proto == __Protocol.COMPACT:
            with nogil:
                serializer.CompactSerialize[cMyStruct](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.BINARY:
            with nogil:
                serializer.BinarySerialize[cMyStruct](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.JSON:
            with nogil:
                serializer.JSONSerialize[cMyStruct](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.COMPACT_JSON:
            with nogil:
                serializer.CompactJSONSerialize[cMyStruct](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        return __iobuf.from_unique_ptr(queue.move())

    cdef cuint32_t _deserialize(MyStruct self, const __iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cMyStruct]()
        cdef cMyStruct* cpp_obj = self._cpp_obj.get()
        if proto == __Protocol.COMPACT:
            with nogil:
                needed = serializer.CompactDeserialize[cMyStruct](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.BINARY:
            with nogil:
                needed = serializer.BinaryDeserialize[cMyStruct](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.JSON:
            with nogil:
                needed = serializer.JSONDeserialize[cMyStruct](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.COMPACT_JSON:
            with nogil:
                needed = serializer.CompactJSONDeserialize[cMyStruct](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        return needed

    def __reduce__(self):
        return (deserialize, (MyStruct, serialize(self)))


@__cython.auto_pickle(False)
cdef class MyDataItem(thrift.py3.types.Struct):

    def __init__(
        MyDataItem self, *
    ):
        self._cpp_obj = move(MyDataItem._make_instance(
          NULL,
          NULL,
        ))

    def __call__(
        MyDataItem self
    ):
        return self

    @staticmethod
    cdef unique_ptr[cMyDataItem] _make_instance(
        cMyDataItem* base_instance,
        bint* __isNOTSET
    ) except *:
        cdef unique_ptr[cMyDataItem] c_inst
        if base_instance:
            c_inst = make_unique[cMyDataItem](deref(base_instance))
        else:
            c_inst = make_unique[cMyDataItem]()

        if base_instance:
            # Convert None's to default value. (or unset)
            pass
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return move_unique(c_inst)

    cdef object __fbthrift_isset(self):
        cpp_obj = deref(self._cpp_obj)
        return thrift.py3.types._IsSet("MyDataItem", {
        })

    def __iter__(self):
        return iter(())

    def __bool__(self):
        return True

    @staticmethod
    cdef create(shared_ptr[cMyDataItem] cpp_obj):
        inst = <MyDataItem>MyDataItem.__new__(MyDataItem)
        inst._cpp_obj = move_shared(cpp_obj)
        return inst


    def __hash__(MyDataItem self):
        if not self.__hash:
            self.__hash = hash((
            type(self)   # Hash the class there are no fields
            ))
        return self.__hash

    def __repr__(MyDataItem self):
        return f'MyDataItem()'
    def __copy__(MyDataItem self):
        cdef shared_ptr[cMyDataItem] cpp_obj = make_shared[cMyDataItem](
            deref(self._cpp_obj)
        )
        return MyDataItem.create(move_shared(cpp_obj))

    def __richcmp__(self, other, op):
        cdef int cop = op
        if not (
                isinstance(self, MyDataItem) and
                isinstance(other, MyDataItem)):
            if cop == Py_EQ:  # different types are never equal
                return False
            elif cop == Py_NE:  # different types are always notequal
                return True
            else:
                return NotImplemented

        cdef cMyDataItem* cself = (<MyDataItem>self)._cpp_obj.get()
        cdef cMyDataItem* cother = (<MyDataItem>other)._cpp_obj.get()
        if cop == Py_EQ:
            return deref(cself) == deref(cother)
        elif cop == Py_NE:
            return deref(cself) != deref(cother)
        elif cop == Py_LT:
            return deref(cself) < deref(cother)
        elif cop == Py_LE:
            return deref(cself) <= deref(cother)
        elif cop == Py_GT:
            return deref(cself) > deref(cother)
        elif cop == Py_GE:
            return deref(cself) >= deref(cother)
        else:
            return NotImplemented

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__MyDataItem()

    cdef __iobuf.IOBuf _serialize(MyDataItem self, __Protocol proto):
        cdef __iobuf.cIOBufQueue queue = __iobuf.cIOBufQueue(__iobuf.cacheChainLength())
        cdef cMyDataItem* cpp_obj = self._cpp_obj.get()
        if proto == __Protocol.COMPACT:
            with nogil:
                serializer.CompactSerialize[cMyDataItem](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.BINARY:
            with nogil:
                serializer.BinarySerialize[cMyDataItem](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.JSON:
            with nogil:
                serializer.JSONSerialize[cMyDataItem](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.COMPACT_JSON:
            with nogil:
                serializer.CompactJSONSerialize[cMyDataItem](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        return __iobuf.from_unique_ptr(queue.move())

    cdef cuint32_t _deserialize(MyDataItem self, const __iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cMyDataItem]()
        cdef cMyDataItem* cpp_obj = self._cpp_obj.get()
        if proto == __Protocol.COMPACT:
            with nogil:
                needed = serializer.CompactDeserialize[cMyDataItem](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.BINARY:
            with nogil:
                needed = serializer.BinaryDeserialize[cMyDataItem](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.JSON:
            with nogil:
                needed = serializer.JSONDeserialize[cMyDataItem](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.COMPACT_JSON:
            with nogil:
                needed = serializer.CompactJSONDeserialize[cMyDataItem](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        return needed

    def __reduce__(self):
        return (deserialize, (MyDataItem, serialize(self)))




@__cython.auto_pickle(False)
cdef class MyUnion(thrift.py3.types.Union):
    Type = __MyUnionType

    def __init__(
        self, *,
        MyEnum myEnum=None,
        MyStruct myStruct=None,
        MyDataItem myDataItem=None
    ):
        self._cpp_obj = move(MyUnion._make_instance(
          NULL,
          myEnum,
          myStruct,
          myDataItem,
        ))
        self._load_cache()

    @staticmethod
    def fromValue(value):
        if value is None:
            return MyUnion()
        if isinstance(value, MyEnum):
            return MyUnion(myEnum=value)
        if isinstance(value, MyStruct):
            return MyUnion(myStruct=value)
        if isinstance(value, MyDataItem):
            return MyUnion(myDataItem=value)
        raise ValueError(f"Unable to derive correct union field for value: {value}")

    @staticmethod
    cdef unique_ptr[cMyUnion] _make_instance(
        cMyUnion* base_instance,
        MyEnum myEnum,
        MyStruct myStruct,
        MyDataItem myDataItem
    ) except *:
        cdef unique_ptr[cMyUnion] c_inst = make_unique[cMyUnion]()
        cdef bint any_set = False
        if myEnum is not None:
            if any_set:
                raise TypeError("At most one field may be set when initializing a union")
            deref(c_inst).set_myEnum(MyEnum_to_cpp(myEnum))
            any_set = True
        if myStruct is not None:
            if any_set:
                raise TypeError("At most one field may be set when initializing a union")
            deref(c_inst).set_myStruct(deref((<MyStruct?> myStruct)._cpp_obj))
            any_set = True
        if myDataItem is not None:
            if any_set:
                raise TypeError("At most one field may be set when initializing a union")
            deref(c_inst).set_myDataItem(deref((<MyDataItem?> myDataItem)._cpp_obj))
            any_set = True
        # in C++ you don't have to call move(), but this doesn't translate
        # into a C++ return statement, so you do here
        return move_unique(c_inst)

    def __bool__(self):
        return self.type is not __MyUnionType.EMPTY

    @staticmethod
    cdef create(shared_ptr[cMyUnion] cpp_obj):
        inst = <MyUnion>MyUnion.__new__(MyUnion)
        inst._cpp_obj = move_shared(cpp_obj)
        inst._load_cache()
        return inst

    @property
    def myEnum(self):
        if self.type.value != 1:
            raise TypeError(f'Union contains a value of type {self.type.name}, not myEnum')
        return self.value

    @property
    def myStruct(self):
        if self.type.value != 2:
            raise TypeError(f'Union contains a value of type {self.type.name}, not myStruct')
        return self.value

    @property
    def myDataItem(self):
        if self.type.value != 3:
            raise TypeError(f'Union contains a value of type {self.type.name}, not myDataItem')
        return self.value


    def __hash__(MyUnion self):
        if not self.__hash:
            self.__hash = hash((
                self.type,
                self.value,
            ))
        return self.__hash

    def __repr__(MyUnion self):
        return f'MyUnion(type={self.type.name}, value={self.value!r})'

    cdef _load_cache(MyUnion self):
        self.type = MyUnion.Type(<int>(deref(self._cpp_obj).getType()))
        cdef int type = self.type.value
        if type == 0:    # Empty
            self.value = None
        elif type == 1:
            self.value = translate_cpp_enum_to_python(MyEnum, <int>deref(self._cpp_obj).get_myEnum())
        elif type == 2:
            self.value = MyStruct.create(make_shared[cMyStruct](deref(self._cpp_obj).get_myStruct()))
        elif type == 3:
            self.value = MyDataItem.create(make_shared[cMyDataItem](deref(self._cpp_obj).get_myDataItem()))

    def get_type(MyUnion self):
        return self.type

    def __copy__(MyUnion self):
        cdef shared_ptr[cMyUnion] cpp_obj = make_shared[cMyUnion](
            deref(self._cpp_obj)
        )
        return MyUnion.create(move_shared(cpp_obj))

    def __richcmp__(self, other, op):
        cdef int cop = op
        if not (
                isinstance(self, MyUnion) and
                isinstance(other, MyUnion)):
            if cop == Py_EQ:  # different types are never equal
                return False
            elif cop == Py_NE:  # different types are always notequal
                return True
            else:
                return NotImplemented

        cdef cMyUnion* cself = (<MyUnion>self)._cpp_obj.get()
        cdef cMyUnion* cother = (<MyUnion>other)._cpp_obj.get()
        if cop == Py_EQ:
            return deref(cself) == deref(cother)
        elif cop == Py_NE:
            return deref(cself) != deref(cother)
        elif cop == Py_LT:
            return deref(cself) < deref(cother)
        elif cop == Py_LE:
            return deref(cself) <= deref(cother)
        elif cop == Py_GT:
            return deref(cself) > deref(cother)
        elif cop == Py_GE:
            return deref(cself) >= deref(cother)
        else:
            return NotImplemented

    @staticmethod
    def __get_reflection__():
        return _types_reflection.get_reflection__MyUnion()

    cdef __iobuf.IOBuf _serialize(MyUnion self, __Protocol proto):
        cdef __iobuf.cIOBufQueue queue = __iobuf.cIOBufQueue(__iobuf.cacheChainLength())
        cdef cMyUnion* cpp_obj = self._cpp_obj.get()
        if proto == __Protocol.COMPACT:
            with nogil:
                serializer.CompactSerialize[cMyUnion](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.BINARY:
            with nogil:
                serializer.BinarySerialize[cMyUnion](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.JSON:
            with nogil:
                serializer.JSONSerialize[cMyUnion](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.COMPACT_JSON:
            with nogil:
                serializer.CompactJSONSerialize[cMyUnion](deref(cpp_obj), &queue, serializer.SHARE_EXTERNAL_BUFFER)
        return __iobuf.from_unique_ptr(queue.move())

    cdef cuint32_t _deserialize(MyUnion self, const __iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cMyUnion]()
        cdef cMyUnion* cpp_obj = self._cpp_obj.get()
        if proto == __Protocol.COMPACT:
            with nogil:
                needed = serializer.CompactDeserialize[cMyUnion](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.BINARY:
            with nogil:
                needed = serializer.BinaryDeserialize[cMyUnion](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.JSON:
            with nogil:
                needed = serializer.JSONDeserialize[cMyUnion](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        elif proto == __Protocol.COMPACT_JSON:
            with nogil:
                needed = serializer.CompactJSONDeserialize[cMyUnion](buf, deref(cpp_obj), serializer.SHARE_EXTERNAL_BUFFER)
        # force a cache reload since the underlying data's changed
        self._load_cache()
        return needed

    def __reduce__(self):
        return (deserialize, (MyUnion, serialize(self)))


