#include <iostream>
#include <iomanip> //input output manipulator

using namespace std;

int main() {
	// default가 cout << right
	cout << left; //확보된 공간에서 왼쪽 정렬
	for (int i = 1; i <= 100; i++) {
		cout << setw(5) << i; // 공간확보 -> 오른쪽부터 기록된다.
		if (i % 10 == 0) {
			// 10,20,30,40, ... , 100인 10 단위로 줄바꿈
			cout << endl;
		}
	}
	cout << endl;
	return 0;
}