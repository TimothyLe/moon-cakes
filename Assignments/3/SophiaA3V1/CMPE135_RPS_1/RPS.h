/*
 * RPS.h
 *
 *  Created on: Sep 26, 2018
 *      Author: Sophia
 */

#ifndef RPS_H_
#define RPS_H_
#include "Player.h"


#include "Input.h"

#include "Selection.h"

//options, rules, random,
class RPS : public Input, public Selection{
private:
	int numOfRounds;

	int roundWorth;

//		Input houseinput;
//		Rules houserules;
//		Options houseoptions;





protected:
	void changeNumRounds(int num);
	Player playerOne;
	Player playerTwo;



public:
	void update(int winner);
	int get_numOfRounds();
	int get_score(int);

	RPS ();
	RPS (int rounds);


};



#endif /* RPS_H_ */
