#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

int main() {
	int a = 3;
	int b(3); // ���԰� �Ұ�ȣ ���� ǥ��
	int c = { 3 };//���ϰ��� �߰�ȣ �ʱ�ȭ ����
	//�߰�ȣ �ʱ�ȭ ��, '=' �����Ͽ� ����
	int d{ 3 };
	int e{ 0 };
	int f{}; // 0���� �ʱ�ȭ�Ҷ� �̷��Ե� ����
	
	cout << a << ", " << b << ", " << c << ", " << d
		<<", " << e << ", " << f << endl;

	// C++11 ǥ�ؾȺ��� autoŸ��
	auto au = a; //���� ������ type���� au������ type�� �ڵ� ������
	cout << "autoŸ���� �ڷ��� = " << typeid(au).name() << endl;
	auto abc = 7.6;
	cout << "autoŸ���� �ڷ��� = " << typeid(abc).name() << endl;
	int arr[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// C++11 ǥ�ؾȺ��� ������� for��(range based for)
	// �ݺ��ϸ鼭 ����� ���� ������ ���� at�� ������.
	// for(������ ���� : �ݺ� ������ Ÿ��)
	for (const int& at : arr) {
		//������ ������ at
		cout << at << " ";
	}
	cout << endl;
	return 0;
}