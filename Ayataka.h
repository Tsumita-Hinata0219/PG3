#pragma once
#include "Tea.h"


/* 綾鷹 */
class Ayataka : public Tea {

public:

	// コンストラクタ
	Ayataka();

	// デストラクタ
	~Ayataka() {};

	// 商品名の表示
	void DisplayProductName() override;

	// メーカーの表示
	void DisplayManufactureName() override;
};

