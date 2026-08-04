#include <iostream>
#include <iomanip>

int main()
{
    float number_1{2.354647482673827f};
    double number_2{9.63562677363563766774};
    long double number_3{7.73672655563778826787883l};
    double number_4{0.00000000003454};
    double number_5{8.7368e-10};
    double number_6{-7837.883};
    double number_7{};
    double number_8{};
    double result{number_6 / number_7};
    double result_1{number_7 / number_8};

    std::cout << std::setprecision(18);
    std::cout << "number_1 : " << number_1 << std::endl;
    std::cout << "number_2 : " << number_2 << std::endl;
    std::cout << "number_3 : " << number_3 << std::endl;
    std::cout << "number_4 : " << number_4 << std::endl;
    std::cout << "number_5 : " << number_5 << std::endl;
    std::cout << "result : " << result << std::endl;
    std::cout << "result_1 : " << result_1 << std::endl;

    std::cout << "size_of_float :  " << sizeof(float) << std::endl;
    std::cout << "size_of_double : " << sizeof(double) << std ::endl;
    std::cout << "size _of_long double : " << sizeof(long double) << std ::endl;

    return 0;
}