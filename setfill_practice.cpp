#include <iostream>
#include <iomanip>

int main()
{

    std::cout << "|" << std::setfill('*') << std::setw(10) << 25 << "|" << std::endl;
    std::cout << "|" << std::setfill('0') << std::setw(10) << 1234 << "|" << std::endl;
    return 0;
}