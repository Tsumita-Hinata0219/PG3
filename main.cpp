#include "CalcValue.h"
#include <iostream>
#include <stdio.h>

int main() {

	Calc<int> val1(10, 42);

	int minresult1 = val1.Min();
	std::cout << "minresult1: " << minresult1 << std::endl;


	return 0;
}