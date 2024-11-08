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
	//char temp[255]; (정적메모리 할당 방식)
	/* 동적 메모리 할당 방식으로 */
	char* temp;

	//ptr1의 길이와 ptr2의 길이 중 어느 문자열의 길이가 큰지?
	//int largestLen = strlen(ptr2); // 일단 긴 문자가 ptr2라고 가정하고 시작
	//if (strlen(ptr1) > strlen(ptr2)) {
	//	largestLen = strlen(ptr1); // 긴 문자열의 값 저장
	//}
	
	// +1은 NULL문자열 까지,즉 문자열의 길이 +1만큼 동적할당
	temp = new char[strlen(ptr1) + 1]; 

	// strcpy : 출발지의 주소부터 널문자까지를 destination으로 복사한다.
	// strcpy(desti,source) 
	strcpy(temp, ptr1);
	strcpy(ptr1, ptr2);
	strcpy(ptr2, temp);

	delete[] temp;
}
