#include <iostream>

int main()
{
    int value1{90};
    ++value1;
    std::cout << "value1 is : " << value1 << std::endl;

    int value2{70};
    std::cout << "value2 is : " << ++value2 << std::endl;
    std::cout << "value2 is : " << value2 << std::endl;

    int value3{87};
    std::cout << "value3 is : " << --value3 << std::endl;
    std::cout << "value3 is : " << value3 << std::endl;

    return 0;
}