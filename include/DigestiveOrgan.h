#pragma once

#include<iostream>

class DigestiveOrgan
{
protected:
    std::string name;
public:
    virtual void inputForOrgan(std::string food){};
    virtual std::string outputByOrgan() = 0;
    virtual std::string workDoneByOrgan() = 0;
};
