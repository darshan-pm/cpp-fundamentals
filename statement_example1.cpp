#include <iostream>

int addNumbers(int first_parameter, int second_parameter) {
    int result = first_parameter + second_parameter;
    return result;
}

int main() {
    int first_number{45}; // Statements
    int second_number{7};

    std::cout << "first_number:" << first_number << std::endl;
    std::cout << "second_number:" << second_number << std::endl;

    int sum = first_number + second_number;

    std::cout << "sum:" << sum << std::endl;

    int value = addNumbers(12, 45);
    std::cout << "value: " << value << std::endl;

    return 0;
}
