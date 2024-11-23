#include "Student.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Student::Student() // :Human() // 자동으로 부모생성자 호출됨!
{
	cout << "1. Student Constructor\n";
}

Student::Student(string name,int age,string stNo, string major)
	:Human(name,age) // 여기(자식)에서 받은 name,age를 가지고 부모의 생성자 호출!!
{
	this->stNo = stNo;
	this->major = major;
	cout << "2. Student Copy Constructor\n";
}

Student::Student(const Student& ref)// :Human() // 자동으로 부모생성자 호출됨!
	:Human(ref) //부모의 복사 생성자 호출
{
	this->stNo = ref.stNo;
	this->major = ref.major;
	cout << "3. Student Constructor\n";
}

Student::~Student()
{
	cout << "~Student Destructor\n";
}

void Student::displayStudent() const
{
	// 부모클래스의 protected에 정의된 멤버는 자식에서 자신의 멤버처럼 접근 가능
	cout << "이름: " << this->getName() << endl;
	cout << "나이: " << this->getAge() << endl;
	cout << "학번: " << this->stNo << endl;
	cout << "전공: " << this->major << endl;
}
