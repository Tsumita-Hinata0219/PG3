#pragma once
#include <iostream>


/* お茶クラス */
class Tea {

public: // メンバ関数

	// コンストラクタ
	Tea() {};

	// デストラクタ
	virtual ~Tea() {};

	// 商品名の表示
	virtual void DisplayProductName() {};
	
	// メーカーの表示
	virtual void DisplayManufactureName() {};


protected: // メンバ変数

	// 商品名
	const char* productName_;
	// メーカー名
	const char* ManufactureName_;
};