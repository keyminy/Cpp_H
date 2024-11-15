#include <iostream>
#include <iomanip>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;

// char�� �޸𸮸� �������� �Ҵ��ϴ� Ŭ����
class DynamicChar {
public:
	DynamicChar(int allocSize) {
		// allocSize : �Ҵ�� ������
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
		// ������ �Ѿ���� üũ�ϰ� �ʹٸ�? strncpy���
		strncpy(str, pStr , size-1);
		//������ null���ڷ� ä����
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
	char* str = nullptr; //���� �޸��� �ּҸ� �����ϴ� ������
	int size = 0; // ���� �޸��� ũ�� ����
};

int main() {
	DynamicChar d1(10);
	d1.setAt(3, 'R'); // d1.str[3] = 'R'
	d1.setAt(6, 'Q'); // d1.str[6] = 'Q'

	//cout << "�迭�� ù ��° ���� " << d1.str[0] << "�Դϴ�.\n";
	cout << "�迭�� ù ��° ���� " << d1.getAt(3) << "�Դϴ�.\n";

	// ------------------------------------------------------------- //
	DynamicChar d2(4); // 255�� new char[255]
	d2.setStr("hello");
	cout << "����� ���ڿ��� : " << d2.getStr() << "�Դϴ�.\n";
	cout << "����� ���ڿ��� ���̴� " << d2.getLength("Yolo") << "�Դϴ�.\n";

	// ------------------------------------------------------------//
	DynamicChar d3(100);
	d3.randomizeUpper(); // �Ҵ�� �޸� ������ �빮��('A'(65) ~ 'Z'(90))���� ä���
	d3.randomizeLower(); // �Ҵ�� �޸� ������ �ҹ���('a'(97) ~ 'z'(122))���� ä���

	d3.display(100); //����� ���� �����ŭ ����ϴ� �޼���
	cout << "\n�˻��� ���� �Է� : ";
	char target;
	cin >> target;
	// getCount�޼��� : �迭���� Ư�� ������ ������ ���� �����ϴ� �޼���
	cout << target << "������ ������ " << d3.getCount(target) << "�Դϴ�.\n";

	return 0;
}

inline void DynamicChar::randomizeUpper()
{
	srand(time(NULL)); //seed�ʱ�ȭ
	for (int i = 0; i < size; i++) {
		str[i] = rand() % ('A' - 'Z' + 1) + 'A';
	}
}

inline void DynamicChar::randomizeLower()
{
	srand(time(NULL)); //seed�ʱ�ȭ
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
