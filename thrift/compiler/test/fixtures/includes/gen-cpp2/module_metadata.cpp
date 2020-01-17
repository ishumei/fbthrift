/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_metadata.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_metadata.h"

namespace apache::thrift::detail::metadata {

using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;


void GeneratedStructMetadata<::cpp2::MyStruct>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.MyStruct", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_MyStruct = res.first->second;
  module_MyStruct.name = "module.MyStruct";
  module_MyStruct.is_union = false;
  ::apache::thrift::metadata::ThriftField module_MyStruct_MyIncludedField_1;
  module_MyStruct_MyIncludedField_1.id = 1;
  module_MyStruct_MyIncludedField_1.name = "MyIncludedField";
  module_MyStruct_MyIncludedField_1.is_optional = false;
  auto module_MyStruct_MyIncludedField_1_type = std::make_unique<Struct< ::cpp2::Included>>("includes.Included", metadata);
  module_MyStruct_MyIncludedField_1_type->initialize(module_MyStruct_MyIncludedField_1.type);
  module_MyStruct.fields.push_back(std::move(module_MyStruct_MyIncludedField_1));
  ::apache::thrift::metadata::ThriftField module_MyStruct_MyOtherIncludedField_2;
  module_MyStruct_MyOtherIncludedField_2.id = 2;
  module_MyStruct_MyOtherIncludedField_2.name = "MyOtherIncludedField";
  module_MyStruct_MyOtherIncludedField_2.is_optional = false;
  auto module_MyStruct_MyOtherIncludedField_2_type = std::make_unique<Struct< ::cpp2::Included>>("includes.Included", metadata);
  module_MyStruct_MyOtherIncludedField_2_type->initialize(module_MyStruct_MyOtherIncludedField_2.type);
  module_MyStruct.fields.push_back(std::move(module_MyStruct_MyOtherIncludedField_2));
  ::apache::thrift::metadata::ThriftField module_MyStruct_MyIncludedInt_3;
  module_MyStruct_MyIncludedInt_3.id = 3;
  module_MyStruct_MyIncludedInt_3.name = "MyIncludedInt";
  module_MyStruct_MyIncludedInt_3.is_optional = false;
  auto module_MyStruct_MyIncludedInt_3_type = std::make_unique<Typedef>("includes.IncludedInt64", std::make_unique<Primitive>(ThriftPrimitiveType::I64));
  module_MyStruct_MyIncludedInt_3_type->initialize(module_MyStruct_MyIncludedInt_3.type);
  module_MyStruct.fields.push_back(std::move(module_MyStruct_MyIncludedInt_3));
}

} // apache::thrift::detail::metadata
