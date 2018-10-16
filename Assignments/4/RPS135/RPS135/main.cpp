//
//  main.cpp
//  RPS
//
//  Created by Michael Ong on 10/5/18.
//  Copyright © 2018 CMPE135. All rights reserved.
//

#include <iostream>
#include <fstream>
#include "Memory.hpp"
#include "Player.hpp"
#include "Computer.hpp"
#include "GameInterface.hpp"

int main(){
    GameInterface game;
    Memory p;
    Computer comp;
    std::ofstream output;
    
    output.open("/Users/Michael/Desktop/RPS135/RPS135/output.txt");
    
    std::string exit;
    
    game.welcome();
    exit = game.menu();
    
    if(exit == "1"){
        p.setName();
    }
    
    std::cout<<"Let the games begin!\n";
    
    while(exit != "3" || game.getgamecount() <= 20){
        game.game(p, comp);
        
        output << p.getChoice();
        
        game.compare(p, comp);
        
        if(game.getgamecount() == 20){
            break;
        }
    }
    game.results(p);
    
    output.close();

    return 0;
}


