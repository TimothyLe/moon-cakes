// Created by Moon Cakes

#include "Memory.hpp"

Memory::Memory()
{
    std::fill (data, data + MAX_ARRAY_SIZE, ' ');
}

Memory::~Memory()
{
}

void Memory::loadData(std::string content)
{
    ifstream infile;
    if(!infile.empty() && data!=NULL)
    {
        infile.open(filename);
        infile >> content;
    }
    infile.close(); 
}

void Memory::storeData()
{
    ofstream outfile;
    outfile.open(filename);
    if(outfile.eof())
    {
        std::cout << "Error opening file" << std::endl;
        outfile << data;
    }
    outfile.close();
}

void Memory::setFileName(std::string fname)
{
    filename = fname;
}

void Memory::setData(char input)
{
    int i, count = 0;
    for(i=0; i<MAX_ARRAY_SIZE; i++)
    {
        if(data[i] != ' ')
        {
            data[i] = input;
        }
        if(!(i % 5))
        {
            data[i] = '\n';
        }
    }        
}

