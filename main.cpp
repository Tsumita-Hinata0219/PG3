#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <chrono>


int main() {

	std::chrono::system_clock::time_point  start, end;

	std::string a(1000000, 'a');
	start = std::chrono::system_clock::now(); // �v���J�n����
	// ����
	end = std::chrono::system_clock::now();  // �v���I������
	std::cout << "%d" << end << std::end;

	return 0;
}