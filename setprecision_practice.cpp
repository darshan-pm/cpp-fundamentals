#include <iostream>
#include <iomanip>

int main()
{
    double num{12.4568};
    double num1{123.5};
    std::cout << std::fixed << std::setprecision(4) << num << std::endl;
    std::cout << std::fixed << std::setprecision(4) << num1 << std::endl;
    return 0;
}