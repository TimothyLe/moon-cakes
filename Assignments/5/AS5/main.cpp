#include <iostream>
#include <string>
#include <fstream>
#include "./Memory.hpp"

int main()
{
    Memory m;
    std::string temp;
    m.setFileName("./output.txt");
    for(int i=0;i<6;i++)
    {
        m.setData('r');
    }
    m.storeData();
    m.loadData(temp);
    std::cout << temp << '\n';
    return 0;
}
