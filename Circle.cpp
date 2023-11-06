#include "Circle.h"



Circle::Circle(float radius) {
	radius_ = radius;
}

// 面積を求める
void Circle::Size() {

	area_ = (radius_ * radius_) * M_PI;
}

// 面積の表示
void Circle::Draw() {

	std::cout << "Restangle" << std::endl;
	std::cout << "radius : " << radius_ << std::endl;
	std::cout << "  area : " << area_ << std::endl;
}

