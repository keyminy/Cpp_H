#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class MyClass {
public:
	MyClass(int n) {
		//x = n;
		p = new int[n];
		cout << "������(constructor) : ���޵� ũ�⸸ŭ int�� �޸� �Ҵ�\n";
	}
	~MyClass() {
		//cout << x << "�Ҹ���(destructor)\n";
		cout << p << "�Ÿ� ���� => �Ҹ���(destructor)\n";
		delete[] p; //���� �޸� ����
	}
private:
	//int x;
	int* p;
};

int main() {
	MyClass m1(5);
	{
		MyClass m2(2);
	}
	MyClass m3(3);
	return 0;
}