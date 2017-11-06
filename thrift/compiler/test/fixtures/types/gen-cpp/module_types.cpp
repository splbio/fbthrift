/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/types/gen-cpp/module_types.h"
#include "thrift/compiler/test/fixtures/types/gen-cpp/module_data.h"

#include "thrift/compiler/test/fixtures/types/gen-cpp/module_reflection.h"

#include <algorithm>
#include <string.h>

#include <folly/Indestructible.h>

namespace apache { namespace thrift { namespace fixtures { namespace types {

const typename _has_bitwise_ops_EnumMapFactory::ValuesToNamesMapType _has_bitwise_ops_VALUES_TO_NAMES = _has_bitwise_ops_EnumMapFactory::makeValuesToNamesMap();

const typename _has_bitwise_ops_EnumMapFactory::NamesToValuesMapType _has_bitwise_ops_NAMES_TO_VALUES = _has_bitwise_ops_EnumMapFactory::makeNamesToValuesMap();

}}}} // namespace
namespace apache { namespace thrift {
template <>const std::size_t TEnumTraits< ::apache::thrift::fixtures::types::has_bitwise_ops>::size = 5;
template <>const folly::Range<const  ::apache::thrift::fixtures::types::has_bitwise_ops*> TEnumTraits< ::apache::thrift::fixtures::types::has_bitwise_ops>::values = folly::range( ::apache::thrift::fixtures::types::_has_bitwise_opsEnumDataStorage::values);
template <>const folly::Range<const folly::StringPiece*> TEnumTraits< ::apache::thrift::fixtures::types::has_bitwise_ops>::names = folly::range( ::apache::thrift::fixtures::types::_has_bitwise_opsEnumDataStorage::names);

template<>
const char* TEnumTraits< ::apache::thrift::fixtures::types::has_bitwise_ops>::findName( ::apache::thrift::fixtures::types::has_bitwise_ops value) {
  static const auto map = folly::Indestructible< ::apache::thrift::fixtures::types::_has_bitwise_ops_EnumMapFactory::ValuesToNamesMapType>{ ::apache::thrift::fixtures::types::_has_bitwise_ops_EnumMapFactory::makeValuesToNamesMap()};
  return findName(*map, value);
}

template<>
bool TEnumTraits< ::apache::thrift::fixtures::types::has_bitwise_ops>::findValue(const char* name,  ::apache::thrift::fixtures::types::has_bitwise_ops* out) {
  static const auto map = folly::Indestructible< ::apache::thrift::fixtures::types::_has_bitwise_ops_EnumMapFactory::NamesToValuesMapType>{ ::apache::thrift::fixtures::types::_has_bitwise_ops_EnumMapFactory::makeNamesToValuesMap()};
  return findValue(*map, name, out);
}
}} // apache::thrift

namespace apache { namespace thrift { namespace fixtures { namespace types {
const typename _is_unscoped_EnumMapFactory::ValuesToNamesMapType _is_unscoped_VALUES_TO_NAMES = _is_unscoped_EnumMapFactory::makeValuesToNamesMap();

const typename _is_unscoped_EnumMapFactory::NamesToValuesMapType _is_unscoped_NAMES_TO_VALUES = _is_unscoped_EnumMapFactory::makeNamesToValuesMap();

}}}} // namespace
namespace apache { namespace thrift {
template <>const std::size_t TEnumTraits< ::apache::thrift::fixtures::types::is_unscoped>::size = 2;
template <>const folly::Range<const  ::apache::thrift::fixtures::types::is_unscoped*> TEnumTraits< ::apache::thrift::fixtures::types::is_unscoped>::values = folly::range( ::apache::thrift::fixtures::types::_is_unscopedEnumDataStorage::values);
template <>const folly::Range<const folly::StringPiece*> TEnumTraits< ::apache::thrift::fixtures::types::is_unscoped>::names = folly::range( ::apache::thrift::fixtures::types::_is_unscopedEnumDataStorage::names);

template<>
const char* TEnumTraits< ::apache::thrift::fixtures::types::is_unscoped>::findName( ::apache::thrift::fixtures::types::is_unscoped value) {
  static const auto map = folly::Indestructible< ::apache::thrift::fixtures::types::_is_unscoped_EnumMapFactory::ValuesToNamesMapType>{ ::apache::thrift::fixtures::types::_is_unscoped_EnumMapFactory::makeValuesToNamesMap()};
  return findName(*map, value);
}

template<>
bool TEnumTraits< ::apache::thrift::fixtures::types::is_unscoped>::findValue(const char* name,  ::apache::thrift::fixtures::types::is_unscoped* out) {
  static const auto map = folly::Indestructible< ::apache::thrift::fixtures::types::_is_unscoped_EnumMapFactory::NamesToValuesMapType>{ ::apache::thrift::fixtures::types::_is_unscoped_EnumMapFactory::makeNamesToValuesMap()};
  return findValue(*map, name, out);
}
}} // apache::thrift

namespace apache { namespace thrift { namespace fixtures { namespace types {
const uint64_t decorated_struct::_reflection_id;
void decorated_struct::_reflection_register(::apache::thrift::reflection::Schema& schema) {
   ::apache::thrift::fixtures::types::module_reflection_::reflectionInitializer_2133116297910176940(schema);
}

bool decorated_struct::operator == (const decorated_struct & rhs) const {
  if (!(this->field == rhs.field))
    return false;
  return true;
}

void decorated_struct::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
  if (false) {}
  else if (_fname == "field") {
    fid = 1;
    _ftype = apache::thrift::protocol::T_STRING;
  }
};

uint32_t decorated_struct::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  ::apache::thrift::reflection::Schema * schema = iprot->getSchema();
  if (schema != nullptr) {
     ::apache::thrift::fixtures::types::module_reflection_::reflectionInitializer_2133116297910176940(*schema);
    iprot->setNextStructType(decorated_struct::_reflection_id);
  }
  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (_ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->field);
          this->__isset.field = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      default:
        xfer += iprot->skip(_ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void decorated_struct::__clear() {
  field = "";
  __isset.__clear();
}
uint32_t decorated_struct::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("decorated_struct");
  xfer += oprot->writeFieldBegin("field", apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->field);
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(decorated_struct &a, decorated_struct &b) {
  using ::std::swap;
  (void)a;
  (void)b;
  swap(a.field, b.field);
  swap(a.__isset, b.__isset);
}

void merge(const decorated_struct& from, decorated_struct& to) {
  using apache::thrift::merge;
  merge(from.field, to.field);
  to.__isset.field = to.__isset.field || from.__isset.field;
}

void merge(decorated_struct&& from, decorated_struct& to) {
  using apache::thrift::merge;
  merge(std::move(from.field), to.field);
  to.__isset.field = to.__isset.field || from.__isset.field;
}

const uint64_t ContainerStruct::_reflection_id;
void ContainerStruct::_reflection_register(::apache::thrift::reflection::Schema& schema) {
   ::apache::thrift::fixtures::types::module_reflection_::reflectionInitializer_11962737781608441260(schema);
}

bool ContainerStruct::operator == (const ContainerStruct & rhs) const {
  if (!(this->fieldA == rhs.fieldA))
    return false;
  if (!(this->fieldB == rhs.fieldB))
    return false;
  if (!(this->fieldC == rhs.fieldC))
    return false;
  if (!(this->fieldD == rhs.fieldD))
    return false;
  if (!(this->fieldE == rhs.fieldE))
    return false;
  if (!(this->fieldF == rhs.fieldF))
    return false;
  if (!(this->fieldG == rhs.fieldG))
    return false;
  if (!(this->fieldH == rhs.fieldH))
    return false;
  return true;
}

void ContainerStruct::translateFieldName(
    FOLLY_MAYBE_UNUSED folly::StringPiece _fname,
    FOLLY_MAYBE_UNUSED int16_t& fid,
    FOLLY_MAYBE_UNUSED apache::thrift::protocol::TType& _ftype) {
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
};

uint32_t ContainerStruct::read(apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string _fname;
  apache::thrift::protocol::TType _ftype;
  int16_t fid;

  ::apache::thrift::reflection::Schema * schema = iprot->getSchema();
  if (schema != nullptr) {
     ::apache::thrift::fixtures::types::module_reflection_::reflectionInitializer_11962737781608441260(*schema);
    iprot->setNextStructType(ContainerStruct::_reflection_id);
  }
  xfer += iprot->readStructBegin(_fname);

  using apache::thrift::protocol::TProtocolException;



  while (true)
  {
    xfer += iprot->readFieldBegin(_fname, _ftype, fid);
    if (_ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 12:
        if (_ftype == apache::thrift::protocol::T_LIST) {
          {
            this->fieldA.clear();
            uint32_t _size2;
            bool _sizeUnknown3;
            apache::thrift::protocol::TType _etype6;
            xfer += iprot->readListBegin(_etype6, _size2, _sizeUnknown3);
            if (!_sizeUnknown3) {
              this->fieldA.resize(_size2);
              uint32_t _i8;
              for (_i8 = 0; _i8 < _size2; ++_i8)
              {
                xfer += iprot->readI32(this->fieldA[_i8]);
              }
            } else {
              while (iprot->peekList())
              {
                int32_t _elem9;
                xfer += iprot->readI32(_elem9);
                this->fieldA.push_back(_elem9);
              }
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.fieldA = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 2:
        if (_ftype == apache::thrift::protocol::T_LIST) {
          {
            this->fieldB.clear();
            uint32_t _size10;
            bool _sizeUnknown11;
            apache::thrift::protocol::TType _etype14;
            xfer += iprot->readListBegin(_etype14, _size10, _sizeUnknown11);
            if (!_sizeUnknown11) {
              uint32_t _i16;
              for (_i16 = 0; _i16 < _size10; ++_i16)
              {
                int32_t _elem17;
                xfer += iprot->readI32(_elem17);
                this->fieldB.push_back(_elem17);
              }
            } else {
              while (iprot->peekList())
              {
                int32_t _elem18;
                xfer += iprot->readI32(_elem18);
                this->fieldB.push_back(_elem18);
              }
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.fieldB = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 3:
        if (_ftype == apache::thrift::protocol::T_LIST) {
          {
            this->fieldC.clear();
            uint32_t _size19;
            bool _sizeUnknown20;
            apache::thrift::protocol::TType _etype23;
            xfer += iprot->readListBegin(_etype23, _size19, _sizeUnknown20);
            if (!_sizeUnknown20) {
              uint32_t _i25;
              for (_i25 = 0; _i25 < _size19; ++_i25)
              {
                int32_t _elem26;
                xfer += iprot->readI32(_elem26);
                this->fieldC.push_back(_elem26);
              }
            } else {
              while (iprot->peekList())
              {
                int32_t _elem27;
                xfer += iprot->readI32(_elem27);
                this->fieldC.push_back(_elem27);
              }
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.fieldC = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 4:
        if (_ftype == apache::thrift::protocol::T_LIST) {
          {
            this->fieldD.clear();
            uint32_t _size28;
            bool _sizeUnknown29;
            apache::thrift::protocol::TType _etype32;
            xfer += iprot->readListBegin(_etype32, _size28, _sizeUnknown29);
            if (!_sizeUnknown29) {
              uint32_t _i34;
              for (_i34 = 0; _i34 < _size28; ++_i34)
              {
                int32_t _elem35;
                xfer += iprot->readI32(_elem35);
                this->fieldD.push_back(_elem35);
              }
            } else {
              while (iprot->peekList())
              {
                int32_t _elem36;
                xfer += iprot->readI32(_elem36);
                this->fieldD.push_back(_elem36);
              }
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.fieldD = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 5:
        if (_ftype == apache::thrift::protocol::T_LIST) {
          {
            this->fieldE.clear();
            uint32_t _size37;
            bool _sizeUnknown38;
            apache::thrift::protocol::TType _etype41;
            xfer += iprot->readListBegin(_etype41, _size37, _sizeUnknown38);
            if (!_sizeUnknown38) {
              uint32_t _i43;
              for (_i43 = 0; _i43 < _size37; ++_i43)
              {
                int32_t _elem44;
                xfer += iprot->readI32(_elem44);
                this->fieldE.push_back(_elem44);
              }
            } else {
              while (iprot->peekList())
              {
                int32_t _elem45;
                xfer += iprot->readI32(_elem45);
                this->fieldE.push_back(_elem45);
              }
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.fieldE = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 6:
        if (_ftype == apache::thrift::protocol::T_SET) {
          {
            this->fieldF.clear();
            uint32_t _size46;
            bool _sizeUnknown47;
            apache::thrift::protocol::TType _etype50;
            xfer += iprot->readSetBegin(_etype50, _size46, _sizeUnknown47);
            if (!_sizeUnknown47) {
              uint32_t _i52;
              for (_i52 = 0; _i52 < _size46; ++_i52)
              {
                int32_t _elem53;
                xfer += iprot->readI32(_elem53);
                this->fieldF.insert(_elem53);
              }
            } else {
              while (iprot->peekSet())
              {
                int32_t _elem54;
                xfer += iprot->readI32(_elem54);
                this->fieldF.insert(_elem54);
              }
            }
            xfer += iprot->readSetEnd();
          }
          this->__isset.fieldF = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 7:
        if (_ftype == apache::thrift::protocol::T_MAP) {
          {
            this->fieldG.clear();
            uint32_t _size55;
            bool _sizeUnknown56;
            apache::thrift::protocol::TType _ktype57 = apache::thrift::protocol::T_STOP;
            apache::thrift::protocol::TType _vtype58 = apache::thrift::protocol::T_STOP;
            xfer += iprot->readMapBegin(_ktype57, _vtype58, _size55, _sizeUnknown56);
            if (!_sizeUnknown56) {
              uint32_t _i61;
              for (_i61 = 0; _i61 < _size55; ++_i61)
              {
                int32_t _key62;
                xfer += iprot->readI32(_key62);
                std::string& _val63 = this->fieldG[_key62];
                xfer += iprot->readString(_val63);
              }
            } else {
              while (iprot->peekMap())
              {
                int32_t _key64;
                xfer += iprot->readI32(_key64);
                std::string& _val65 = this->fieldG[_key64];
                xfer += iprot->readString(_val65);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.fieldG = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      case 8:
        if (_ftype == apache::thrift::protocol::T_MAP) {
          {
            this->fieldH.clear();
            uint32_t _size66;
            bool _sizeUnknown67;
            apache::thrift::protocol::TType _ktype68 = apache::thrift::protocol::T_STOP;
            apache::thrift::protocol::TType _vtype69 = apache::thrift::protocol::T_STOP;
            xfer += iprot->readMapBegin(_ktype68, _vtype69, _size66, _sizeUnknown67);
            if (!_sizeUnknown67) {
              uint32_t _i72;
              for (_i72 = 0; _i72 < _size66; ++_i72)
              {
                int32_t _key73;
                xfer += iprot->readI32(_key73);
                std::string& _val74 = this->fieldH[_key73];
                xfer += iprot->readString(_val74);
              }
            } else {
              while (iprot->peekMap())
              {
                int32_t _key75;
                xfer += iprot->readI32(_key75);
                std::string& _val76 = this->fieldH[_key75];
                xfer += iprot->readString(_val76);
              }
            }
            xfer += iprot->readMapEnd();
          }
          this->__isset.fieldH = true;
        } else {
          xfer += iprot->skip(_ftype);
        }
        break;
      default:
        xfer += iprot->skip(_ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

void ContainerStruct::__clear() {
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
uint32_t ContainerStruct::write(apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  xfer += oprot->writeStructBegin("ContainerStruct");
  xfer += oprot->writeFieldBegin("fieldB", apache::thrift::protocol::T_LIST, 2);
  {
    xfer += oprot->writeListBegin(apache::thrift::protocol::T_I32, this->fieldB.size());
    std::list<int32_t> ::const_iterator _iter77;
    for (_iter77 = this->fieldB.begin(); _iter77 != this->fieldB.end(); ++_iter77)
    {
      xfer += oprot->writeI32((*_iter77));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("fieldC", apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(apache::thrift::protocol::T_I32, this->fieldC.size());
    std::deque<int32_t> ::const_iterator _iter78;
    for (_iter78 = this->fieldC.begin(); _iter78 != this->fieldC.end(); ++_iter78)
    {
      xfer += oprot->writeI32((*_iter78));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("fieldD", apache::thrift::protocol::T_LIST, 4);
  {
    xfer += oprot->writeListBegin(apache::thrift::protocol::T_I32, this->fieldD.size());
    folly::fbvector<int32_t> ::const_iterator _iter79;
    for (_iter79 = this->fieldD.begin(); _iter79 != this->fieldD.end(); ++_iter79)
    {
      xfer += oprot->writeI32((*_iter79));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("fieldE", apache::thrift::protocol::T_LIST, 5);
  {
    xfer += oprot->writeListBegin(apache::thrift::protocol::T_I32, this->fieldE.size());
    folly::small_vector<int32_t> ::const_iterator _iter80;
    for (_iter80 = this->fieldE.begin(); _iter80 != this->fieldE.end(); ++_iter80)
    {
      xfer += oprot->writeI32((*_iter80));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("fieldF", apache::thrift::protocol::T_SET, 6);
  {
    xfer += oprot->writeSetBegin(apache::thrift::protocol::T_I32, this->fieldF.size());
    folly::sorted_vector_set<int32_t> ::const_iterator _iter81;
    for (_iter81 = this->fieldF.begin(); _iter81 != this->fieldF.end(); ++_iter81)
    {
      xfer += oprot->writeI32((*_iter81));
    }
    xfer += oprot->writeSetEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("fieldG", apache::thrift::protocol::T_MAP, 7);
  {
    xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I32, apache::thrift::protocol::T_STRING, this->fieldG.size());
    folly::sorted_vector_map<int32_t, std::string> ::const_iterator _iter82;
    for (_iter82 = this->fieldG.begin(); _iter82 != this->fieldG.end(); ++_iter82)
    {
      xfer += oprot->writeI32(_iter82->first);
      xfer += oprot->writeString(_iter82->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("fieldH", apache::thrift::protocol::T_MAP, 8);
  {
    xfer += oprot->writeMapBegin(apache::thrift::protocol::T_I32, apache::thrift::protocol::T_STRING, this->fieldH.size());
    std::unordered_map<int32_t, std::string> ::const_iterator _iter83;
    for (_iter83 = this->fieldH.begin(); _iter83 != this->fieldH.end(); ++_iter83)
    {
      xfer += oprot->writeI32(_iter83->first);
      xfer += oprot->writeString(_iter83->second);
    }
    xfer += oprot->writeMapEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldBegin("fieldA", apache::thrift::protocol::T_LIST, 12);
  {
    xfer += oprot->writeListBegin(apache::thrift::protocol::T_I32, this->fieldA.size());
    std::vector<int32_t> ::const_iterator _iter84;
    for (_iter84 = this->fieldA.begin(); _iter84 != this->fieldA.end(); ++_iter84)
    {
      xfer += oprot->writeI32((*_iter84));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(ContainerStruct &a, ContainerStruct &b) {
  using ::std::swap;
  (void)a;
  (void)b;
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

void merge(const ContainerStruct& from, ContainerStruct& to) {
  using apache::thrift::merge;
  merge(from.fieldA, to.fieldA);
  to.__isset.fieldA = to.__isset.fieldA || from.__isset.fieldA;
  merge(from.fieldB, to.fieldB);
  to.__isset.fieldB = to.__isset.fieldB || from.__isset.fieldB;
  merge(from.fieldC, to.fieldC);
  to.__isset.fieldC = to.__isset.fieldC || from.__isset.fieldC;
  merge(from.fieldD, to.fieldD);
  to.__isset.fieldD = to.__isset.fieldD || from.__isset.fieldD;
  merge(from.fieldE, to.fieldE);
  to.__isset.fieldE = to.__isset.fieldE || from.__isset.fieldE;
  merge(from.fieldF, to.fieldF);
  to.__isset.fieldF = to.__isset.fieldF || from.__isset.fieldF;
  merge(from.fieldG, to.fieldG);
  to.__isset.fieldG = to.__isset.fieldG || from.__isset.fieldG;
  merge(from.fieldH, to.fieldH);
  to.__isset.fieldH = to.__isset.fieldH || from.__isset.fieldH;
}

void merge(ContainerStruct&& from, ContainerStruct& to) {
  using apache::thrift::merge;
  merge(std::move(from.fieldA), to.fieldA);
  to.__isset.fieldA = to.__isset.fieldA || from.__isset.fieldA;
  merge(std::move(from.fieldB), to.fieldB);
  to.__isset.fieldB = to.__isset.fieldB || from.__isset.fieldB;
  merge(std::move(from.fieldC), to.fieldC);
  to.__isset.fieldC = to.__isset.fieldC || from.__isset.fieldC;
  merge(std::move(from.fieldD), to.fieldD);
  to.__isset.fieldD = to.__isset.fieldD || from.__isset.fieldD;
  merge(std::move(from.fieldE), to.fieldE);
  to.__isset.fieldE = to.__isset.fieldE || from.__isset.fieldE;
  merge(std::move(from.fieldF), to.fieldF);
  to.__isset.fieldF = to.__isset.fieldF || from.__isset.fieldF;
  merge(std::move(from.fieldG), to.fieldG);
  to.__isset.fieldG = to.__isset.fieldG || from.__isset.fieldG;
  merge(std::move(from.fieldH), to.fieldH);
  to.__isset.fieldH = to.__isset.fieldH || from.__isset.fieldH;
}

}}}} // namespace
