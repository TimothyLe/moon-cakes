/*
 * Display.cpp
 *
 *  Created on: Sep 26, 2018
 *      Author: Sophia
 */
#include "Display.h"
#include <istream>
#include <ostream>
#include <iostream>
using namespace std;


Display::Display(){
	//game = input;
	roundsLeft = 40;
}



void Display::changeNumRounds(istream& in, ostream& out){
	out<<"How many rounds would you like? ";
	RPS::changeNumRounds(int(Input::changeNumRounds(in)));
	roundsLeft = get_numOfRounds();
	return;
}

void Display::greeting(ostream& out){
	out<<"Welcome to our game of Rock, Paper, Scissors!\n";
}
void Display::numRounds(ostream& out){
	out<<"There ";
	if(roundsLeft == 1){
		out<<"is 1 round" ;
	}
	else{
		out<<"are "<< roundsLeft<< " rounds";
	}
	out<<" left in this game\n";
}

void Display::round(ostream& out){
	out<<"Ready? Choose one of "<< Options::oneStr_Options()
	<< "(1-"<<Options::get_numOfOptions()<< "):";
}

void Display::iter1(){
	greeting(cout);
	//changeNumRounds(cin, cout);

	while (roundsLeft>0){
	numRounds(cout);
	round(cout);
	int temp;
	cin>>temp;
	int you = temp-1;
	int comp = Randomize();
	roundResult(cout, you, comp);


	}
	gameResult(cout);

}

void Display::roundResult(ostream& out, int one, int two){
	out<<"You picked " << getStringEnum(one)<<". || "
			"The computer picked " << getStringEnum(two)<<".\n";
	int winner = Input::Round(one,two);
	if (winner==0){
		out<< "Its a tie!\n";
	}
	else if (winner==1){
		out<<"Congratulations, you won!\n";
	}
	else {
		out<<"I'm sorry, you lost.\n";
	}
	RPS::update(winner);
	out<< "~Score~\n\tYou: "<<playerOne.get_score()<<"\n"
		<<"\tComputer: "<<playerTwo.get_score()<<endl;
	roundsLeft--;

}

void Display::gameResult(ostream& out){
	out<<"FINAL Result: ";
	if(playerOne.get_score()>playerTwo.get_score()){
		out<<"YOU WON!;";
	}
	else if(playerOne.get_score()==playerTwo.get_score()){
		out<<"It was a Tie!";
	}
	else {
		out<<"Computer won.";
	}
}



