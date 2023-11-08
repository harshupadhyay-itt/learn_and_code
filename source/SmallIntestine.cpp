#include "../include/SmallIntestine.h"

SmallIntestine::SmallIntestine(std::string name)
{
    this->name = name;
}
void SmallIntestine::inputForOrgan(std::string food)
{
    std::cout << this->name << " take partial digested " << food << " from stomach\n";
}
std::string SmallIntestine::outputByOrgan()
{
    return "It sends the food to the large intestine after the pancrease, liver and gallblader perform their work\n";
}
std::string SmallIntestine::workDoneByOrgan()
{
    return this->name + " is further digestion and the absorption of nutrients, with the help of pancreatic enzymes and bile";
}
