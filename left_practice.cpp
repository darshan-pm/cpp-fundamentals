#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "|" << std::left << std::setfill('*') << std::setw(10) << 23 << "|" << std::endl;
    return 0;
}