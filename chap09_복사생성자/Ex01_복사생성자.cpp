#include <iostream>
#include <string>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;

class Date {
public:
	Date(int year = 1900,int month = 1, int day = 1) {
		this->year = year;
		this->month = month;
		this->day = day;
		cout << "1. constructor\n";
	}
	// 내부적으로 생성되는 복사생성자가 멤버 대 멤버 복사를 할 수 있도록 대입되어
	// 해당 코드를 작성할 필요가 없다.
	//Date(Date& other) {
	//	cout << "2. copy constructor\n";
	//	this->year = other.year;
	//	this->month = other.month;
	//	this->day = other.day;
	//}
	inline string getDate() const {
		return to_string(year) + "/" + to_string(month) + "/" + to_string(day);
	}
private:
	int year = 1900, month = 1, day = 1;
};

int main() {
	Date d1; // 인스턴스 생성
	Date myBirth(2024, 4, 5); // 인스턴스 생성
	Date copy = myBirth; // 2.copy constructor 호출됨
	// Date copy(miBirth); 와 같음

	cout << "초기 생성 날짜 = " << d1.getDate() << endl;
	cout << "나의 생일은? " << myBirth.getDate() << endl;
	cout << "복사된 인스턴스의 날짜는? " << copy.getDate() << endl;
	return 0;
}

class Dummy {
public:
	// 아무일도 하지 않은 생성자가 생성됨
	// "default constructor" 빈 껍데기만 존재
	Dummy(int a){}
	// 아무일도 하지 않은 소멸자도 생성됨
	// 인스턴스가 소멸될 때 소멸자를 호출하므로..
	// "default destructor"
	~Dummy() {}
	// 자기 자신과 같은 타입을 갖는 복사생성자가 만들어짐
	// "default copy constructor"
	Dummy(Dummy& other) {
		//멤버 대 멤버를 복사할 수 있도록 수행
		this->a = other.a;
		this->d = other.d;
	}
private:
	int a;
	double d;
};