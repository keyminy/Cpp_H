#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class Triangle {
public:
	//멤버 변수 : attribute
	double base = 0, height = 0;
	//멤버 함수 : method
	void setTriangle(double _base, double _height);
	double getArea() const;
};

int main() {
	Triangle t1; // 클래스 변수 선언 -> 객체 생성되었다.(=Triangle인스턴스 생성)
	t1.setTriangle(4.5, 9.2);
	cout << "t1.삼각형의 넓이는 " << t1.getArea() << "입니다.\n";

	Triangle t2; // TRiangle 인스턴스 생성
	t2.setTriangle(1.1, 2.2);
	cout << "t2.삼각형의 넓이는 " << t2.getArea() << "입니다.\n";

	cout << "\n삼각형의 밑변, 높이를 공백으로 구분해서 입력하세요 : ";
	double b, h;
	cin >> b >> h;

	Triangle t3; // Triangle 인스턴스 생성
	t3.setTriangle(b, h);
	cout << "t3.입력받은 값의 삼각형의 넓이는 " << t3.getArea() << "입니다.\n";

	return 0;
}

void Triangle::setTriangle(double _base, double _height)
{
	base = _base;
	height = _height;
}

double Triangle::getArea() const
{
	// 상수화된 메서드에서는 멤버변수 수정이 불가능하다.
	return base * height / 2;
}
