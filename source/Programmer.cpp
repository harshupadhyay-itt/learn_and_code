#include "../include/Programmer.h"

Programmer::Programmer(std::string name, std::string projectName) : projectName_(projectName)
{
    name_ = name;
}

std::string Programmer::getName()
{
    return name_;
}

std::string Programmer::getProjectName()
{
    return projectName_;
}

double Programmer::getSalary()
{
    return salary_;
}

double Programmer::increseSalaryBasedOnExpirience(int yearsOfExperience_)
{
    double incresedsalary = ((salary_ * incrementPercentage_) + (salary_ * yearsOfExperience_)) / 100;
    salary_ = salary_ + incresedsalary;
    return incresedsalary;
}

void Programmer::setProjectName(std::string projectName)
{
    projectName_ = projectName;
}

std::string Programmer::work()
{
    return "Programming";
}
