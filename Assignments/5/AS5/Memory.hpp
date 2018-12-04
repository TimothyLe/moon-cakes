// Created by Moon Cakes

#ifndef MEMORY_HPP
#define MEMORY_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#define MAX_ARRAY_SIZE 512
#define LOOKUP_SIZE 30


struct DataFrequency {
    std::string frequent_str;
    int frequency;
};

class Memory {
public:
    Memory();
    ~Memory();
    // Grab content from the txt file
    void loadData(std::string content);
    // Place data into the txt file
    void storeData();
    // Specify file attributes: name and location
    void setFileName(std::string fname);
    // Acquire the user input
    void setData(char input);
    // Determine the choice based on lookup table
    void setFrequency();
    // Pipeline frequency to Computer for future input
    void getFrequency(int freq, std::string freq_str);
    // All possible combinations for frequency 
    std::string CHOICE_LOOKUP[LOOKUP_SIZE] = {
        "RRR", "RRP", "RRS", "RPR", "RSR", "RPP", "RSS",
        "PPP", "PPR", "PPS", "PRP", "PSP", "PRR", "PSS",
        "SSS", "SSR", "SSP", "SRS", "SPS", "SRR", "SPP"
    };
private:
    std::string filename = ".";
    char data[MAX_ARRAY_SIZE];
    int frequency;
    DataFrequency df;
};

#endif /* MEMORY_HPP */
