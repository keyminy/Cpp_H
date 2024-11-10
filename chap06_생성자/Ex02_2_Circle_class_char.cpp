#include <iostream>
#include <string>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;


class Circle {
private:
	char dessert[10];
	char ingredient[10];
	int radius;
public:
	Circle(const char* _dessert,const char* _ingredient, int _radius)
		:radius(_radius)
	{
		strncpy(dessert, _dessert, sizeof(_dessert));
		strncpy(ingredient, _ingredient, sizeof(_ingredient));
	}
	double getArea() const {
		return 3.141592 * radius * radius;
	}
	void show() const {
		cout << "�̸� : " << dessert << ", �� : " << ingredient
			<< ", ũ�� : " << getArea() << endl;
	}
};


int main() {

	// 1.� ����Ʈ ����?, 2.����Ʈ�� ���� ���, 3.������
	Circle c1("����", "��ũ��", 5), c2("����", "ġ��", 20), c3("����", "��ũ��", 10);
	c1.show();
	c2.show();
	c3.show();
	return 0;
}