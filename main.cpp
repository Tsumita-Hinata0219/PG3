#include <stdio.h>
#include <string>


template <typename T>
T Min(T a, T b) {

	T num;

	if (a > b) {
		num = b;
	}
	else if (a < b) {
		num = a;
	}

	return num;
}

template <>
char Min<char>(char a, char b) {

	printf("数字以外は代入できません\n");

	return '\0';
}


int main() {

	int num1 = 10, num2 = 20;
	float num3 = 13.5f, num4 = 12.32f;
	double num5 = 25.34, num6 = 16.23;

	const char suuji[] = {
		'1',
		'3',
	};


	printf("Min<int>(%d, %d)\n = %d\n\n", num1, num2, Min<int>(num1, num2));

	printf("Min<float>(%.3f, %.3f)\n = %.3f\n\n", num3, num4, Min<float>(num3, num4));

	printf("Min<double>(%.3lf, %.3lf)\n = %.3lf\n\n", num5, num6, Min<double>(num5, num6));

	printf("Min<char>(%c, %c) \n = ", suuji[0], suuji[1]);
	Min<char>(suuji[0], suuji[1]);


	return 0;
}
