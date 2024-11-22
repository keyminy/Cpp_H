#include "Student.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

inline Student::Student()
{
	cout << "1. Student Constructor\n";
}

inline Student::Student(string stNo, string major)
{
	this->stNo = stNo;
	this->major = major;
	cout << "2. Student Constructor\n";
}

inline Student::Student(const Student& other)
{
	this->stNo = other.stNo;
	this->major = other.major;
	cout << "3. Student Constructor\n";
}

inline Student::~Student()
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
