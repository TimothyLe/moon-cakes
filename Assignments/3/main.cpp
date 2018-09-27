//
//  main.cpp
//  RockPaperScissors135
//
//  Created by Michael Ong on 9/26/18.
//  Copyright © 2018 CMPE135. All rights reserved.
//

#include <iostream>
#include "Choose.h"
#include <cmath>
#include <cstdlib>

void assignments(choice game, int x, std::string player);

int main(int argc, const char * argv[]) {
    int menu_select, c_select;
    while (menu_select != 4){
        choice game;
        
        menu_select = 0;
        c_select = 0;
        
        std::string player = "";
        std::string computer = "";
        
        std::cout << "Select \n1. Rock \n2. Paper \n3. Scissors \n4. End Game\n";
        std::cin >> menu_select;
        
        c_select = 1+(rand()%3); //random number that is 1 to 3
        
        if(menu_select < 4){
            assignments(game, menu_select, "player");
            std::cout<<game.getselect()<<std::endl;
            assignments(game, c_select, "computer");
            std::cout<<game.getcselect()<<std::endl;
            game.compare();
            game.addgamecount();
        }
        if(game.getgamecount() == 20){
            std::cout << "Game has ended\n";
        }
        else if(menu_select == 4){
            std::cout << "Game has ended\n";
        }
    }
    
    return 0;
}

void assignments(choice game, int x, std::string player){
    if(player == "player"){
        if(x == 0){
            return;
        }
        if(x == 1){
            game.P_Assign("rock");
        }
        if(x == 2){
            game.P_Assign("paper");
        }
        if(x == 3){
            game.P_Assign("scissors");
        }
    }
    if(player == "computer"){
        if(x == 0){
            return;
        }
        if(x == 1){
            game.C_Assign("rock");
        }
        if(x == 2){
            game.C_Assign("paper");
        }
        if(x == 3){
            game.C_Assign("scissors");
        }
    }
}
