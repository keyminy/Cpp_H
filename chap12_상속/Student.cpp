#include "Student.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Student::Student() // :Human() // �ڵ����� �θ������ ȣ���!
{
	cout << "1. Student Constructor\n";
}

Student::Student(string name,int age,string stNo, string major)
	:Human(name,age) // ����(�ڽ�)���� ���� name,age�� ������ �θ��� ������ ȣ��!!
{
	this->stNo = stNo;
	this->major = major;
	cout << "2. Student Copy Constructor\n";
}

Student::Student(const Student& ref)// :Human() // �ڵ����� �θ������ ȣ���!
	:Human(ref) //�θ��� ���� ������ ȣ��
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
	// �θ�Ŭ������ protected�� ���ǵ� ����� �ڽĿ��� �ڽ��� ���ó�� ���� ����
	cout << "�̸�: " << this->getName() << endl;
	cout << "����: " << this->getAge() << endl;
	cout << "�й�: " << this->stNo << endl;
	cout << "����: " << this->major << endl;
}
