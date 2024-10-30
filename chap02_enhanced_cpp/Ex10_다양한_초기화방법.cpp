#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

int main() {
	int a = 3;
	int b(3); // 대입과 소괄호 같은 표현
	int c = { 3 };//단일값도 중괄호 초기화 가능
	//중괄호 초기화 시, '=' 생략하여 가능
	int d{ 3 };
	int e{ 0 };
	int f{}; // 0으로 초기화할땐 이렇게도 가능
	
	cout << a << ", " << b << ", " << c << ", " << d
		<<", " << e << ", " << f << endl;

	// C++11 표준안부터 auto타입
	auto au = a; //우측 변수의 type으로 au변수의 type이 자동 지정됨
	cout << "auto타입의 자료형 = " << typeid(au).name() << endl;
	auto abc = 7.6;
	cout << "auto타입의 자료형 = " << typeid(abc).name() << endl;
	int arr[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// C++11 표준안부터 범위기반 for문(range based for)
	// 반복하면서 요소의 값을 저장할 변수 at에 복사함.
	// for(저장할 변수 : 반복 가능한 타입)
	for (const int& at : arr) {
		//저장할 변수를 at
		cout << at << " ";
	}
	cout << endl;
	return 0;
}