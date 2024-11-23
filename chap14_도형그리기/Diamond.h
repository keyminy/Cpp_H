#pragma once
#include "Figure.h"

class Diamond :public Figure {
public:
	Diamond(int h, char c) :Figure(h, c,false) {}
	void draw() override;
	//가상 소멸자
	virtual ~Diamond();
};