#ifndef COMPUTER_H
#define COMPUTER_H

#include <iostream>
#include <stdio.h>
#include <string>
#include <stdbool.h>n
#include "Player.hpp"

class Computer :  public Player
{
    public:
        Computer();
        ~Computer();
        std::string randomChoice();
        void setPreviousChoice(Player &p);
        void setPreviousSuccess(Player &p);
        std:string getPreviousChoice();        

    private:
        std::string previousChoice;
        bool previousSuccess;
};
#endif 