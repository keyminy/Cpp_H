#include <iostream>
#include "Date.h"
#define DAY_LEN 13
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

// �� ���� ������ �ϼ�
// 2���� ������ ��츸 28���� -> 29�Ϸ� �������� DAY[2]�κ�
int DAY[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

inline Date::Date(int year, int month, int day)
	:year(year),month(month),day(day) {}

inline Date::Date(int day)
{
	this->year = 0;
	this->month = 1;
	this->day = day;
	*this = getCalendar(day);
}

Date Date::operator+(const int day)
{
	return Date(getTotalDay()+day);
}

Date Date::operator-(const Date& other)
{
	return Date(getTotalDay()-other.getTotalDay());
}

bool Date::isLeapYear(int year) const
{
	//4�⸶�� 1���� ���ƿ���, 100�⸶�� ���ƿ��� �ش� �����̾ƴϴ�.
	// 4,8,12,16�� �����̴�.
	// 100,200,300�� �����̾ƴϴ�.
	// 400�⸶�� ���ƿ��� �ش� �����̴�. 400, 800, 1200�� �����̴�.
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return true;
	else
		return false;
}

void Date::display() const
{
	cout << year << " �� " << month << " �� " << day << " �� " << endl;
}

int Date::getDayOfMonth(int year, int month) const
{
	return isLeapYear(year) && (month == 2) ? 29 : DAY[month];
}

int Date::getDayOfMonth(int month) const
{
	return isLeapYear(year) && (month == 2) ? 29 : DAY[month];;
}

int Date::getDayOfMonth() const
{
	return this->getDayOfMonth(this->month);
}

inline string Date::getDate() const
{
	return to_string(year) + " �� " + to_string(month) + " �� " + to_string(day) + " �� ";
}
Date Date::getCalendar(int totalDays)
{
	Date result(0, 1, 1); // �ʱ� ��¥�� "0�� 1�� 1��"�� ����
	// �� ���ϱ�
	while (totalDays > (result.isLeapYear(result.year)?366 : 365)) {
		totalDays -= (result.isLeapYear(result.year) ? 366 : 365);
		result.year++;
	}
	// �� ���ϱ�
	while (totalDays > result.getDayOfMonth(result.year,result.month)) {
		totalDays -= result.getDayOfMonth(result.year, result.month);
		result.month++;
	}
	//���� �ϼ��� �Ϸ� ����
	result.day = totalDays;

	return result;
}
inline int Date::getYear() const
{
	return this->year;
}

inline int Date::getMonth() const
{
	return this->month;
}

inline int Date::getTotalDay() const
{
	int day = 0;
	for (int i = 0; i < this->year; i++) {
		day += (isLeapYear(i) ? 366 : 365);
	}
	for (int i = 1; i < this->month; i++) {
		day += getDayOfMonth(this->year,i);
	}
	day += this->day;
	return day;
}

inline void Date::setYear(int year)
{
	if (year >= 1 && year <= 9999) {
		this->year = year;
	}
}

inline void Date::setMonth(int month)
{
	if (month >= 1 && month <= 12) {
		this->month = month;
	}
}

inline void Date::setDay(int day)
{
	// ����üũ
	if (day >= 1 && day <= getDayOfMonth(year, month)) {
		this->day = day;
	}
}




int main() {
	Date today(2024, 10, 1);
	// ������, �� ���� �ϼ��� ����ؾ���
	today.display();
	Date days100 = today + 100; //today.operator+(100)
	cout << "���ú��� 100�� �Ĵ� " << days100.getDate() << "�Դϴ�.\n";
	
	Date future(2040, 11, 21);
	Date rangeDays = future - today; // futuer.operator-(today)
	cout << "�� ��¥�� �Ⱓ�� " << rangeDays.getDate() << "�Դϴ�.\n";
	cout << "�� ��¥�� day���� " << rangeDays.getTotalDay() << "�Դϴ�.\n";
	return 0;
}