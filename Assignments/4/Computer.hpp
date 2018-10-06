//
//  Computer.hpp
//  RPSAssignments135
//
//  Created by Michael Ong on 10/5/18.
//  Copyright © 2018 CMPE135. All rights reserved.
//

#ifndef Computer_hpp
#define Computer_hpp

#include <stdio.h>
#include "Player.hpp"
#include <iostream>

class Computer : public Player{
public:
    Computer();
    void randomchoice(Player & p);
    void educatedchoice(Player & p);
    int getchoicecount();
private:
    int choicecount;
    char playerchoices[5];
};

#endif /* Computer_hpp */
