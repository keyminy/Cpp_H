#include <iostream>
#include "Figure.h"
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

Figure::Figure(int height, char ch, bool isEvenPossible)
{	//�⺻������ isEvenPossible, ¦���� �����
	if (height > 1)
		this->height = height; // ������ ����

	if (isEvenPossible == false) // ¦�� ����� ���ϰڴٸ�?
		this->height += 1;
	this->ch = ch;
}

Figure::~Figure()
{
	cout << "~Figure ���� �Ҹ��� ȣ��\n";
}
