#include "Computer.hpp"

Computer::Computer() : Player(
    score = 0,
    id = 0,
    wins = 0,
    losses = 0,
    ties = 0,
    name = "Default",
    choice = "None" // Choices can be Rock, Paper, Scissors, or None    
)
{
    previousChoice = "None";
    previousSuccess = false;
}

Computer::~Computer()
{
}

std::string     Computer::randomChoice()
{
    std::string c = 0;
    int r = (rand() % 10) / 3; // 0-3
    if(r==0)      c = "Rock";
    else if(r==1) c = "Paper";
    else if(r==2) c = "Scissors";
    else          c = randomChoice();
}

void    Computer::setPreviousChoice(const Player &p)
{
    previousChoice = getChoice();
}

void    Computer::setPreviousSuccess(const Player &p)
{
    if(getWins)
    {
        previousSuccess = true;
    }
}

std:string Computer::getPreviousChoice()
{
    return !strcmp("None", getChoice());
}
