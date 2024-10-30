#include <iostream>

using std::cout;
using std::endl;
using std::cin;

namespace No1 {
	void fun() {
		cout << "fun1";
	}
}
namespace No2 {
	void fun() {
		cout << "fun2";
	}
}
namespace No3 {
	void fun() {
		cout << "fun3";
	}
}
//using namespace No3;
//using No3::fun;

int main() {
	No3::fun();
	return 0;
}
