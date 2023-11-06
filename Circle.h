#pragma once
#include "IShape.h"


class Circle : public IShape {

public:

	Circle(float radius);

	// 面積を求める
	void Size() override;

	// 面積の表示
	void Draw() override;

private:

	float radius_;
	float area_;
};