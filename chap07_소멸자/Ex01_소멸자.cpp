#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class MyClass {
public:
	MyClass(int n) {
		//x = n;
		p = new int[n];
		cout << "생성자(constructor) : 전달된 크기만큼 int형 메모리 할당\n";
	}
	~MyClass() {
		//cout << x << "소멸자(destructor)\n";
		cout << p << "매모리 해제 => 소멸자(destructor)\n";
		delete[] p; //동적 메모리 해제
	}
private:
	//int x;
	int* p;
};

int main() {
	MyClass m1(5);
	{
		MyClass m2(2);
	}
	MyClass m3(3);
	return 0;
}