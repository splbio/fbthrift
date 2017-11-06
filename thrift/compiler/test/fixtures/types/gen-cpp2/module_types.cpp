/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "src/gen-cpp2/module_types.h"
#include "src/gen-cpp2/module_types.tcc"

#include <algorithm>
#include <folly/Indestructible.h>

#include "src/gen-cpp2/module_data.h"

namespace apache { namespace thrift { namespace fixtures { namespace types {

const _has_bitwise_ops_EnumMapFactory::ValuesToNamesMapType _has_bitwise_ops_VALUES_TO_NAMES = _has_bitwise_ops_EnumMapFactory::makeValuesToNamesMap();
const _has_bitwise_ops_EnumMapFactory::NamesToValuesMapType _has_bitwise_ops_NAMES_TO_VALUES = _has_bitwise_ops_EnumMapFactory::makeNamesToValuesMap();

}}}} // apache::thrift::fixtures::types
namespace std {

} // std
namespace apache { namespace thrift {

template <> const std::size_t TEnumTraits< ::apache::thrift::fixtures::types::has_bitwise_ops>::size = 5;
template <> const folly::Range<const  ::apache::thrift::fixtures::types::has_bitwise_ops*> TEnumTraits< ::apache::thrift::fixtures::types::has_bitwise_ops>::values = folly::range( ::apache::thrift::fixtures::types::_has_bitwise_opsEnumDataStorage::values);
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::apache::thrift::fixtures::types::has_bitwise_ops>::names = folly::range( ::apache::thrift::fixtures::types::_has_bitwise_opsEnumDataStorage::names);
template <> const char* TEnumTraits< ::apache::thrift::fixtures::types::has_bitwise_ops>::findName( ::apache::thrift::fixtures::types::has_bitwise_ops value) {
  static auto const map = folly::Indestructible< ::apache::thrift::fixtures::types::_has_bitwise_ops_EnumMapFactory::ValuesToNamesMapType>{ ::apache::thrift::fixtures::types::_has_bitwise_ops_EnumMapFactory::makeValuesToNamesMap()};
  return findName(*map, value);
}

template <> bool TEnumTraits< ::apache::thrift::fixtures::types::has_bitwise_ops>::findValue(const char* name,  ::apache::thrift::fixtures::types::has_bitwise_ops* outValue) {
  static auto const map = folly::Indestructible< ::apache::thrift::fixtures::types::_has_bitwise_ops_EnumMapFactory::NamesToValuesMapType>{ ::apache::thrift::fixtures::types::_has_bitwise_ops_EnumMapFactory::makeNamesToValuesMap()};
  return findValue(*map, name, outValue);
}

}} // apache::thrift
namespace apache { namespace thrift { namespace fixtures { namespace types {

const _is_unscoped_EnumMapFactory::ValuesToNamesMapType _is_unscoped_VALUES_TO_NAMES = _is_unscoped_EnumMapFactory::makeValuesToNamesMap();
const _is_unscoped_EnumMapFactory::NamesToValuesMapType _is_unscoped_NAMES_TO_VALUES = _is_unscoped_EnumMapFactory::makeNamesToValuesMap();

}}}} // apache::thrift::fixtures::types
namespace std {

} // std
namespace apache { namespace thrift {

template <> const std::size_t TEnumTraits< ::apache::thrift::fixtures::types::is_unscoped>::size = 2;
template <> const folly::Range<const  ::apache::thrift::fixtures::types::is_unscoped*> TEnumTraits< ::apache::thrift::fixtures::types::is_unscoped>::values = folly::range( ::apache::thrift::fixtures::types::_is_unscopedEnumDataStorage::values);
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::apache::thrift::fixtures::types::is_unscoped>::names = folly::range( ::apache::thrift::fixtures::types::_is_unscopedEnumDataStorage::names);
template <> const char* TEnumTraits< ::apache::thrift::fixtures::types::is_unscoped>::findName( ::apache::thrift::fixtures::types::is_unscoped value) {
  static auto const map = folly::Indestructible< ::apache::thrift::fixtures::types::_is_unscoped_EnumMapFactory::ValuesToNamesMapType>{ ::apache::thrift::fixtures::types::_is_unscoped_EnumMapFactory::makeValuesToNamesMap()};
  return findName(*map, value);
}

template <> bool TEnumTraits< ::apache::thrift::fixtures::types::is_unscoped>::findValue(const char* name,  ::apache::thrift::fixtures::types::is_unscoped* outValue) {
  static auto const map = folly::Indestructible< ::apache::thrift::fixtures::types::_is_unscoped_EnumMapFactory::NamesToValuesMapType>{ ::apache::thrift::fixtures::types::_is_unscoped_EnumMapFactory::makeNamesToValuesMap()};
  return findValue(*map, name, outValue);
}

}} // apache::thrift
namespace apache { namespace thrift { namespace fixtures { namespace types {

void decorated_struct::__clear() {
  // clear all fields
  field = apache::thrift::StringTraits< std::string>::fromStringLiteral("");
  __isset.__clear();
}

bool decorated_struct::operator==(const decorated_struct& rhs) const {
  if (!((field == rhs.field))) {
    return false;
  }
  return true;
}

void decorated_struct::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "field") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRING;
  }
}

void swap(decorated_struct& a, decorated_struct& b) {
  using ::std::swap;
  swap(a.field, b.field);
  swap(a.__isset, b.__isset);
}

template uint32_t decorated_struct::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t decorated_struct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t decorated_struct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t decorated_struct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t decorated_struct::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t decorated_struct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t decorated_struct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t decorated_struct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}}} // apache::thrift::fixtures::types
namespace apache { namespace thrift { namespace fixtures { namespace types {

void ContainerStruct::__clear() {
  // clear all fields
  fieldA.clear();
  fieldB.clear();
  fieldC.clear();
  fieldD.clear();
  fieldE.clear();
  fieldF.clear();
  fieldG.clear();
  fieldH.clear();
  __isset.__clear();
}

bool ContainerStruct::operator==(const ContainerStruct& rhs) const {
  if (!((fieldA == rhs.fieldA))) {
    return false;
  }
  if (!((fieldB == rhs.fieldB))) {
    return false;
  }
  if (!((fieldC == rhs.fieldC))) {
    return false;
  }
  if (!((fieldD == rhs.fieldD))) {
    return false;
  }
  if (!((fieldE == rhs.fieldE))) {
    return false;
  }
  if (!((fieldF == rhs.fieldF))) {
    return false;
  }
  if (!((fieldG == rhs.fieldG))) {
    return false;
  }
  if (!((fieldH == rhs.fieldH))) {
    return false;
  }
  return true;
}

const std::vector<int32_t>& ContainerStruct::get_fieldA() const& {
  return fieldA;
}

std::vector<int32_t> ContainerStruct::get_fieldA() && {
  return std::move(fieldA);
}

const std::list<int32_t>& ContainerStruct::get_fieldB() const& {
  return fieldB;
}

std::list<int32_t> ContainerStruct::get_fieldB() && {
  return std::move(fieldB);
}

const std::deque<int32_t>& ContainerStruct::get_fieldC() const& {
  return fieldC;
}

std::deque<int32_t> ContainerStruct::get_fieldC() && {
  return std::move(fieldC);
}

const folly::fbvector<int32_t>& ContainerStruct::get_fieldD() const& {
  return fieldD;
}

folly::fbvector<int32_t> ContainerStruct::get_fieldD() && {
  return std::move(fieldD);
}

const folly::small_vector<int32_t>& ContainerStruct::get_fieldE() const& {
  return fieldE;
}

folly::small_vector<int32_t> ContainerStruct::get_fieldE() && {
  return std::move(fieldE);
}

const folly::sorted_vector_set<int32_t>& ContainerStruct::get_fieldF() const& {
  return fieldF;
}

folly::sorted_vector_set<int32_t> ContainerStruct::get_fieldF() && {
  return std::move(fieldF);
}

const folly::sorted_vector_map<int32_t, std::string>& ContainerStruct::get_fieldG() const& {
  return fieldG;
}

folly::sorted_vector_map<int32_t, std::string> ContainerStruct::get_fieldG() && {
  return std::move(fieldG);
}

const  ::apache::thrift::fixtures::types::SomeMap& ContainerStruct::get_fieldH() const& {
  return fieldH;
}

 ::apache::thrift::fixtures::types::SomeMap ContainerStruct::get_fieldH() && {
  return std::move(fieldH);
}

void ContainerStruct::translateFieldName(FOLLY_MAYBE_UNUSED folly::StringPiece _fname, FOLLY_MAYBE_UNUSED int16_t& fid, FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "fieldA") {
    fid = 12;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "fieldB") {
    fid = 2;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "fieldC") {
    fid = 3;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "fieldD") {
    fid = 4;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "fieldE") {
    fid = 5;
    _ftype = apache::thrift::protocol::T_LIST;
  }
  else if (_fname == "fieldF") {
    fid = 6;
    _ftype = apache::thrift::protocol::T_SET;
  }
  else if (_fname == "fieldG") {
    fid = 7;
    _ftype = apache::thrift::protocol::T_MAP;
  }
  else if (_fname == "fieldH") {
    fid = 8;
    _ftype = apache::thrift::protocol::T_MAP;
  }
}

void swap(ContainerStruct& a, ContainerStruct& b) {
  using ::std::swap;
  swap(a.fieldA, b.fieldA);
  swap(a.fieldB, b.fieldB);
  swap(a.fieldC, b.fieldC);
  swap(a.fieldD, b.fieldD);
  swap(a.fieldE, b.fieldE);
  swap(a.fieldF, b.fieldF);
  swap(a.fieldG, b.fieldG);
  swap(a.fieldH, b.fieldH);
  swap(a.__isset, b.__isset);
}

template uint32_t ContainerStruct::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ContainerStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ContainerStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ContainerStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ContainerStruct::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t ContainerStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ContainerStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ContainerStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

}}}} // apache::thrift::fixtures::types
