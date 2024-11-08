#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class Circle {
public:
	// instace variable
	double radius = 0;
	const double PI = 3.141592;

	// instance method
	void setRadius(double rad);
	double getArea() const;
	double getCircumference() const; //둘레
};

int main() {
	Circle c1; // Circle 인스턴스 생성
	c1.setRadius(8.8);
	cout << "c1 원의 넓이는 : " << c1.getArea() << "입니다.\n";

	Circle c2; // Circle 인스턴스 생성
	c2.setRadius(22.4);
	cout << "c2 원의 둘레는 : " << c2.getCircumference() << "입니다.\n";
	return 0;
}

void Circle::setRadius(double rad)
{
	radius = rad;
}

double Circle::getArea() const
{
	return PI * radius * radius;
}

double Circle::getCircumference() const
{
	return 2 * PI * radius;
}
