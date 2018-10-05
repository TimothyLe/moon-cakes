/*
 * Selection.cpp
 *
 *  Created on: Sep 27, 2018
 *      Author: Sophia
 */

#include "Selection.h"

#include <string>
using namespace std;

string Selection::randomSelection(){
	return Options::getStringEnum(int(Random::Randomize())) ;
}



