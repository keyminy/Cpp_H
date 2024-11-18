#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

int& fun() {
	int a = 6;
	return a;
}

int main() {
	int x = fun();
	cout << x << endl;
	return 0;
}