#include "../inc/Manager.h"

std::string Manager::getName()
{
    return name_;
}

void Manager::setName(std::string name)
{
    name_ = name;
}

int Manager::getProjectManaged()
{
    return projectManaged_;
}

void Manager::setProjectManaged(int projectManaged)
{
    projectManaged_ = projectManaged;
}

std::string Manager::work()
{
    return "Managing the team";
}
