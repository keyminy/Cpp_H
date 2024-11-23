#include <iostream>
#include "rightTriangle.h"
#include "Square.h"
#include "Pyramid.h"
#include "Diamond.h"
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::system;

int main() {
	Figure* f = nullptr;
	while (1) {
		system("cls"); //ȭ�� �����
		cout << "\n\n\t\t * �׸� ���� ���� *\n";
		cout << "1. ���� �ﰢ��  2. �Ƕ�̵�  3. ���簢��  4. ���̾Ƹ��  0.����\n";
		cout << "=>�޴� ���� : ";
		int choice,height;
		char ch;
		cin >> choice;
		cout << "=>���� �Է� : ";
		cin >> height;
		cout << "=>��� ���� �Է� : ";
		cin >> ch;

		switch (choice)
		{
		case 1:
			f = new RightTriangle(height,ch); //�ν��Ͻ� ����
			break;
		case 2:
			f = new Pyramid(height, ch);
			break;
		case 3:
			f = new Square(height, ch); //�ν��Ͻ� ����
			break;
		case 4:
			f = new Diamond(height, ch); //�ν��Ͻ� ����
			break;
		default:
			break;
		}
		f->draw();
		delete f;

		cout << "\n\n\t\t";
		system("pause");
	}
	return 0;
}