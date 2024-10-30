#include <iostream>
#include <string>
#define STR_LEN 80

using std::cout;
using std::cin;
using std::endl;
using std::string;

void mySwap(double& d1, double& d2);
void mySwap(int& n1,int& n2);
void mySwap(char* s1,char* s2);
void mySwap(string& str1,string& str2);

int main() {
	double d1, d2;

	cout << "\n�Ǽ� �� �� �Է� : ";
	cin >> d1 >> d2;
	mySwap(d1,d2);
	cout << "�Ǽ� ��ȯ ����� " << d1 << ", " << d2 << "�Դϴ�.\n";

	int n1, n2;
	cout << "\n���� �� �� �Է� : ";
	cin >> n1 >> n2;
	mySwap(n1, n2);
	cout << "���� ��ȯ ����� " << n1 << ", " << n2 << "�Դϴ�.\n";

	char s1[STR_LEN], s2[STR_LEN];
	cout << "\n���ڿ� �� �� �Է� : ";
	cin >> s1 >> s2;
	mySwap(s1, s2);
	cout << "���ڿ� ��ȯ ����� " << s1 << ", " << s2 << "�Դϴ�.\n";
	
	string str1, str2;
	cout << "\nstring �� �� �Է� : ";
	cin >> str1 >> str2;
	mySwap(str1, str2);
	cout << "string ��ȯ ����� " << str1 << ", " << str2 << "�Դϴ�.\n";
	return 0;
}

void mySwap(double& d1, double& d2)
{
	double temp = d1;
	d1 = d2;
	d2 = temp;
}

void mySwap(int& n1, int& n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

void mySwap(char* s1, char* s2)
{
	char temp[STR_LEN];
	strcpy_s(temp,STR_LEN, s1);
	strcpy_s(s1, STR_LEN, s2);
	strcpy_s(s2, STR_LEN, temp);
}

void mySwap(string& str1, string& str2)
{
	string temp = str1;
	str1 = str2;
	str2 = temp;
}
