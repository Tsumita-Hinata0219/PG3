#include "OiOcha.h"



// コンストラクタ
OiOcha::OiOcha() {

	productName_ = "お～いお茶";
	ManufactureName_ = "伊藤園";
}


// 商品名の表示
void OiOcha::DisplayProductName() {

	std::cout << productName_ << std::endl;
}

// メーカーの表示
void OiOcha::DisplayManufactureName() {

	std::cout << ManufactureName_ << std::endl;
}

