#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class Animal {
public:
	virtual void walk() {
		cout << "네발로 걷는다.\n";
	}
	// 순수 가상함수, 자식클래스에서 반드시 오버라이딩 해야한다.
	virtual void speak() = 0;
};

class Dog :public Animal {
public:
	void speak() override {
		// overriding : 함수의 재정의
		cout << "멍멍!!\n";
	}
};

class Cat :public Animal {
public:
	void speak() override {
		// overriding : 함수의 재정의
		cout << "야옹!!\n";
	}
};

class Pig :public Animal {
public:
	void speak() override {
		// overriding : 함수의 재정의
		cout << "꿀꿀!!\n";
	}
};

class Duck :public Animal {
public:
	void walk() { // overriding : 함수의 재정의
		cout << "두발로 걷는다.\n";
	}
	void speak() override {
		// overriding : 함수의 재정의
		cout << "꽥꽥!!\n";
	}
};

int main() {
	// 객체 포인터 : 객체의 주소를 저장하는 포인터(8바이트 메모리 할당됨)
	// 부모의 포인터로 자식 인스턴스의 주소를 저장할 수 있다.
	Animal* ptr = nullptr;

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
			ptr = new Dog(); //인스턴스 생성
			break;
		case 2:
			ptr = new Cat(); //인스턴스 생성
			break;
		case 3:
			ptr = new Pig(); //인스턴스 생성
			break;
		case 4:
			ptr = new Duck();
			break;
		case 0:
			return 0; // 프로그램 종료
		default:
			break;
		}
		ptr->speak();
		ptr->walk();
		delete ptr; //인스턴스 소멸

		cout << "\n\n\t\t";
		std::system("pause"); // 일시대기
	}
	return 0;
}