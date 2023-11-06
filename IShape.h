#pragma once
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>


class IShape {

public:

	// 面積を求める
	virtual void Size() = 0;

	// 面積の表示
	virtual void Draw() = 0;

};