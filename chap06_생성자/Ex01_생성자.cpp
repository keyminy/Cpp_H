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
	//	cout << "1. ������(Constructor)\n";
	//}
	// ������ �����ε�(�Լ��� �̸� ����, �Ű������� �ٸ���)
	//MyClass(int x = 10) {
	//	a = x;
	//	b = 24;
	//	cout << "2. ������(Constructor)\n";
	//}
	MyClass(int x = 10, int y = 24);
private:
	int a, b;
};
//---------------------------------------//

int main() {
	// MyClass Ŭ������ �ν��Ͻ� �����ϸ� �����ڿ� �μ� ����!!
	MyClass m1,m2(1000), m3(-4,-5);

	return 0;
}

MyClass::MyClass(int x, int y)
{
	a = x;
	b = y;
	cout << "3. ������(Constructor)\n";
}

