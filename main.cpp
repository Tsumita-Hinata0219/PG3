#include "DiceRoll.h"

int main() {

	std::function<void(Func, std::string)>WaitFunc = [](Func func, std::string plaans) {

		using namespace std::chrono_literals;
		std::this_thread::sleep_for(3s);

		func(plaans);
	};


	std::string plaAns = DecideDiceRoll();

	Func func = DisplayResult;

	WaitFunc(func, plaAns);

	return 0;
}