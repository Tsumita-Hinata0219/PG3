#include "Tea.h"
#include "OiOcha.h"
#include "Iemon.h"
#include "Ayataka.h"


int main() {

	// コンストラクタ
	const int teaType = 3;
	Tea* tea[teaType]{};

	// 配列にそれぞれのクラスを入れる
	tea[0] = new OiOcha;
	tea[1] = new Iemon;
	tea[2] = new Ayataka;


	// それぞれの情報を表示
	for (int i = 0; i < 3; i++) {

		tea[i]->DisplayProductName();
		tea[i]->DisplayManufactureName();
	}

	for (int i = 0; i < 3; i++) {
		tea[i]->~Tea();
	}


	return 0;
}