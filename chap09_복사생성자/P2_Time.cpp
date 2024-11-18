#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class Time {
public:
	Time(int hour = 0, int min = 0, int sec = 0)
		:hour(hour), min(min), sec(sec)
	{}
public:
	void OutTime() const {
		cout << this->hour << "시, ";
		cout << this->min << " 분, ";
		cout << this->sec << " 초";
		cout << endl;
	}
	void AddSecond(const int sec) {
		int totalSeconds = this->getTotalSeconds() + sec;
		this->hour = (totalSeconds / 3600) % 24;
		totalSeconds %= 3600;
		this->min = (totalSeconds) / 60;
		this->sec = totalSeconds % 60;
	}
	int SecondBetweenDiff(const Time& other) {
		return std::abs(this->getTotalSeconds() - other.getTotalSeconds());
	}
	inline int SecondBetweenAdd(const Time& other) const {
		return std::abs(this->getTotalSeconds() + other.getTotalSeconds());
	}
public:
	inline int getTotalSeconds() const {
		return this->hour * 3600 + this->min * 60 + this->sec;
	}
private:
	int hour = 0, min = 0, sec = 0;
};


int main()
{
	Time T1(6, 30, 45);
	Time T2(18, 18, 23);

	cout << "T1 시간 -> ";
	T1.OutTime();

	cout << "T2 시간 ->  ";
	T2.OutTime();

	//-----------------------------------------------------------------------//
	T1.AddSecond(100); //초를 더하는 메서드(시, 분, 초 고려)
	cout << "T1 시간 + 100초 -> ";
	T1.OutTime();

	//-----------------------------------------------------------------------//
	Time T4(1, 30, 10);
	Time T5(4, 12, 45);

	cout << "업무 시작 시간 : ";
	T4.OutTime();

	cout << "업무 종료 시간 : ";
	T5.OutTime();

	//총 업무 시간을 초로 리턴(-)
	cout << "업무 시간은 " << T4.SecondBetweenDiff(T5) << "초 입니다.\n";

	//-----------------------------------------------------------------------//
	Time T6(1, 12, 14);
	Time T7(1, 11, 11);

	cout << "과제 1 소요 시간 : ";
	T6.OutTime();

	cout << "과제 2 소요 시간 : ";
	T7.OutTime();

	//총 과제 소요 시간을 초로 리턴(+)
	cout << "과제 총 소요 시간은 " << T6.SecondBetweenAdd(T7) << "초 입니다.\n";


	return 0;
}