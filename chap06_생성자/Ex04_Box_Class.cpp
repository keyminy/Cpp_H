#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class Box {
public:
	Box(int w,int h,char ch)
		//:width(w),height(h),fill(ch) // ��ȿ�� �˻� �ʿ�
	{
		//if (w > 0)
		//	width = w;
		//if (h > 0)
		//	height = h;
		//fill = ch;
		/* �ڵ� �ߺ� ���ϱ����� setter�Լ� ȣ�� */
		setWidth(w);
		setHeight(h);
		setFill(ch);
	}
	void draw() const;
public:
	inline void setHeight(int h) {
		if (h > 0)
			height = h;
	}
	inline void setWidth(int w) {
		if (w > 0)
			width = w;
	}
	inline void setFill(char ch) {
		fill = ch;
	}
public:
	//getter
	inline int getHeight() const{
		return height;
	}
	inline int getWidth() const{
		return width;
	}
	inline char getFill() const{
		return fill;
	}
private:
	int width = 0, height = 0;
	char fill = '\0';
};

int main() {
	Box b1(7, 3, '%');
	b1.draw();

	cout << "������ ���̸� ������ �����Ͻðڽ��ϱ�? ";
	int height;
	cin >> height;

	//b1.height = height; // error : private����� ���� �Ұ��� �ϹǷ�.
	b1.setHeight(height);
	b1.draw();

	cout << "\n���� ������ ���ڴ� " << b1.getFill() << "�Դϴ�.\n";
	return 0;
}

void Box::draw() const
{
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++) {
			cout << fill << " ";
		}
		cout << endl;
	}
}
