#include <iostream>
#include <iomanip>

int main()
{
    double num{25.0000};
    std::cout << std::fixed << std::showpoint << std::showpos << std::setprecision(4) << num << std::endl;
    return 0;
}