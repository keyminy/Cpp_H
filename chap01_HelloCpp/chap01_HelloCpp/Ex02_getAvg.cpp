/*
* 정수 2개와 실수 2개를 입력 받아
* 정수의 평균과 실수의 평균을 구해
* 출력하는 코드를 작성하시오.
* 
* [출력 예]
* 정수 2개 입력 : _ _
* 실수 2개 입력 : _ _
* 
* 정수의 평균은 _이며, 실수의 평균은 _입니다.
*/
#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	double f1, f2;
	cout << "정수 2개 입력 : ";
	cin >> num1 >> num2;
	cout << "실수 2개 입력 : ";
	cin >> f1 >> f2;
	double avg1 = (num1 + num2) / 2.0;
	double avg2 = (f1 + f2) / 2;
	cout << "정수의 평균은 " << avg1 << " 이며, 실수의 평균은 " << avg2 << "입니다.\n";
	return 0;
}