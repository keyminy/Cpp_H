#include <iostream>
#include <iomanip> //input output manipulator

using namespace std;

int main() {
	// default�� cout << right
	cout << left; //Ȯ���� �������� ���� ����
	for (int i = 1; i <= 100; i++) {
		cout << setw(5) << i; // ����Ȯ�� -> �����ʺ��� ��ϵȴ�.
		if (i % 10 == 0) {
			// 10,20,30,40, ... , 100�� 10 ������ �ٹٲ�
			cout << endl;
		}
	}
	cout << endl;
	return 0;
}