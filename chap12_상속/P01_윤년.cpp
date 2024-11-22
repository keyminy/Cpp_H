#include <iostream>
#include "Date.h"
#define DAY_LEN 13
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

// 각 달의 마지막 일수
// 2월은 윤년인 경우만 28일을 -> 29일로 변경하자 DAY[2]부분
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
	//4년마다 1번씩 돌아오고, 100년마다 돌아오는 해는 윤년이아니다.
	// 4,8,12,16은 윤년이다.
	// 100,200,300은 윤년이아니다.
	// 400년마다 돌아오는 해는 윤년이다. 400, 800, 1200은 윤년이다.
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		return true;
	else
		return false;
}

void Date::display() const
{
	cout << year << " 년 " << month << " 월 " << day << " 일 " << endl;
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
	return to_string(year) + " 년 " + to_string(month) + " 월 " + to_string(day) + " 일 ";
}
Date Date::getCalendar(int totalDays)
{
	Date result(0, 1, 1); // 초기 날짜를 "0년 1월 1일"로 설정
	// 년 더하기
	while (totalDays > (result.isLeapYear(result.year)?366 : 365)) {
		totalDays -= (result.isLeapYear(result.year) ? 366 : 365);
		result.year++;
	}
	// 월 더하기
	while (totalDays > result.getDayOfMonth(result.year,result.month)) {
		totalDays -= result.getDayOfMonth(result.year, result.month);
		result.month++;
	}
	//남은 일수를 일로 설정
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
	// 윤년체크
	if (day >= 1 && day <= getDayOfMonth(year, month)) {
		this->day = day;
	}
}




int main() {
	Date today(2024, 10, 1);
	// 윤년고려, 각 월의 일수를 고려해야함
	today.display();
	Date days100 = today + 100; //today.operator+(100)
	cout << "오늘부터 100일 후는 " << days100.getDate() << "입니다.\n";
	
	Date future(2040, 11, 21);
	Date rangeDays = future - today; // futuer.operator-(today)
	cout << "두 날짜의 기간은 " << rangeDays.getDate() << "입니다.\n";
	cout << "두 날짜의 day수는 " << rangeDays.getTotalDay() << "입니다.\n";
	return 0;
}