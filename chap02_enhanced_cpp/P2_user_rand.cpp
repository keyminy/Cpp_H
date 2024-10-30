#include <iostream>
#include <stdlib.h> //rand, srand, system
#include <time.h> //time, clock

using std::cout;
using std::cin;
using std::endl;

void user_rand(int st=1,int ed=100,int cnt = 10);

int main() {
	user_rand(); // 1~100사이의 난수 10개 출력

	int st, ed, cnt;
	cout << "\n시작 수 / 끝 수 : "; 
	cin >> st >> ed;

	cout << "난수 개수 : ";
	cin >> cnt;

	user_rand(st, ed, cnt); // st~ed사이의 난수 cnt개 출력
	user_rand(st, ed); // st~ed사이의 난수 10개 default출력

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
