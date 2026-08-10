#include <iostream>

int main()
{
    int var1{78};
    std::cout << "var1 is : " << var1 << std::endl;
    var1 = 90;
    std::cout << "var1 is : " << var1 << std::endl;

    std::cout << ".........................." << std ::endl;

    float var2{90.87f};
    std::cout << "var2 is : " << var2 << std::endl;
    var2 = 89.09f;
    std::cout << "var2 is : " << var2 << std::endl;

    std::cout << "............................." << std::endl;

    bool state{true};
    std::cout << std::boolalpha;
    std::cout << "state is : " << state << std::endl;
    state = false;
    std::cout << "state is : " << state << std::endl;

    auto var3{887u};
    std::cout << "var3 is : " << var3 << std::endl;

    var3 = 98; // we can't asign negative value because we have declared value unsigned.
    std::cout << "var3 is : " << var3 << std::endl;
    return 0;
}
