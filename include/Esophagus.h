#pragma once

#include "DigestiveOrgan.h"

class Esophagus : public DigestiveOrgan
{
public:
    Esophagus(std::string name);
    void inputForOrgan(std::string food);
    std::string outputByOrgan();
    std::string workDoneByOrgan();
};
