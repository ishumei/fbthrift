/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/extra_services_metadata.h"
#include "thrift/compiler/test/fixtures/mcpp2-compare/gen-cpp2/module_metadata.h"

namespace apache::thrift::detail::metadata {

using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;


void GeneratedStructMetadata<::extra::svc::containerStruct2>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("extra_services.containerStruct2", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& extra_services_containerStruct2 = res.first->second;
  extra_services_containerStruct2.name = "extra_services.containerStruct2";
  extra_services_containerStruct2.is_union = false;
  ::apache::thrift::metadata::ThriftField extra_services_containerStruct2_fieldA_1;
  extra_services_containerStruct2_fieldA_1.id = 1;
  extra_services_containerStruct2_fieldA_1.name = "fieldA";
  extra_services_containerStruct2_fieldA_1.is_optional = false;
  auto extra_services_containerStruct2_fieldA_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::BOOL);
  extra_services_containerStruct2_fieldA_1_type->initialize(extra_services_containerStruct2_fieldA_1.type);
  extra_services_containerStruct2.fields.push_back(std::move(extra_services_containerStruct2_fieldA_1));
  ::apache::thrift::metadata::ThriftField extra_services_containerStruct2_req_fieldA_101;
  extra_services_containerStruct2_req_fieldA_101.id = 101;
  extra_services_containerStruct2_req_fieldA_101.name = "req_fieldA";
  extra_services_containerStruct2_req_fieldA_101.is_optional = false;
  auto extra_services_containerStruct2_req_fieldA_101_type = std::make_unique<Primitive>(ThriftPrimitiveType::BOOL);
  extra_services_containerStruct2_req_fieldA_101_type->initialize(extra_services_containerStruct2_req_fieldA_101.type);
  extra_services_containerStruct2.fields.push_back(std::move(extra_services_containerStruct2_req_fieldA_101));
  ::apache::thrift::metadata::ThriftField extra_services_containerStruct2_opt_fieldA_201;
  extra_services_containerStruct2_opt_fieldA_201.id = 201;
  extra_services_containerStruct2_opt_fieldA_201.name = "opt_fieldA";
  extra_services_containerStruct2_opt_fieldA_201.is_optional = true;
  auto extra_services_containerStruct2_opt_fieldA_201_type = std::make_unique<Primitive>(ThriftPrimitiveType::BOOL);
  extra_services_containerStruct2_opt_fieldA_201_type->initialize(extra_services_containerStruct2_opt_fieldA_201.type);
  extra_services_containerStruct2.fields.push_back(std::move(extra_services_containerStruct2_opt_fieldA_201));
  ::apache::thrift::metadata::ThriftField extra_services_containerStruct2_fieldB_2;
  extra_services_containerStruct2_fieldB_2.id = 2;
  extra_services_containerStruct2_fieldB_2.name = "fieldB";
  extra_services_containerStruct2_fieldB_2.is_optional = false;
  auto extra_services_containerStruct2_fieldB_2_type = std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::STRING), std::make_unique<Primitive>(ThriftPrimitiveType::BOOL));
  extra_services_containerStruct2_fieldB_2_type->initialize(extra_services_containerStruct2_fieldB_2.type);
  extra_services_containerStruct2.fields.push_back(std::move(extra_services_containerStruct2_fieldB_2));
  ::apache::thrift::metadata::ThriftField extra_services_containerStruct2_req_fieldB_102;
  extra_services_containerStruct2_req_fieldB_102.id = 102;
  extra_services_containerStruct2_req_fieldB_102.name = "req_fieldB";
  extra_services_containerStruct2_req_fieldB_102.is_optional = false;
  auto extra_services_containerStruct2_req_fieldB_102_type = std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::STRING), std::make_unique<Primitive>(ThriftPrimitiveType::BOOL));
  extra_services_containerStruct2_req_fieldB_102_type->initialize(extra_services_containerStruct2_req_fieldB_102.type);
  extra_services_containerStruct2.fields.push_back(std::move(extra_services_containerStruct2_req_fieldB_102));
  ::apache::thrift::metadata::ThriftField extra_services_containerStruct2_opt_fieldB_202;
  extra_services_containerStruct2_opt_fieldB_202.id = 202;
  extra_services_containerStruct2_opt_fieldB_202.name = "opt_fieldB";
  extra_services_containerStruct2_opt_fieldB_202.is_optional = true;
  auto extra_services_containerStruct2_opt_fieldB_202_type = std::make_unique<Map>(std::make_unique<Primitive>(ThriftPrimitiveType::STRING), std::make_unique<Primitive>(ThriftPrimitiveType::BOOL));
  extra_services_containerStruct2_opt_fieldB_202_type->initialize(extra_services_containerStruct2_opt_fieldB_202.type);
  extra_services_containerStruct2.fields.push_back(std::move(extra_services_containerStruct2_opt_fieldB_202));
  ::apache::thrift::metadata::ThriftField extra_services_containerStruct2_fieldC_3;
  extra_services_containerStruct2_fieldC_3.id = 3;
  extra_services_containerStruct2_fieldC_3.name = "fieldC";
  extra_services_containerStruct2_fieldC_3.is_optional = false;
  auto extra_services_containerStruct2_fieldC_3_type = std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::I32));
  extra_services_containerStruct2_fieldC_3_type->initialize(extra_services_containerStruct2_fieldC_3.type);
  extra_services_containerStruct2.fields.push_back(std::move(extra_services_containerStruct2_fieldC_3));
  ::apache::thrift::metadata::ThriftField extra_services_containerStruct2_req_fieldC_103;
  extra_services_containerStruct2_req_fieldC_103.id = 103;
  extra_services_containerStruct2_req_fieldC_103.name = "req_fieldC";
  extra_services_containerStruct2_req_fieldC_103.is_optional = false;
  auto extra_services_containerStruct2_req_fieldC_103_type = std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::I32));
  extra_services_containerStruct2_req_fieldC_103_type->initialize(extra_services_containerStruct2_req_fieldC_103.type);
  extra_services_containerStruct2.fields.push_back(std::move(extra_services_containerStruct2_req_fieldC_103));
  ::apache::thrift::metadata::ThriftField extra_services_containerStruct2_opt_fieldC_203;
  extra_services_containerStruct2_opt_fieldC_203.id = 203;
  extra_services_containerStruct2_opt_fieldC_203.name = "opt_fieldC";
  extra_services_containerStruct2_opt_fieldC_203.is_optional = true;
  auto extra_services_containerStruct2_opt_fieldC_203_type = std::make_unique<Set>(std::make_unique<Primitive>(ThriftPrimitiveType::I32));
  extra_services_containerStruct2_opt_fieldC_203_type->initialize(extra_services_containerStruct2_opt_fieldC_203.type);
  extra_services_containerStruct2.fields.push_back(std::move(extra_services_containerStruct2_opt_fieldC_203));
  ::apache::thrift::metadata::ThriftField extra_services_containerStruct2_fieldD_4;
  extra_services_containerStruct2_fieldD_4.id = 4;
  extra_services_containerStruct2_fieldD_4.name = "fieldD";
  extra_services_containerStruct2_fieldD_4.is_optional = false;
  auto extra_services_containerStruct2_fieldD_4_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  extra_services_containerStruct2_fieldD_4_type->initialize(extra_services_containerStruct2_fieldD_4.type);
  extra_services_containerStruct2.fields.push_back(std::move(extra_services_containerStruct2_fieldD_4));
  ::apache::thrift::metadata::ThriftField extra_services_containerStruct2_fieldE_5;
  extra_services_containerStruct2_fieldE_5.id = 5;
  extra_services_containerStruct2_fieldE_5.name = "fieldE";
  extra_services_containerStruct2_fieldE_5.is_optional = false;
  auto extra_services_containerStruct2_fieldE_5_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  extra_services_containerStruct2_fieldE_5_type->initialize(extra_services_containerStruct2_fieldE_5.type);
  extra_services_containerStruct2.fields.push_back(std::move(extra_services_containerStruct2_fieldE_5));
  ::apache::thrift::metadata::ThriftField extra_services_containerStruct2_req_fieldE_105;
  extra_services_containerStruct2_req_fieldE_105.id = 105;
  extra_services_containerStruct2_req_fieldE_105.name = "req_fieldE";
  extra_services_containerStruct2_req_fieldE_105.is_optional = false;
  auto extra_services_containerStruct2_req_fieldE_105_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  extra_services_containerStruct2_req_fieldE_105_type->initialize(extra_services_containerStruct2_req_fieldE_105.type);
  extra_services_containerStruct2.fields.push_back(std::move(extra_services_containerStruct2_req_fieldE_105));
  ::apache::thrift::metadata::ThriftField extra_services_containerStruct2_opt_fieldE_205;
  extra_services_containerStruct2_opt_fieldE_205.id = 205;
  extra_services_containerStruct2_opt_fieldE_205.name = "opt_fieldE";
  extra_services_containerStruct2_opt_fieldE_205.is_optional = true;
  auto extra_services_containerStruct2_opt_fieldE_205_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  extra_services_containerStruct2_opt_fieldE_205_type->initialize(extra_services_containerStruct2_opt_fieldE_205.type);
  extra_services_containerStruct2.fields.push_back(std::move(extra_services_containerStruct2_opt_fieldE_205));
}

} // apache::thrift::detail::metadata
