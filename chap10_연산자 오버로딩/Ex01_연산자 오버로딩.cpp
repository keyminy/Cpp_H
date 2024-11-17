#include <iostream>
#include <string>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;

class Point {
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
	Point operator+=(const Point& other) {
		this->x += other.x;
		this->y += other.y;
		return *this;
	}
private:
	int x = 0, y = 0;
};

int main() {
	Point p1(2, 3);
	Point p2(2, 3);

	if (p1 == p2) // p1.operator==(p2)
		cout << "두 좌표는 같습니다.\n";
	else
		cout << "두 좌표는 다릅니다.\n";

	Point p3(1, 1), p4(1,1);
	p4+= p3 += p1 += p2; // p1.operator+=(p2)

	cout << "p1" << p1.getPoint() << endl;
	cout << "p2" << p2.getPoint() << endl;
	cout << "p3" << p3.getPoint() << endl;
	cout << "p4" << p4.getPoint() << endl;
	return 0;
}