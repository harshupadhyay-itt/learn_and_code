#pragma once

#include "DigestiveOrgan.h"

class SmallIntestine : public DigestiveOrgan
{
public:
    SmallIntestine(std::string name);
    void inputForOrgan(std::string food);
    std::string outputByOrgan();
    std::string workDoneByOrgan();
};
