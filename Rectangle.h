#pragma once
#include "IShape.h"


class Rectangle : public IShape {

public:

	Rectangle(float width, float height);

	// 面積を求める
	void Size() override;

	// 面積の表示
	void Draw() override;

private:

	float width_;
	float height_;
	float area_;
};