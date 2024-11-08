#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

#define ID_LEN 14
#define NAME_LEN 20
#define PW_LEN 5


//���¸� �����ϴ� ����ü
struct Account {
	char accId[ID_LEN]; //���� ��ȣ�� 13�ڸ�
	char pw[PW_LEN]; // ��й�ȣ�� 4�ڸ�
	char name[NAME_LEN]; //�̸�
	int balance; //�ܾ�
};

void showBalance(const Account& ref);
void deposit(Account& ref, int increase);
void withdraw(Account& ref, int decrease);

int main() {
	Account ac = {
		"123-56789-123","0070","ȫ�浿",5000
	};
	// ac�� �ܾ��� ���
	showBalance(ac);
	//8000�� �Ա�
	deposit(ac, 8000);
	showBalance(ac); // 5000+8000 = 13,000��
	//2000�� ���
	withdraw(ac, 2000);
	showBalance(ac); // 13,000-2000 = 11,000��
	return 0;
}

// ���۷����� ���ȭ ��Ű�� ref�� ����ü ����� ������ �Ұ���������.
void showBalance(const Account& ref)
{
	cout << ref.name << "������ ���� �ܾ��� " << ref.balance << "�� �Դϴ�.\n";
}

void deposit(Account& ref, int increase)
{
	ref.balance += increase;

}

void withdraw(Account& ref, int decrease)
{
	ref.balance -= decrease;
}
