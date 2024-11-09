#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class Gugudan {
private:
	unsigned int start;
	unsigned int end;
public:
	void set(unsigned int _start = 2, unsigned int _end = 9);
	void printGugudan() const;
};

int main() {
	int start; int end;
	Gugudan gugudan;
	cout << "시작 단 : ";
	cin >> start;
	cout << "끝 단 : ";
	cin >> end;
	gugudan.set(start, end);
	gugudan.printGugudan();
	return 0;
}

void Gugudan::set(unsigned int _start, unsigned int _end)
{
	start = _start;
	end = _end;
}

void Gugudan::printGugudan() const
{
	for (int i = start; i <= end; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i << " * " << j << " = " << i * j << endl;
		}
		cout << "================================" << endl;
	}
}
