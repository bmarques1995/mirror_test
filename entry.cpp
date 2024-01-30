#include <iostream>
#include "Sample.hpp"

int main(int arg_count, char** arg_values)
{
    Sample s(585);
    std::cout << "Hello clang\n";
    s.PrintKey();
    return 0;
}