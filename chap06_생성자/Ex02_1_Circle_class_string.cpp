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
		cout << "�̸� : " << name << ", �� : " << flavor 
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