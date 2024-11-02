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
	cout << "대문자를 몇 개를 할당 하시겠습니까? ";
	cin >> size;

	//size만큼 char형의 메모리를 동적 할당한다.
	char* upper = new char[size];

	// 1.randomizeUpper함수 : 대문자를 랜덤하게 저장하는 함수
	randomizeUpper(upper,size);
	// 2.displayChar함수 : 메모리에 저장된 문자를 출력하는 함수
	displayChar(upper, size);

	char searchCh;
	cout << "검색 문자 입력 : ";
	cin.ignore(); //버퍼에 남아있는 문자 제거
	cin >> searchCh;

	int count = getTargetCount(upper,size,searchCh);
	// 3. getTargetCount함수 : 메모리에서 검색 문자의 개수를 구해 리턴한다.
	cout << "검색한 문자의 개수는 " << count << "개 입니다.\n";

	//동적으로 할당된 메모리를 제거
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
