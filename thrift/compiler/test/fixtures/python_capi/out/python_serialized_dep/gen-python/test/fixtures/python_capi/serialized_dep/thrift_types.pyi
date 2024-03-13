#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations


import typing as _typing

import enum

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions


class _fbthrift_compatible_with_SerializedStruct:
    pass


class SerializedStruct(_fbthrift_python_types.Struct, _fbthrift_compatible_with_SerializedStruct):
    s: _typing.Final[str] = ...
    i: _typing.Final[int] = ...
    os: _typing.Final[_typing.Optional[str]] = ...
    rs: _typing.Final[str] = ...
    def __init__(
        self, *,
        s: _typing.Optional[str]=...,
        i: _typing.Optional[int]=...,
        os: _typing.Optional[str]=...,
        rs: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        s: _typing.Optional[str]=...,
        i: _typing.Optional[int]=...,
        os: _typing.Optional[str]=...,
        rs: _typing.Optional[str]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int, str, str]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "test.fixtures.python_capi.serialized_dep.types.SerializedStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "serialized_dep.ttypes.SerializedStruct": ...  # type: ignore


class _fbthrift_compatible_with_SerializedUnion:
    pass


class SerializedUnion(_fbthrift_python_types.Union, _fbthrift_compatible_with_SerializedUnion):
    s: _typing.Final[str] = ...
    i: _typing.Final[int] = ...
    def __init__(
        self, *,
        s: _typing.Optional[str]=...,
        i: _typing.Optional[int]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: SerializedUnion.Type = ...
        s: SerializedUnion.Type = ...
        i: SerializedUnion.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, str, int]) -> SerializedUnion: ...
    value: _typing.Final[_typing.Union[None, str, int]]
    type: Type
    def get_type(self) -> Type:...
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "test.fixtures.python_capi.serialized_dep.types.SerializedUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "serialized_dep.ttypes.SerializedUnion": ...  # type: ignore


class _fbthrift_compatible_with_SerializedError:
    pass


class SerializedError(_fbthrift_python_exceptions.GeneratedError, _fbthrift_compatible_with_SerializedError):
    msg: _typing.Final[str] = ...
    os: _typing.Final[_typing.Optional[str]] = ...
    rs: _typing.Final[str] = ...
    def __init__(
        self, *,
        msg: _typing.Optional[str]=...,
        os: _typing.Optional[str]=...,
        rs: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, str, str]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "test.fixtures.python_capi.serialized_dep.types.SerializedError": ...  # type: ignore
    def _to_py_deprecated(self) -> "serialized_dep.ttypes.SerializedError": ...  # type: ignore


class _fbthrift_compatible_with_MarshalStruct:
    pass


class MarshalStruct(_fbthrift_python_types.Struct, _fbthrift_compatible_with_MarshalStruct):
    s: _typing.Final[str] = ...
    i: _typing.Final[int] = ...
    os: _typing.Final[_typing.Optional[str]] = ...
    rs: _typing.Final[str] = ...
    def __init__(
        self, *,
        s: _typing.Optional[str]=...,
        i: _typing.Optional[int]=...,
        os: _typing.Optional[str]=...,
        rs: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        s: _typing.Optional[str]=...,
        i: _typing.Optional[int]=...,
        os: _typing.Optional[str]=...,
        rs: _typing.Optional[str]=...
    ) -> _typing.Self: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, int, str, str]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "test.fixtures.python_capi.serialized_dep.types.MarshalStruct": ...  # type: ignore
    def _to_py_deprecated(self) -> "serialized_dep.ttypes.MarshalStruct": ...  # type: ignore


class _fbthrift_compatible_with_MarshalUnion:
    pass


class MarshalUnion(_fbthrift_python_types.Union, _fbthrift_compatible_with_MarshalUnion):
    s: _typing.Final[str] = ...
    i: _typing.Final[int] = ...
    def __init__(
        self, *,
        s: _typing.Optional[str]=...,
        i: _typing.Optional[int]=...
    ) -> None: ...


    class Type(enum.Enum):
        EMPTY: MarshalUnion.Type = ...
        s: MarshalUnion.Type = ...
        i: MarshalUnion.Type = ...

    @classmethod
    def fromValue(cls, value: _typing.Union[None, str, int]) -> MarshalUnion: ...
    value: _typing.Final[_typing.Union[None, str, int]]
    type: Type
    def get_type(self) -> Type:...
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "test.fixtures.python_capi.serialized_dep.types.MarshalUnion": ...  # type: ignore
    def _to_py_deprecated(self) -> "serialized_dep.ttypes.MarshalUnion": ...  # type: ignore


class _fbthrift_compatible_with_MarshalError:
    pass


class MarshalError(_fbthrift_python_exceptions.GeneratedError, _fbthrift_compatible_with_MarshalError):
    msg: _typing.Final[str] = ...
    os: _typing.Final[_typing.Optional[str]] = ...
    rs: _typing.Final[str] = ...
    def __init__(
        self, *,
        msg: _typing.Optional[str]=...,
        os: _typing.Optional[str]=...,
        rs: _typing.Optional[str]=...
    ) -> None: ...

    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, str, str]]]: ...
    def _to_python(self) -> _typing.Self: ...
    def _to_py3(self) -> "test.fixtures.python_capi.serialized_dep.types.MarshalError": ...  # type: ignore
    def _to_py_deprecated(self) -> "serialized_dep.ttypes.MarshalError": ...  # type: ignore