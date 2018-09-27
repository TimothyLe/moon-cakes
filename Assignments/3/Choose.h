//
//  Choose.h
//  RockPaperScissors135
//
//  Created by Michael Ong on 9/26/18.
//  Copyright © 2018 CMPE135. All rights reserved.
//

#ifndef Choose_h
#define Choose_h

#include <iostream>

void getgamecount();
void getwins();
void getloss();

class choice {
private:
    std::string P_Select = "";
    std::string C_Select = "";
    int wins = 0;
    int loss = 0;
    int gamecount = 0;
    
public:
    std::string getselect(){return P_Select;};
    std::string getcselect(){return C_Select;};
    
    void P_Assign(std::string a){P_Select = a;};
    void C_Assign(std::string b){C_Select = b;};
    void getwins(){wins+=1;};
    void getloss(){loss+=1;};
    void addgamecount(){gamecount+=1;};
    
    void compare(){
        if (getselect() == "rock" && getcselect() == "paper"){
            std::cout << "Player Wins\n";
            getwins();
            getgamecount();
        }
        if (getselect() == "paper" && getcselect() == "rock"){
            std::cout<< "Player Loses\n";
            getloss();
            getgamecount();
        }
        if (getselect() == "scissors" && getcselect() == "paper"){
            std::cout << "Player Wins\n";
            getwins();
            getgamecount();
        }
        if (getselect() == "paper" && getcselect() == "scissors"){
            std::cout<< "Player Loses\n";
            getloss();
            getgamecount();
        }
        if (getselect() == "rock" && getcselect() == "scissors"){
            std::cout << "Player Wins\n";
            getwins();
            getgamecount();
        }
        if (getselect() == "scissors" && getcselect() == "rock"){
            std::cout<< "Player Loses\n";
            getloss();
            getgamecount();
        }
        if (getselect() == getcselect()){
            std::cout << "Tie\n";
            getgamecount();
        }
    }
    
    int getgamecount(){return gamecount;};
};

#endif /* Choose_h */
