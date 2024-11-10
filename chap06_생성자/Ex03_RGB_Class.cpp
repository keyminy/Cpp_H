#include <iostream>
#include <string>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;

class RGB {
private:
	/* �⺻�� ���� */
	// red�� -3�� ��������, �⺻�� red = 255�� ������ ����
	int red = 255, green = 255, blue = 255;
private:
//private method
	//��ȿ�� �˻� üũ ���� �Ǵ� �޼���
	inline bool validateColorValue(int value) {
		//if (value >= 0 && value <= 255)
		//	return true;
		//else
		//	return false;
		/* �ٷ� ���� ����� �����ϴ� ������ε� ���� */
		return (value >= 0 && value <= 255);
	}
public:
	//�ڵ� �ߺ� : target������ ȣ��
	// �� �����ڴ� ���� �����ڰ� �ȴ�.
	RGB() :RGB(255,255,255){
		//red		= 255;
		//green	= 255;
		//blue	= 255;
		cout << "default constructor call!\n";
	}
	//�� �����ڴ� Ÿ�� �����ڰ� �ȴ�.
	RGB(int r,int g,int b) {
		// ��ȿ�� üũ
		//if(r >= 0 && r <= 255)
		//	red		= r;
		//if(g >= 0 && g <= 255)
		//	green	= g;
		//if(b >= 0 && b <= 255)
		//	blue	= b;
		/* �̰͵� �ߺ� */
		//if(validateColorValue(r))
		//	red		= r;
		//if(validateColorValue(g))
		//	green	= g;
		//if(validateColorValue(b))
		//	blue	= b;
		/* M3 */
		setRed(r); // red���� �����ϴ� �޼��� ȣ��
		setGreen(g); // green���� �����ϴ� �޼��� ȣ��
		setBlue(b); // blue���� �����ϴ� �޼��� ȣ��
		cout << "constructor call!\n";
	}
	inline void showColor() const {
		cout << "(" << red << ", " << green << ", " << blue << ")\n";
	}
	inline string getColor() const {
		return "(" + to_string(red) + ", " + to_string(green) 
			+ ", " + to_string(blue)+")";
	}
	// setter : instance variable�� ���� �������ִ� �޼���
	inline void setRed(int r) {
		if(validateColorValue(r))
			red = r;
	}
	inline void setGreen(int g) {
		if(validateColorValue(g))
			green = g;
	}
	inline void setBlue(int b) {
		if(validateColorValue(b))
			blue = b;
	}
	//getter : instance variable�� ���� �����ϴ� �޼���
	inline int getRed() const { return red; }
	inline int getGreen() const { return green; }
	inline int getBlue() const { return blue; }
};

int main() {
	RGB r1(23, 45, 65); // �ν��Ͻ� ����
	RGB r2(123, 48, 165); // �ν��Ͻ� ����
	RGB r3(-3, 300, 28); // �ν��Ͻ� ����

	//r1.red = 100; // private������ ���� �Ұ� -> setter�̿�
	r1.setRed(100);
	r1.setRed(-8989); //��ȿ�� üũ �Լ� �ʿ�
	cout << "r1�� ����� red���� " << r1.getRed() << "�Դϴ�.\n";

	//cout << "r1";
	//r1.showColor();
	//cout << "r2";
	//r2.showColor();
	//cout << "r3";
	//r3.showColor();

	cout << "r1" << r1.getColor() << endl;
	cout << "r2" << r2.getColor() << endl;
	cout << "r3" << r3.getColor() << endl;
	return 0;
}