//
//  GameInterface.cpp
//  RPS135
//
//  Created by Michael Ong on 10/5/18.
//  Copyright © 2018 CMPE135. All rights reserved.
//


#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cmath>
#include "GameInterface.hpp"
#include "Player.hpp"
#include "Memory.hpp"
#include "Computer.hpp"


GameInterface::GameInterface(){
    menuchoice = "";
    gamecount = 1;
}

void GameInterface::welcome(){
    std::cout<<"Welcome to RPS!\n";
}

std::string GameInterface::menu(){
    std::string choice;
    std::cout<<"Select:\n1. Set Name\n2. Play Game \n3. exit\n";
    std::cin >> menuchoice;
    return menuchoice;
}

void GameInterface::results(Memory & p){
    std::cout<<"Game Over!\nResults: \n"<<"Name: \n"<< p.getName() << "\nWins: " << p.getWins() << "\n" << "Losses: " << p.getLosses() << "\n" << "Ties: " << p.getTies() << "\n";
}

void GameInterface::game(Memory & p, Computer & comp){
    int c;
    std::cout << "Select:\n1. Rock\n2. Paper\n3. Scissors\n";
    std::cin >> c;
    p.setChoice(c);
    if(comp.getchoicecount() != 5){
        comp.randomchoice(comp);
    }
    else{
        comp.educatedchoice(comp);
    }
}

void GameInterface::addgamecount(){
    gamecount++;
}

int GameInterface::getgamecount(){
    return gamecount;
}

void GameInterface::compare(Memory & a, Computer & b){
    if ( (a.getChoice() == 'p' && b.getChoice() == 'r') ||
        (a.getChoice() == 's' && b.getChoice() == 'p')||
        (a.getChoice() == 'r' && b.getChoice() == 's'))
    {
        std::cout<< "Player Winner\n";
        a.setWins();
        gamecount++;
        std::cout<< "Wins: " << a.getWins() << "\n" << "Losses: " << a.getLosses() << "\n" << "Ties: " << a.getTies() << "\n";
    }
    else if((a.getChoice() == 'r' && b.getChoice() == 'p')||
            (a.getChoice() == 'p' && b.getChoice() == 's')||
            (a.getChoice() == 's' && a.getChoice() == 'r')){
        
        std::cout<< "Player Loses\n";
        a.setLosses();
        gamecount++;
        std::cout<< "Wins: " << a.getWins() << "\n" << "Losses: " << a.getLosses() << "\n" << "Ties: " << a.getTies() << "\n";
    }
    else if((a.getChoice() == 'r' && b.getChoice() == 'r')||
            (a.getChoice() == 'p' && b.getChoice() == 'p')||
            (a.getChoice() == 's' && b.getChoice() == 's')){
        
        std::cout<< "Its a tie\n";
        a.setTies();
        gamecount++;
        
        std::cout<< "Wins: " << a.getWins() << "\n" << "Losses: " << a.getLosses() << "\n" << "Ties: " << a.getTies() << "\n";
    }
    else{
        std::cout<< "invalid response\n";
    }
}
