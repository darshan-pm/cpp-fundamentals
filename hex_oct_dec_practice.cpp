#include <iostream>
#include <iomanip>

int main()
{
    int num1{45};
    int num2{0x3c};
    int num3{072};
    int num4{50};

    std::cout << std::hex << num1 << std::endl;
    std::cout << std::dec << num2 << std::endl;
    std::cout << std::dec << num3 << std::endl;
    std::cout << std::dec << num4 << std::endl;
    return 0;
}