/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <array>
#include <cstddef>
#include <thrift/lib/cpp/Thrift.h>

#include "src/gen-cpp2/module_types.h"

namespace cpp2 {

struct _BEnumDataStorage {
  using type = B;
  static constexpr const std::size_t size = 1;
  static constexpr const std::array<B, 1> values = {{
    B::HELLO,
  }};
  static constexpr const std::array<folly::StringPiece, 1> names = {{
    "HELLO",
  }};
};

} // cpp2
namespace apache { namespace thrift {

template <> struct TEnumDataStorage< ::cpp2::B> {
  using storage_type =  ::cpp2::_BEnumDataStorage;
};

}} // apache::thrift
