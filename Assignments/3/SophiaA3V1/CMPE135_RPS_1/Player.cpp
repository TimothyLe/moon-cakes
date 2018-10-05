/*
 * Player.cpp
 *
 *  Created on: Sep 26, 2018
 *      Author: Sophia
 */
#include "Player.h"
Player::Player(){
	score = 0;
	wins = 0;
	loses = 0;
}

int Player::get_score(){
	return score;
}

void Player::roundResult(int update){
	if (update > 0){
		wins++;
		score +=update;
	}
	else if (update < 0){
		loses++;
	}
	else
		return;



}



