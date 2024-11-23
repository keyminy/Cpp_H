#include "Diamond.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void Diamond::draw()
{
	for (int i = 0; i < height/2; i++) {
		// 공백 출력
		for (int j = 0; j < height/2 - i - 1; j++) {
			cout << " ";
		}
		// ch 모양 찍기
		for (int j = 0; j < 2 * i + 1; j++) {
			cout << ch;
		}
		cout << endl;
	}
	for (int i = height / 2 - 1; i >0 ; i--) {
		// 공백 출력d
		for (int j = 0; j < height / 2 - i; j++) {
			cout << " ";
		}
		// ch 모양 찍기
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << ch;
		}
		cout << endl;
	}
}

Diamond::~Diamond()
{
	cout << "~Diamond 가상 소멸자 호출\n";
}
