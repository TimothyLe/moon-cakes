// Created by Moon Cakes

#ifndef MEMORY_HPP
#define MEMORY_HPP

#include <iostream>
#include "Player.hpp"
#include "Computer.hpp"
#include <fstream>
#include <stdlib.h>
#define MAX_ARRAY_SIZE 512

class Memory {
public:
    Memory();
    ~Memory();
    void loadData();
    void storeData();
    void setFileName(std::string fname);
    void setData(Player *p, Computer *c);
private:
    std::string filename;
    char *data;
};

#endif /* MEMORY_HPP */
