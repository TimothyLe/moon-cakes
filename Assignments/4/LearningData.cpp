#include "LearningData.hpp"

LearningData::LearningData()
{
    filename = "default";
}

LearningData::~LearningData()
{
}

std::string LearningData::readFileContents()
{
    int count = 0;
    std::string fileContents;
    readFile.open(getFilename());
    if(readFile.is_open())
    {
        while(getline(readFile, fileContents))
        {
            std::cout << "Contents of " << filename << std::endl; 
            std::cout << fileContents << std::endl;
        }
        readFile.close();
    }
    return fileContents;
}

void LearningData::writeFileContents(std::string fn)
{    
    int count = 0;
    writeFile.open(getFilename());
    if(writeFile.is_open())
    {
        writeFile >> fn;
        std::cout << "Wrote " << fn << " to " << filename << std::endl;
        writeFile.close();
    }    
}

std::string LearningData::getFilename()
{
    return filename;
}

void LearningData::setFilename(std::string fn)
{
    filename = fn;
}

