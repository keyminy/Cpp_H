#include <iostream>
#include "MyString.h"
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

int main() {
	// MyString s1("Hello world")
	MyString s1 = "Hello world";
	// MyString s2("tradition")
	MyString s2 = "tradition";

	MyString copy = s1; // 복사 생성자 미구현시, 얕은 복사가됨
	// MyString copy(s1);
	// 동적메모리 누수때문에 프로그램 down이됨

	// 아무것도 없이 인스턴스 생성
	MyString assign;
	assign = s2; // '=' 연산자 오버로딩 호출하는것임!!
	// 즉, assign.operator=(s2)

	cout << "s1 = " << s1.getString() << " ,길이 = " << s1.getLength() << endl;
	cout << "s2 = " << s2.getString() << " ,길이 = " << s2.getLength() << endl;
	cout << "copy = " << copy.getString() << " ,길이 = " << copy.getLength() << endl;
	cout << "assign = " << assign.getString() << " ,길이 = " << assign.getLength() << endl;
	return 0;
}