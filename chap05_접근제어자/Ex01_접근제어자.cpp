#include <iostream>
//#include <string.h> // C����� ���ڿ� �Լ� �������, iostream�� ���ԵǾ�����
//#include <string> // C++���� stringŬ���� �������
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class Missile {
public:
	void pwCheck(const char* inputPw) {
		if (strcmp(pw, inputPw) == 0) //���ڿ��� ������ 0�� �����Ѵ�
			fire(); //�̻��� �߻� �޼��� ȣ��
		else
			error();
	}
private:
	void fire() {
		cout << "�̻����� �߻� �մϴ�!\n";
	}
	void error() {
		cout << "[���!] ��й�ȣ ����!\n";
	}

	char pw[5] = "0070";
};

int main() {
	Missile mi; //�ν��Ͻ� ����
	mi.pwCheck("0070");
	//mi.fire();// error

	return 0;
}