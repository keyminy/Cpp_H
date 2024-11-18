#include <iostream>
#include <string>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;

class Point {
	// �������Լ� ����
	friend Point operator+(int num, const Point& other);
public:
	//�ݷ�(:) �ʱ�ȭ �̿��, ������ ������ instance variable
	// �׷���, thisŰ���带 ������� ���Ѵ�.
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
		return *this; // ȣ�� ��ü�� �����Ѵ�.
	}
	// ���������� ���۷��� Ÿ�����δ� ���� �Ұ�����
	// ���������� ���� ���纻���θ� ���ϰ���
	Point operator+(const Point& other) {
		/* M1, �ν��Ͻ� ���� �� ���� ���� */
		//Point temp;
		//temp.x = this->x + other.x;
		//temp.y = this->y + other.y;
		//return temp; // ȣ�� ��ü�� �����Ѵ�.
		
		/* M2, ���� ����� �ν��Ͻ� ���� */
		//������ ����� �ν��Ͻ� ����
		//Point temp(this->x + other.x, this->y + other.y);
		//return temp;

		/* M3, �ν��Ͻ��� �����Ѱ��� �ٷ� ����
		������ �ν��Ͻ��� �͸��̴�. */
		return Point(this->x + other.x, this->y + other.y);
	}
	Point operator+(int num) {
		return Point(this->x + num, this->y + num);
	}
	// Ŭ�������� =�����ڸ� �����ε� ���� ���� ��
	// �����Ϸ��� �ڵ����� ������ִ� default '=' ���� ������
	Point operator=(const Point& other) {
		this->x = other.x;
		this->y = other.y;
		cout << "= ������ �����ε�\n";
		return *this; // ȣ�� ��ü�� �����ؼ� �������� ���� ������ �����ϵ��� ��
	}
	// ���۷����� ���� ��, ���������� ���纻�� �������� �ʴ´� => ���� ���ϵ�
	Point& operator++() { //��ġ ����
		this->x++;
		this->y++;
		// return���� ���� ���, �������� ������ �Ұ���
		return *this;
	}
	Point operator++(int) {
		//��ġ ���� 
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

// ��ȯ��Ģ : Ŭ������ ����Լ��� �ƴ� �����Լ��� ����
//operator+(10, p6)�� �ǰ�
Point operator+(int num, const Point& other) {
	return Point(num + other.x, num + other.y);
}

int main() {
	Point p1(2, 3);
	Point p2(2, 3);

	if (p1 == p2) // p1.operator==(p2)
		cout << "�� ��ǥ�� �����ϴ�.\n";
	else
		cout << "�� ��ǥ�� �ٸ��ϴ�.\n";

	Point p3(1, 1), p4(1,1);
	p4+= p3 += p1 += p2; // p1.operator+=(p2)

	Point p5;
	p5 = p1 + p2; // p5 = p1.operator+(p2);

	++(++(++p5)); //(7,10)->(8,11)->(9,12)
	//p5.operator++();
	Point result,p6(1,2); //������ ȣ��
	result = p6++; // p6.operator++(int)�Ŀ� result.operator=(p6)�����

	//Point sum = p6 + 10; //p6.operator+(10), Point sum(���纻�ν��Ͻ�) => ���� ������ ȣ���
	// ��ȯ��Ģ�� �����ϵ��� �ǰ� �ʹ�.
	// �����Լ��� �����ε� �� ���� �ǿ����ڴ� ù ��° �Ű������� ù ��° �Ű�����, ���� �ǿ����ڴ� �ι�° �Ű������� �ǰ�
	// �����Լ��� ó����
	Point sum = 10 + p6; //operator+(10,p6) 

	cout << "p1" << p1.getPoint() << endl;
	cout << "p2" << p2.getPoint() << endl;
	cout << "p3" << p3.getPoint() << endl;
	cout << "p4" << p4.getPoint() << endl;
	cout << "p5" << p5.getPoint() << endl;
	cout << "============ ��ġ ���� =========\n";
	cout << "p6" << p6.getPoint() << endl; // 2,3
	cout << "result" << result.getPoint() << endl; // 1,2
	cout << "sum" << sum.getPoint() << endl; // 12,13(2+10,3+10)
	return 0;
}