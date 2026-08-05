#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "|" << std::setfill('#') << std::setw(10) << 99 << "|" << std::endl;
    std::cout << "|" << std::setw(10) << "Cat" << "|" << std::endl;
    std::cout << "|" << std::setw(10) << "Dog" << "|" << std ::endl;
    return 0;
}