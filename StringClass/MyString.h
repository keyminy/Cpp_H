#pragma once

class MyString {
public:
	MyString(const char* pStr);
protected:
private:
	char* str = nullptr; // ���� �޸��� �ּҸ� ����
	int length = 0; // �Ҵ���� ���ڿ��� ���̸� ����
};