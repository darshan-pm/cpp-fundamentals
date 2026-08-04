#include <iostream>

int main()
{
    char character1{'D'};
    char character2{'A'};
    char character3{'C'};
    char character4{'F'};

    std ::cout << character1 << std::endl;
    std ::cout << character2 << std ::endl;
    std ::cout << character3 << std ::endl;
    std ::cout << character4 << std ::endl;

    //  one byte in memory = 256 different values (0 - 255)
    // standard ASCII characters are 0 - 127
    // 128 - 255 are also ASCII characters but they are not standard ASCII character , their means they depends on operating system, terminal, The character encoding (UTF-8, Windows-1252, ISO-8859-1, etc.)
    char value1{78}; // ASCII character code for 'N'
    unsigned char value2{255};

    std::cout << "value1 : " << value1 << std::endl;
    std::cout << "value1(int) : " << static_cast<int>(value1) << std::endl;
    std::cout << "value2 : " << value2 << std::endl;
    std::cout << "value2(int) : " << static_cast<int>(value2) << std::endl;

    return 0;
}