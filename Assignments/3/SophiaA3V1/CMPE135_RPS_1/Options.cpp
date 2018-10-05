/*
 * Options.cpp
 *
 *  Created on: Sep 26, 2018
 *      Author: Sophia
 */
#include "Options.h"

#include <string>

using namespace std;




Options::Options(){
	numOfOptions = 3;


}
int Options::get_numOfOptions(){
	return numOfOptions;
}
/*string Options::getStringEnum(int val){
	switch (val){
	case ROCK:
		return "Rock";
		break;
	case PAPER:
		char paper[]= "Paper";
		arr = &paper;
		break;
	case SCISSORS:
		char scissors[] = "Scissors";
		arr = &scissors;
		break;
	default:
		char invalid[] = "Invalid Choice";
		arr = &invalid;
	return arr;
	}
}
*/

string Options::getStringEnum(int val){
	string temp = "";
	switch (val){
	case ROCK:
		temp = "Rock";
		break;
	case PAPER:
		temp = "Paper";
		break;
	case SCISSORS:
		temp = "Scissors";
		break;
	default:
		temp = "Invalid Choice";
	}
	return temp;
}


string* Options::strArr_Options(){
	string* arr = new string [numOfOptions];
	for(int i=0; i< numOfOptions; i++){
		arr[i] = getStringEnum(i);
	}
	return arr;

}
string Options::oneStr_Options(){
string temp = "" ;

for(int i = 0; i< get_numOfOptions();i++){
	temp +=  strArr_Options()[i] + " ";

}
temp = temp.substr(0,temp.length()-1);

return temp;
}

