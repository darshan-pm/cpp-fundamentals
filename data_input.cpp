#include <iostream>
#include <string>

int main()
{
    int age;
    std::string name;

    std::cout << "Please type your name and age: " << std::endl;
    std::cin >> name >> age;
    std::cout << "Hello  " << name << " you are " << age << " years old! " << std::endl;

    return 0;
}
