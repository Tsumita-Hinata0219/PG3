#include "Rectangle.h"



Rectangle::Rectangle(float width, float height) {
	width_ = width;
	height_ = height;
}

// 面積を求める
void Rectangle::Size() {

	area_ = width_ * height_;
}

// 面積の表示
void Rectangle::Draw() {

	std::cout << "Restangle" << std::endl;
	std::cout << " width : " << width_ << std::endl;
	std::cout << "height : " << height_ << std::endl;
	std::cout << "  area : " << area_ << std::endl;
}

