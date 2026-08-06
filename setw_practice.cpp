#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "|" << std::setw(10) << 25 << "|" << std::endl;
    std::cout << "|" << std::setw(10) << 250 << "|" << std::endl;
    std::cout << "|" << std::setw(10) << 2500 << "|" << std::endl;

    return 0;
}