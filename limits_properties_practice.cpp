#include <iostream>
#include <limits>

int main()
{
    std::cout << "is_signed : " << std::numeric_limits<int>::is_signed << std::endl;
    std::cout << "digits : " << std::numeric_limits<int>::digits << std::endl;

    std::cout << "unsigned digits : " << std::numeric_limits<unsigned int>::digits << std::endl;
    std::cout << "unsigned digits : " << std::numeric_limits<unsigned int>::is_signed << std::endl;

    return 0;
}