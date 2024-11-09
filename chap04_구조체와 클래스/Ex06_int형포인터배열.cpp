#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

int main() {
	int* p[5];
	int a = 3, b = 5;

	p[2] = &b; // p[2]공간에 b의 주소 저장
	cout << b << ", " << *p[2] << endl;

	p[4] = &a; // p[4]공간에 a의 주소 저장
	cout << a << ", " << *p[4] << endl;
	return 0;
}