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
		cout << "이름 : " << dessert << ", 맛 : " << ingredient
			<< ", 크기 : " << getArea() << endl;
	}
};


int main() {

	// 1.어떤 디저트 생성?, 2.디저트에 넣을 재료, 3.반지름
	Circle c1("도넛", "슈크림", 5), c2("피자", "치즈", 20), c3("와플", "생크림", 10);
	c1.show();
	c2.show();
	c3.show();
	return 0;
}