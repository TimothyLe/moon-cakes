/*
 * Choose.h
 *
 *  Created on: Sep 26, 2018
 *      Author: alexe
 */

#ifndef CHOOSE_H_
#define CHOOSE_H_

#include <string>
#include <iostream>


void getgamecount();
void getwins();
void getloss();

class choice {
private:

    std::string  P_Select;
    std::string C_Select;
    int wins;
    int loss;
    int gamecount;

public:
    std::string getP_select(){return P_Select;};
    std::string getC_select(){return C_Select;};

    void P_Assign(std::string a){P_Select = a;};
    void C_Assign(std::string b){C_Select = b;};
    void getwins(){wins+=1;};
    void getloss(){loss+=1;};
    void addgamecount(){gamecount+=1;};

    int getgamecount(){return gamecount;};

    void compare(){

    	if ( (getP_select() == "paper" && getC_select() == "rock") ||
    			(getP_select() == "scissors" && getC_select() == "paper")||
    			(getP_select() == "rock" && getC_select() == "scissors"))
    	{
    		std::cout<< "Player Winner\n";
    		     getloss();
    		     getgamecount();
    	}
    	else if((getP_select() == "rock" && getC_select() == "paper")||
    			(getP_select() == "paper" && getC_select() == "scissors")||
    			(getP_select() == "scissors" && getC_select() == "rock")){

    		std::cout<< "Player Loses\n";
    		     getloss();
    		     getgamecount();
    	}
    	else if((getP_select() == "rock" && getC_select() == "rock")||
    			(getP_select() == "paper" && getC_select() == "paper")||
    			(getP_select() == "scissors" && getC_select() == "scissors")){

    		std::cout<< "Its a tie\n";
    		     getloss();
    		     getgamecount();
    	}
    	else{
    		std::cout<< "invalid response\n";
    	}
    }


};

#endif /* CHOOSE_H_ */
