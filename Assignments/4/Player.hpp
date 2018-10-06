//
//  Player.hpp
//  RPSAssignments135
//
//  Created by Michael Ong on 10/5/18.
//  Copyright © 2018 CMPE135. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <iostream>
#include <string>


class Player{
public:
    Player();
    ~Player();
    void        setName();
    void        setChoice(int c);
    void        setWins();
    void        setLosses();
    void        setTies();
    int         getScore();
    std::string getName();
    char        getChoice();
    int         getWins();
    int         getLosses();
    int         getTies();
private:
    int         score;
    int         wins, losses, ties;
    std::string name;
    char        choice;
};


#endif /* Player_hpp */
