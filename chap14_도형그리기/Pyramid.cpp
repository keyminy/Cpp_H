#include <iostream>
#include "Pyramid.h"

using std::cout;
using std::cin;
using std::endl;

void Pyramid::draw()
{
	for (int i = 0; i < height; i++) {
		// ���� ���
		for (int j = 0; j < height - i - 1; j++) {
			cout << " ";
		}
		// ch ��� ���
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << ch;
		}
		cout << endl;
	}
}

Pyramid::~Pyramid()
{
	cout << "~Pyramid ���� �Ҹ��� ȣ��\n";
}
