#include "../include/Liver.h"

Liver::Liver(std::string name)
{
    this->name = name;
}
std::string Liver::outputByOrgan()
{
    return "release bile into the small intestime\n";
}
std::string Liver::workDoneByOrgan()
{
    return this->name + " is to help in production of bile, which is stored in the gallbladder and released into the small intestine to emulsify fats";
}