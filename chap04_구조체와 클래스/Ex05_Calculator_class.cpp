#include <iostream>
#include <string>
#include <iomanip> // ����� ����
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
//using std::fixed; // ���� �Ҽ��� ������� ���
//using std::setprecision; //���е�

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
	void showOpCount() const; // ����Ƚ���� ������
};

double Calculator::power(int x, int y) {
	++count[4];
	double res = 1;
	// 2^4 = 2*2*2*2�̹Ƿ� y�� ���ϸ� �ȴ�.
	for (int i = 1; i <= y; i++) {
		res *= x;
	}
	return res;
}

int main() {
	Calculator cal; // calculator instance(��ü)����

	cout << std::fixed << std::setprecision(2); // ���� �Ҽ���������� ���,�Ҽ������� 2�ڸ��� ���е� ����
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
	// ������ �迭 : �����Ͱ� ������ �ִ� ��.
	const char* op[6] = {"����","����","����","������","�ŵ�����","������"};
	cout << "\n * ���� Ƚ�� ��� *\n\n";

	for (int i = 0; i < OP_COUNT; i++) {
		cout << op[i] << ": " << count[i] << endl;
	}
}
