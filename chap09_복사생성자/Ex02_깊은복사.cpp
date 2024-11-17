#include <iostream>
#include <string>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

// 문자열 관리 클래스
class MyString {
public:
	MyString(const char* pStr = nullptr) {
		length = strlen(pStr); // 널문자 이전의 길이를 구함
		str = new char[length + 1];
		std::strcpy(str,pStr);
		cout << "1. constructor\n";
	}
	MyString(const MyString& other) {
		// default상태(복사생성자 미구현시, 얕은복사)
		// 얕은복사 : instance variable만 대입해주느 것
		//this->str = other.str;
		//this->length = other.length;

		/*깊은 복사 : default copy constructor로는 해별 불가능 
		 깊은 복사는 인스턴스내에 할당된 동적 메모리까지 모두 복사해줌 */
		this->length = other.length;
		this-> str = new char[other.length+1];
		strcpy(this->str, other.str);
		cout << "2. copy constructor => deep copy\n";
	}
	~MyString() {
		cout << str << " ~destructor\n";
		delete[] str;
	}
public:
	inline const char* getString() const {
		return str; // 동적 메모리의 주소를 리턴함
	}
	inline int getLength() const{
		return length; //문자열의 길이를 리턴
	}
private:
	char* str; // 동적 메모리의 주소를 저장하는 포인터
	int length; //문자열의 길이
};

int main() {
	MyString s1 = "hello"; // MyString s1("hello");
	MyString s2 = "tradition";
	MyString s3 = s2; // MyString s3(s2),복사 생성자를 호출함
	//복사생성자를 구현하지 않으면 멤버대 멤버 복사가 일어남

	// char*는 cout시, 주소부터 '\0'이전까지 출력된다.
	// 그러므로 getString()은 char*이라는 주소를 리턴한 것임.
	cout << "s1 = " << s1.getString() << ", 문자열의 길이 = " << s1.getLength() << endl;
	cout << "s2 = " << s2.getString() << ", 문자열의 길이 = " << s2.getLength() << endl;
	cout << "s3 = " << s3.getString() << ", 문자열의 길이 = " << s3.getLength() << endl;
	return 0;
}