#include "DiceRoll.h"


int main() {

	std::function<void(int, Func, std::string)> DiceRollGame = [=](int SetTimeout, Func func, std::string plaans) {

		func(plaans);
	};


	
	std::string plaAns = DecideDiceRoll();
	Func func = DisplayResult;


	DiceRollGame(func, plaAns);

	return 0;
}