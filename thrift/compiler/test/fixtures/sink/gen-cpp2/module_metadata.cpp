/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include <thrift/lib/cpp2/gen/module_metadata_cpp.h>
#include "thrift/compiler/test/fixtures/sink/gen-cpp2/module_metadata.h"

namespace apache::thrift::detail::metadata {

using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;
using ThriftPrimitiveType = ::apache::thrift::metadata::ThriftPrimitiveType;
using ThriftType = ::apache::thrift::metadata::ThriftType;


void GeneratedStructMetadata<::cpp2::InitialResponse>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.InitialResponse", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_InitialResponse = res.first->second;
  module_InitialResponse.name = "module.InitialResponse";
  module_InitialResponse.is_union = false;
  ::apache::thrift::metadata::ThriftField module_InitialResponse_content_1;
  module_InitialResponse_content_1.id = 1;
  module_InitialResponse_content_1.name = "content";
  module_InitialResponse_content_1.is_optional = false;
  auto module_InitialResponse_content_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_InitialResponse_content_1_type->initialize(module_InitialResponse_content_1.type);
  module_InitialResponse.fields.push_back(std::move(module_InitialResponse_content_1));
}
void GeneratedStructMetadata<::cpp2::FinalResponse>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.FinalResponse", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_FinalResponse = res.first->second;
  module_FinalResponse.name = "module.FinalResponse";
  module_FinalResponse.is_union = false;
  ::apache::thrift::metadata::ThriftField module_FinalResponse_content_1;
  module_FinalResponse_content_1.id = 1;
  module_FinalResponse_content_1.name = "content";
  module_FinalResponse_content_1.is_optional = false;
  auto module_FinalResponse_content_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_FinalResponse_content_1_type->initialize(module_FinalResponse_content_1.type);
  module_FinalResponse.fields.push_back(std::move(module_FinalResponse_content_1));
}
void GeneratedStructMetadata<::cpp2::SinkPayload>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.SinkPayload", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_SinkPayload = res.first->second;
  module_SinkPayload.name = "module.SinkPayload";
  module_SinkPayload.is_union = false;
  ::apache::thrift::metadata::ThriftField module_SinkPayload_content_1;
  module_SinkPayload_content_1.id = 1;
  module_SinkPayload_content_1.name = "content";
  module_SinkPayload_content_1.is_optional = false;
  auto module_SinkPayload_content_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_SinkPayload_content_1_type->initialize(module_SinkPayload_content_1.type);
  module_SinkPayload.fields.push_back(std::move(module_SinkPayload_content_1));
}
void GeneratedStructMetadata<::cpp2::CompatibleWithKeywordSink>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.CompatibleWithKeywordSink", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_CompatibleWithKeywordSink = res.first->second;
  module_CompatibleWithKeywordSink.name = "module.CompatibleWithKeywordSink";
  module_CompatibleWithKeywordSink.is_union = false;
  ::apache::thrift::metadata::ThriftField module_CompatibleWithKeywordSink_sink_1;
  module_CompatibleWithKeywordSink_sink_1.id = 1;
  module_CompatibleWithKeywordSink_sink_1.name = "sink";
  module_CompatibleWithKeywordSink_sink_1.is_optional = false;
  auto module_CompatibleWithKeywordSink_sink_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_CompatibleWithKeywordSink_sink_1_type->initialize(module_CompatibleWithKeywordSink_sink_1.type);
  module_CompatibleWithKeywordSink.fields.push_back(std::move(module_CompatibleWithKeywordSink_sink_1));
}
void GeneratedStructMetadata<::cpp2::InitialException>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.InitialException", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_InitialException = res.first->second;
  module_InitialException.name = "module.InitialException";
  module_InitialException.is_union = false;
  ::apache::thrift::metadata::ThriftField module_InitialException_reason_1;
  module_InitialException_reason_1.id = 1;
  module_InitialException_reason_1.name = "reason";
  module_InitialException_reason_1.is_optional = false;
  auto module_InitialException_reason_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_InitialException_reason_1_type->initialize(module_InitialException_reason_1.type);
  module_InitialException.fields.push_back(std::move(module_InitialException_reason_1));
}
void GeneratedStructMetadata<::cpp2::SinkException1>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.SinkException1", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_SinkException1 = res.first->second;
  module_SinkException1.name = "module.SinkException1";
  module_SinkException1.is_union = false;
  ::apache::thrift::metadata::ThriftField module_SinkException1_reason_1;
  module_SinkException1_reason_1.id = 1;
  module_SinkException1_reason_1.name = "reason";
  module_SinkException1_reason_1.is_optional = false;
  auto module_SinkException1_reason_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_SinkException1_reason_1_type->initialize(module_SinkException1_reason_1.type);
  module_SinkException1.fields.push_back(std::move(module_SinkException1_reason_1));
}
void GeneratedStructMetadata<::cpp2::SinkException2>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.structs.emplace("module.SinkException2", ::apache::thrift::metadata::ThriftStruct{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftStruct& module_SinkException2 = res.first->second;
  module_SinkException2.name = "module.SinkException2";
  module_SinkException2.is_union = false;
  ::apache::thrift::metadata::ThriftField module_SinkException2_reason_1;
  module_SinkException2_reason_1.id = 1;
  module_SinkException2_reason_1.name = "reason";
  module_SinkException2_reason_1.is_optional = false;
  auto module_SinkException2_reason_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::I64);
  module_SinkException2_reason_1_type->initialize(module_SinkException2_reason_1.type);
  module_SinkException2.fields.push_back(std::move(module_SinkException2_reason_1));
}

void GeneratedExceptionMetadata<::cpp2::InitialException>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.exceptions.emplace("module.InitialException", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_InitialException = res.first->second;
  module_InitialException.name = "module.InitialException";
  ::apache::thrift::metadata::ThriftField module_InitialException_reason_1;
  module_InitialException_reason_1.id = 1;
  module_InitialException_reason_1.name = "reason";
  module_InitialException_reason_1.is_optional = false;
  auto module_InitialException_reason_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_InitialException_reason_1_type->initialize(module_InitialException_reason_1.type);
  module_InitialException.fields.push_back(std::move(module_InitialException_reason_1));
}
void GeneratedExceptionMetadata<::cpp2::SinkException1>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.exceptions.emplace("module.SinkException1", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_SinkException1 = res.first->second;
  module_SinkException1.name = "module.SinkException1";
  ::apache::thrift::metadata::ThriftField module_SinkException1_reason_1;
  module_SinkException1_reason_1.id = 1;
  module_SinkException1_reason_1.name = "reason";
  module_SinkException1_reason_1.is_optional = false;
  auto module_SinkException1_reason_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::STRING);
  module_SinkException1_reason_1_type->initialize(module_SinkException1_reason_1.type);
  module_SinkException1.fields.push_back(std::move(module_SinkException1_reason_1));
}
void GeneratedExceptionMetadata<::cpp2::SinkException2>::genMetadata(ThriftMetadata& metadata) {
  auto res = metadata.exceptions.emplace("module.SinkException2", ::apache::thrift::metadata::ThriftException{});
  if (!res.second) {
    return;
  }
  ::apache::thrift::metadata::ThriftException& module_SinkException2 = res.first->second;
  module_SinkException2.name = "module.SinkException2";
  ::apache::thrift::metadata::ThriftField module_SinkException2_reason_1;
  module_SinkException2_reason_1.id = 1;
  module_SinkException2_reason_1.name = "reason";
  module_SinkException2_reason_1.is_optional = false;
  auto module_SinkException2_reason_1_type = std::make_unique<Primitive>(ThriftPrimitiveType::I64);
  module_SinkException2_reason_1_type->initialize(module_SinkException2_reason_1.type);
  module_SinkException2.fields.push_back(std::move(module_SinkException2_reason_1));
}
} // apache::thrift::detail::metadata
