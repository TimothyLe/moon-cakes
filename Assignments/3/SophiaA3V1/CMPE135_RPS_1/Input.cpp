/*
 * Input.cpp
 *
 *  Created on: Sep 27, 2018
 *      Author: Sophia
 */

#include "Input.h"
#include <istream>
using namespace std;



int Input::Round(int onepot, int twopot){
	return int(Rules::faceOff(onepot,twopot));



}

int Input::changeNumRounds(istream& in){
	int temp;
	in>>temp;
	return temp;


}


