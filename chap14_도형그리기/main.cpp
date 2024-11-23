#include <iostream>
#include "rightTriangle.h"
#include "Square.h"
#include "Pyramid.h"
#include "Diamond.h"
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::system;

int main() {
	Figure* f = nullptr;
	while (1) {
		system("cls"); //화면 지우기
		cout << "\n\n\t\t * 그릴 도형 선택 *\n";
		cout << "1. 직각 삼각형  2. 피라미드  3. 정사각형  4. 다이아몬드  0.종료\n";
		cout << "=>메뉴 선택 : ";
		int choice,height;
		char ch;
		cin >> choice;
		cout << "=>높이 입력 : ";
		cin >> height;
		cout << "=>출력 문자 입력 : ";
		cin >> ch;

		switch (choice)
		{
		case 1:
			f = new RightTriangle(height,ch); //인스턴스 생성
			break;
		case 2:
			f = new Pyramid(height, ch);
			break;
		case 3:
			f = new Square(height, ch); //인스턴스 생성
			break;
		case 4:
			f = new Diamond(height, ch); //인스턴스 생성
			break;
		default:
			break;
		}
		f->draw();
		delete f;

		cout << "\n\n\t\t";
		system("pause");
	}
	return 0;
}