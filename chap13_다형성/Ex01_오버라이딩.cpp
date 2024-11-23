#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class Animal {
public:
	void walk() {
		cout << "�׹߷� �ȴ´�.\n";
	}
	void speak() {
		cout << "�پ��� ������ �����Ҹ��� ���⼭ ����Ѵ�.\n";
	}
};

class Dog :public Animal {
public:
	void speak() {
		// overriding : �Լ��� ������
		cout << "�۸�!!\n";
	}
};

class Cat :public Animal {
public:
	void speak() {
		// overriding : �Լ��� ������
		cout << "�߿�!!\n";
	}
};

class Pig :public Animal {
public:
	void speak() {
		// overriding : �Լ��� ������
		cout << "�ܲ�!!\n";
	}
};

class Duck :public Animal {
public:
	void walk() { // overriding : �Լ��� ������
		cout << "�ι߷� �ȴ´�.\n";
	}
	void speak() {
		// overriding : �Լ��� ������
		cout << "�в�!!\n";
	}
};

int main() {
	// ��ü ������ : ��ü�� �ּҸ� �����ϴ� ������(8����Ʈ �޸� �Ҵ��)
	Dog* dog = nullptr;
	Cat* cat = nullptr;
	Pig* pig = nullptr;
	Duck* duck = nullptr;
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
			dog = new Dog(); //�ν��Ͻ� ����
			dog->speak();
			dog->walk();
			delete dog; //�ν��Ͻ� �Ҹ�
			break;
		case 2:
			cat = new Cat(); //�ν��Ͻ� ����
			cat->speak();
			cat->walk();
			delete cat; //�ν��Ͻ� �Ҹ�
			break;
		case 3:
			pig = new Pig(); //�ν��Ͻ� ����
			pig->speak();
			pig->walk();
			delete pig; //�ν��Ͻ� �Ҹ�
			break;
		case 4:
			duck = new Duck();
			duck->speak();
			duck->walk();
			delete duck; //�ν��Ͻ� �Ҹ�
			break;
		case 0:
			return 0; // ���α׷� ����
		default:
			break;
		}
		cout << "\n\n\t\t";
		std::system("pause"); // �Ͻô��
	}
	return 0;
}