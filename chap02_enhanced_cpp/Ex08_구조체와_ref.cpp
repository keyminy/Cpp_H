#include <iostream>
#include <string>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;

//C++������ ����ü�� �Ϻ��� �ϳ��� Ÿ������ ó���Ѵ�.
//������, ����ü Ÿ�Կ� structŰ����� ���� �ʴ´�.
struct student {
	char name[20];
	char phone[20];
	int age;
};

void display(const student& ref);


int main() {
	//����ü ���� ����(44byte)
	student st = {"ȫ�浿","010-888-9999",24};
	display(st);
	return 0;
}

void display(const student& ref)
{
	//ref.age = 55; // error : ���۷����� ���ȭ�Ǿ� ���۷����� ���� �Ұ���
	cout << "�̸�: " << ref.name << ", ����ó: " << ref.phone << ", ���� : " << ref.age << endl;
}
