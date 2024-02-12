#include <stdio.h>
#include <iostream>


// 再帰的な賃金体系の時給計算
int CalculateRecursionSalary(int salary, int workTime) {

    //std::cout << "再帰的な賃金体系 : " << salary << std::endl;

    if (workTime <= 1) {
        return salary;
    }
    return salary + CalculateRecursionSalary(salary * 2 - 50, workTime - 1);
}

int main() {

	// 働く時間
	const int workTime = 8;

	// 一般的賃金体系の時給
	const int hourlySalary = 1072;

	// 各体系の時給計算
	int normalSalary_ = hourlySalary * workTime;
	int recursionSalary_ = CalculateRecursionSalary(100, workTime);

	std::cout << "働いた時間 : " << workTime << "時間\n";
	std::cout << "一般的な賃金体系 : " << normalSalary_ << std::endl;
	std::cout << "再帰的な賃金体系 : " << recursionSalary_ << std::endl;

	return  0;
}
