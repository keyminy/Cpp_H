/*
* ���� 2���� �Ǽ� 2���� �Է� �޾�
* ������ ��հ� �Ǽ��� ����� ����
* ����ϴ� �ڵ带 �ۼ��Ͻÿ�.
* 
* [��� ��]
* ���� 2�� �Է� : _ _
* �Ǽ� 2�� �Է� : _ _
* 
* ������ ����� _�̸�, �Ǽ��� ����� _�Դϴ�.
*/
#include <iostream>
using namespace std;

int main() {
	int num1, num2;
	double f1, f2;
	cout << "���� 2�� �Է� : ";
	cin >> num1 >> num2;
	cout << "�Ǽ� 2�� �Է� : ";
	cin >> f1 >> f2;
	double avg1 = (num1 + num2) / 2.0;
	double avg2 = (f1 + f2) / 2;
	cout << "������ ����� " << avg1 << " �̸�, �Ǽ��� ����� " << avg2 << "�Դϴ�.\n";
	return 0;
}