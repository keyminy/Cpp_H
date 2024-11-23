#pragma once
#include "Figure.h"

class RightTriangle :public Figure {
public:
	RightTriangle(int h,char c)
		:Figure(h,c) // 자식에서 부모생성자 호출(부모가 처리하니까)
	{}
	void draw() override;
	// 가상 소멸자
	virtual ~RightTriangle();
};