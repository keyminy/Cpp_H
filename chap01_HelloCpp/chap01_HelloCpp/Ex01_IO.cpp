#include <iostream>
#include <string> // string ��ü�� �̿��ϱ� ����

using namespace std;

int main() {
	cout << "�� �� �Է� : ";
	int n1, n2;
	cin >> n1 >> n2; 
	cout << "�Է� ���� �� ���� " << n1 << ", " << n2 << "�Դϴ�." << endl;

	cout << endl << endl;
	char str[255];
	cout << "���ڿ� �Է�(char[]) : ";
	//cin >> str;
	// bug���� ���ۿ� �����ִ� '\n'�� �����´�
	//getchar(); // (M1)���ۿ� ���� �ѱ��ڸ� �������� �Լ�
	cin.ignore(); // (M2)���ۿ� ���� �� ���� ��������
	cin.getline(str, 255); // ���ۿ� �����ִ� ���Ͱ��� �������� ���Ѵ�.
	cout << "�Է� ���� ���ڿ��� " << str << "�Դϴ�.\n";

	cout << endl << endl;
	string buf; //���ڿ� Ÿ��
	cout << "���ڿ� �Է�(string) : ";
	//cin >> buf; // ���� ���� ���ʹ� �� ����
	getline(cin,buf); // getline()
	cout << "�Է� ���� ���ڿ� " << buf << "�Դϴ�.\n";
	return 0;
}