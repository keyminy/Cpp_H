#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

void fun() {
	// ���������� �Լ����� ����Ǿ����� 
	// ���α׷� ����~����ɶ����� �޸𸮰� �Ҵ�Ǵ� ����
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