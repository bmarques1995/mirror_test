#include "Sample.hpp"
#include <iostream>

Sample::Sample(uint64_t key) :
    m_Key(key)
{

}

Sample::~Sample()
{

}

void Sample::PrintKey()
{
    std::cout << "Current key: " << m_Key << "\n";
}
