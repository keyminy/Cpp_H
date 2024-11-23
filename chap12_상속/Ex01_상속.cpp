#include <iostream>
#include "Student.h"
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class B {
	//Base
public:
	int a;
};

class D :public B {
	//Derive
public:
	int b;
};

int main() {
	D obj;
	obj.a = 10;
	obj.b = 20;
	B copy = obj; // 부모에 자식인스턴스 대입 가능

	cout << copy.a << endl; // 10

	/* 반대는 불가 */
	B parent;
	parent.a = 999;

	//D child = parent; // error
	// 자식에 부모인스턴스 대입 불가능


	Student s1("홍길동", 24, "07123488", "컴퓨터과학과");
	Student copyy = s1; // 복사생성자 : Student cop(s1);
	s1.displayStudent();
	cout << " ======================= \n";
	copyy.displayStudent();
	return 0;
}
