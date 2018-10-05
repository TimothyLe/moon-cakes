/*
 * Random.h
 *
 *  Created on: Sep 26, 2018
 *      Author: Sophia
 */

#ifndef RANDOM_H_
#define RANDOM_H_

#include <string>
#include "Options.h"


using namespace std;

class Random: virtual public Options{
protected:
	int Randomize();


	//Options randOptions;


public:

	Random();


};




#endif /* RANDOM_H_ */
