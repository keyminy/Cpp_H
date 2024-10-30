#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void input(int& r1, double& r2) {
	// Reference, 별명(기생충)
	cout << "정수 입력 : ";
	cin >> r1;
	cout << "실수 입력 : ";
	cin >> r2;
	cout << "call by reference\n";
}

int main() {
	int a;
	double d;

	input(a, d);

	cout << a << ", " << d << endl;
	return 0;
}
