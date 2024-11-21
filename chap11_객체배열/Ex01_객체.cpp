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
	Point(int x = 0, int y = 0) :x(x), y(y) {
		cout << "1. constructor\n";
	}
	~Point() {
		cout << "destructor\n";
	}
	inline string getPoint() const {
		return "(" + to_string(x) + ", " + to_string(y) + ")";
	}
private:
	int x, y;
};


int main() {
	//Point p1, p2, p3, p4, p5;
	// // �������� �μ��� ������ �ʴ� ���, ������ ȣ�� ���� ����
	//Point p[5];	// = Point p[5] = { Point(),Point(),Point(),Point(),Point() };
	
	// Point p1(1), p2(2);
	//�������� �μ��� 1�� �ѱ�� ��� ������ ȣ�� ���� ����
	//Point p[2] = {1,2}; // = { Point(1),Point(2) };

	//Point p1(1, 2);
	//Point p2(10, 20);
	////�������� �μ��� 2�� �̻� �ѱ�� ���, ������ ȣ���� �ݵ�� �����ؾ� �Ѵ�.
	//Point p[2] = { Point(1,2),Point(10,20) };

	//cout << "p[0] : " << p[0].getPoint() << endl;
	//cout << "p[1] : " << p[1].getPoint() << endl;

	/* ��ü ������ */
	//Point* p = new Point; // newŰ����� �ν��Ͻ� ���� => ������ ȣ���
	//cout << "p : " << p->getPoint() << endl;
	//delete p;

	 //Allocate an array of Point pointers
	Point** pp = new Point * [3];
	// Create Instances with parameters
	pp[0] = new Point(1, 2);
	pp[1] = new Point(3, 4);
	pp[2] = new Point(5, 6);
	cout << "p[0]" << pp[0][0].getPoint() << endl;
	cout << "p[1]" << pp[1][0].getPoint() << endl;
	cout << "p[2]" << pp[2]->getPoint() << endl;
	delete pp[0];
	delete pp[1];
	delete pp[2];
	delete[] pp;

	// Since C++11~
	Point* p = new Point[3]{Point(1,2),Point(2,3),Point(10,20)};
	cout << "p[0]" << p[0].getPoint() << endl;
	cout << "p[1]" << p[1].getPoint() << endl;
	cout << "p[2]" << p[2].getPoint() << endl;
	 //(p + x) �� �ּ��̹Ƿ� ->�� ����
	cout << "p[0]" << (p + 0)->getPoint() << endl;
	cout << "p[1]" << (p + 1)->getPoint() << endl;
	cout << "p[2]" << (p + 2)->getPoint() << endl;
	delete[] p;


	return 0;
}