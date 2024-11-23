#include <iostream>
#include "Figure.h"
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

Figure::Figure(int height, char ch, bool isEvenPossible)
{	//기본적으로 isEvenPossible, 짝수를 허용함
	if (height > 1)
		this->height = height; // 음수값 방지

	if (isEvenPossible == false) // 짝수 허용을 안하겠다면?
		this->height += 1;
	this->ch = ch;
}

Figure::~Figure()
{
	cout << "~Figure 가상 소멸자 호출\n";
}
