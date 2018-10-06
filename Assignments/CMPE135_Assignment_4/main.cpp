//
//  main.cpp
//  RPS
//
//  Created by Michael Ong on 10/5/18.
//  Copyright © 2018 CMPE135. All rights reserved.
//

#include <iostream>
#include "Human.hpp"
#include "Player.hpp"
#include "Computer.hpp"
#include "GameInterface.hpp"

int main(){
    GameInterface game;
    Human p;
    Computer comp;
    std::string exit;
    
    game.welcome();
    exit = game.menu();
    
    if(exit == "1"){
        p.setName();
    }
    
    while(exit != "3" || game.getgamecount() <= 20){
        game.game(p, comp);
        
        game.compare(p, comp);
        game.addgamecount();
        if(game.getgamecount() == 20){
            break;
        }
        p.setChoice(0);
    }
    game.results(p);
    
    return 0;
}


