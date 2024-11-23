#include "Human.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

Human::Human()
{
	cout << "1. Human Constructor\n";
}

Human::Human(string name, int age)
{
	/*this->name = name;
	this->age = age;*/
	setName(name);
	setAge(age);
	cout << "2. Human Constructor\n";
}

Human::Human(const Human& other)
{/*
	this->name = other.name;
	this->age = other.age;*/
	setName(other.name);
	setAge(other.age);
	cout << "3. Human Copy Constructor\n";
}

Human::~Human()
{
	cout << "~Human Destructor\n";
}

string Human::getName() const
{
	return this->name;
}

int Human::getAge() const
{
	return this->age;
}

void Human::setName(string name)
{
	this->name = name;
}

void Human::setAge(int age)
{
	if(age > 0)
		this->age = age;
}
