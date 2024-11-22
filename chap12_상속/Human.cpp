#include "Human.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

inline Human::Human()
{
	cout << "1. Human Constructor\n";
}

inline Human::Human(string name, int age)
{
	/*this->name = name;
	this->age = age;*/
	setName(name);
	setAge(age);
	cout << "2. Human Constructor\n";
}

inline Human::Human(const Human& other)
{/*
	this->name = other.name;
	this->age = other.age;*/
	setName(other.name);
	setAge(other.age);
	cout << "3. Human Copy Constructor\n";
}

inline Human::~Human()
{
	cout << "~Human Destructor\n";
}

inline string Human::getName() const
{
	return this->name;
}

inline int Human::getAge() const
{
	return this->age;
}

inline void Human::setName(string name)
{
	this->name = name;
}

inline void Human::setAge(int age)
{
	if(age > 0)
		this->age = age;
}
