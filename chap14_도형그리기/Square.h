#pragma once
#include "Figure.h"

class Square :public Figure {
public:
	Square(int h,char c):Figure(h,c){}
	void draw() override;
	// 가상소멸자
	virtual ~Square();
};