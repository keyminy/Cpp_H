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

	// �����Ҵ����� ���� �ذ�
	int* score = new int[n]; 
	int total = 0;
	for (int i = 0; i < n; i++) {
		cout << i + 1 << "��° ���� �Է�: ";
		cin >> score[i];

		total += score[i]; // �հ踦 ������
	}
	cout << endl << n << "�� �л��� ���� ����� " << (double)total / n << "�Դϴ�.\n";

	delete[] score;//�Ÿ� ����

	return 0;
}