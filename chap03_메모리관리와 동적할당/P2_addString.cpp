#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

char* addString(char* str1,char* str2) {
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	char* addedStr = new char[len1 + len2 + 1];
	strcpy(addedStr,str1);
	strcat(addedStr, str2);
	return addedStr;
}

int main() {
	char str1[10] = "Go";
	char str2[10] = "ahead";

	char* strConnect = addString(str1, str2);

	cout << "���� �� ���ڿ��� [" << strConnect << "] �Դϴ�.\n";
	delete[] strConnect;
	return 0;
}