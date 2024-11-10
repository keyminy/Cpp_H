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
	/* 기본값 설정 */
	// red가 -3이 들어오더라도, 기본값 red = 255가 나오게 해줌
	int red = 255, green = 255, blue = 255;
private:
//private method
	//유효성 검사 체크 여부 판단 메서드
	inline bool validateColorValue(int value) {
		//if (value >= 0 && value <= 255)
		//	return true;
		//else
		//	return false;
		/* 바로 연산 결과를 리턴하는 방식으로도 가능 */
		return (value >= 0 && value <= 255);
	}
public:
	//코드 중복 : target생성자 호출
	// 이 생성자는 위임 생성자가 된다.
	RGB() :RGB(255,255,255){
		//red		= 255;
		//green	= 255;
		//blue	= 255;
		cout << "default constructor call!\n";
	}
	//이 생성자는 타겟 생성자가 된다.
	RGB(int r,int g,int b) {
		// 유효성 체크
		//if(r >= 0 && r <= 255)
		//	red		= r;
		//if(g >= 0 && g <= 255)
		//	green	= g;
		//if(b >= 0 && b <= 255)
		//	blue	= b;
		/* 이것도 중복 */
		//if(validateColorValue(r))
		//	red		= r;
		//if(validateColorValue(g))
		//	green	= g;
		//if(validateColorValue(b))
		//	blue	= b;
		/* M3 */
		setRed(r); // red값을 설정하는 메서드 호출
		setGreen(g); // green값을 설정하는 메서드 호출
		setBlue(b); // blue값을 설정하는 메서드 호출
		cout << "constructor call!\n";
	}
	inline void showColor() const {
		cout << "(" << red << ", " << green << ", " << blue << ")\n";
	}
	inline string getColor() const {
		return "(" + to_string(red) + ", " + to_string(green) 
			+ ", " + to_string(blue)+")";
	}
	// setter : instance variable의 값을 변경해주는 메서드
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
	//getter : instance variable의 값을 리턴하는 메서드
	inline int getRed() const { return red; }
	inline int getGreen() const { return green; }
	inline int getBlue() const { return blue; }
};

int main() {
	RGB r1(23, 45, 65); // 인스턴스 생성
	RGB r2(123, 48, 165); // 인스턴스 생성
	RGB r3(-3, 300, 28); // 인스턴스 생성

	//r1.red = 100; // private변수라 변경 불가 -> setter이용
	r1.setRed(100);
	r1.setRed(-8989); //유효성 체크 함수 필요
	cout << "r1의 변경된 red값은 " << r1.getRed() << "입니다.\n";

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