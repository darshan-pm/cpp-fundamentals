#include <iostream>

int main()
{
    int apple_count{29};
    int banana_count{40};

    int total_fruit{apple_count + banana_count};

    std::cout << "apple_count : " << apple_count << std::endl;
    std::cout << "banana_count : " << banana_count << std::endl;
    std::cout << "total_fruit : " << total_fruit << std::endl;

    return 0;
}