#include <iostream>
#include "Student.h"
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class B {
	//Base
public:
	int a;
};

class D :public B {
	//Derive
public:
	int b;
};

int main() {
	D obj;
	obj.a = 10;
	obj.b = 20;
	B copy = obj; // �θ� �ڽ��ν��Ͻ� ���� ����

	cout << copy.a << endl; // 10

	/* �ݴ�� �Ұ� */
	B parent;
	parent.a = 999;

	//D child = parent; // error
	// �ڽĿ� �θ��ν��Ͻ� ���� �Ұ���


	Student s1("ȫ�浿", 24, "07123488", "��ǻ�Ͱ��а�");
	Student copyy = s1; // ��������� : Student cop(s1);
	s1.displayStudent();
	cout << " ======================= \n";
	copyy.displayStudent();
	return 0;
}
