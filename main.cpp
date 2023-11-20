#include "DiceRoll.h"


using namespace std::chrono_literals;


int main() {

	std::function<void(Func, std::string)>SetTimeout = [=](Func func, std::string plaans) {

		std::this_thread::sleep_for(3s);

		func(plaans);
	};


	std::string plaAns = DecideDiceRoll();

	Func func = DisplayResult;

	SetTimeout(func, plaAns);

	return 0;
}