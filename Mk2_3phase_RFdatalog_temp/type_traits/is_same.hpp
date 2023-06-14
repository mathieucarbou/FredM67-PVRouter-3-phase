// ArduinoJson - https://arduinojson.org
// Copyright © 2014-2023, Benoit BLANCHON
// MIT License

#pragma once

#include "integral_constant.hpp"

// A meta-function that returns true if types T and U are the same.
template< typename T, typename U >
struct is_same : false_type
{
};

template< typename T >
struct is_same< T, T > : true_type
{
};