#include "IShape.h"
#include "Rectangle.h"
#include "Circle.h"


int main() {

	const int shapeType = 2;
	IShape* shape[shapeType]{};

	shape[0] = new Rectangle(20.0f, 50.0f);
	shape[1] = new Circle(30.0f);

	for (int i = 0; i < 2; i++) {
		shape[i]->Size();
		shape[i]->Draw();
		std::cout << std::endl;
	}

	return 0;
}