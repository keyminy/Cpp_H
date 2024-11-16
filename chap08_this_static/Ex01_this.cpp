#include <iostream>
#include <string>
#include <cmath> // C��� ���� �Լ� // std::sqrt, std::power
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
	// default Param : ���޵Ǵ� ���� ������ x,y =0
	//inline Point(Point* this, int _x = 0, int _y = 0) {}
	inline Point(int x = 0, int y = 0) {
		this->x = x; // this�����Ͱ� ����Ű�� x����
		this->y = y; // this�����Ͱ� ����Ű�� y����
		pointCount++;
		//x = _x;
		//y = _y;
	}
public:
	//��� �޼���
	inline void displayPoint() const {
		cout << "(" << this->x << ", " << this->y << ")\n";
	}
	inline string getPoint() const {
		// ����� ���ڿ��� ����� ����
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
	inline static int getPointCount() //const error��
	{
		//������ ��ǥ�� ������ ����
		// ��������� instance variable�� ������ �� ����.
		//cout << x << endl; // error

		// ��������� this�����͸� �� �� ����.
		// ��������� �ν��Ͻ��� �ƴ�, this�� �ν��Ͻ� ������ ���� �����ؼ�..
		//return this->pointCount;
		return pointCount; 
	}
private:
	int x = 0, y = 0;
	// ������� : ��� �ν��Ͻ��� �����ϴ� ��ó�� ��밡���ϴ�.
	// static���� ����� ������ main�Լ��� ����Ǳ� ���� �� �ѹ� �޸𸮰� �Ҵ�Ǿ� �ʱ�ȭ��
	static int pointCount; //������ ��ǥ�� ����
};

// ������� �ʱ�ȭ(�ݵ�� Ŭ���� �ܺο��� �ʱ�ȭ�Ѵ�)
int Point::pointCount = 0;

int main() {
	cout << "������ ��ǥ�� ������ " << Point::getPointCount() << "�� �Դϴ�.\n";
	Point p1; //�ν��Ͻ� ����
	Point p2(2, 3);
	Point p3(-10, 26);

	cout << "������ ��ǥ�� ������ " << Point::getPointCount() << "�� �Դϴ�.\n";

	// p1.x = 99; //�Ұ�
	p1.setX(99);

	cout << "p2�� p3�� �Ÿ��� " << p2.getDistance(p3) << "�Դϴ�.\n";
	cout << "p1�� x��ǥ��? " << p1.getX() << endl;

	cout << "p1" << p1.getPoint() << endl;
	cout << "p2" << p2.getPoint() << endl;
	cout << "p3" << p3.getPoint() << endl;

	return 0;
}