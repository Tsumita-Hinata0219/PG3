#pragma once
#include "Tea.h"


/* 伊右衛門 */
class Iemon : public Tea {

public:

	// コンストラクタ
	Iemon();

	// デストラクタ
	~Iemon() {};

	// 商品名の表示
	void DisplayProductName() override;

	// メーカーの表示
	void DisplayManufactureName() override;
};
