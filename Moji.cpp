#include "Moji.h"



Moji* Moji::GetInstance() {
	static Moji instance;
	return &instance;
}


void Moji::DisplayMoji() {

	char str[] = "めっちゃ喉痛いんやけど乾燥かな";
	printf("%s\n", str);
}