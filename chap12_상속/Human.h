#pragma once // include가 여러번 되는 것을 막음
#include <string>

using std::string;

class Human {
public: // 어디서든 접근 가능
	 Human();
	 Human(string name,int age);
	//복사 생성자
	 Human(const Human& other);
	 ~Human();
public:
	 string getName() const;
	 int getAge() const;
public:
	 void setName(string name);
	 void setAge(int age);
protected: // 자신의 클래스 + 상속된 클래스에서 접근 가능
	//string name = "";
	//int age = 0;
private: // 자신의 클래스에서만 접근 가능
	string name = "";
	int age = 0;
};