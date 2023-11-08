#pragma once

#include"DigestiveOrgan.h"
#include<iostream>
#include<memory>
#include<vector>

class Human
{
public: 
    Human(){};
    std::vector<std::shared_ptr<DigestiveOrgan>> organs;
    void digestionProcess(std::string food);
    std::string getName();
};
