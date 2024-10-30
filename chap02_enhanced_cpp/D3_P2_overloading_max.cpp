#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;

inline int max(int n1, int n2) {
	return (n1 >= n2) ? n1 : n2;
}
inline int max(int n1, int n2,int n3) {
	int m = max(n1, n2);
	return (n3 >= m) ? n3 : m;
}
inline double max(double f1, double f2) {
	return (f1 >= f2) ? f1 : f2;
}
inline int max(const int* parr,int len) {
	int maxVal = 0;
	for (int i = 0; i < len; i++) {
		if (parr[i] > maxVal) {
			maxVal = parr[i];
		}
	}
	return maxVal;
}
inline int max(string str1, string str2) {
	int len1 = str1.size();
	int len2 = str2.size();
	return (len1 >= len2) ? len1 : len2;
}

int main() {
	cout << "1. 정수 두 개 중 큰 수를 리턴하는 함수 : \n" << max(10, 20) << endl;
	cout << "2. 3개의 정수 중 가장 큰 수를 리턴하는 함수\n" << max(10, 20,30) << endl;
	cout << "3. 실수 두 개 중 큰 수를 리턴하는 함수\n" << max(1.2, 2.5) << endl;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "4. 배열에서 최댓값을 리턴하는 함수\n" << max(arr,10) << endl;
	cout << "5. 문자열 두 개 중 긴 문자열의 길이를 리턴하는 함수\n" << max("abc", "helloz") << endl;

	return 0;
}