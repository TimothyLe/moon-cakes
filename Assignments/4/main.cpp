//
//  main.cpp
//  RPSAssignments135
//
//  Created by Michael Ong on 10/5/18.
//  Copyright © 2018 CMPE135. All rights reserved.
//

#include <iostream>
#include "Human.cpp"
#include "Player.cpp"
#include "Computer.cpp"

void compare(Player a, Computer b);

int main(){
    Human player;
    Computer computer;
    std::string exit;
    int gamecount = 0;
    int c;
    
    std::cout<<"Welcome to RPS!\n";
    std::cout<<"Select:\n1. Set Name\n2. Play Game \n3. exit\n";
    std::cin >> exit;
    if(exit == "1"){
        player.setName();
    }
    
    while(exit != "3" || gamecount == 20){
        std::cout << "Select:\n1. Rock\n2. Paper\n3. Scissors\n";
        std::cin >> c;
        player.setChoice(c);
        if(computer.getchoicecount() != 5){
            computer.randomchoice(computer);
        }
        else{
            computer.educatedchoice(computer);
        }
        compare(player, computer);
        gamecount++;
    }
    exit = "";
    
    
    std::cout<<"Game Over!\nResults: \n"<< "Wins: " << player.getWins() << "\n" << "Losses: " << player.getLosses() << "\n" << "Ties: " << player.getTies() << "\n";
}

void compare(Player & a, Computer & b){
    if ( (a.getChoice() == 'p' && b.getChoice() == 'r') ||
        (a.getChoice() == 's' && b.getChoice() == 'p')||
        (a.getChoice() == 'r' && b.getChoice() == 's'))
    {
        std::cout<< "Player Winner\n";
        a.setWins();
        std::cout<< "Wins: " << a.getWins() << "\n" << "Losses: " << a.getLosses() << "\n" << "Ties: " << a.getTies() << "\n";
    }
    else if((a.getChoice() == 'r' && b.getChoice() == 'p')||
            (a.getChoice() == 'p' && b.getChoice() == 's')||
            (a.getChoice() == 's' && a.getChoice() == 'r')){
        
        std::cout<< "Player Loses\n";
        a.setLosses();
        std::cout<< "Wins: " << a.getWins() << "\n" << "Losses: " << a.getLosses() << "\n" << "Ties: " << a.getTies() << "\n";
    }
    else if((a.getChoice() == 'r' && b.getChoice() == 'r')||
            (a.getChoice() == 'p' && b.getChoice() == 'p')||
            (a.getChoice() == 's' && b.getChoice() == 's')){
        
        std::cout<< "Its a tie\n";
        a.setTies();
        std::cout<< "Wins: " << a.getWins() << "\n" << "Losses: " << a.getLosses() << "\n" << "Ties: " << a.getTies() << "\n";
    }
    else{
        std::cout<< "invalid response\n";
    }
}
