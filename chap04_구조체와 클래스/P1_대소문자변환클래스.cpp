#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class Str {
private:
	char ch;
public:
	void input();
	void convert();
};

int main() {
	Str str;
	str.input();
	str.convert();
	return 0;
}

void Str::input()
{
	cout << "��ȯ�� �����ڸ� �Է����ּ��� : ";
	cin >> ch;
}

void Str::convert()
{
	if (ch >= 'A' && ch <= 'Z') {
		cout << "�빮�� " << ch << "�� �ҹ��� " << (char)(ch + 32) << "�� ��ȯ�߽��ϴ�." << endl;
	}
	else if(ch >= 'a' && ch <= 'z') {
		cout << "�ҹ��� " << ch << "�� �빮�� " << (char)(ch - 32) << "�� ��ȯ�߽��ϴ�." << endl;
	}
}
