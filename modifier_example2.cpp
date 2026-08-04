#include <iostream>

int main()
{
    unsigned int physics_marks{92};
    unsigned int chemistry_marks{95};
    unsigned int maths_marks{99};

    unsigned int total_marks{physics_marks + chemistry_marks + maths_marks};
    unsigned int average_marks{total_marks / 3};

    std::cout << "physics_marks is : " << physics_marks << std ::endl;
    std::cout << "chemistry_marks is : " << chemistry_marks << std::endl;
    std::cout << "maths_marks is : " << maths_marks << std::endl;
    std::cout << "total_marks is : " << total_marks << std::endl;
    std::cout << "average_marks is : " << average_marks << std::endl;

    return 0;
}
