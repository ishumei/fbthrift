/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/py3/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/visitation/visit_by_thrift_field_metadata.h>
#include "thrift/compiler/test/fixtures/py3/gen-py3cpp/module_metadata.h"

namespace apache {
namespace thrift {
namespace detail {

template <>
struct VisitByFieldId<::py3::simple::SimpleException> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).err_code_ref());
    default:
      throwInvalidThriftId(fieldId, "::py3::simple::SimpleException");
    }
  }
};

template <>
struct VisitByFieldId<::py3::simple::OptionalRefStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).optional_blob_ref());
    default:
      throwInvalidThriftId(fieldId, "::py3::simple::OptionalRefStruct");
    }
  }
};

template <>
struct VisitByFieldId<::py3::simple::SimpleStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).is_on_ref());
    case 2:
      return f(1, static_cast<T&&>(t).tiny_int_ref());
    case 3:
      return f(2, static_cast<T&&>(t).small_int_ref());
    case 4:
      return f(3, static_cast<T&&>(t).nice_sized_int_ref());
    case 5:
      return f(4, static_cast<T&&>(t).big_int_ref());
    case 6:
      return f(5, static_cast<T&&>(t).real_ref());
    case 7:
      return f(6, static_cast<T&&>(t).smaller_real_ref());
    case 8:
      return f(7, static_cast<T&&>(t).hidden_field_ref());
    default:
      throwInvalidThriftId(fieldId, "::py3::simple::SimpleStruct");
    }
  }
};

template <>
struct VisitByFieldId<::py3::simple::HiddenTypeFieldsStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).field1_ref());
    case 2:
      return f(1, static_cast<T&&>(t).field2_ref());
    case 3:
      return f(2, static_cast<T&&>(t).field3_ref());
    default:
      throwInvalidThriftId(fieldId, "::py3::simple::HiddenTypeFieldsStruct");
    }
  }
};

template <>
struct VisitByFieldId<::py3::simple::detail::AdaptedUnion> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).best_ref());
    default:
      throwInvalidThriftId(fieldId, "::py3::simple::detail::AdaptedUnion");
    }
  }
};

template <>
struct VisitByFieldId<::py3::simple::HiddenException> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).test_ref());
    default:
      throwInvalidThriftId(fieldId, "::py3::simple::HiddenException");
    }
  }
};

template <>
struct VisitByFieldId<::py3::simple::ComplexStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).structOne_ref());
    case 2:
      return f(1, static_cast<T&&>(t).structTwo_ref());
    case 3:
      return f(2, static_cast<T&&>(t).an_integer_ref());
    case 4:
      return f(3, static_cast<T&&>(t).name_ref());
    case 5:
      return f(4, static_cast<T&&>(t).an_enum_ref());
    case 6:
      return f(5, static_cast<T&&>(t).some_bytes_ref());
    case 7:
      return f(6, static_cast<T&&>(t).from_ref());
    case 8:
      return f(7, static_cast<T&&>(t).cdef_ref());
    case 9:
      return f(8, static_cast<T&&>(t).bytes_with_cpp_type_ref());
    default:
      throwInvalidThriftId(fieldId, "::py3::simple::ComplexStruct");
    }
  }
};

template <>
struct VisitByFieldId<::py3::simple::BinaryUnion> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).iobuf_val_ref());
    default:
      throwInvalidThriftId(fieldId, "::py3::simple::BinaryUnion");
    }
  }
};

template <>
struct VisitByFieldId<::py3::simple::BinaryUnionStruct> {
  template <typename F, typename T>
  void operator()([[maybe_unused]] F&& f, int32_t fieldId, [[maybe_unused]] T&& t) const {
    switch (fieldId) {
    case 1:
      return f(0, static_cast<T&&>(t).u_ref());
    default:
      throwInvalidThriftId(fieldId, "::py3::simple::BinaryUnionStruct");
    }
  }
};
} // namespace detail
} // namespace thrift
} // namespace apache