#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void printChar(char ch = '*', int cnt = 10);
//void printChar(char ch, int cnt);

int main() {
	printChar();
	return 0;
}


/*void printChar()
{
	for (int i = 0; i < 10; i++) {
		cout << '*';
	}
	cout << endl;
}*/

void printChar(char ch, int cnt)
{
	for (int i = 0; i < cnt; i++) {
		cout << ch;
	}
	cout << endl;
}
