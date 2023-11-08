#include "../include/Pancreas.h"

Pancreas::Pancreas(std::string name)
{
    this->name = name;
}
std::string Pancreas::outputByOrgan()
{
    return "Release digestive enzymes\n";
}
std::string Pancreas::workDoneByOrgan()
{
    return this->name + " is to secretion of digestive enzymes into the small intestine to aid in carbohydrate, protein, and fat digestion";
}
