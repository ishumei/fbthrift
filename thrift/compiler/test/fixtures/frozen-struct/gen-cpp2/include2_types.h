/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <folly/io/Cursor.h>
#include <folly/io/IOBuf.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>


// BEGIN declare_enums

// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace some { namespace ns {
class IncludedB;
}} // some::ns
// END forward_declare
// BEGIN typedefs

// END typedefs
namespace some { namespace ns {
class IncludedB : private apache::thrift::detail::st::ComparisonOperators<IncludedB> {
 public:

  IncludedB() :
      i32Field(0) {}
  // FragileConstructor for use in initialization lists only

  IncludedB(apache::thrift::FragileConstructor, int32_t i32Field__arg, std::string strField__arg) :
      i32Field(std::move(i32Field__arg)),
      strField(std::move(strField__arg)) {
    __isset.i32Field = true;
    __isset.strField = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  IncludedB(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    IncludedB(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    i32Field = arg.move();
    __isset.i32Field = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  IncludedB(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    IncludedB(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    strField = arg.move();
    __isset.strField = true;
  }

  IncludedB(IncludedB&&) = default;

  IncludedB(const IncludedB&) = default;

  IncludedB& operator=(IncludedB&&) = default;

  IncludedB& operator=(const IncludedB&) = default;
  void __clear();

  virtual ~IncludedB() {}

  int32_t i32Field;
  std::string strField;

  struct __isset {
    void __clear() {
      i32Field = false;
      strField = false;
    }

    bool i32Field = false;
    bool strField = false;
  } __isset;
  bool operator==(const IncludedB& rhs) const;

  bool operator < (const IncludedB& rhs) const {
    if (!(i32Field == rhs.i32Field)) {
      return i32Field < rhs.i32Field;
    }
    if (!(strField == rhs.strField)) {
      return strField < rhs.strField;
    }
    (void)rhs;
    return false;
  }

  int32_t get_i32Field() const {
    return i32Field;
  }

  int32_t& set_i32Field(int32_t i32Field_) {
    i32Field = i32Field_;
    __isset.i32Field = true;
    return i32Field;
  }

  const std::string& get_strField() const& {
    return strField;
  }

  std::string get_strField() && {
    return std::move(strField);
  }

  template <typename T_IncludedB_strField_struct_setter>
  std::string& set_strField(T_IncludedB_strField_struct_setter&& strField_) {
    strField = std::forward<T_IncludedB_strField_struct_setter>(strField_);
    __isset.strField = true;
    return strField;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  static void translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype);
};

void swap(IncludedB& a, IncludedB& b);
extern template uint32_t IncludedB::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t IncludedB::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t IncludedB::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t IncludedB::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t IncludedB::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t IncludedB::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t IncludedB::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t IncludedB::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::some::ns::IncludedB>::clear( ::some::ns::IncludedB* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::some::ns::IncludedB>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::IncludedB>::write(Protocol* proto,  ::some::ns::IncludedB const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::IncludedB>::read(Protocol* proto,  ::some::ns::IncludedB* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::IncludedB>::serializedSize(Protocol const* proto,  ::some::ns::IncludedB const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::some::ns::IncludedB>::serializedSizeZC(Protocol const* proto,  ::some::ns::IncludedB const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
