/*
 * Input.h
 *
 *  Created on: Sep 27, 2018
 *      Author: Sophia
 */

#ifndef INPUT_H_
#define INPUT_H_
#include "Rules.h"
#include <istream>
using namespace std;

class Input: virtual public Rules {
protected:
	int changeNumRounds(istream& in);
	int Round( int input1 ,int input2);
public:

};




#endif /* INPUT_H_ */
