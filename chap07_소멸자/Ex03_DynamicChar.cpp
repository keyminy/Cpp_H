#include <iostream>
#include <iomanip>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;

// char형 메모리를 동적으로 할당하는 클래스
class DynamicChar {
public:
	DynamicChar(int allocSize) {
		// allocSize : 할당될 사이즈
		str = new char[allocSize];
		std::memset(str, 0, allocSize * sizeof(char));
		size = allocSize;
		cout << "constructor\n";
	}
	inline ~DynamicChar() {
		delete[] str;
		cout << "Destructor\n";
	}
public:
	inline void setAt(int index, char value) {
		if (validateIndex(index)) {
			str[index] = value;
		}
	}
	inline void setStr(const char* pStr) {
		//strcpy(str, pStr);
		// 범위가 넘어가는지 체크하고 싶다면? strncpy사용
		strncpy(str, pStr , size-1);
		//끝에는 null문자로 채워줘
		str[size-1] = '\0';
	}
public:
	inline char getAt(int index) const {
		return validateIndex(index) ? str[index] : 0;
	}
	inline char* getStr() const {
		return str;
	}
	inline int getLength(const char* pStr) const {
		int i ;
		for (i = 0; pStr[i] != '\0'; i++);
		return i;
	}
	inline void randomizeUpper();
	inline void randomizeLower();
	inline void display(int dspSize) const;
	inline int getCount(char ch) const;
private:
	inline bool validateIndex(int index) const{
		return (index >= 0 && index < size);
	}
private:
	char* str = nullptr; //동적 메모리의 주소를 저장하는 포인터
	int size = 0; // 동적 메모리의 크기 저장
};

int main() {
	DynamicChar d1(10);
	d1.setAt(3, 'R'); // d1.str[3] = 'R'
	d1.setAt(6, 'Q'); // d1.str[6] = 'Q'

	//cout << "배열의 첫 번째 값은 " << d1.str[0] << "입니다.\n";
	cout << "배열의 첫 번째 값은 " << d1.getAt(3) << "입니다.\n";

	// ------------------------------------------------------------- //
	DynamicChar d2(4); // 255개 new char[255]
	d2.setStr("hello");
	cout << "저장된 문자열은 : " << d2.getStr() << "입니다.\n";
	cout << "저장된 문자열의 길이는 " << d2.getLength("Yolo") << "입니다.\n";

	// ------------------------------------------------------------//
	DynamicChar d3(100);
	d3.randomizeUpper(); // 할당된 메모리 공간을 대문자('A'(65) ~ 'Z'(90))으로 채운다
	d3.randomizeLower(); // 할당된 메모리 공간을 소문자('a'(97) ~ 'z'(122))으로 채운다

	d3.display(100); //저장된 값을 사이즈만큼 출력하는 메서드
	cout << "\n검색할 문자 입력 : ";
	char target;
	cin >> target;
	// getCount메서드 : 배열에서 특정 문자의 개수를 구해 리턴하는 메서드
	cout << target << "문자의 개수는 " << d3.getCount(target) << "입니다.\n";

	return 0;
}

inline void DynamicChar::randomizeUpper()
{
	srand(time(NULL)); //seed초기화
	for (int i = 0; i < size; i++) {
		str[i] = rand() % ('A' - 'Z' + 1) + 'A';
	}
}

inline void DynamicChar::randomizeLower()
{
	srand(time(NULL)); //seed초기화
	for (int i = 0; i < size; i++) {
		str[i] = rand() % ('a' - 'z' + 1) + 'a';
	}
}

inline void DynamicChar::display(int dspSize) const
{
	if (dspSize > size) {
		dspSize = size;
	}
	for (int i = 0; i < dspSize; i++) {
		cout << str[i];
	}
	cout << endl;
}

inline int DynamicChar::getCount(char ch) const
{
	int cnt = 0;
	for (int i = 0; i < size; i++) {
		if (ch == str[i]) {
			cnt++;
		}
	}
	return cnt;
}
