#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

enum eGrade {
	GOLD,
	SILVER,
	BRONZE
};

struct customer {
	char name[30];
	char phone[30];
	char gender[30];
	eGrade grade;
};

void PrintCustomer(const customer& cust);
void InputCustomer(customer& cust);

int main() {
	customer cust;
	InputCustomer(cust);
	PrintCustomer(cust);
	return 0;
}

void PrintCustomer(const customer& cust)
{
	const char* gradeNames[] = { "Gold","Silver","Bronze" };
	cout << "이름: " << cust.name << ", 연락처: " << cust.phone << ", 성별 : " << cust.gender << endl;
	cout << "고객 등급 : " << gradeNames[cust.grade] << endl;
	cout << "test : " << cust.grade << endl;
}

void InputCustomer(customer& cust)
{
	cout << "고객 이름 입력 : ";
	cin.getline(cust.name,30);
	cout << endl;
	cout << "고객 번호 입력 : ";
	cin.getline(cust.phone,30);
	cout << endl;
	cout << "고객 성별 입력 : ";
	cin.getline(cust.gender,30);
	cout << endl;
	while (true) {
		char gradeInput[30];
		cout << "고객 등급 입력(Gold,Silver,Bronze) : ";
		cin.getline(gradeInput, 30);

		if (!strcmp(gradeInput, "Gold")) {
			cust.grade = GOLD;
			break;
		}
		else if (!strcmp(gradeInput, "Silver")) {
			cust.grade = SILVER;
			break;
		}
		else if (!strcmp(gradeInput, "Bronze")) {
			cust.grade = BRONZE;
			break;
		}
		else {
			cout << "다시 입력해주세요" << endl;
		}
	}
	cout << endl;
}
