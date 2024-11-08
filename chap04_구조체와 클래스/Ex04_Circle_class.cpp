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
	double getCircumference() const; //�ѷ�
};

int main() {
	Circle c1; // Circle �ν��Ͻ� ����
	c1.setRadius(8.8);
	cout << "c1 ���� ���̴� : " << c1.getArea() << "�Դϴ�.\n";

	Circle c2; // Circle �ν��Ͻ� ����
	c2.setRadius(22.4);
	cout << "c2 ���� �ѷ��� : " << c2.getCircumference() << "�Դϴ�.\n";
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
