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
	cout << "1~100의 합 = " << getTotal() << endl; // 5050
	cout << "50~100의 합 = " << getTotal(50) << endl; // 50~100까지의 합
	cout << "70~90의 합 = " << getTotal(70, 90) << endl; // 70~90까지의 합

	int arr[5] = { 1,2,3,4,5 };
	cout << "배열의 합계는 " << getTotal(arr, 5) << "입니다.\n";
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
