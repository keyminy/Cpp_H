#pragma once // include가 여러번 되는 것을 막음
#include <string>

using std::string;

class Human {
public: // 어디서든 접근 가능
	inline Human();
	inline Human(string name,int age);
	//복사 생성자
	inline Human(const Human& other);
	inline ~Human();
public:
	inline string getName() const;
	inline int getAge() const;
public:
	inline void setName(string name);
	inline void setAge(int age);
protected: // 자신의 클래스 + 상속된 클래스에서 접근 가능
	//string name = "";
	//int age = 0;
private: // 자신의 클래스에서만 접근 가능
	string name = "";
	int age = 0;
};