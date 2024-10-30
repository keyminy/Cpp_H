#include <iostream>
#include <stdlib.h> //rand, srand, system
#include <time.h> //time, clock

using std::cout;
using std::cin;
using std::endl;

void user_rand(int st=1,int ed=100,int cnt = 10);

int main() {
	user_rand(); // 1~100������ ���� 10�� ���

	int st, ed, cnt;
	cout << "\n���� �� / �� �� : "; 
	cin >> st >> ed;

	cout << "���� ���� : ";
	cin >> cnt;

	user_rand(st, ed, cnt); // st~ed������ ���� cnt�� ���
	user_rand(st, ed); // st~ed������ ���� 10�� default���

	return 0;
}

void user_rand(int st, int ed, int cnt)
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < cnt; i++) {
		printf("%d ", rand()%(ed-st+1)+st);
	}
	cout << endl;
}
