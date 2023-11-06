#include "Iemon.h"




// コンストラクタ
Iemon::Iemon() {

	productName_ = "伊右衛門";
	ManufactureName_ = "サントリー";
}


// 商品名の表示
void Iemon::DisplayProductName() {

	std::cout << productName_ << std::endl;
}

// メーカーの表示
void Iemon::DisplayManufactureName() {

	std::cout << ManufactureName_ << std::endl;
}
