#pragma once
#include "Human.h"

class Manager : public Human
{
private:
    std::string work_;
    int projectManaged_;

public:
    Manager(std::string name, int projectManaged) : projectManaged_(projectManaged)
    {
        this->setName(name);
    }
    std::string getName();
    void setName(std::string name);
    int getProjectManaged();
    void setProjectManaged(int projectManaged);
    std::string work();
};
