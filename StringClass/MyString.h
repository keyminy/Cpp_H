#pragma once

class MyString {
public:
	MyString(const char* pStr = nullptr);
	// ���������
	MyString(const MyString& other);
	~MyString();
public:
	char* getString();;
	int getLength();
public:
	// �ڱ��ڽŸ���, ���纻���� ���� X
	MyString& operator=(MyString& other);
protected:
private:
	char* str = nullptr; // ���� �޸��� �ּҸ� ����
	int length = 0; // �Ҵ���� ���ڿ��� ���̸� ����
};