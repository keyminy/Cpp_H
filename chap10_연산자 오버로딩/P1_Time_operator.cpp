#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::abs;

class Time {
public:
	Time(int hour=0,int min=0,int sec=0) {
		this->hour = hour;
		this->min = min;
		this->sec = sec;
	}
public:
	Time operator+(const Time& other) {
		Time temp;
		temp.setTotalTime(abs(this->getTotalSeconds() + other.getTotalSeconds()));
		return temp;
	}
	Time operator-(const Time& other) {
		Time temp;
		temp.setTotalTime(abs(this->getTotalSeconds() - other.getTotalSeconds()));
		return temp;
	}
public:
	void OutTime() const {
		cout << this->hour << "시, ";
		cout << this->min << " 분, ";
		cout << this->sec << " 초";
		cout << endl;
	}
public:
	int inline getTotalSeconds() const {
		return this->hour * 3600 + this->min * 60 + this->sec;
	}
public:
	void inline setTotalTime(int totalSeconds) {
		this->hour = totalSeconds / 3600;
		totalSeconds %= 3600;
		this->min = (totalSeconds) / 60;
		this->sec = totalSeconds % 60;
	}
private:
	int hour=0, min=0, sec=0;
};

int main() {
	Time t1(3, 56, 24);
	Time t2(5, 26, 18);
	cout << "T1 시간 -> ";
	t1.OutTime();

	cout << "T2 시간 ->  ";
	t2.OutTime();

	cout << "T1 + T2 시간 ->  ";
	Time totalTime = t1 + t2; // t1.operator+(t2)
	totalTime.OutTime();

	cout << "T2 - T1 시간 ->  ";
	Time taskTime = t2 - t1; // t2.operator-(t1)
	taskTime.OutTime();
	return 0;
}