#pragma once

#ifndef CALC_H
#define CALC_H

template <typename T>
class Calc {

public:

	Calc(T valA, T valB);

	T Min();

private:

	T numA;
	T numB;
};


#include "CalcValue.cpp"


#endif