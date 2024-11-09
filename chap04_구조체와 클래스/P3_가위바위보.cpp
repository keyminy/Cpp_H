#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

enum State {
	SISSORS,
	ROCK,
	PAPER
};
class Player {
private:
	State state;
public:
	void inputState();
	void playGame() const;
	inline State getState() const { return state; };
};

class Computer {
private:
	State state;
public:
	void setRandomState();
	inline State getRandomState() const;
};

int main() {
	int mychoice;
	char isPlay;
	Computer com;
	Player player;
	const char* strState[3] = {"����","����","��"};
	do {
		system("cls");//ȭ�� �����
		// ��ǻ�� ���������� ����
		com.setRandomState();
		cout << "\n";
		cout << "\t\t*** ���� / ���� / �� ���� ***" << endl;
		cout << "\n";

		cout << "����<1> / ����<2> / ��<3>" << endl;
		player.inputState();
		cout << "\n";

		cout << "��ǻ�� : " << strState[com.getRandomState()] << endl;
		cout << "��� : " << strState[player.getState()] << endl << endl;

		player.playGame();

		cout << "���� ��<Y/y> / ����<�ƹ�Ű>" << endl;
		cin >> isPlay;
	} while (isPlay == 'Y' || isPlay == 'y');

	return 0;
}

void Computer::setRandomState()
{
	srand((unsigned int)time(NULL));
	state = (State)(rand() % 3);
}

State Computer::getRandomState() const
{
	return state;
}
