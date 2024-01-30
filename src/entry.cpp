#include <iostream>
#include "Sample.hpp"
#include "Chaos.hpp"

int main(int arg_count, char** arg_values)
{
    Sample s(585);
    Chaos c("Now you will know the true power of the Sharingan");
    std::cout << "Hello clang\n";
    s.PrintKey();
    c.DisplayMsg();
    return 0;
}