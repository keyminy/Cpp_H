#include <iostream>
#include <stdlib.h>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

int main() {
	int n = 3;
	cout << "�л� �� �Է� : ";
	cin >> n;

	// error : ������ ��� ������ �� ũ�⸦ �� �� ���� �����̴�.
	//int score[n]; // error

	// �����Ҵ�
	int* score = new int[n];

	return 0;
}