#include "rightTriangle.h"
#include <iostream>

using namespace std;


void RightTriangle::draw()
{
	// ���̿� ���ڸ� �̿��� �׸� �׸�
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < i; j++) {
			cout << ch << ' ';
		}
		cout << endl;
	}
}

RightTriangle::~RightTriangle()
{
	cout << "~RightTriangle ���� �Ҹ��� ȣ��\n";
}
