#include <iostream>

#pragma warning(disable: 4096)

using std::cout;
using std::cin;
using std::endl;

inline double square(double d) {
	return d * d;
}

int main() {
	cout << square(5) << endl;
	return 0;
}