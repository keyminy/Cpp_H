#pragma once
#include "Figure.h"

class RightTriangle :public Figure {
public:
	RightTriangle(int h,char c)
		:Figure(h,c) // �ڽĿ��� �θ������ ȣ��(�θ� ó���ϴϱ�)
	{}
	void draw() override;
	// ���� �Ҹ���
	virtual ~RightTriangle();
};