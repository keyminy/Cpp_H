#pragma once
#include "Figure.h"

class Square :public Figure {
public:
	Square(int h,char c):Figure(h,c){}
	void draw() override;
	// ����Ҹ���
	virtual ~Square();
};