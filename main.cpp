#include <stdio.h>
#include <iostream>
#include <functional>
#include <thread>


std::function<void(std::string)> TextPrint = [=](std::string text) {
	std::cout << text << std::endl;
};


int main() {

	std::thread th1(TextPrint, "thread 1");
	th1.join();

	std::thread th2(TextPrint, "thread 2");
	th2.join();

	std::thread th3(TextPrint, "thread 3");
	th3.join();

	return 0;
}