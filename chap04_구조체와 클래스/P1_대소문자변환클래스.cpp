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
	cout << "변환할 영문자를 입력해주세요 : ";
	cin >> ch;
}

void Str::convert()
{
	if (ch >= 'A' && ch <= 'Z') {
		cout << "대문자 " << ch << "를 소문자 " << (char)(ch + 32) << "로 변환했습니다." << endl;
	}
	else if(ch >= 'a' && ch <= 'z') {
		cout << "소문자 " << ch << "를 대문자 " << (char)(ch - 32) << "로 변환했습니다." << endl;
	}
}
