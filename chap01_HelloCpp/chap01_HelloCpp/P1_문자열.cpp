#include <iostream>
#include <string>
/* 문자열과 검색 문자를 입력 받으시오.
* 문자열에서 검색 문자가 몇 개인지 카운트하는 코드를 작성하시오.
* 대소문자는 구별하지 않는다.
* 출력 예)
* 문자열 입력 : AabbbCEda
* 검색 문자 입력 : a
* A(a)의 개수는 3개 입니다
*/

using namespace std;

int main() {
	string str;
	char ch;
	char upper_ch, lower_ch;
	cout << "문자열 입력(string) : ";
	getline(cin, str);
	cout << "검색 문자 입력 : ";
	cin >> ch;

	if (ch >= 'A' && ch <= 'Z') {
		upper_ch = ch;
		lower_ch = ch + 32;
	}
	else if (ch >= 'a' && ch <= 'z') {
		lower_ch = ch;
		upper_ch = ch - 32;
	}
	else {
		cout << "영문자가 아닙니다.\n";
		return -1;
	}
	int cnt = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == lower_ch || str[i] == upper_ch) {
			cnt++;
		}
	}
	cout << upper_ch << "(" << lower_ch << ")" << "의 개수는 " << cnt << "개 입니다.\n";
	return 0;
}