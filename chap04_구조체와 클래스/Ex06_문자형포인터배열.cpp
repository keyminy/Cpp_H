#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

int main() {
	//const char* p1 = "apple";
	//const char* p2 = "odd";
	////char*는 주소가 출력되는 것이 아니라,
	////주소부터 '\0'이전까지 출력된다.
	//cout << p1 << endl;
	//cout << p2 << endl;

	const char* fruit[5] = {
		"apple",
		"banana",
		"orange",
		"strawberry",
		"pear"
	};

	// fruit[2]가 가리키는 메모리(0번째 방) 참조
	cout << *fruit[2] << endl; //o
	// char형 포인터에 주소를 보고싶은 경우는 다른 타입의 포인터로 형변환하면 된다.
	cout << (int*)fruit[2] << endl; //00007FF65A56AC18
	//fruit[2]에 저장된 주소부터 널문자이전까지 출력
	cout << fruit[2] << endl; //orange
	cout << fruit[2]+2 << endl; //ange
	cout << *(fruit[2] + 2) << endl; //a
	return 0;
}