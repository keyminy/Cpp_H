#pragma once

class Figure {
public:
	Figure(int height, char ch, bool isEvenPossible = true);
	//순수 가상함수 -> 자식클래스에서 반드시 오버라이딩 필요
	virtual void draw() = 0;
	// 가상함수를 한 개 이상 포함한 클래스는 반드시 가상소멸자 구현필요
	virtual ~Figure();
protected:
	int height = 1;
	char ch = '*';
private:
};