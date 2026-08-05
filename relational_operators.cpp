#include <iostream>

int main()
{
    int variable1{90};
    int variable2{80};

    std::cout << "variable1 is : " << variable1 << std::endl;
    std::cout << "variable2 is : " << variable2 << std::endl;

    std::cout << std::boolalpha << std::endl; // boolalpha gives True/False instead of 0/1

    std::cout << "variable1 < variable2 is : " << (variable1 < variable2) << std::endl;
    std::cout << std::endl;

    std::cout << "variable2 < variable1 is : " << (variable2 < variable1) << std::endl;
    std::cout << std::endl;

    std::cout << "variable2 > variable1 is : " << (variable2 > variable1) << std::endl;
    std::cout << std ::endl;

    std::cout << "variable1 is <= variable2 is : " << (variable1 <= variable2) << std::endl;
    std::cout << std::endl;

    std::cout << "variable2 is >= variable1 is : " << (variable2 >= variable1) << std::endl;
    std::cout << std::endl;

    std::cout << "variable1 == variable2 is : " << (variable1 == variable2) << std::endl;
    std::cout << std::endl;

    std::cout << "variable1 != variable2 is : " << (variable1 != variable2) << std::endl;
    std::cout << std::endl;

    return 0;
}