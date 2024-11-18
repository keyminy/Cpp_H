#include <iostream>
#include <string>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;

class Point {
	// 프랜드함수 선언
	friend Point operator+(int num, const Point& other);
public:
	//콜론(:) 초기화 이용시, 좌측은 무조건 instance variable
	// 그래서, this키워드를 사용하지 못한다.
	Point(int x = 0, int y = 0) : x(x), y(y) {}
	inline string getPoint() const {
		return "(" + to_string(x) +", " + to_string(y) + ")";
	}
	inline bool operator==(const Point& other) const {
		//if (this->x == other.x && this->y == other.y) {
		//	return true;
		//}
		//else {
		//	return false;
		//}
		return (this->x == other.x && this->y == other.y);
	}
	const Point& operator+=(const Point& other) {
		this->x += other.x;
		this->y += other.y;
		return *this; // 호출 객체를 리턴한다.
	}
	// 지역변수는 레퍼런스 타입으로는 리턴 불가능함
	// 지역변수는 오직 복사본으로만 리턴가능
	Point operator+(const Point& other) {
		/* M1, 인스턴스 생성 후 연산 수행 */
		//Point temp;
		//temp.x = this->x + other.x;
		//temp.y = this->y + other.y;
		//return temp; // 호출 객체를 리턴한다.
		
		/* M2, 연산 결과로 인스턴스 생성 */
		//덧셈한 결과로 인스턴스 생성
		//Point temp(this->x + other.x, this->y + other.y);
		//return temp;

		/* M3, 인스턴스를 생성한것을 바로 리턴
		생성된 인스턴스는 익명이다. */
		return Point(this->x + other.x, this->y + other.y);
	}
	Point operator+(int num) {
		return Point(this->x + num, this->y + num);
	}
	// 클래스내에 =연산자를 오버로딩 하지 않을 시
	// 컴파일러가 자동으로 만들어주는 default '=' 대입 연산자
	Point operator=(const Point& other) {
		this->x = other.x;
		this->y = other.y;
		cout << "= 연산자 오버로딩\n";
		return *this; // 호출 객체를 리턴해서 연속적인 대입 연산이 가능하도록 함
	}
	// 레퍼런스로 리턴 시, 내부적으로 복사본은 생성되지 않는다 => 원본 리턴됨
	Point& operator++() { //전치 연산
		this->x++;
		this->y++;
		// return값이 없는 경우, 연속적인 연산이 불가능
		return *this;
	}
	Point operator++(int) {
		//후치 연산 
		//Point temp(this->x, this->y);
		//Point temp = *this;
		Point temp(*this);
		this->x++;
		this->y++;
		return temp;
		//return Point(this->x++, this->y++);
	}

private:
	int x = 0, y = 0;
};

// 교환법칙 : 클래스의 멤버함수가 아닌 전역함수로 구현
//operator+(10, p6)가 되게
Point operator+(int num, const Point& other) {
	return Point(num + other.x, num + other.y);
}

int main() {
	Point p1(2, 3);
	Point p2(2, 3);

	if (p1 == p2) // p1.operator==(p2)
		cout << "두 좌표는 같습니다.\n";
	else
		cout << "두 좌표는 다릅니다.\n";

	Point p3(1, 1), p4(1,1);
	p4+= p3 += p1 += p2; // p1.operator+=(p2)

	Point p5;
	p5 = p1 + p2; // p5 = p1.operator+(p2);

	++(++(++p5)); //(7,10)->(8,11)->(9,12)
	//p5.operator++();
	Point result,p6(1,2); //생성자 호출
	result = p6++; // p6.operator++(int)후에 result.operator=(p6)수행됨

	//Point sum = p6 + 10; //p6.operator+(10), Point sum(복사본인스턴스) => 복사 생성자 호출됨
	// 교환법칙이 성립하도록 되고 싶다.
	// 전역함수로 오버로딩 시 좌측 피연산자는 첫 번째 매개변수는 첫 번째 매개변수, 우측 피연산자는 두번째 매개변수가 되게
	// 전역함수가 처리함
	Point sum = 10 + p6; //operator+(10,p6) 

	cout << "p1" << p1.getPoint() << endl;
	cout << "p2" << p2.getPoint() << endl;
	cout << "p3" << p3.getPoint() << endl;
	cout << "p4" << p4.getPoint() << endl;
	cout << "p5" << p5.getPoint() << endl;
	cout << "============ 후치 연산 =========\n";
	cout << "p6" << p6.getPoint() << endl; // 2,3
	cout << "result" << result.getPoint() << endl; // 1,2
	cout << "sum" << sum.getPoint() << endl; // 12,13(2+10,3+10)
	return 0;
}