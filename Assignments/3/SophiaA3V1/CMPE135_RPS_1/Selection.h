/*
 * Selection.h
 *
 *  Created on: Sep 27, 2018
 *      Author: Sophia
 */

#ifndef SELECTION_H_
#define SELECTION_H_


//#include "Input.h"
#include "Random.h"
#include <string>
using namespace std;


class Selection: virtual public Random{
private:
public:
	string randomSelection();

};



#endif /* SELECTION_H_ */
