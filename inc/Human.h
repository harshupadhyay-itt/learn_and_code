#pragma once
#include <iostream>
#include <string>

class Human
{
protected:
    std::string name_;

public:
    virtual std::string getName() = 0;
    virtual void setName(std::string) = 0;
    virtual std::string work() { return "not working";};
};
