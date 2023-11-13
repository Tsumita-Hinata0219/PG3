#include "Tea.h"



// 商品名の表示
void Tea::DisplayProductName() {

	std::cout << "　商品名 : ";
	std::cout << productName_ << std::endl;
}



// メーカーの表示
void Tea::DisplayManufactureName() {

	std::cout << "メーカー : ";
	std::cout << ManufactureName_ << std::endl;

	// 改行
	std::cout << std::endl;
}