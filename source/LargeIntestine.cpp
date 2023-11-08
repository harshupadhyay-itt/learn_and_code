#include "../include/LargeIntestine.h"

LargeIntestine::LargeIntestine(std::string name)
{
    this->name = name;
}
void LargeIntestine::inputForOrgan(std::string food)
{
    std::cout << this->name << " take undigested " << food << " from small intestine\n";
}
std::string LargeIntestine::outputByOrgan()
{
    return "forward waste to rectum\n";
}
std::string LargeIntestine::workDoneByOrgan()
{
    return this->name + "is absorption of water, electrolytes, and some remaining nutrients, and formation and storage of feces";
}
