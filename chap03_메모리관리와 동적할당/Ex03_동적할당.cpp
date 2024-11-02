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

	// 동적할당
	int* score = new int[n];

	return 0;
}