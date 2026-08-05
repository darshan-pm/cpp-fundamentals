#include <iostream>

int main()
{
    int value{5};
    value = value + 1;
    std::cout << "postfix increament value is : " << value << std::endl;

    value = 5;
    std::cout << "reset value is : " << value << std::endl;

    value = value - 1;
    std::cout << "postfix decreament value is : " << value << std::endl;

    int value1{90};
    value1++;
    std::cout << "postfix increament value is : " << value1 << std::endl;

    int value2{45};
    value2;
    std::cout << "postfix increament value is : " << value2++ << std::endl;
    std::cout << "postfix increament value is : " << value2 << std::endl;

    return 0;
}