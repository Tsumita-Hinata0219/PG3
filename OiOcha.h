#pragma once
#include "Tea.h"


/* お～いお茶 */
class OiOcha : public Tea {

public:

	// コンストラクタ
	OiOcha();

	// デストラクタ
	~OiOcha() {};

	// 商品名の表示
	void DisplayProductName() override;

	// メーカーの表示
	void DisplayManufactureName() override;
};