#pragma once
#include <iostream>
#include <string>

class Human
{
protected:
    std::string name_;
    virtual double increseSalaryBasedOnExpirience(int yearsOfExperience) = 0;

public:
    double getIncresedSalary(int yearsOfExperience)
    {
        double salary = getSalary() + increseSalaryBasedOnExpirience(yearsOfExperience);
        return salary;
    }
    virtual std::string getName() = 0;
    virtual double getSalary() = 0;
    virtual std::string work() = 0;
};
