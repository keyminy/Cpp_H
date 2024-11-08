#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#pragma warning (disable : 4996)

void swap(double& ref1, double& ref2);
void swap(char* ptr1, char* ptr2);

int main() {
	char str[100] = "Happy";
	cout << str << endl;
	double d1 = 1.1, d2 = 2.2;
	swap(d1, d2);
	cout << d1 << ", " << d2 << endl;

	char str1[10] = "Hello", str2[10] = "odd";
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
	//char temp[255]; (�����޸� �Ҵ� ���)
	/* ���� �޸� �Ҵ� ������� */
	char* temp;

	//ptr1�� ���̿� ptr2�� ���� �� ��� ���ڿ��� ���̰� ū��?
	//int largestLen = strlen(ptr2); // �ϴ� �� ���ڰ� ptr2��� �����ϰ� ����
	//if (strlen(ptr1) > strlen(ptr2)) {
	//	largestLen = strlen(ptr1); // �� ���ڿ��� �� ����
	//}
	
	// +1�� NULL���ڿ� ����,�� ���ڿ��� ���� +1��ŭ �����Ҵ�
	temp = new char[strlen(ptr1) + 1]; 

	// strcpy : ������� �ּҺ��� �ι��ڱ����� destination���� �����Ѵ�.
	// strcpy(desti,source) 
	strcpy(temp, ptr1);
	strcpy(ptr1, ptr2);
	strcpy(ptr2, temp);

	delete[] temp;
}
