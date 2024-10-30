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

	cout << "\n실수 두 개 입력 : ";
	cin >> d1 >> d2;
	mySwap(d1,d2);
	cout << "실수 교환 결과는 " << d1 << ", " << d2 << "입니다.\n";

	int n1, n2;
	cout << "\n정수 두 개 입력 : ";
	cin >> n1 >> n2;
	mySwap(n1, n2);
	cout << "정수 교환 결과는 " << n1 << ", " << n2 << "입니다.\n";

	char s1[STR_LEN], s2[STR_LEN];
	cout << "\n문자열 두 개 입력 : ";
	cin >> s1 >> s2;
	mySwap(s1, s2);
	cout << "문자열 교환 결과는 " << s1 << ", " << s2 << "입니다.\n";
	
	string str1, str2;
	cout << "\nstring 두 개 입력 : ";
	cin >> str1 >> str2;
	mySwap(str1, str2);
	cout << "string 교환 결과는 " << str1 << ", " << str2 << "입니다.\n";
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
