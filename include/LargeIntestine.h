#pragma once

#include "DigestiveOrgan.h"

class LargeIntestine : public DigestiveOrgan
{
public:
    LargeIntestine(std::string name);
    void inputForOrgan(std::string food);
    std::string outputByOrgan();
    std::string workDoneByOrgan();
};
