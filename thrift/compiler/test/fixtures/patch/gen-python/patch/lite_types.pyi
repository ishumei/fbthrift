#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_py3lite_types
import thrift.python.exceptions as _fbthrift_py3lite_exceptions

import facebook.thrift.annotation.scope.lite_types

import facebook.thrift.annotation.thrift.lite_types


class GeneratePatch(_fbthrift_py3lite_types.Struct):
    def __init__(
        self,
    ) -> None: ...

    def __call__(
        self,
    ) -> GeneratePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...


class GenerateOptionalPatch(_fbthrift_py3lite_types.Struct):
    def __init__(
        self,
    ) -> None: ...

    def __call__(
        self,
    ) -> GenerateOptionalPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[None]]]: ...


class BoolPatch(_fbthrift_py3lite_types.Struct):
    assign: _typing.Final[_typing.Optional[bool]] = ...
    invert: _typing.Final[_typing.Optional[bool]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[bool]=...,
        invert: _typing.Optional[bool]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[bool]=...,
        invert: _typing.Optional[bool]=...
    ) -> BoolPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, bool]]]: ...


class BytePatch(_fbthrift_py3lite_types.Struct):
    assign: _typing.Final[_typing.Optional[int]] = ...
    add: _typing.Final[_typing.Optional[int]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[int]=...,
        add: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[int]=...,
        add: _typing.Optional[int]=...
    ) -> BytePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int]]]: ...


class I16Patch(_fbthrift_py3lite_types.Struct):
    assign: _typing.Final[_typing.Optional[int]] = ...
    add: _typing.Final[_typing.Optional[int]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[int]=...,
        add: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[int]=...,
        add: _typing.Optional[int]=...
    ) -> I16Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int]]]: ...


class I32Patch(_fbthrift_py3lite_types.Struct):
    assign: _typing.Final[_typing.Optional[int]] = ...
    add: _typing.Final[_typing.Optional[int]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[int]=...,
        add: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[int]=...,
        add: _typing.Optional[int]=...
    ) -> I32Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int]]]: ...


class I64Patch(_fbthrift_py3lite_types.Struct):
    assign: _typing.Final[_typing.Optional[int]] = ...
    add: _typing.Final[_typing.Optional[int]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[int]=...,
        add: _typing.Optional[int]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[int]=...,
        add: _typing.Optional[int]=...
    ) -> I64Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, int]]]: ...


class FloatPatch(_fbthrift_py3lite_types.Struct):
    assign: _typing.Final[_typing.Optional[float]] = ...
    add: _typing.Final[_typing.Optional[float]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[float]=...,
        add: _typing.Optional[float]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[float]=...,
        add: _typing.Optional[float]=...
    ) -> FloatPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[float, float]]]: ...


class DoublePatch(_fbthrift_py3lite_types.Struct):
    assign: _typing.Final[_typing.Optional[float]] = ...
    add: _typing.Final[_typing.Optional[float]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[float]=...,
        add: _typing.Optional[float]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[float]=...,
        add: _typing.Optional[float]=...
    ) -> DoublePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[float, float]]]: ...


class StringPatch(_fbthrift_py3lite_types.Struct):
    assign: _typing.Final[_typing.Optional[str]] = ...
    clear: _typing.Final[_typing.Optional[bool]] = ...
    prepend: _typing.Final[_typing.Optional[str]] = ...
    append: _typing.Final[_typing.Optional[str]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[str]=...,
        clear: _typing.Optional[bool]=...,
        prepend: _typing.Optional[str]=...,
        append: _typing.Optional[str]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[str]=...,
        clear: _typing.Optional[bool]=...,
        prepend: _typing.Optional[str]=...,
        append: _typing.Optional[str]=...
    ) -> StringPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[str, bool, str, str]]]: ...


class BinaryPatch(_fbthrift_py3lite_types.Struct):
    assign: _typing.Final[_typing.Optional[bytes]] = ...
    def __init__(
        self, *,
        assign: _typing.Optional[bytes]=...
    ) -> None: ...

    def __call__(
        self, *,
        assign: _typing.Optional[bytes]=...
    ) -> BinaryPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bytes]]]: ...


class OptionalBoolPatch(_fbthrift_py3lite_types.Struct):
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[BoolPatch]] = ...
    ensure: _typing.Final[_typing.Optional[bool]] = ...
    patchAfter: _typing.Final[_typing.Optional[BoolPatch]] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[BoolPatch]=...,
        ensure: _typing.Optional[bool]=...,
        patchAfter: _typing.Optional[BoolPatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[BoolPatch]=...,
        ensure: _typing.Optional[bool]=...,
        patchAfter: _typing.Optional[BoolPatch]=...
    ) -> OptionalBoolPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, BoolPatch, bool, BoolPatch]]]: ...


class OptionalBytePatch(_fbthrift_py3lite_types.Struct):
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[BytePatch]] = ...
    ensure: _typing.Final[_typing.Optional[int]] = ...
    patchAfter: _typing.Final[_typing.Optional[BytePatch]] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[BytePatch]=...,
        ensure: _typing.Optional[int]=...,
        patchAfter: _typing.Optional[BytePatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[BytePatch]=...,
        ensure: _typing.Optional[int]=...,
        patchAfter: _typing.Optional[BytePatch]=...
    ) -> OptionalBytePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, BytePatch, int, BytePatch]]]: ...


class OptionalI16Patch(_fbthrift_py3lite_types.Struct):
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[I16Patch]] = ...
    ensure: _typing.Final[_typing.Optional[int]] = ...
    patchAfter: _typing.Final[_typing.Optional[I16Patch]] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[I16Patch]=...,
        ensure: _typing.Optional[int]=...,
        patchAfter: _typing.Optional[I16Patch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[I16Patch]=...,
        ensure: _typing.Optional[int]=...,
        patchAfter: _typing.Optional[I16Patch]=...
    ) -> OptionalI16Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, I16Patch, int, I16Patch]]]: ...


class OptionalI32Patch(_fbthrift_py3lite_types.Struct):
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[I32Patch]] = ...
    ensure: _typing.Final[_typing.Optional[int]] = ...
    patchAfter: _typing.Final[_typing.Optional[I32Patch]] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[I32Patch]=...,
        ensure: _typing.Optional[int]=...,
        patchAfter: _typing.Optional[I32Patch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[I32Patch]=...,
        ensure: _typing.Optional[int]=...,
        patchAfter: _typing.Optional[I32Patch]=...
    ) -> OptionalI32Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, I32Patch, int, I32Patch]]]: ...


class OptionalI64Patch(_fbthrift_py3lite_types.Struct):
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[I64Patch]] = ...
    ensure: _typing.Final[_typing.Optional[int]] = ...
    patchAfter: _typing.Final[_typing.Optional[I64Patch]] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[I64Patch]=...,
        ensure: _typing.Optional[int]=...,
        patchAfter: _typing.Optional[I64Patch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[I64Patch]=...,
        ensure: _typing.Optional[int]=...,
        patchAfter: _typing.Optional[I64Patch]=...
    ) -> OptionalI64Patch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, I64Patch, int, I64Patch]]]: ...


class OptionalFloatPatch(_fbthrift_py3lite_types.Struct):
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[FloatPatch]] = ...
    ensure: _typing.Final[_typing.Optional[float]] = ...
    patchAfter: _typing.Final[_typing.Optional[FloatPatch]] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[FloatPatch]=...,
        ensure: _typing.Optional[float]=...,
        patchAfter: _typing.Optional[FloatPatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[FloatPatch]=...,
        ensure: _typing.Optional[float]=...,
        patchAfter: _typing.Optional[FloatPatch]=...
    ) -> OptionalFloatPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, FloatPatch, float, FloatPatch]]]: ...


class OptionalDoublePatch(_fbthrift_py3lite_types.Struct):
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[DoublePatch]] = ...
    ensure: _typing.Final[_typing.Optional[float]] = ...
    patchAfter: _typing.Final[_typing.Optional[DoublePatch]] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[DoublePatch]=...,
        ensure: _typing.Optional[float]=...,
        patchAfter: _typing.Optional[DoublePatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[DoublePatch]=...,
        ensure: _typing.Optional[float]=...,
        patchAfter: _typing.Optional[DoublePatch]=...
    ) -> OptionalDoublePatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, DoublePatch, float, DoublePatch]]]: ...


class OptionalStringPatch(_fbthrift_py3lite_types.Struct):
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[StringPatch]] = ...
    ensure: _typing.Final[_typing.Optional[str]] = ...
    patchAfter: _typing.Final[_typing.Optional[StringPatch]] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[StringPatch]=...,
        ensure: _typing.Optional[str]=...,
        patchAfter: _typing.Optional[StringPatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[StringPatch]=...,
        ensure: _typing.Optional[str]=...,
        patchAfter: _typing.Optional[StringPatch]=...
    ) -> OptionalStringPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, StringPatch, str, StringPatch]]]: ...


class OptionalBinaryPatch(_fbthrift_py3lite_types.Struct):
    clear: _typing.Final[_typing.Optional[bool]] = ...
    patch: _typing.Final[_typing.Optional[BinaryPatch]] = ...
    ensure: _typing.Final[_typing.Optional[bytes]] = ...
    patchAfter: _typing.Final[_typing.Optional[BinaryPatch]] = ...
    def __init__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[BinaryPatch]=...,
        ensure: _typing.Optional[bytes]=...,
        patchAfter: _typing.Optional[BinaryPatch]=...
    ) -> None: ...

    def __call__(
        self, *,
        clear: _typing.Optional[bool]=...,
        patch: _typing.Optional[BinaryPatch]=...,
        ensure: _typing.Optional[bytes]=...,
        patchAfter: _typing.Optional[BinaryPatch]=...
    ) -> OptionalBinaryPatch: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[bool, BinaryPatch, bytes, BinaryPatch]]]: ...
