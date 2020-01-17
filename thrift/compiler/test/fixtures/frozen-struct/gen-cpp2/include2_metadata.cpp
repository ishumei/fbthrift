/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/frozen-struct/gen-cpp2/include2_metadata.h"

namespace apache::thrift::detail::metadata {

using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;


void GeneratedStructMetadata<::some::ns::IncludedB>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("include2.IncludedB", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& include2_IncludedB = res.first->second;
  include2_IncludedB.name = "include2.IncludedB";
  include2_IncludedB.is_union = false;
  ::apache::thrift::metadata::ThriftField include2_IncludedB_i32Field_1;
  include2_IncludedB_i32Field_1.id = 1;
  include2_IncludedB_i32Field_1.name = "i32Field";
  include2_IncludedB_i32Field_1.is_optional = false;
  auto include2_IncludedB_i32Field_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::I32);
  include2_IncludedB_i32Field_1_type->initialize(include2_IncludedB_i32Field_1.type);
  include2_IncludedB.fields.push_back(std::move(include2_IncludedB_i32Field_1));
  ::apache::thrift::metadata::ThriftField include2_IncludedB_strField_2;
  include2_IncludedB_strField_2.id = 2;
  include2_IncludedB_strField_2.name = "strField";
  include2_IncludedB_strField_2.is_optional = false;
  auto include2_IncludedB_strField_2_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  include2_IncludedB_strField_2_type->initialize(include2_IncludedB_strField_2.type);
  include2_IncludedB.fields.push_back(std::move(include2_IncludedB_strField_2));
}

} // apache::thrift::detail::metadata
