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
	void playGame(const State& comState) const;
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
	const char* strState[3] = {"가위","바위","보"};
	do {
		system("cls");//화면 지우기
		// 컴퓨터 가위바위보 선택
		com.setRandomState();
		cout << "\n";
		cout << "\t\t*** 가위 / 바위 / 보 게임 ***" << endl;
		cout << "\n";

		cout << "가위<1> / 바위<2> / 보<3>" << endl;
		player.inputState();
		cout << "\n";

		cout << "컴퓨터 : " << strState[com.getRandomState()] << endl;
		cout << "당신 : " << strState[player.getState()] << endl << endl;

		player.playGame(com.getRandomState());

		cout << "한판 더<Y/y> / 종료<아무키>" << endl;
		cin >> isPlay;
	} while (isPlay == 'Y' || isPlay == 'y');

	return 0;
}

void Player::inputState() {
	unsigned int choice;
	cout << "당신의 선택 : ";
	cin >> choice;

	while (choice < 1 || choice > 3) {
		cout << "잘못된 선택입니다. 다시 선택하세요 (가위<1>, 바위<2>, 보<3>): ";
		cin >> choice;
	}

	state = (State)(choice - 1);
}

void Player::playGame(const State& comState) const {
	if (state == comState) {
		cout << "[비겻다.]" << endl;
	}
	else if ((state == SISSORS && comState == PAPER)||
			(state == ROCK && comState == SISSORS) ||
			(state == PAPER && comState == ROCK)
		) {
		cout << "[이겼다.]" << endl;
	}
	else {
		cout << "[졌다.]" << endl;
	}

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
