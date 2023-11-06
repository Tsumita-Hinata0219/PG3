#include "CalcSalary.h"


int CalcSalary::CalculateNormalSalary(int salary) {

    std::cout << "一般的な賃金体系 : " << normalSalary_ << std::endl;


    // 値を増やして返す
    int result = salary + 1072;

    return result;
}


int CalcSalary::CalculateRecursionSalary(int salary, int workTime) {

    std::cout << "再帰的な賃金体系 : " << recursionSalary_ << std::endl;

    
    // 値を増やして返す
    if (workTime == 1) {
        return salary;
    }
    else {
        preRecursionSalary_ = salary;
        int result = (recursionSalary_ * 2 - 50) + 100;

        return  result;
    }

    return false;
}


int CalcSalary::CalculateAndPrintSalary(int workTime) {

    // 働いた時間と給料の表示
    std::cout << "働いた時間 : " << workTime << "時間\n";

    normalSalary_ = CalculateNormalSalary(normalSalary_);
    recursionSalary_ = CalculateRecursionSalary(recursionSalary_, workTime);

    // 再帰賃金が一般時給賃金を上回ったら再帰を抜ける
    if (normalSalary_ < recursionSalary_) {
        workTime += 1;
        std::cout << "働いた時間 : " << workTime << "時間\n";
        normalSalary_ = CalculateNormalSalary(normalSalary_);
        recursionSalary_ = CalculateRecursionSalary(recursionSalary_, workTime);
        return 1;
    }

    // 値を増やして再帰
    return CalculateAndPrintSalary(workTime + 1);
}
