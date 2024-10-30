#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
	printChar�Լ��� �����ε� �Ͻÿ�.

	1. printChar() : '*' ���ڸ� 10�� ����Ѵ�.
	2. printChar(����, ����) : ���ڸ� ������ŭ ����Ѵ�.
*/

void printChar();
void printChar(char ch,int cnt);

int main() {
	printChar(); // **********
	cout << endl;
	printChar('&', 20); // & 20��
	return 0;
}

void printChar()
{
	for (int i = 0; i < 10; i++) {
		cout << '*';
	}
}

void printChar(char ch, int cnt)
{
	for (int i = 0; i < cnt; i++) {
		cout << ch;
	}
}
