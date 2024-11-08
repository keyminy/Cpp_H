#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

#define ID_LEN 14
#define NAME_LEN 20
#define PW_LEN 5


//계좌를 관리하는 구조체
struct Account {
	char accId[ID_LEN]; //계좌 번호는 13자리
	char pw[PW_LEN]; // 비밀번호는 4자리
	char name[NAME_LEN]; //이름
	int balance; //잔액
};

void showBalance(const Account& ref);
void deposit(Account& ref, int increase);
void withdraw(Account& ref, int decrease);

int main() {
	Account ac = {
		"123-56789-123","0070","홍길동",5000
	};
	// ac의 잔액을 출력
	showBalance(ac);
	//8000원 입금
	deposit(ac, 8000);
	showBalance(ac); // 5000+8000 = 13,000원
	//2000원 출금
	withdraw(ac, 2000);
	showBalance(ac); // 13,000-2000 = 11,000원
	return 0;
}

// 레퍼런스를 상수화 시키면 ref로 구조체 멤버의 수정이 불가능해진다.
void showBalance(const Account& ref)
{
	cout << ref.name << "고객님의 현재 잔액은 " << ref.balance << "원 입니다.\n";
}

void deposit(Account& ref, int increase)
{
	ref.balance += increase;

}

void withdraw(Account& ref, int decrease)
{
	ref.balance -= decrease;
}
