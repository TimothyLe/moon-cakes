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
        int rs = 0;
        int ps = 0;
        int ss = 0;
        for(int i = 0; i<5; i++){
            if(playerchoices[i]=='r'){
                rs++;
            }
            else if(playerchoices[i]=='p'){
                ps++;
            }
            else{
                ss++;
            }
        }
        if(rs>ps){
            p.setChoice(1);
        }
        if(ps>rs){
            p.setChoice(2);
        }
        if(ps>ss){
            p.setChoice(2);
        }
        if(ss>ps){
            p.setChoice(3);
        }
        if(rs>ss){
            p.setChoice(1);
        }
        if(ss>rs){
            p.setChoice(3);
        }
    }
}

int Computer::getchoicecount(){
    return choicecount;
}

