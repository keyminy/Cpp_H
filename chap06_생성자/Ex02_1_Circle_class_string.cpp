#include <iostream>
#include <string>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Circle {
private:
	string name;
	string flavor;
	double radius;
public:
	Circle(string _name,string _flavor,double _radius) {
		name = _name;
		flavor = _flavor;
		radius = _radius;
		cout << "constructor call!\n";
	}
	double getArea() const {
		return 3.141592 * radius * radius;
	}
	void show() const {
		cout << "이름 : " << name << ", 맛 : " << flavor 
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