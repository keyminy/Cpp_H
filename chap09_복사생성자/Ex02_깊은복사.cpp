#include <iostream>
#include <string>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

// ���ڿ� ���� Ŭ����
class MyString {
public:
	MyString(const char* pStr = nullptr) {
		length = strlen(pStr); // �ι��� ������ ���̸� ����
		str = new char[length + 1];
		std::strcpy(str,pStr);
		cout << "1. constructor\n";
	}
	MyString(const MyString& other) {
		// default����(��������� �̱�����, ��������)
		// �������� : instance variable�� �������ִ� ��
		//this->str = other.str;
		//this->length = other.length;

		/*���� ���� : default copy constructor�δ� �غ� �Ұ��� 
		 ���� ����� �ν��Ͻ����� �Ҵ�� ���� �޸𸮱��� ��� �������� */
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
		return str; // ���� �޸��� �ּҸ� ������
	}
	inline int getLength() const{
		return length; //���ڿ��� ���̸� ����
	}
private:
	char* str; // ���� �޸��� �ּҸ� �����ϴ� ������
	int length; //���ڿ��� ����
};

int main() {
	MyString s1 = "hello"; // MyString s1("hello");
	MyString s2 = "tradition";
	MyString s3 = s2; // MyString s3(s2),���� �����ڸ� ȣ����
	//��������ڸ� �������� ������ ����� ��� ���簡 �Ͼ

	// char*�� cout��, �ּҺ��� '\0'�������� ��µȴ�.
	// �׷��Ƿ� getString()�� char*�̶�� �ּҸ� ������ ����.
	cout << "s1 = " << s1.getString() << ", ���ڿ��� ���� = " << s1.getLength() << endl;
	cout << "s2 = " << s2.getString() << ", ���ڿ��� ���� = " << s2.getLength() << endl;
	cout << "s3 = " << s3.getString() << ", ���ڿ��� ���� = " << s3.getLength() << endl;
	return 0;
}