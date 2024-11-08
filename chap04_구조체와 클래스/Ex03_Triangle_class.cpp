#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class Triangle {
public:
	//��� ���� : attribute
	double base = 0, height = 0;
	//��� �Լ� : method
	void setTriangle(double _base, double _height);
	double getArea() const;
};

int main() {
	Triangle t1; // Ŭ���� ���� ���� -> ��ü �����Ǿ���.(=Triangle�ν��Ͻ� ����)
	t1.setTriangle(4.5, 9.2);
	cout << "t1.�ﰢ���� ���̴� " << t1.getArea() << "�Դϴ�.\n";

	Triangle t2; // TRiangle �ν��Ͻ� ����
	t2.setTriangle(1.1, 2.2);
	cout << "t2.�ﰢ���� ���̴� " << t2.getArea() << "�Դϴ�.\n";

	cout << "\n�ﰢ���� �غ�, ���̸� �������� �����ؼ� �Է��ϼ��� : ";
	double b, h;
	cin >> b >> h;

	Triangle t3; // Triangle �ν��Ͻ� ����
	t3.setTriangle(b, h);
	cout << "t3.�Է¹��� ���� �ﰢ���� ���̴� " << t3.getArea() << "�Դϴ�.\n";

	return 0;
}

void Triangle::setTriangle(double _base, double _height)
{
	base = _base;
	height = _height;
}

double Triangle::getArea() const
{
	// ���ȭ�� �޼��忡���� ������� ������ �Ұ����ϴ�.
	return base * height / 2;
}
