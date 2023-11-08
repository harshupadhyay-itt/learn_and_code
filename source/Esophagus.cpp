#include "../include/Esophagus.h"

Esophagus::Esophagus(std::string name)
{
    this->name = name;
}
void Esophagus::inputForOrgan(std::string food)
{
    std::cout << "Input: " << this->name << " take chewed " << food << " from mouth\n";
}
std::string Esophagus::outputByOrgan()
{
    return "forward incoming food to stomach\n";
}
std::string Esophagus::workDoneByOrgan()
{
    return this->name + " is to transport of food from the mouth to the stomach via coordinated contractions";
}
