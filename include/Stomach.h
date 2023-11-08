#pragma once

#include "DigestiveOrgan.h"

class Stomach : public DigestiveOrgan
{
public:
    Stomach(std::string name);
    std::string outputByOrgan();
    std::string workDoneByOrgan();
    void inputForOrgan(std::string food);
};
