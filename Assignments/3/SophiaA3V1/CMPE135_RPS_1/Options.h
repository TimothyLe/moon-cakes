/*
 * Options.h
 *
 *  Created on: Sep 26, 2018
 *      Author: Sophia
 */


/*
 * Everytime an option is added, there are three places where the update needs
 * to happen. the options, numOfOptions in the .h file and the getStringEnum in
 * the .cpp
 */
#ifndef OPTIONS_H_
#define OPTIONS_H_

#include <string>

using namespace std;

class Options{
private:
	int numOfOptions;


protected:
	enum options {ROCK, PAPER, SCISSORS};
	int get_numOfOptions();
	string getStringEnum(int val);



public:
Options();


string *strArr_Options();
string oneStr_Options();
};



#endif /* OPTIONS_H_ */
