#include <iostream>

int main()
{
    auto var1{45};
    auto var2{98.99f};
    auto var3{80.98776l};
    auto var4{-877u};
    auto var5{-998};
    auto var6{8799ul};
    auto var7{877788ull};

    std::cout << "size of var1 : " << sizeof(var1) << "bytes" << "  and" << " value of var1 : " << var1 << std::endl;
    std::cout << "size of var2 : " << sizeof(var2) << "bytes" << "  and" << " value of var2 : " << var2 << std::endl;
    std::cout << "size of var3 : " << sizeof(var3) << "bytes" << "  and" << " value of var3 : " << var3 << std::endl;
    std::cout << "size of var4 : " << sizeof(var4) << "bytes" << "  and" << " value of var4 : " << var4 << std::endl;
    std::cout << "size of var5 : " << sizeof(var5) << "bytes" << "  and" << " value of var5 : " << var5 << std::endl;
    std::cout << "size of var6 : " << sizeof(var6) << "bytes" << "  and" << " value of var6 : " << var6 << std::endl;
    std::cout << "size of var7 : " << sizeof(var7) << "bytes" << "  and" << " value of var7 : " << var7 << std::endl;

    return 0;
}