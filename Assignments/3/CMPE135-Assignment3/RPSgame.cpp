//============================================================================
// Name        : RPSgame.cpp
// Author      : Alexandro Escalante
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Choose.h"
#include "Computer.h"
#include <cmath>
#include <cstdlib>
#include <string>

void assignments(choice game, int x, std::string player);

int main(int argc, const char * argv[]) {
	int p_select, c_select;
	int count=0;

	std::cout <<"welcome to the Rock Paper Scissors\n";



	while (p_select != 4 && (count<=20)) {
		choice game;

		p_select = 0;
		c_select = 0;

		std::string player = "";
		std::string computer = "";

		std::cout<< "please select an option:\n";

		std::cout << "1. Rock \n2. Paper \n3. Scissors \n4. End Game\n";
		std::cin >> p_select;

		std::cout<<"players choice is: "<<p_select<<std::endl;
		if (p_select == 1)
		{
			std::cout<<"chose rock\n";

		}
		if (p_select == 2)
				{
					std::cout<<"chose paper\n";

			}
		if (p_select == 3)
			{
					std::cout<<"chose scissor\n";

			}


		c_select =(rand() % 3)+1; //random number that is 1 to 3

		std::cout<< "computers choice="<< c_select << std::endl;
		if (c_select == 1)
				{
					std::cout<<"chose rock\n";

				}
				if (c_select == 2)
						{
							std::cout<<"chose paper\n";

					}
				if (c_select == 3)
					{
							std::cout<<"chose scissor\n";

					}




		if ((p_select > 0) && (p_select <= 4)) {

			assignments(game, p_select, "player");
			std::cout << game.getP_select() << std::endl;
			assignments(game, c_select, "computer");
			std::cout << game.getC_select() << std::endl;
			game.compare();
			game.addgamecount();
		}
		else {

			std::cout<< "invalid input\n";
			std::cout<<"please restart";
		}



		if (game.getgamecount() == 20) {
			std::cout << "Game has ended\n";
		} else if (p_select == 4) {
			std::cout << "Game has ended\n";
		}
	}
			count++;
	return 0;

}

void assignments(choice game, int x, std::string player) {
	if (player == "player") {
		if ((x >= 0) || x<=4) {
			std::cout<<"invalid";
		}
		if (x == 1) {
			game.P_Assign("rock");
		}
		if (x == 2) {
			game.P_Assign("paper");
		}
		if (x == 3) {
			game.P_Assign("scissors");
		}
	}
	else if (player == "computer") {
		if (x == 0) {
			return;
		}
		if (x == 1) {
			game.C_Assign("rock");
		}
		if (x == 2) {
			game.C_Assign("paper");
		}
		if (x == 3) {
			game.C_Assign("scissors");
		}
	}
}
