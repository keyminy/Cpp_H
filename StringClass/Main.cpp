#include <iostream>
#include "MyString.h"
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

int main() {
	// MyString s1("Hello world")
	MyString s1 = "Hello world";
	// MyString s2("tradition")
	MyString s2 = "tradition";

	MyString copy = s1; // ���� ������ �̱�����, ���� ���簡��
	// MyString copy(s1);
	// �����޸� ���������� ���α׷� down�̵�

	// �ƹ��͵� ���� �ν��Ͻ� ����
	MyString assign;
	assign = s2; // '=' ������ �����ε� ȣ���ϴ°���!!
	// ��, assign.operator=(s2)

	cout << "s1 = " << s1.getString() << " ,���� = " << s1.getLength() << endl;
	cout << "s2 = " << s2.getString() << " ,���� = " << s2.getLength() << endl;
	cout << "copy = " << copy.getString() << " ,���� = " << copy.getLength() << endl;
	cout << "assign = " << assign.getString() << " ,���� = " << assign.getLength() << endl;
	return 0;
}