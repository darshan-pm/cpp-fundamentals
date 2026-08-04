#include <iostream>

int main()
{
    unsigned short int age{21};
    signed int temperature{-35};
    unsigned long number_of_students{2500};
    long long int population{1450000000};
    unsigned long long int distance{4500000000};
    unsigned long long int number_of_grains{2763567837453};

    std::cout << "age is: " << age << std::endl;
    std::cout << "temperature is : " << temperature << std::endl;
    std::cout << "number_of_students are : " << number_of_students << std::endl;
    std::cout << "population is : " << population << std ::endl;
    std::cout << "distance is : " << distance << std ::endl;
    std::cout << "number_of_grains are : " << number_of_grains << std::endl;

    return 0;
}