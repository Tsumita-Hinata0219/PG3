#include "DiceRoll.h"

int main() {

	std::string plaAns = DecideDiceRoll();

	Func func = DisplayResult;
	Wait(func, plaAns);


	return 0;
}