#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#pragma warning (disable : 4996)

void swap(double& ref1, double& ref2);
void swap(char* ptr1,char* ptr2);

int main() {
	char str[100] = "Happy Birthday";
	cout << str << endl;
	double d1 = 1.1, d2 = 2.2;
	swap(d1, d2);
	cout << d1 << ", " << d2 << endl;

	char str1[10] = "Hello", str2[10] = "world";
	swap(str1, str2);
	cout << str1 << ", " << str2 << endl;
	return 0;
}

void swap(double& ref1, double& ref2)
{
	double temp;
	temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

void swap(char* ptr1, char* ptr2)
{
	char temp[255];
	// strcpy : 출발지의 주소부터 널문자까지를 destination으로 복사한다.
	// strcpy(desti,source) 
	strcpy(temp, ptr1);
	strcpy(ptr1, ptr2);
	strcpy(ptr2, temp);
}
