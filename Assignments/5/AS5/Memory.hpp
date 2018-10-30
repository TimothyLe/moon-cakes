// Created by Moon Cakes

#ifndef MEMORY_HPP
#define MEMORY_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#define MAX_ARRAY_SIZE 512

class Memory {
public:
    Memory();
    ~Memory();
    void loadData(std::string content);
    void storeData();
    void setFileName(std::string fname);
    void setData(char input);
private:
    std::string filename = ".";
    char data[MAX_ARRAY_SIZE];
};

#endif /* MEMORY_HPP */
