#include <iostream>
#include <string>

int main()
{
    int age;
    std::string full_name;

    std::cout << "Type your full name and age : " << std::endl;

    std::getline(std ::cin, full_name);

    std::cin >> age;
    std::cout << "Hello " << full_name << " your  " << age << " years  " << "old!";
    return 0;
}
