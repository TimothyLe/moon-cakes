/*
 * Rules.cpp
 *
 *  Created on: Sep 27, 2018
 *      Author: Sophia
 */

#include "Rules.h"


int Rules::faceOff (int one, int two){
	int output;
	if (one==two){
		return 0;
	}
	else if (one>two){
		return output = 1;
	}
	else if (one ==0 && two == 2){
		return output = 1;
	}
	else
		return output = 2;

}


