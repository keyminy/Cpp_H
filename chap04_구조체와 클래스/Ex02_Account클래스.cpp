#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

#define ID_LEN 14
#define NAME_LEN 20
#define PW_LEN 5


//계좌를 관리하는 구조체
class Account {
public: //공개한다.
	//멤버변수 : attribute
	char accId[ID_LEN]; //계좌 번호는 13자리
	char pw[PW_LEN]; // 비밀번호는 4자리
	char name[NAME_LEN]; //이름
	int balance; //잔액

	//멤버함수: method
	void showBalance() const;
	void deposit(int increase);
	void withdraw(int decrease);
};

// ::는 범위 지정 연산자(Account클래스 범위안에 있는 showBalance함수
void Account::showBalance() const
{
	cout << name << "고객님의 현재 잔액은 " << balance << "원 입니다.\n";
}

void Account::deposit(int increase)
{
	balance += increase;
}

void Account::withdraw(int decrease)
{
	balance -= decrease;
}


int main() {
	Account ac = {
		"123-56789-123","0070","홍길동",5000
	};
	// ac의 잔액을 출력
	ac.showBalance();
	//8000원 입금
	ac.deposit(8000);
	ac.showBalance(); // 5000+8000 = 13,000원
	//2000원 출금
	ac.withdraw(2000);
	ac.showBalance(); // 13,000-2000 = 11,000원
	return 0;
}