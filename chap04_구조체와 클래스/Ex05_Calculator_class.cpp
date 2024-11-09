#include <iostream>
#include <string>
#include <iomanip> // 입출력 조작
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
//using std::fixed; // 고정 소수점 방식으로 출력
//using std::setprecision; //정밀도

#define OP_COUNT 6

class Calculator {
public:
	//instance variable
	int count[OP_COUNT] = { 0 };

	//method
	inline double sum(double n1, double n2) { 
		++count[0];
		return n1 + n2;
	}
	inline double sub(double n1, double n2) { ++count[1]; return n1 - n2;}
	inline double mul(double n1, double n2) { ++count[2]; return n1 * n2;}
	inline double div(double n1, double n2) { ++count[3]; return n1 / n2; }
	double power(int x, int y);
	double factorial(int n);
	void showOpCount() const; // 연산횟수를 보여줌
};

double Calculator::power(int x, int y) {
	++count[4];
	double res = 1;
	// 2^4 = 2*2*2*2이므로 y번 곱하면 된다.
	for (int i = 1; i <= y; i++) {
		res *= x;
	}
	return res;
}

int main() {
	Calculator cal; // calculator instance(객체)생성

	cout << std::fixed << std::setprecision(2); // 고정 소수점방식으로 출력,소수점이하 2자리로 정밀도 셋팅
	cout << cal.factorial(5) << endl;
	cout << cal.sub(4,77) << endl;
	cout << cal.sum(4,77) << endl;
	cout << cal.div(4,77) << endl;
	cout << cal.mul(4,77) << endl;
	cout << cal.power(2,10) << endl;
	cout << cal.power(2,10) << endl;
	cout << cal.power(2,10) << endl;
	cal.showOpCount();
	return 0;
}

double Calculator::factorial(int n)
{
	++count[5];
	double res = 1;
	for (int i = n; i > 0; i--) {
		res *= i;
	}
	return res;
}

void Calculator::showOpCount() const
{
	// 포인터 배열 : 포인터가 여러개 있는 것.
	const char* op[6] = {"덧셈","뺄셈","곱셈","나눗셈","거듭제곱","순차곱"};
	cout << "\n * 연산 횟수 출력 *\n\n";

	for (int i = 0; i < OP_COUNT; i++) {
		cout << op[i] << ": " << count[i] << endl;
	}
}
