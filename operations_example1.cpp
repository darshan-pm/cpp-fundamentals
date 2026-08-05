#include <iostream>

int main()
{
    int number1{38};
    int number2{40};
    int number3{30};
    double number4{9.767};

    int result1 = number1 + number2;
    std::cout << "result1 is : " << result1 << std::endl;

    double result2 = number2 / number4;
    std::cout << "result2 is : " << result2 << std::endl;

    int result3 = number1 * number3;
    std::cout << "result3 is : " << result3 << std::endl;

    double result4 = number3 - number2;
    std::cout << "result4 is : " << result4 << std::endl;

    return 0;
}