#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "|" << std::left << std::setw(10) << "Name " << "|" << std::setw(3) << "Age" << "|" << std::endl;
    std::cout << "|" << std::left << std::setw(10) << "Darshan" << "|" << std::setw(3) << 19 << "|" << std::endl;
    std::cout << "|" << std::left << std::setw(10) << "Rahul" << "|" << std::setw(3) << 20 << "|" << std ::endl;
    return 0;
}