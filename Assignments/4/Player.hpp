#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <stdio.h>
#include <string>

class Player
{
    public:
        Player();
        ~Player();
        void        setScore(int s);
        void        setName(std::string n);
        void        setChoice(std::string c);
        void        setWins(int w);
        void        setLosses(int l);
        void        setTies(int t);
        int         getScore();
        std::string getName();
        std::string getChoice();
        int         getWins();
        int         getLosses();
        int         getTies();

    protected:
        int         score;
        int         id;
        int         wins, losses, ties;
        std::string name;
        std::string choice;
};
#endif 