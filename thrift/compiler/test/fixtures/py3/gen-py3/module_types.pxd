#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.lib.py3.thrift_server cimport cTException, TException


cdef extern from "src/gen-cpp2/module_types.h" namespace "py3::simple":
    cdef cppclass cSimpleException "py3::simple::SimpleException"(cTException):
        cSimpleException() except +
        int16_t err_code

    cdef cppclass cSimpleStruct "py3::simple::SimpleStruct":
        cSimpleStruct() except +
        cbool is_on
        int8_t tiny_int
        int16_t small_int
        int32_t nice_sized_int
        int64_t big_int
        double real


cdef extern from "<utility>" namespace "std" nogil:
    cdef shared_ptr[cSimpleException] move(unique_ptr[cSimpleException])
    cdef shared_ptr[cSimpleStruct] move(unique_ptr[cSimpleStruct])

cdef class SimpleException(TException):
    cdef shared_ptr[cSimpleException] c_SimpleException

    @staticmethod
    cdef create(shared_ptr[cSimpleException] c_SimpleException)

cdef class SimpleStruct:
    cdef shared_ptr[cSimpleStruct] c_SimpleStruct

    @staticmethod
    cdef create(shared_ptr[cSimpleStruct] c_SimpleStruct)


cdef class List__i16:
    cdef shared_ptr[vector[int16_t]] _vector
    @staticmethod
    cdef create(shared_ptr[vector[int16_t]])

cdef class List__i32:
    cdef shared_ptr[vector[int32_t]] _vector
    @staticmethod
    cdef create(shared_ptr[vector[int32_t]])

cdef class List__i64:
    cdef shared_ptr[vector[int64_t]] _vector
    @staticmethod
    cdef create(shared_ptr[vector[int64_t]])

cdef class List__string:
    cdef shared_ptr[vector[string]] _vector
    @staticmethod
    cdef create(shared_ptr[vector[string]])

cdef class List__SimpleStruct:
    cdef shared_ptr[vector[cSimpleStruct]] _vector
    @staticmethod
    cdef create(shared_ptr[vector[cSimpleStruct]])

cdef class Set__i32:
    cdef shared_ptr[cset[int32_t]] _set
    @staticmethod
    cdef create(shared_ptr[cset[int32_t]])

cdef class Set__string:
    cdef shared_ptr[cset[string]] _set
    @staticmethod
    cdef create(shared_ptr[cset[string]])

cdef class Map__string_string:
    cdef shared_ptr[cmap[string,string]] _map
    @staticmethod
    cdef create(shared_ptr[cmap[string,string]])

cdef class Map__string_SimpleStruct:
    cdef shared_ptr[cmap[string,cSimpleStruct]] _map
    @staticmethod
    cdef create(shared_ptr[cmap[string,cSimpleStruct]])

cdef class Map__string_i16:
    cdef shared_ptr[cmap[string,int16_t]] _map
    @staticmethod
    cdef create(shared_ptr[cmap[string,int16_t]])

cdef extern from "<utility>" namespace "std" nogil:
    cdef shared_ptr[vector[int16_t]] move(unique_ptr[vector[int16_t]])
    cdef shared_ptr[vector[int32_t]] move(unique_ptr[vector[int32_t]])
    cdef shared_ptr[vector[int64_t]] move(unique_ptr[vector[int64_t]])
    cdef shared_ptr[vector[string]] move(unique_ptr[vector[string]])
    cdef shared_ptr[vector[cSimpleStruct]] move(unique_ptr[vector[cSimpleStruct]])
    cdef shared_ptr[cset[int32_t]] move(unique_ptr[cset[int32_t]])
    cdef shared_ptr[cset[string]] move(unique_ptr[cset[string]])
    cdef shared_ptr[cmap[string,string]] move(unique_ptr[cmap[string,string]])
    cdef shared_ptr[cmap[string,cSimpleStruct]] move(unique_ptr[cmap[string,cSimpleStruct]])
    cdef shared_ptr[cmap[string,int16_t]] move(unique_ptr[cmap[string,int16_t]])
