#include "../include/Gallbladder.h"

Gallbladder::Gallbladder(std::string name)
{
    this->name = name;
}
std::string Gallbladder::outputByOrgan()
{
    return "Supply food to large intestine\n";
}
std::string Gallbladder::workDoneByOrgan()
{
    return this->name + " is to store and control release of bile to assist in fat digestion";
}
