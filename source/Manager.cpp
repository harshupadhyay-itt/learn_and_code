#include "../include/Manager.h"

Manager::Manager(std::string name, int projectManaged) : projectManaged_(projectManaged)
{
    name_ = name;
}

std::string Manager::getName()
{
    return name_;
}

int Manager::getProjectManaged()
{
    return projectManaged_;
}

double Manager::getSalary()
{
    return salary_;
}

double Manager::increseSalaryBasedOnExpirience(int yearsOfExperience_)
{
    double incrementedsalary = ((salary_ * incrementPercentage_) + (salary_ * yearsOfExperience_)) / 100;
    salary_ = salary_ + incrementedsalary;
    return incrementedsalary;
}

void Manager::setProjectManaged(int projectManaged)
{
    projectManaged_ = projectManaged;
}

std::string Manager::work()
{
    return "Managing the team";
}
