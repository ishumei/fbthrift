/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_metadata_h.h>
#include <thrift/lib/thrift/gen-cpp2/metadata_types.h>
#include <thrift/compiler/test/fixtures/stream/gen-cpp2/module_types.h>

namespace apache::thrift::detail::metadata {

using ThriftMetadata = ::apache::thrift::metadata::ThriftMetadata;

template <>
class GeneratedStructMetadata<::cpp2::FooEx> {
 public:
  static void genMetadata(ThriftMetadata& metadata);
};
template <>
class GeneratedExceptionMetadata<::cpp2::FooEx> {
 public:
  static void genMetadata(ThriftMetadata& metadata);
};
} // apache::thrift::detail::metadata
