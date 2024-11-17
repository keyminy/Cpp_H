#include <iostream>
#include <string>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Schedule {
public:
	Schedule(int year = 2021,
		int month = 12,
		int day = 1,
		const char* memo=nullptr) {
		this->year = year;
		this->month = month;
		this->day = day;
		this-> memo = new char[strlen(memo) + 1];
		strcpy(this->memo, memo);
	}
	Schedule(const Schedule& other) {
		this->year = other.year;
		this->month = month;
		this->day = day;
		this->memo = new char[strlen(other.memo) + 1];
		strcpy(this->memo, other.memo);
	}
	~Schedule() {
		cout << "======== ~destructor ======= " << this-> memo<< endl;
		delete[] memo;
	}
public:
	inline int get_year() const {
		return this->year;
	}
	inline int get_month() const {
		return this->month;
	}
	inline int get_day() const {
		return this->day;
	}
	inline string get_memo() const {
		return memo;
	}
public:
	inline void set_memo(const char* memo) {
		this->memo = new char[strlen(memo) + 1];
		strcpy(this->memo, memo);
	}
private:
	int year = 2021, month = 12, day = 1;
	char* memo = nullptr;
};

int main()
{
	Schedule s1(2021, 12, 21, "신발 구입");
	Schedule s2(2021, 12, 24, "강남역 cgv앞에서 수현이 만남");

	cout << s1.get_year() << "년 " << s1.get_month() << "월 " << s1.get_day() << "일의 일정은 "
		<< s1.get_memo() << "입니다.\n";

	cout << s2.get_year() << "년 " << s2.get_month() << "월 " << s2.get_day() << "일의 일정은 "
		<< s2.get_memo() << "입니다.\n";

	Schedule s3 = s2;

	cout << "일정이 복사됐습니다.\n";
	cout << s3.get_year() << "년 " << s3.get_month() << "월 " << s3.get_day() << "일의 일정은 "
		<< s3.get_memo() << "입니다.\n";

	s3.set_memo("cgv 아니고 메가박스 앞에서 6시에 만나기로 변경");
	cout << s3.get_year() << "년 " << s3.get_month() << "월 " << s3.get_day() << "일의 일정은 "
		<< s3.get_memo() << "입니다.\n";

	return 0;
}