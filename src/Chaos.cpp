#include "Chaos.hpp"
#include <iostream>

Chaos::Chaos(std::string_view msg) :
    m_Msg(msg)
{

}

Chaos::~Chaos()
{

}

void Chaos::DisplayMsg()
{
    std::cout << m_Msg << "\n";
}