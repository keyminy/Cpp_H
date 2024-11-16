#include <iostream>
#include <cstring> // for strcpy
#include <string>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::to_string;

class Product {
public:
	Product(const char* name, const char* maker, int price) {
		strcpy(this->name, name);
		strcpy(this->maker, maker);
		this->price = price;
		no++;
		cnt++;
	}
public:
	inline const char* getName() const {
		return this->name;
	}
	inline const char* getMaker() const {
		return this->maker;
	}
	inline int getPrice() const {
		return this->price;
	}
	inline static int getNo() {
		return no;
	}
	inline static int getTotalCount() {
		return cnt;
	}
public:
	inline void setName(const char* name) {
		strcpy(this->name, name);
	}
	inline void setMaker(const char* maker) {
		strcpy(this->maker, maker);
	}
public:
	inline string productInfo() const {
		return to_string(no) + ".\t" + this->name + "\t" + this->maker + "\t" + to_string(this->price) + "원";
	}
private:
	static int no;
	static int cnt;
	char name[50];
	char maker[50];
	int price = 0;
};

int Product::no = 1200;
int Product::cnt = 0;

int main() {
	Product products[] = {
		Product("새우깡", "농심(주)", 1900),
		Product("빼빼로", "롯데제과", 2200),
		Product("먹태깡", "농심(주)", 2500)
	};
	products[1].setName("테스트");
	cout << "[상품 리스트]\n";
	if (Product::getTotalCount() > 0) {
		// TODO : for loop		
		for (int i = 0; i < Product::getTotalCount(); i++) {
			cout << products[i].productInfo() << endl;
		}
	}
	else {
		cout << "출력할 것이 없습니다...\n";
	}
	cout << "======================================\n";
	cout << "총 상품 개수 : " << Product::getTotalCount() << "개\n";
	return 0;
}