#pragma once
#include "Human.h"

class Student :public Human {
public:
	 Student();
	 Student(string name, int age, string stNo, string major);
	 Student(const Student& other);
	 ~Student();
	void displayStudent() const;
protected:
private:
	string stNo = "";//ÇÐ¹ø
	string major = "";
};