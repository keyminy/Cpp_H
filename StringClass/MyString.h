#pragma once

class MyString {
public:
	MyString(const char* pStr);
	// ���������
	MyString(const MyString& other);
	~MyString();
public:
	char* getString();;
	int getLength();
protected:
private:
	char* str = nullptr; // ���� �޸��� �ּҸ� ����
	int length = 0; // �Ҵ���� ���ڿ��� ���̸� ����
};