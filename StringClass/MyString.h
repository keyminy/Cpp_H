#pragma once

class MyString {
public:
	MyString(const char* pStr = nullptr);
	// 복사생성자
	MyString(const MyString& other);
	~MyString();
public:
	char* getString();;
	int getLength();
public:
	// 자기자신리턴, 복사본으로 리턴 X
	MyString& operator=(MyString& other);
protected:
private:
	char* str = nullptr; // 동적 메모리의 주소를 저장
	int length = 0; // 할당받은 문자열의 길이를 저장
};