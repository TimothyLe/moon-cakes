//
//  GameInterface.hpp
//  RPS135
//
//  Created by Michael Ong on 10/5/18.
//  Copyright © 2018 CMPE135. All rights reserved.
//

#ifndef GameInterface_hpp
#define GameInterface_hpp

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "Memory.hpp"
#include "Computer.hpp"
#include "Player.hpp"

class GameInterface{
public:
    GameInterface();
    void welcome();
    std::string menu();
    void results(Memory & p);
    void game(Memory & p, Computer & comp);
    void addgamecount();
    int getgamecount();
    void compare(Memory & a, Computer & b);
private:
    std::string menuchoice;
    int gamecount;
};

#endif /* GameInterface_hpp */
