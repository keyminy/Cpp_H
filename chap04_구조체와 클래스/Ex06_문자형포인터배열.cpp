#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

int main() {
	//const char* p1 = "apple";
	//const char* p2 = "odd";
	////char*�� �ּҰ� ��µǴ� ���� �ƴ϶�,
	////�ּҺ��� '\0'�������� ��µȴ�.
	//cout << p1 << endl;
	//cout << p2 << endl;

	const char* fruit[5] = {
		"apple",
		"banana",
		"orange",
		"strawberry",
		"pear"
	};

	// fruit[2]�� ����Ű�� �޸�(0��° ��) ����
	cout << *fruit[2] << endl; //o
	// char�� �����Ϳ� �ּҸ� ������� ���� �ٸ� Ÿ���� �����ͷ� ����ȯ�ϸ� �ȴ�.
	cout << (int*)fruit[2] << endl; //00007FF65A56AC18
	//fruit[2]�� ����� �ּҺ��� �ι����������� ���
	cout << fruit[2] << endl; //orange
	cout << fruit[2]+2 << endl; //ange
	cout << *(fruit[2] + 2) << endl; //a
	return 0;
}