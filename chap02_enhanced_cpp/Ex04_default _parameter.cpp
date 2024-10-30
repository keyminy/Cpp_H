#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//int getTotal();
//int getTotal(int x);
//int getTotal(int x, int y);
int getTotal(int x=1, int y=100);
int getTotal(int* parr, int size);

void fun(int a = 3, int b, int c = 55);

int main() {
	fun(2);
	cout << "1~100�� �� = " << getTotal() << endl; // 5050
	cout << "50~100�� �� = " << getTotal(50) << endl; // 50~100������ ��
	cout << "70~90�� �� = " << getTotal(70, 90) << endl; // 70~90������ ��

	int arr[5] = { 1,2,3,4,5 };
	cout << "�迭�� �հ�� " << getTotal(arr, 5) << "�Դϴ�.\n";
	return 0;
}

//int getTotal() {
//	int sum = 0;
//	for (int i = 1; i <= 100; i++) {
//		sum += i;
//	}
//	return sum;
//}
//
//int getTotal(int x) {
//	int sum = 0;
//	for (int i = x; i <= 100; i++) {
//		sum += i;
//	}
//	return sum;
//}
int getTotal(int x, int y) {
	int sum = 0;
	for (int i = x; i <= y; i++) {
		sum += i;
	}
	return sum;
}

int getTotal(int* parr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += parr[i];
	}
	return sum;
}
