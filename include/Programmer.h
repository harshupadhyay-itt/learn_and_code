#pragma once
#include "Human.h"

class Programmer : public Human
{
private:
    int incrementPercentage_ = 10;
    std::string projectName_;
    double salary_ = 40000;
    std::string work_;
    double increseSalaryBasedOnExpirience(int yearsOfExperience_);

public:
    Programmer(std::string name, std::string projectName);
    std::string getName();
    std::string getProjectName();
    double getSalary();
    void setProjectName(std::string projectName);
    std::string work();
};
