
#include "../include/Mouth.h"

Mouth::Mouth(std::string name)
{
    this->name = name;
}
void Mouth::inputForOrgan(std::string food)
{
    std::cout << this->name << " take " << food << "\n";
}
std::string Mouth::outputByOrgan()
{
    return "forward chewed food to esophagus\n";
}
std::string Mouth::workDoneByOrgan()
{
    return this->name + " is ingestion and initial mechanical and chemical digestion of food, especially carbohydrates";
}