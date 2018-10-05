#include "Player.hpp"

Player::Player()
{
    score = 0;
    id = 0;
    wins = 0;
    losses = 0;
    ties = 0;
    name = "Default";
    choice = "None"; // Choices can be Rock, Paper, Scissors, or None
}

Player::~Player()
{
}

void Player::setScore(int s)
{
    score = s;
}

void Player::setName(std::string n)
{
    name = n;
}

void Player::setChoice(std::string c)
{
    choice = c;
}

void Player::setWins(int w)
{
    wins = w;
}

void Player::setLosses(int l)
{
    losses = l;
}

void Player::setTies(int t)
{
    ties = t;
}

int Player::getScore()
{
    return score;
}

std::string Player::getName()
{   
    return name;
}

std::string Player::getChoice()
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
