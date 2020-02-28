#pragma once

#include <stdexcept>

template <typename TYPE> class Stack
{
public:
    explicit Stack(size_t sizeMax) : m_sizeMax(sizeMax), m_size(0)
    {
        m_array = new char[m_sizeMax * sizeof (TYPE)]
    }

    virtual ~Stack()
    {
        Clear();
        delete[] m_array;
    }

public:
    void Push(const TYPE& value)
    {
        CheckOverflow();
        new(&GetAt(m_size)) TYPE(value);
        ++m_size;
    }

    void Pop()
    {
        CheckUnderflow();
        --m_size;
        GetAt(m_size).~TYPE();
    }

private:
    const TYPE& Top_() const
    {
        CheckUnderflow();
        return m_array[m_size -1];
    }

public:
    TYPE& Top() { return const_cast<TYPE&>(Top_());}
    const TYPE& Top() const { return Top_(); }

    bool Full() const { return m_size == m_sizeMax; }
    bool Empty() const { return m_size == 0; }

private:
    void CheckOverflow() const
    {
        if (Full())
        {
            throw std::overflow_error("stack over flow");
        }
    }

    void CheckUnderflow() const
    {
        if (Empty())
        {
            throw std::underflow_error("stack under flow");
        }
    }

private:
    const TYPE& GetAt_(size_t i) const
    {
        return reinterpret_cast<const TYPE&>(m_array[i * sizeof(TYPE)]);
    }

    TYPE& GetAt(size_t i) { return const_cast<TYPE&>(GetAt_(i)); }
    const TYPE& GetAt(size_t i) const { return GetAt_(i); }

private:
    TYPE* m_array;
    size_t m_sizeMax;
    size_t m_size;
};