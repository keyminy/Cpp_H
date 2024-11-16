#include <iostream>
#include <string>
#include <cmath> // C언어 수학 함수 // std::sqrt, std::power
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;
using std::sqrt;
using std::pow;

class Point {
public:
	// default Param : 전달되는 값이 없을때 x,y =0
	//inline Point(Point* this, int _x = 0, int _y = 0) {}
	inline Point(int x = 0, int y = 0) {
		this->x = x; // this포인터가 가리키는 x변수
		this->y = y; // this포인터가 가리키는 y변수
		pointCount++;
		//x = _x;
		//y = _y;
	}
public:
	//출력 메서드
	inline void displayPoint() const {
		cout << "(" << this->x << ", " << this->y << ")\n";
	}
	inline string getPoint() const {
		// 출력할 문자열을 만들어 리턴
		return "(" + to_string(this->x) + ", " + to_string(this->y)+")\n";
	}
public: // getter
	//inline int getX(Point* this) const { return this->x; }
	inline int getX() const { return this->x; }
	inline int getY() const { return this->y; }
public: //setter
	//inline void setX(Point* this, int _x) { x = _x; }
	inline void setX(int _x) { this->x = _x; }
	inline void setY(int _y) { this->y = _y; }
public:
	//inline double getDistance(Point* this,const Point& p) const {
	inline double getDistance(const Point& other) const {
		double disX = pow(other.x - this->x, 2);
		double disY = pow(other.y - this->y, 2);
		return sqrt(disX + disY);
		//return sqrt(pow(p.x-this->x,2) + pow(p.y-this->y,2));
	}
public:
	inline static int getPointCount() //const error남
	{
		//생성된 좌표의 개수를 리턴
		// 정적멤버는 instance variable에 접근할 수 없다.
		//cout << x << endl; // error

		// 정적멤버는 this포인터를 쓸 수 없다.
		// 정적멤버는 인스턴스가 아님, this는 인스턴스 변수만 접근 가능해서..
		//return this->pointCount;
		return pointCount; 
	}
private:
	int x = 0, y = 0;
	// 정적멤버 : 모든 인스턴스가 공유하는 것처럼 사용가능하다.
	// static으로 선언된 변수는 main함수가 실행되기 전에 딱 한번 메모리가 할당되어 초기화됨
	static int pointCount; //생성된 좌표의 개수
};

// 정적멤버 초기화(반드시 클래스 외부에서 초기화한다)
int Point::pointCount = 0;

int main() {
	cout << "생성된 좌표의 개수는 " << Point::getPointCount() << "개 입니다.\n";
	Point p1; //인스턴스 생성
	Point p2(2, 3);
	Point p3(-10, 26);

	cout << "생성된 좌표의 개수는 " << Point::getPointCount() << "개 입니다.\n";

	// p1.x = 99; //불가
	p1.setX(99);

	cout << "p2와 p3의 거리는 " << p2.getDistance(p3) << "입니다.\n";
	cout << "p1의 x좌표는? " << p1.getX() << endl;

	cout << "p1" << p1.getPoint() << endl;
	cout << "p2" << p2.getPoint() << endl;
	cout << "p3" << p3.getPoint() << endl;

	return 0;
}