//
//  Computer.cpp
//  RPSAssignments135
//
//  Created by Michael Ong on 10/5/18.
//  Copyright © 2018 CMPE135. All rights reserved.
//

#include "Computer.hpp"
#include "Player.hpp"
#include <cmath>
#include <cstdlib>

Computer::Computer() : Player(){
    choicecount = 0;
}
void Computer::randomchoice(Player & p){
    int random = 1 + (rand() % 3);

    p.setChoice(random);
}

void Computer::educatedchoice(Player & p){
    if(choicecount != 5){
        playerchoices[choicecount] = p.getChoice();
        choicecount++;
    }
    else{
        
    }
}

int Computer::getchoicecount(){
    return choicecount;
}

