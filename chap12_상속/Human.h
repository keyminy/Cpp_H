#pragma once // include�� ������ �Ǵ� ���� ����
#include <string>

using std::string;

class Human {
public: // ��𼭵� ���� ����
	inline Human();
	inline Human(string name,int age);
	//���� ������
	inline Human(const Human& other);
	inline ~Human();
public:
	inline string getName() const;
	inline int getAge() const;
public:
	inline void setName(string name);
	inline void setAge(int age);
protected: // �ڽ��� Ŭ���� + ��ӵ� Ŭ�������� ���� ����
	//string name = "";
	//int age = 0;
private: // �ڽ��� Ŭ���������� ���� ����
	string name = "";
	int age = 0;
};