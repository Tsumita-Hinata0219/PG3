#pragma once


template <typename T>
class Calc {

public:

	Calc(T valA, T valB) : numA(valA), numB(valB) {};

	T Min() {

		if (numA < numB) {
			return numA;
		}
		else {
			return numB;
		}
	}


private:

	T numA;
	T numB;
};

