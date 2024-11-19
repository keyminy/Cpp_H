#pragma once

class MyString {
public:
	MyString(const char* pStr);
protected:
private:
	char* str = nullptr; // 동적 메모리의 주소를 저장
	int length = 0; // 할당받은 문자열의 길이를 저장
};