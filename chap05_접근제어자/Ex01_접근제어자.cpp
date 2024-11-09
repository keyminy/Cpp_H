#include <iostream>
//#include <string.h> // C언어의 문자열 함수 헤더파일, iostream에 포함되어있음
//#include <string> // C++에서 string클래스 헤더파일
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class Missile {
public:
	void pwCheck(const char* inputPw) {
		if (strcmp(pw, inputPw) == 0) //문자열이 같으면 0을 리턴한다
			fire(); //미사일 발사 메서드 호출
		else
			error();
	}
private:
	void fire() {
		cout << "미사일을 발사 합니다!\n";
	}
	void error() {
		cout << "[경고!] 비밀번호 오류!\n";
	}

	char pw[5] = "0070";
};

int main() {
	Missile mi; //인스턴스 생성
	mi.pwCheck("0070");
	//mi.fire();// error

	return 0;
}