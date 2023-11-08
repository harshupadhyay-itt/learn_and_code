#pragma once

#include "DigestiveOrgan.h"

class Pancreas : public DigestiveOrgan
{
public:
    Pancreas(std::string name);
    std::string outputByOrgan();
    std::string workDoneByOrgan();
};
