#pragma once
#include "Figure.h"

class Pyramid :public Figure {
public:
	Pyramid(int h, char c) :Figure(h, c) {}
	void draw() override;
	//가상 소멸자
	virtual ~Pyramid();
};