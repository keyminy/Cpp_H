#pragma once
#include "Human.h"

class Student :public Human {
public:
	inline Student();
	inline Student(string stNo, string major);
	inline Student(const Student& other);
	inline ~Student();
	void displayStudent() const;
protected:
private:
	string stNo = "";//ÇÐ¹ø
	string major = "";
};