#include "MyString.h"
//#include <string.h> // strcpy,strlen
#include <cstring> // c���� ����ϴ� header file
#include <iostream>

#pragma warning (disable : 4996)

using std::cout;

MyString::MyString(const char* pStr) {
	this->length = (int)std::strlen(pStr);
	this->str = new char[this->length+1]; // null���ڱ��� �����ϱ����� len + 1
	//���ڿ��� ���� �޸𸮿� ����
	std::strcpy(this->str, pStr);
	cout << "constructor call!\n";
}