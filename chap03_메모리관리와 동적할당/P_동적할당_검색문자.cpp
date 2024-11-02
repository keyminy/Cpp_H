#include <iostream>
#include <stdlib.h> //rand, srand, system
#include <time.h> //time, clock

#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

void randomizeUpper(char* upper,int size);
void displayChar(char* upper, int size);
int getTargetCount(char* upper, int size,char searchCh);

int main() {
	int size;
	cout << "�빮�ڸ� �� ���� �Ҵ� �Ͻðڽ��ϱ�? ";
	cin >> size;

	//size��ŭ char���� �޸𸮸� ���� �Ҵ��Ѵ�.
	char* upper = new char[size];

	// 1.randomizeUpper�Լ� : �빮�ڸ� �����ϰ� �����ϴ� �Լ�
	randomizeUpper(upper,size);
	// 2.displayChar�Լ� : �޸𸮿� ����� ���ڸ� ����ϴ� �Լ�
	displayChar(upper, size);

	char searchCh;
	cout << "�˻� ���� �Է� : ";
	cin.ignore(); //���ۿ� �����ִ� ���� ����
	cin >> searchCh;

	int count = getTargetCount(upper,size,searchCh);
	// 3. getTargetCount�Լ� : �޸𸮿��� �˻� ������ ������ ���� �����Ѵ�.
	cout << "�˻��� ������ ������ " << count << "�� �Դϴ�.\n";

	//�������� �Ҵ�� �޸𸮸� ����
	delete[] upper;
	return 0;
}

void randomizeUpper(char* upper, int size)
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < size; i++) {
		char upperCh = (char)(rand() % (90 - 65 + 1) + 65);
		upper[i] = upperCh;
	}
}

void displayChar(char* upper, int size)
{
	for (int i = 0; i < size; i++) {
		cout << upper[i] << " ";
	}
	cout << endl;
}

int getTargetCount(char* upper, int size,char searchCh)
{
	int cnt = 0;
	for (int i = 0; i < size; i++) {
		if (upper[i] == searchCh) {
			cnt++;
		}
	}
	return cnt;
}
