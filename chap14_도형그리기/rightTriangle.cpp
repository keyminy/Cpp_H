#include "rightTriangle.h"
#include <iostream>

using namespace std;


void RightTriangle::draw()
{
	// 높이와 문자를 이용해 그림 그림
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < i; j++) {
			cout << ch << ' ';
		}
		cout << endl;
	}
}

RightTriangle::~RightTriangle()
{
	cout << "~RightTriangle 가상 소멸자 호출\n";
}
