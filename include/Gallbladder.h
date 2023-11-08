#pragma once

#include "DigestiveOrgan.h"

class Gallbladder : public DigestiveOrgan
{
public:
    Gallbladder(std::string name);
    std::string outputByOrgan();
    std::string workDoneByOrgan();
};
