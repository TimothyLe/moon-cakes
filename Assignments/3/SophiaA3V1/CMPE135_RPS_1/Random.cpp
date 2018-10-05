/*
 * Random.cpp
 *
 *  Created on: Sep 26, 2018
 *      Author: Sophia
 */


#include <cstdlib>
#include <ctime>
#include "Random.h"



Random::Random(){

}
int Random::Randomize(){
	//srand(time(NULL));
	return int(rand()% Options::get_numOfOptions());
}



