/*
 * Player.h
 *
 *  Created on: Sep 26, 2018
 *      Author: Sophia
 */

#ifndef PLAYER_H_
#define PLAYER_H_
class Player{
private:
	int score;
	int wins;
	int loses;

public:
	Player ();
	int get_score();
	void roundResult(int update);




};




#endif /* PLAYER_H_ */
