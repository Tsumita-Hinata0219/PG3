#include "CalcValue.h"
#include <iostream>
#include <stdio.h>

int main() {

	Calc<int> val1(10, 42);
	Calc<float> val2(129.0f, 34.0f);
	Calc<double> val3(23.0f, 456.0f);

	
	std::cout << "val1<int> : " << val1.Min() << std::endl;
	std::cout << "val2<float> : " << val2.Min() << std::endl;
	std::cout << "val3<double> : " << val3.Min() << std::endl;


	return 0;
}