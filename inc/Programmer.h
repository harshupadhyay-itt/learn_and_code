#pragma once
#include "Human.h"

class Programmer : public Human
{
private:
    std::string work_;
    std::string projectName_;

public:
    Programmer(std::string name, std::string projectName) : projectName_(projectName)
    {
        this->setName(name);
    }
    std::string getName();
    void setName(std::string name);
    std::string getProjectName();
    void setProjectName(std::string projectName);
    std::string work();
};
