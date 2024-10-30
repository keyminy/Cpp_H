#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

void fun() {
	// 정적변수는 함수내에 선언되었지만 
	// 프로그램 실행~종료될때까지 메모리가 할당되는 변수
	static int x = 1;
	x++;
	cout << x << endl;
}

int main() {
	fun();
	fun();
	fun();
	return 0;
}