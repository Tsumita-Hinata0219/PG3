#include "DiceRoll.h"


int main() {


	std::function<void(Func1, Func2, std::string)> DiceRollGame = [=](Func1 func1, Func2 func2, std::string plaans) {

		func1(func2, plaans);
	};


	Func1 func1 = SetTimeout;
	Func2 func2 = DisplayResult;
	std::string plaAns = DecidePlayerDice();


	DiceRollGame(func1, func2, plaAns);

	return 0;
}

