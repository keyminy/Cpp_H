#include "MyString.h"
//#include <string.h> // strcpy,strlen
#include <cstring> // c에서 사용하는 header file
#include <iostream>

#pragma warning (disable : 4996)

using std::cout;

MyString::MyString(const char* pStr) {
	this->length = (int)std::strlen(pStr);
	this->str = new char[this->length+1]; // null문자까지 복사하기위해 len + 1
	//문자열을 동적 메모리에 복사
	std::strcpy(this->str, pStr);
	cout << "constructor call!\n";
}