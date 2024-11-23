#pragma once // include�� ������ �Ǵ� ���� ����
#include <string>

using std::string;

class Human {
public: // ��𼭵� ���� ����
	 Human();
	 Human(string name,int age);
	//���� ������
	 Human(const Human& other);
	 ~Human();
public:
	 string getName() const;
	 int getAge() const;
public:
	 void setName(string name);
	 void setAge(int age);
protected: // �ڽ��� Ŭ���� + ��ӵ� Ŭ�������� ���� ����
	//string name = "";
	//int age = 0;
private: // �ڽ��� Ŭ���������� ���� ����
	string name = "";
	int age = 0;
};