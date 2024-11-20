#include "MyString.h"
//#include <string.h> // strcpy,strlen
#include <cstring> // c에서 사용하는 header file
#include <iostream>

#pragma warning (disable : 4996)

using std::cout;

MyString::MyString(const char* pStr) {
	if (pStr == nullptr){
		cout << "nullptr constructor call!\n";
		// 동적할당할 필요 없음
		return;
	}
	this->length = (int)std::strlen(pStr);
	this->str = new char[this->length+1]; // null문자까지 복사하기위해 len + 1
	//문자열을 동적 메모리에 복사
	std::strcpy(this->str, pStr);
	cout << "constructor call!\n";
}
MyString::MyString(const MyString& other) {
	// MyString copy(s1);
	// 깊은 복사 : 동적 메모리까지 모두 복사 필요
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
	// 동적메모리의 주소를 리턴
	return this->str;
}

int MyString::getLength()
{	//문자열의 길이를 리턴
	return this->length;
}

MyString& MyString::operator=(MyString& other)
{	// assign=s2, assign.operator=(s2)
	this->length = other.length;
	this-> str = new char[length + 1];
	std::strcpy(this->str, other.str);
	cout << "operator= call!\n";
	return *this; //호출한 인스턴스 assign 리턴
}
