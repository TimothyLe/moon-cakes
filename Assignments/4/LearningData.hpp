#ifndef LEARNINGDATA_H
#define LEARNINGDATA_H

#include <iostream>
#include <fstream>
#include <string>

class LearningData {
    public:
        LearningData();
        ~LearningData();
        std::string getFilename();
        std::string readFileContents();
        void setFilename(std::string fn);
        void writeFileContents(std::string fn);
    private:
        std::string filename;
        std::ifstream writeFile;        
        std::ofstream readFile;
};

#endif 