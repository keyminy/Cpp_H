#include <iostream>

using std::cout;
using std::cin;
using std::endl;

/*
	printChar함수를 오버로딩 하시오.

	1. printChar() : '*' 문자를 10개 출력한다.
	2. printChar(문자, 개수) : 문자를 개수만큼 출력한다.
*/

void printChar();
void printChar(char ch,int cnt);

int main() {
	printChar(); // **********
	cout << endl;
	printChar('&', 20); // & 20개
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
