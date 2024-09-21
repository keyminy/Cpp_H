#include <iostream>
#include <string> // string 객체를 이용하기 위함

using namespace std;

int main() {
	cout << "두 수 입력 : ";
	int n1, n2;
	cin >> n1 >> n2; 
	cout << "입력 받은 두 수는 " << n1 << ", " << n2 << "입니다." << endl;

	cout << endl << endl;
	char str[255];
	cout << "문자열 입력(char[]) : ";
	//cin >> str;
	// bug방지 버퍼에 남아있는 '\n'을 가져온다
	//getchar(); // (M1)버퍼에 남은 한글자를 가져오는 함수
	cin.ignore(); // (M2)버퍼에 남은 한 글자 가져오기
	cin.getline(str, 255); // 버퍼에 남아있는 엔터값을 무시하지 못한다.
	cout << "입력 받은 문자열은 " << str << "입니다.\n";

	cout << endl << endl;
	string buf; //문자열 타입
	cout << "문자열 입력(string) : ";
	//cin >> buf; // 공백 이후 부터는 못 읽음
	getline(cin,buf); // getline()
	cout << "입력 받은 문자열 " << buf << "입니다.\n";
	return 0;
}