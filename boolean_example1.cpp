#include <iostream>

int main()
{
    bool red_light{true};
    bool green_light{false};

    if (red_light == true)
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false " << std::endl;
    }
    std::cout << "red_light is : " << red_light << std::endl;
    std::cout << "green_light is : " << green_light << std::endl;

    if (green_light)
    {
        std::cout << "The light is green" << std::endl;
    }
    else
    {
        std::cout << "The light is not green " << std::endl;
    }
    return 0;
}
