/*
 * Display.h
 *
 *  Created on: Sep 26, 2018
 *      Author: Sophia
 */

#ifndef DISPLAY_H_
#define DISPLAY_H_

#include <istream>
#include <ostream>
#include "RPS.h"

using namespace std;

class Display: public RPS {
private:
	int roundsLeft;
	//RPS game;

	void changeNumRounds(istream& in, ostream& out);

public:
	void greeting(ostream& out);
	void numRounds(ostream& out);
	Display();
	void iter1();
	void round(ostream& out);
	void roundResult(ostream& out, int one, int two);
	void gameResult(ostream& out);


};




#endif /* DISPLAY_H_ */
