#include <iostream>
#include <string>
/* ���ڿ��� �˻� ���ڸ� �Է� �����ÿ�.
* ���ڿ����� �˻� ���ڰ� �� ������ ī��Ʈ�ϴ� �ڵ带 �ۼ��Ͻÿ�.
* ��ҹ��ڴ� �������� �ʴ´�.
* ��� ��)
* ���ڿ� �Է� : AabbbCEda
* �˻� ���� �Է� : a
* A(a)�� ������ 3�� �Դϴ�
*/

using namespace std;

int main() {
	string str;
	char ch;
	char upper_ch, lower_ch;
	cout << "���ڿ� �Է�(string) : ";
	getline(cin, str);
	cout << "�˻� ���� �Է� : ";
	cin >> ch;

	if (ch >= 'A' && ch <= 'Z') {
		upper_ch = ch;
		lower_ch = ch + 32;
	}
	else if (ch >= 'a' && ch <= 'z') {
		lower_ch = ch;
		upper_ch = ch - 32;
	}
	else {
		cout << "�����ڰ� �ƴմϴ�.\n";
		return -1;
	}
	int cnt = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == lower_ch || str[i] == upper_ch) {
			cnt++;
		}
	}
	cout << upper_ch << "(" << lower_ch << ")" << "�� ������ " << cnt << "�� �Դϴ�.\n";
	return 0;
}