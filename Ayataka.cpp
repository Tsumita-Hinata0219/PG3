#include "Ayataka.h"




// コンストラクタ
Ayataka::Ayataka() {

	productName_ = "綾鷹";
	ManufactureName_ = "日本コカ・コーラ";
}


// 商品名の表示
void Ayataka::DisplayProductName() {

	std::cout << productName_ << std::endl;
}

// メーカーの表示
void Ayataka::DisplayManufactureName() {

	std::cout << ManufactureName_ << std::endl;
}
