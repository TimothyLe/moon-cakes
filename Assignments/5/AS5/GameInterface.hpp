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
#include "Player.hpp"
#include "Computer.hpp"
#include "Player.hpp"

class GameInterface{
public:
    GameInterface();
    ~GameInterface();
    void welcome();
    std::string menu();
    void results(Player & p);
    void game(Player & p, Computer & comp);
    void addgamecount();
    int getgamecount();
    void compare(Player & a, Computer & b);
private:
    std::string menuchoice;
    int gamecount;
};

#endif /* GameInterface_hpp */
