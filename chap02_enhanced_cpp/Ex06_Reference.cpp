#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void input(int& r1, double& r2) {
	// Reference, ����(�����)
	cout << "���� �Է� : ";
	cin >> r1;
	cout << "�Ǽ� �Է� : ";
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
