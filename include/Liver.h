#pragma once

#include "DigestiveOrgan.h"

class Liver : public DigestiveOrgan
{
public:
    Liver(std::string name);
    std::string outputByOrgan();
    std::string workDoneByOrgan();
};
