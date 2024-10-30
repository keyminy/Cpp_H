#include <iostream>
#include <string>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;

//C++에서는 구조체도 완벽한 하나의 타입으로 처리한다.
//때문에, 구조체 타입에 struct키워드는 붙지 않는다.
struct student {
	char name[20];
	char phone[20];
	int age;
};

void display(const student& ref);


int main() {
	//구조체 변수 선언(44byte)
	student st = {"홍길동","010-888-9999",24};
	display(st);
	return 0;
}

void display(const student& ref)
{
	//ref.age = 55; // error : 레퍼런스가 상수화되어 레퍼런스로 수정 불가능
	cout << "이름: " << ref.name << ", 연락처: " << ref.phone << ", 나이 : " << ref.age << endl;
}
