#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class Animal {
public:
	virtual void walk() {
		cout << "�׹߷� �ȴ´�.\n";
	}
	// ���� �����Լ�, �ڽ�Ŭ�������� �ݵ�� �������̵� �ؾ��Ѵ�.
	virtual void speak() = 0;
};

class Dog :public Animal {
public:
	void speak() override {
		// overriding : �Լ��� ������
		cout << "�۸�!!\n";
	}
};

class Cat :public Animal {
public:
	void speak() override {
		// overriding : �Լ��� ������
		cout << "�߿�!!\n";
	}
};

class Pig :public Animal {
public:
	void speak() override {
		// overriding : �Լ��� ������
		cout << "�ܲ�!!\n";
	}
};

class Duck :public Animal {
public:
	void walk() { // overriding : �Լ��� ������
		cout << "�ι߷� �ȴ´�.\n";
	}
	void speak() override {
		// overriding : �Լ��� ������
		cout << "�в�!!\n";
	}
};

int main() {
	// ��ü ������ : ��ü�� �ּҸ� �����ϴ� ������(8����Ʈ �޸� �Ҵ��)
	// �θ��� �����ͷ� �ڽ� �ν��Ͻ��� �ּҸ� ������ �� �ִ�.
	Animal* ptr = nullptr;

	while (1) {
		std::system("cls"); //ȭ�� �����
		cout << "\n\n\t\t * ���� ���� *\n";
		cout << "1. dog  2. cat  3. pig  4.duck  0. terminate\n";
		int choice;
		cout << "choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			ptr = new Dog(); //�ν��Ͻ� ����
			break;
		case 2:
			ptr = new Cat(); //�ν��Ͻ� ����
			break;
		case 3:
			ptr = new Pig(); //�ν��Ͻ� ����
			break;
		case 4:
			ptr = new Duck();
			break;
		case 0:
			return 0; // ���α׷� ����
		default:
			break;
		}
		ptr->speak();
		ptr->walk();
		delete ptr; //�ν��Ͻ� �Ҹ�

		cout << "\n\n\t\t";
		std::system("pause"); // �Ͻô��
	}
	return 0;
}