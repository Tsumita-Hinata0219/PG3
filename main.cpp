#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <chrono>


int main() {

	std::chrono::system_clock::time_point  start, end;

	std::string a(1000000, 'a');
	start = std::chrono::system_clock::now(); // 計測開始時間
	// 処理
	end = std::chrono::system_clock::now();  // 計測終了時間
	std::cout << "%d" << end << std::end;

	return 0;
}