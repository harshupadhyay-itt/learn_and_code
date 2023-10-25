#include "../inc/Programmer.h"

std::string Programmer::getName()
{
    return name_;
}

void Programmer::setName(std::string name)
{
    name_ = name;
}

std::string Programmer::getProjectName()
{
    return projectName_;
}

void Programmer::setProjectName(std::string projectName)
{
    projectName_ = projectName;
}

std::string Programmer::work()
{
    return "Programming";
}
