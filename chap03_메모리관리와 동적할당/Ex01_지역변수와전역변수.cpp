#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

// ��������(� �Լ������� ��� ��밡��)
// �������� : ���α׷��� ����~����� ������ �޸𸮰� �Ҵ�Ǿ��ִ� ����
int global = 100;

void fun(double x) {
	//x : �Լ��� �Ű������� ���������̴�
	// �Ű������� ��ȿ������ �Լ��̴�.
	//�Լ��� ����Ǹ� �������� x�� �������.
	int y = 99;
}

int main() {
	// �������� : ����� ���({})�������� ��� ������ ����
	// ����� ������ �޸𸮿��� ������ ���� �ȴ�.
	int a = 1; //��������(�Ͻ��� ����ߴ� ��������)
	{
		int b = 2;
		char c = 'A';
		{
			double d = 3.14;
			fun(d);
		}
		//printf("%f", d); //error, d������ �޸𸮴� block������ �̹� ����
		char str[20] = "Hello world";
	}
	return 0;
}