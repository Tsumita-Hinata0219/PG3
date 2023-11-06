#include <Windows.h>
#include <iostream>
#include "Moji.h"

int main() {

	char str[] = "今朝起きたら";
	printf("%s\n", str);

	Moji::DisplayMoji();

	return 0;
}