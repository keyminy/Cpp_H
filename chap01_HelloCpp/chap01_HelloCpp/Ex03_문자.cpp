#include <iostream>

//using namespace std;
//�̸� ������ Ư�� ����� �����Ѵ�.
using std::cout;
using std::cin;
using std::endl;

int main() {
	char ch;
	cout << "���� �Է� : ";
	cin >> ch;

	cout << "�Է� ���� ���� : " << ch << endl;
	cout << "�Է� ���� ������ �ƽ�Ű �ڵ� : " << (int)ch << endl;

	// �Է� ���� ���ڰ� �빮���� ����? �ҹ��ڷ� ��ȯ�ϰ� ���
	// �ҹ����� ����? �빮�ڷ� ��ȯ�Ͽ� ���
	// �����ڰ� �ƴ� ����? "�����ڰ� �ƴմϴ�" �޽����� ����Ͻÿ�.
	if (ch >= 'A' && ch <= 'Z') {
		cout << "�빮�� : " << ch << " => �ҹ��� : " << (char)(ch + 32) << endl;
	}
	else if(ch >= 'a' && ch <= 'z') {
		cout << "�ҹ��� : " << ch << " => �빮�� : " << (char)(ch - 32) << endl;
	}
	else {
		cout << "�����ڰ� �ƴմϴ�.\n";
	}
	return 0;
}