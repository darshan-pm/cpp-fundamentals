#include <iostream>

int main()
{
    bool variable1{true};
    bool variable2{false};
    bool variable3{false};
    bool variable4{true};

    std::cout << std::boolalpha << std::endl;
    std::cout << "variable1 &&  variable2 is : " << (variable1 && variable2) << std::endl;
    std::cout << "variable3 && variable4 is : " << (variable3 && variable4) << std::endl;
    std::cout << "variable4 && variable1 is : " << (variable4 && variable1) << std::endl;
    std::cout << std::endl;

    std::cout << "variable1 || variable3 is : " << (variable1 || variable3) << std::endl;
    std::cout << "variable1 ||  variable2 is : " << (variable1 || variable2) << std::endl;
    std::cout << "variable3 || variable4 is : " << (variable3 || variable4) << std::endl;
    std::cout << "variable4 || variable1 is : " << (variable4 || variable1) << std::endl;
    std::cout << "((variable1 || variable2) ||(variable4 || variable3) is : " << ((variable1 || variable2) || (variable4 || variable3)) << std ::endl;
    std::cout << "variable4 && variable1 || variable2 &&  variable3 is : " << ((variable4 && variable1) || (variable2 && variable3)) << std::endl;
    std::cout << std::endl;

    std::cout << "!variable1  is :" << (!variable1) << std::endl;
    std::cout << "!variable2  is :" << (!variable2) << std::endl;
    std::cout << "!variable3  is :" << (!variable3) << std::endl;
    std::cout << std::endl;

    std::cout << "!(variable1 || variable2) is : " << (!(variable1 || variable2)) << std::endl;
    std::cout << "!((variable2 && variable4 )||() variable3 && variable1)) is : " << (!((variable2 && variable4) || (variable3 && variable1)));
    std::cout << std::endl;

    std::cout << "((variable1 > variable2) && (variable3 < variable4)) is : " << ((variable1 > variable2) && (variable3 < variable4)) << std::endl;
    std::cout << "((variable3 >= variable4) && ( variable2 <= variable1)) is : " << ((variable3 >= variable4) && (variable2 <= variable1)) << std ::endl;
    std::cout << "((variable4 == variable3) || (variable1 == variable2 )) is :" << ((variable4 == variable3) || (variable1 == variable2)) << std::endl;
    std::cout << "((variable 1 != variable2) && (variable3 != variable4 )) is : " << ((variable1 != variable2) && (variable3 != variable4)) << std::endl;
    std::cout << std::endl;

    return 0;
}
