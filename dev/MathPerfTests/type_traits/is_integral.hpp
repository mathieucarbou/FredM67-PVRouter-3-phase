// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2023, Benoit BLANCHON
// MIT License

#pragma once

#include "integral_constant.hpp"
#include "is_same.hpp"
#include "remove_cv.hpp"

// clang-format off
template <typename T>
struct is_integral : integral_constant<bool,
    is_same<typename remove_cv<T>::type, signed char>::value ||
    is_same<typename remove_cv<T>::type, unsigned char>::value ||
    is_same<typename remove_cv<T>::type, signed short>::value ||
    is_same<typename remove_cv<T>::type, unsigned short>::value ||
    is_same<typename remove_cv<T>::type, signed int>::value ||
    is_same<typename remove_cv<T>::type, unsigned int>::value ||
    is_same<typename remove_cv<T>::type, signed long>::value ||
    is_same<typename remove_cv<T>::type, unsigned long>::value ||
    is_same<typename remove_cv<T>::type, signed long long>::value ||
    is_same<typename remove_cv<T>::type, unsigned long long>::value ||
    is_same<typename remove_cv<T>::type, char>::value ||
    is_same<typename remove_cv<T>::type, bool>::value> {};
// clang-format on