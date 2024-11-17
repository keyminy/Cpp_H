#include <iostream>
#include <string>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;

class Date {
public:
	Date(int year = 1900,int month = 1, int day = 1) {
		this->year = year;
		this->month = month;
		this->day = day;
		cout << "1. constructor\n";
	}
	// ���������� �����Ǵ� ��������ڰ� ��� �� ��� ���縦 �� �� �ֵ��� ���ԵǾ�
	// �ش� �ڵ带 �ۼ��� �ʿ䰡 ����.
	//Date(Date& other) {
	//	cout << "2. copy constructor\n";
	//	this->year = other.year;
	//	this->month = other.month;
	//	this->day = other.day;
	//}
	inline string getDate() const {
		return to_string(year) + "/" + to_string(month) + "/" + to_string(day);
	}
private:
	int year = 1900, month = 1, day = 1;
};

int main() {
	Date d1; // �ν��Ͻ� ����
	Date myBirth(2024, 4, 5); // �ν��Ͻ� ����
	Date copy = myBirth; // 2.copy constructor ȣ���
	// Date copy(miBirth); �� ����

	cout << "�ʱ� ���� ��¥ = " << d1.getDate() << endl;
	cout << "���� ������? " << myBirth.getDate() << endl;
	cout << "����� �ν��Ͻ��� ��¥��? " << copy.getDate() << endl;
	return 0;
}

class Dummy {
public:
	// �ƹ��ϵ� ���� ���� �����ڰ� ������
	// "default constructor" �� �����⸸ ����
	Dummy(int a){}
	// �ƹ��ϵ� ���� ���� �Ҹ��ڵ� ������
	// �ν��Ͻ��� �Ҹ�� �� �Ҹ��ڸ� ȣ���ϹǷ�..
	// "default destructor"
	~Dummy() {}
	// �ڱ� �ڽŰ� ���� Ÿ���� ���� ��������ڰ� �������
	// "default copy constructor"
	Dummy(Dummy& other) {
		//��� �� ����� ������ �� �ֵ��� ����
		this->a = other.a;
		this->d = other.d;
	}
private:
	int a;
	double d;
};