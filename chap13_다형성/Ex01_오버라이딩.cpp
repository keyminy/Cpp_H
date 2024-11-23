#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class Animal {
public:
	void walk() {
		cout << "네발로 걷는다.\n";
	}
	void speak() {
		cout << "다양한 동물의 울음소리를 여기서 출력한다.\n";
	}
};

class Dog :public Animal {
public:
	void speak() {
		// overriding : 함수의 재정의
		cout << "멍멍!!\n";
	}
};

class Cat :public Animal {
public:
	void speak() {
		// overriding : 함수의 재정의
		cout << "야옹!!\n";
	}
};

class Pig :public Animal {
public:
	void speak() {
		// overriding : 함수의 재정의
		cout << "꿀꿀!!\n";
	}
};

class Duck :public Animal {
public:
	void walk() { // overriding : 함수의 재정의
		cout << "두발로 걷는다.\n";
	}
	void speak() {
		// overriding : 함수의 재정의
		cout << "꽥꽥!!\n";
	}
};

int main() {
	// 객체 포인터 : 객체의 주소를 저장하는 포인터(8바이트 메모리 할당됨)
	Dog* dog = nullptr;
	Cat* cat = nullptr;
	Pig* pig = nullptr;
	Duck* duck = nullptr;
	while (1) {
		std::system("cls"); //화면 지우기
		cout << "\n\n\t\t * 동물 농장 *\n";
		cout << "1. dog  2. cat  3. pig  4.duck  0. terminate\n";
		int choice;
		cout << "choice: ";
		cin >> choice;
		
		switch (choice)
		{
		case 1:
			dog = new Dog(); //인스턴스 생성
			dog->speak();
			dog->walk();
			delete dog; //인스턴스 소멸
			break;
		case 2:
			cat = new Cat(); //인스턴스 생성
			cat->speak();
			cat->walk();
			delete cat; //인스턴스 소멸
			break;
		case 3:
			pig = new Pig(); //인스턴스 생성
			pig->speak();
			pig->walk();
			delete pig; //인스턴스 소멸
			break;
		case 4:
			duck = new Duck();
			duck->speak();
			duck->walk();
			delete duck; //인스턴스 소멸
			break;
		case 0:
			return 0; // 프로그램 종료
		default:
			break;
		}
		cout << "\n\n\t\t";
		std::system("pause"); // 일시대기
	}
	return 0;
}