#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

int main() {
	int* p[5];
	int a = 3, b = 5;

	p[2] = &b; // p[2]������ b�� �ּ� ����
	cout << b << ", " << *p[2] << endl;

	p[4] = &a; // p[4]������ a�� �ּ� ����
	cout << a << ", " << *p[4] << endl;
	return 0;
}