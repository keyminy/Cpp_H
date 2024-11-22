#pragma once
#include <string>

using std::string;
using std::to_string;

class Date {
public:
	inline Date(int year, int month, int day);
	inline Date(int day = 0);
	Date operator+(const int day);
	Date operator-(const Date& other);
public:
	bool isLeapYear(int year) const;
	void display() const;
	int getDayOfMonth(int year, int month) const;
	int getDayOfMonth(int month) const;
	int getDayOfMonth() const;
	Date getCalendar(int day);
public:
	// getter
	inline int getYear() const;
	inline int getMonth() const;
	inline int getTotalDay() const;
	inline string getDate() const;
public:
	// setter
	inline void setYear(int year);
	inline void setMonth(int month);
	inline void setDay(int day);
private:
	int year = 0, month = 1, day = 0;
};