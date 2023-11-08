#include "../include/Human.h"

void Human::digestionProcess(std::string food)
{
    for (auto &organ : organs)
    {
        std::cout << "Work of " << organ->workDoneByOrgan() << std::endl;
        organ->inputForOrgan(food);
        std::cout << "Output: " << organ->outputByOrgan() << std::endl;
    }
}
