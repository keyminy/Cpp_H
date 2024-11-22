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
	// �θ�Ŭ������ protected�� ���ǵ� ����� �ڽĿ��� �ڽ��� ���ó�� ���� ����
	cout << "�̸�: " << this->getName() << endl;
	cout << "����: " << this->getAge() << endl;
	cout << "�й�: " << this->stNo << endl;
	cout << "����: " << this->major << endl;
}
