#include <iostream>
#include <stdlib.h>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

double getHeightTotal(double* height, int n);
double getHeightTotal(double* height, int n) {
	double total = 0;
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° ���� �Է�: ";
		cin >> height[i];

		total += height[i]; // �հ踦 ������
	}
	return total;
}

int main() {
	int n = 3;
	cout << "�л� �� �Է� : ";
	cin >> n;

	double* height = new double[n];
	double total = getHeightTotal(height,n);

	cout << endl << n << "�� �л��� ���� ����� " << (double)total / n << "�Դϴ�.\n";

	delete[] height;//�Ÿ� ����

	return 0;
}