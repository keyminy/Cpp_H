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
	Schedule s1(2021, 12, 21, "�Ź� ����");
	Schedule s2(2021, 12, 24, "������ cgv�տ��� ������ ����");

	cout << s1.get_year() << "�� " << s1.get_month() << "�� " << s1.get_day() << "���� ������ "
		<< s1.get_memo() << "�Դϴ�.\n";

	cout << s2.get_year() << "�� " << s2.get_month() << "�� " << s2.get_day() << "���� ������ "
		<< s2.get_memo() << "�Դϴ�.\n";

	Schedule s3 = s2;

	cout << "������ ����ƽ��ϴ�.\n";
	cout << s3.get_year() << "�� " << s3.get_month() << "�� " << s3.get_day() << "���� ������ "
		<< s3.get_memo() << "�Դϴ�.\n";

	s3.set_memo("cgv �ƴϰ� �ް��ڽ� �տ��� 6�ÿ� ������� ����");
	cout << s3.get_year() << "�� " << s3.get_month() << "�� " << s3.get_day() << "���� ������ "
		<< s3.get_memo() << "�Դϴ�.\n";

	return 0;
}