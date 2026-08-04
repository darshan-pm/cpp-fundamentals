#include <iostream>

int main()
{
    int var1{45};
    std::cout << "value1 is : " << var1 << std::endl;

    std::cout << std::endl;

    var1 += 5;
    std::cout << "var1 after +=5  is : " << var1 << std ::endl;

    std::cout << std::endl;

    var1 -= 10;
    std::cout << "var1 after -= is : " << var1 << std::endl;

    std::cout << std::endl;

    var1 *= 5;
    std::cout << "var1 after =* is : " << var1 << std::endl;

    std::cout << std::endl;

    var1 /= 10;
    std::cout << "var1 after /= is : " << var1 << std::endl;

    std::cout << std::endl;

    var1 %= 8;
    std::cout << "var1 after %= is : " << var1 << std::endl;

    std::cout << std::endl;

    return 0;
}