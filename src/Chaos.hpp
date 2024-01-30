#pragma once

#include <string>

class Chaos
{
public:
    Chaos(std::string_view msg);
    ~Chaos();

    void DisplayMsg();

protected:
    std::string m_Msg;
};