#include "../include/Stomach.h"

Stomach::Stomach(std::string name)
{
    this->name = name;
}
void Stomach::inputForOrgan(std::string food)
{
    std::cout << this->name << " take chewed " << food << " from Esophagus\n";
}
std::string Stomach::outputByOrgan()
{
    return "Forward incoming food to small Intestine\n";
}
std::string Stomach::workDoneByOrgan()
{
    return this->name + " is Mixing food with gastric juices, including hydrochloric acid and digestive enzymes to break down proteins";
}
