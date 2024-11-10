#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class MyClass {
public:
	//MyClass() {
	//	a = 10;
	//	b = 24;
	//	cout << "1. 생성자(Constructor)\n";
	//}
	// 생성자 오버로딩(함수의 이름 같고, 매개변수만 다르게)
	//MyClass(int x = 10) {
	//	a = x;
	//	b = 24;
	//	cout << "2. 생성자(Constructor)\n";
	//}
	MyClass(int x = 10, int y = 24);
private:
	int a, b;
};
//---------------------------------------//

int main() {
	// MyClass 클래스의 인스턴스 생성하며 생성자에 인수 전달!!
	MyClass m1,m2(1000), m3(-4,-5);

	return 0;
}

MyClass::MyClass(int x, int y)
{
	a = x;
	b = y;
	cout << "3. 생성자(Constructor)\n";
}

