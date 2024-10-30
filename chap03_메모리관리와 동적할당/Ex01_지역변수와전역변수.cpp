#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

// 전역변수(어떤 함수에서든 모두 사용가능)
// 전역변수 : 프로그램이 실행~종료될 때까지 메모리가 할당되어있는 변수
int global = 100;

void fun(double x) {
	//x : 함수의 매개변수도 지역변수이다
	// 매개변수의 유효범위는 함수이다.
	//함수가 종료되면 지역변수 x도 사라진다.
	int y = 99;
}

int main() {
	// 지역변수 : 선언된 블록({})내에서만 사용 가능한 변수
	// 블록이 끝나면 메모리에서 변수도 제거 된다.
	int a = 1; //지역변수(일시적 사용했다 버려지는)
	{
		int b = 2;
		char c = 'A';
		{
			double d = 3.14;
			fun(d);
		}
		//printf("%f", d); //error, d변수의 메모리는 block내에서 이미 죽음
		char str[20] = "Hello world";
	}
	return 0;
}