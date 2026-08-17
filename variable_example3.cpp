#include <iostream>

int main()
{
    int maths_score;
    int physics_score;
    int chemistry_score;

    std::cout << "Enter maths_score : " << std::endl;
    std::cin >> maths_score;

    std::cout << "Enter physics_score : " << std::endl;
    std::cin >> physics_score;

    std::cout << "Enter chemistry_score : " << std::endl;
    std::cin >> chemistry_score;

    int total_score = maths_score + physics_score + chemistry_score;

    std::cout << "maths_score : " << maths_score << std::endl;
    std::cout << "physics_score : " << physics_score << std::endl;
    std::cout << "chemistry_score :" << chemistry_score << std::endl;
    std::cout << "total_score : " << total_score << std::endl;

    return 0;
}