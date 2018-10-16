//
//  Player.cpp
//  RPSAssignments135
//
//  Created by Michael Ong on 10/5/18.
//  Copyright © 2018 CMPE135. All rights reserved.
//

#include "Memory.hpp"
#include "Computer.hpp"
#include "Player.hpp"
#include "GameInterface.hpp"
#include <iostream>

Player::Player()
{
    score = 0;
    wins = 0;
    losses = 0;
    ties = 0;
    name = "Default";
    // Choices can be Rock, Paper, Scissors, or None
}
Player::~Player()
{
    //nothing here
}

void Player::setName()
{
    std::cout << "Please enter your name:\n";
    std::cin >> name;
}
void Player::setChoice(int c)
{
    if(c == 0){
        choice = NULL;
    }
    if(c == 1){
        choice = 'r';
    }
    if(c == 2){
        choice = 'p';
    }
    if(c == 3){
        choice = 's';
    }
    c = 0;
}
void Player::setWins()
{
    wins = wins+1;
}
void Player::setLosses()
{
    losses = losses+1;
}
void Player::setTies()
{
    ties = ties+1;
}
int Player::getScore()
{
    return score;
}
std::string Player::getName()
{
    return name;
}
char Player::getChoice()
{
    return choice;
}
int Player::getWins()
{
    return wins;
}
int Player::getLosses()
{
    return losses;
}
int Player::getTies()
{
    return ties;
}
