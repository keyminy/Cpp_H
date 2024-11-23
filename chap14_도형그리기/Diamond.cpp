#include "Diamond.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void Diamond::draw()
{
	for (int i = 0; i < height/2; i++) {
		// ���� ���
		for (int j = 0; j < height/2 - i - 1; j++) {
			cout << " ";
		}
		// ch ��� ���
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << ch;
		}
		cout << endl;
	}
	for (int i = height / 2 - 1; i >0 ; i--) {
		// ���� ���d
		for (int j = 0; j < height / 2 - i; j++) {
			cout << " ";
		}
		// ch ��� ���
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << ch;
		}
		cout << endl;
	}
}

Diamond::~Diamond()
{
	cout << "~Diamond ���� �Ҹ��� ȣ��\n";
}
