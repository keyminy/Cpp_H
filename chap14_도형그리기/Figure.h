#pragma once

class Figure {
public:
	Figure(int height, char ch, bool isEvenPossible = true);
	//���� �����Լ� -> �ڽ�Ŭ�������� �ݵ�� �������̵� �ʿ�
	virtual void draw() = 0;
	// �����Լ��� �� �� �̻� ������ Ŭ������ �ݵ�� ����Ҹ��� �����ʿ�
	virtual ~Figure();
protected:
	int height = 1;
	char ch = '*';
private:
};