#pragma once

#include "DigestiveOrgan.h"

class Mouth : public DigestiveOrgan
{
public:
    Mouth(std::string name);
    void inputForOrgan(std::string food);
    std::string outputByOrgan();
    std::string workDoneByOrgan();
};
