#pragma once
#include "Figure.h"

class Diamond :public Figure {
public:
	Diamond(int h, char c) :Figure(h, c,false) {}
	void draw() override;
	//���� �Ҹ���
	virtual ~Diamond();
};