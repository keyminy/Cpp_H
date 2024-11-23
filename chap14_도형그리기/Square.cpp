#include <iostream>
#include "Square.h"
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

void Square::draw()
{
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < height; j++) {
			cout << ch << ' ';
		}
		cout << endl;
	}
}

Square::~Square()
{
	cout << "~Square 가상 소멸자 호출\n";
}
