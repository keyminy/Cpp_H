#include <iostream>
#include <stdlib.h>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

int main() {
	int n = 3;
	cout << "학생 수 입력 : ";
	cin >> n;

	// error : 변수인 경우 컴파일 시 크기를 알 수 없기 때문이다.
	//int score[n]; // error

	// 동적할당으로 문제 해결
	int* score = new int[n]; 
	int total = 0;
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "번째 점수 입력: ";
		cin >> score[i];

		total += score[i]; // 합계를 누적함
	}
	cout << endl << n << "명 학생의 점수 평균은 " << (double)total / n << "입니다.\n";

	delete[] score;//매모리 해제

	return 0;
}