#include <iostream>
#include <limits>

int main()
{
    std::cout << "the range for short is from " << std::numeric_limits<short>::min() << "to " << std::numeric_limits<short>::max() << std::endl;

    std::cout << "the range for unsigned short " << std::numeric_limits<unsigned>::min() << "to" << std::numeric_limits<unsigned>::max() << std::endl;

    std::cout << "the range for int " << std::numeric_limits<int>::min() << "to" << std::numeric_limits<int>::max() << std::endl;

    std::cout << "the range for unsigned int " << std::numeric_limits<unsigned int>::min() << "to" << std::numeric_limits<unsigned int>::max() << std::endl;

    std::cout << "the range for long " << std::numeric_limits<long>::min() << "to" << std::numeric_limits<long>::max() << std::endl;

    std::cout << "the range for unsigned long " << std::numeric_limits<unsigned long>::min() << "to" << std::numeric_limits<unsigned long>::max() << std::endl;

    std::cout << "the range for unsigned long long " << std::numeric_limits<unsigned long long>::min() << "to" << std::numeric_limits<unsigned long long>::max() << std::endl;

    std::cout << "the range for float " << std::numeric_limits<float>::min() << "to" << std::numeric_limits<float>::max() << std::endl;

    std::cout << "the range for double " << std::numeric_limits<double>::min() << "to" << std::numeric_limits<double>::max() << std::endl;

    std::cout << "the range for char " << std::numeric_limits<char>::min() << "to" << std::numeric_limits<char>::max() << std::endl;

    return 0;
}