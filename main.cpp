#include "CalcSalary.h"

int main() {

	CalcSalary* calc = new CalcSalary();

	int workTime = 1;
	calc->CalculateAndPrintSalary(workTime);

	return 0;
}