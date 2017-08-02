/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "src/gen-cpp2/include1_types.h"

#include "src/gen-cpp2/include1_types.tcc"

#include <algorithm>

#include <folly/Indestructible.h>

#include "src/gen-cpp2/include1_data.h"



namespace some { namespace ns {

void IncludedA::__clear() {
  // clear all fields
  i32Field = 0;
  strField = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  __isset.__clear();
}

bool IncludedA::operator==(const IncludedA& rhs) const {
  if (!((i32Field == rhs.i32Field))) {
    return false;
  }
  if (!((strField == rhs.strField))) {
    return false;
  }
  return true;
}

void swap(IncludedA& a, IncludedA& b) {
  using ::std::swap;
  swap(a.i32Field, b.i32Field);
  swap(a.strField, b.strField);
  swap(a.__isset, b.__isset);
}

template uint32_t IncludedA::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t IncludedA::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t IncludedA::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t IncludedA::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t IncludedA::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t IncludedA::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t IncludedA::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t IncludedA::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}} // some::ns
namespace apache { namespace thrift {

}} // apache::thrift
namespace some { namespace ns {

}} // some::ns