#pragma once

template <typename TYPE>
 TYPE Abs(TYPE a)
 {
     return a < 0 ? -a : a;
 }