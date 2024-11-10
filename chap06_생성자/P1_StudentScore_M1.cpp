#include <iostream>
#include <string>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;

enum eGrade {
	A,	B, 	C,	D,	F
};

class StudentScore {
private:
	string stuNo;
	string name;
	int ds =0, algo=0, java=0;
	int total = 0;
	double avg = 0;
	eGrade grade;
public:
	StudentScore(string _stuNo,string _name
		,int _ds, int _algo,int _java)
		:stuNo(_stuNo),name(_name),ds(_ds),algo(_algo),java(_java)
	{
		total = ds + algo + java;
		avg = total / 3;
		if (avg < 60) {
			grade = F;
		}
		else if (avg < 70) {
			grade = D;
		}
		else if (avg < 80) {
			grade = C;
		}
		else if (avg < 90) {
			grade = B;
		}
		else if (avg < 100) {
			grade = A;
		}
	}
	inline int getTotal() { return total; }
	inline int getAvg() { return avg; }
	inline string getName() { return name; }
	inline string getStuNo() { return stuNo; }
	inline eGrade getGrade() { return grade; }

};

int main() {
	StudentScore stu("20241592","Kim",50,50,50);
	const char* strGrade[] = {"A","B","C","D","F"};
	cout << "ÀÌ¸§ : " << stu.getName() << endl;
	cout << "ÇÐ¹ø : " << stu.getStuNo() << endl;
	cout << "ÃÑÇÕ : " << stu.getTotal() << endl;
	cout << "Æò±Õ : " << stu.getAvg() << endl;
	cout << "µî±Þ : " << strGrade[stu.getGrade()] << endl;
	return 0;
}