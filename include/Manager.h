#pragma once
#include "Human.h"

class Manager : public Human
{
private:
    int incrementPercentage_ = 10;
    int projectManaged_;
    double salary_ = 80000;
    std::string work_;
    double increseSalaryBasedOnExpirience(int yearsOfExperience);

public:
    Manager(std::string name, int projectManaged);
    std::string getName();
    int getProjectManaged();
    double getSalary();
    void setProjectManaged(int projectManaged);
    std::string work();
};
