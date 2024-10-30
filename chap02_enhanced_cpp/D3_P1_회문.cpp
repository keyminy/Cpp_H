#include <iostream>
#include <string>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;

int is_palindrome(string str);

int main() {
	string str;
	cout << "문자 입력 : ";
	getline(cin,str);

	if (is_palindrome(str)) {
		cout << "회문입니다.\n";
	}
	else {
		cout << "평문입니다.\n";
	}


	return 0;
}

int is_palindrome(string str)
{
	for (int i = 0; i < str.size()/2; i++) {
		if (str[i] != str[str.size() - 1 - i]) {
			return 0;
		}
	}
	return 1;
}
