#pragma once
#include <stdio.h>
#include <iostream>


class CalcSalary {
public:

	int CalculateNormalSalary(int salary, int workTime);
	int CalculateRecursionSalary(int salary, int workTime);
	int CalculateAndPrintSalary(int workTime);

private:

	int normalSalary_ = 1072;
	int recursionSalary_ = 100;
	int preRecursionSalary_ = 0;
};

