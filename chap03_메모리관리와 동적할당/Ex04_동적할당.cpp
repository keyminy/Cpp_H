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
		cout << i + 1 << "번째 신장 입력: ";
		cin >> height[i];

		total += height[i]; // 합계를 누적함
	}
	return total;
}

int main() {
	int n = 3;
	cout << "학생 수 입력 : ";
	cin >> n;

	double* height = new double[n];
	double total = getHeightTotal(height,n);

	cout << endl << n << "명 학생의 신장 평균은 " << (double)total / n << "입니다.\n";

	delete[] height;//매모리 해제

	return 0;
}