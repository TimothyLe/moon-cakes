/*
 * RPS.cpp
 *
 *  Created on: Sep 26, 2018
 *      Author: Sophia
 */
#include "RPS.h"
#include <iostream>
using namespace std;

RPS::RPS(){
	numOfRounds = 1;
	roundWorth = 1;
	playerOne = Player();
	playerTwo = Player();
}
RPS::RPS(int rounds){
	numOfRounds = rounds;
	roundWorth = 1;
	playerOne = Player();
	playerTwo = Player();
}

void RPS::update(int winner){
	if (winner == 1){
		playerOne.roundResult(roundWorth);
		playerTwo.roundResult(roundWorth*-1);
	}
	else if (winner ==2) {
		playerTwo.roundResult(roundWorth);
		playerOne.roundResult(roundWorth*-1);
	}
	else
		return;

}

void RPS::changeNumRounds(int num){
	numOfRounds = num;
	return;

}

int RPS::get_numOfRounds(){
	return numOfRounds;
}

int RPS::get_score(int part){
	if (part==1){
		return playerOne.get_score();
	}
	if (part==2){
			return playerTwo.get_score();
		}
}




