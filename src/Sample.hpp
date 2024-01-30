#pragma once

#include <cstdint>

class Sample
{
public:
    Sample(uint64_t key);
    ~Sample();

    void PrintKey();
protected:
    uint64_t m_Key;
};