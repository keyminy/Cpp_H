#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

#define ID_LEN 14
#define NAME_LEN 20
#define PW_LEN 5


//���¸� �����ϴ� ����ü
class Account {
public: //�����Ѵ�.
	//������� : attribute
	char accId[ID_LEN]; //���� ��ȣ�� 13�ڸ�
	char pw[PW_LEN]; // ��й�ȣ�� 4�ڸ�
	char name[NAME_LEN]; //�̸�
	int balance; //�ܾ�

	//����Լ�: method
	void showBalance() const;
	void deposit(int increase);
	void withdraw(int decrease);
};

// ::�� ���� ���� ������(AccountŬ���� �����ȿ� �ִ� showBalance�Լ�
void Account::showBalance() const
{
	cout << name << "������ ���� �ܾ��� " << balance << "�� �Դϴ�.\n";
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
		"123-56789-123","0070","ȫ�浿",5000
	};
	// ac�� �ܾ��� ���
	ac.showBalance();
	//8000�� �Ա�
	ac.deposit(8000);
	ac.showBalance(); // 5000+8000 = 13,000��
	//2000�� ���
	ac.withdraw(2000);
	ac.showBalance(); // 13,000-2000 = 11,000��
	return 0;
}