#pragma once


template <typename T1, typename T2>
class Calc {

public:

	Calc(T1 valA, T2 valB) : numA(valA), numB(valB) {};

	T1 Min() {

		if (numA < numB) {
			return (numA);
		}
		else {
			return static_cast<T1>(numB);
		}
	}


private:

	T1 numA;
	T2 numB;
};

