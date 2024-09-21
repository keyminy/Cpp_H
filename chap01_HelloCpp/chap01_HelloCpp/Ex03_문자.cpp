#include <iostream>

//using namespace std;
//이름 공간의 특정 멤버만 오픈한다.
using std::cout;
using std::cin;
using std::endl;

int main() {
	char ch;
	cout << "문자 입력 : ";
	cin >> ch;

	cout << "입력 받은 문자 : " << ch << endl;
	cout << "입력 받은 문자의 아스키 코드 : " << (int)ch << endl;

	// 입력 받은 문자가 대문자인 경우는? 소문자로 변환하고 출력
	// 소문자인 경우는? 대문자로 변환하여 출력
	// 영문자가 아닌 경우는? "영문자가 아닙니다" 메시지를 출력하시오.
	if (ch >= 'A' && ch <= 'Z') {
		cout << "대문자 : " << ch << " => 소문자 : " << (char)(ch + 32) << endl;
	}
	else if(ch >= 'a' && ch <= 'z') {
		cout << "소문자 : " << ch << " => 대문자 : " << (char)(ch - 32) << endl;
	}
	else {
		cout << "영문자가 아닙니다.\n";
	}
	return 0;
}