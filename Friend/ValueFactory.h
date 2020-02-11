#pragma once

class Value;

class ValueFactory
{
public:
    Value* New(int n) const;
};

#include "Value.h"