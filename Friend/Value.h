#pragma once

#include "ValueFactory.h"

class Value
{
    friend Value* ValueFactory::New(int n) const;

public:
    int Get() const;

private:
    Value(int n);
    int m_n;
};
