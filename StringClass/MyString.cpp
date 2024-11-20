#include "MyString.h"
//#include <string.h> // strcpy,strlen
#include <cstring> // c���� ����ϴ� header file
#include <iostream>

#pragma warning (disable : 4996)

using std::cout;

MyString::MyString(const char* pStr) {
	if (pStr == nullptr){
		cout << "nullptr constructor call!\n";
		// �����Ҵ��� �ʿ� ����
		return;
	}
	this->length = (int)std::strlen(pStr);
	this->str = new char[this->length+1]; // null���ڱ��� �����ϱ����� len + 1
	//���ڿ��� ���� �޸𸮿� ����
	std::strcpy(this->str, pStr);
	cout << "constructor call!\n";
}
MyString::MyString(const MyString& other) {
	// MyString copy(s1);
	// ���� ���� : ���� �޸𸮱��� ��� ���� �ʿ�
	this->length = other.length;
	this->str = new char[this->length + 1];
	std::strcpy(this->str, other.str);
	cout << "copy constructor call!!\n";
}

MyString::~MyString() {
	cout << this->str << " destructor call!\n";
	delete[] this->str;
}

char* MyString::getString()
{
	// �����޸��� �ּҸ� ����
	return this->str;
}

int MyString::getLength()
{	//���ڿ��� ���̸� ����
	return this->length;
}

MyString& MyString::operator=(MyString& other)
{	// assign=s2, assign.operator=(s2)
	this->length = other.length;
	this-> str = new char[length + 1];
	std::strcpy(this->str, other.str);
	cout << "operator= call!\n";
	return *this; //ȣ���� �ν��Ͻ� assign ����
}
