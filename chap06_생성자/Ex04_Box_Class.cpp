#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class Box {
public:
	Box(int w,int h,char ch)
		//:width(w),height(h),fill(ch) // 유효성 검사 필요
	{
		//if (w > 0)
		//	width = w;
		//if (h > 0)
		//	height = h;
		//fill = ch;
		/* 코드 중복 피하기위해 setter함수 호출 */
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

	cout << "세로의 길이를 몇으로 변경하시겠습니까? ";
	int height;
	cin >> height;

	//b1.height = height; // error : private멤버를 접근 불가능 하므로.
	b1.setHeight(height);
	b1.draw();

	cout << "\n현재 설정된 문자는 " << b1.getFill() << "입니다.\n";
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
