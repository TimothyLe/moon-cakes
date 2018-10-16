// Created by Moon Cakes

#include "Memory.hpp"

Memory::Memory(){
    filename = ".";
    data = malloc(MAX_ARRAY_SIZE);
}

Memory::~Memory(){
}

void Memory::loadData()
{
    ifstream infile;
    if(!infile.empty() && data!=NULL)
    {
        infile.open(filename);
        infile >> data;
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

void Memory::setData(Player *p, Computer *c)
{
    if(p.getChoice())
    {
        strcat(data, p.getChoice());
    }
    else 
    {
        std::cout << "No Player choice available" << std::endl;
    }
    if(c.getChoice())
    {
        strcat(data, c.getChoice());
    }
    else 
    {
        std::cout << "No Computer choice available" << std::endl;
    }
}

