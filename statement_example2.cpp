#include <iostream>

int subtractNumbers(int first_number, int second_number) {
    int result = first_number - second_number;
    return result;
}
int main() {
    int first_number = 23;
    int second_number = 45;
    int subtract = first_number - second_number;
    std::cout << "subtract :" << subtract << std::endl;

    subtract = subtractNumbers(24, 6);
    std::cout << "subtract: " << subtract << std::endl;

    subtract = subtractNumbers(30, 10);
    std::cout << "subtract: " << subtract << std::endl;

    std::cout << "subtract: " << subtractNumbers(46, 8);

    return 0;
}
