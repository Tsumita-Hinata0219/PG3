#include "CalcValue.h"
#include <iostream>
#include <stdio.h>

int main() {

	Calc<int, int> val1(39, 42);
	Calc<int, float> val2(16, 34.0f);
	Calc<int, double> val3(12, 89.0);
	Calc<float, float> val4(129.0f, 34.0f);
	Calc<float, double> val5(23.0f, 456.0);
	Calc<double, double> val6(39.0, 29.0);

	
	std::cout << "val1 <int, int>       : " << val1.Min() << std::endl;
	std::cout << "val2 <int, float>     : " << val2.Min() << std::endl;
	std::cout << "val3 <int, double>    : " << val3.Min() << std::endl;
	std::cout << "val4 <float, float>   : " << val4.Min() << std::endl;
	std::cout << "val5 <float, double>  : " << val5.Min() << std::endl;
	std::cout << "val6 <double, double> : " << val6.Min() << std::endl;


	return 0;
}