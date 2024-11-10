#include <iostream>
#include <string>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;
using std::string;

#define SUBJECT_LEN 3

enum Grade {
	A, B, C, D, F
};

enum Subject {
	DATA_STRUCTURE,
	ALGORITHM,
	JAVA,
	NOT
};

struct SubjectInfo {
	Subject subject = NOT;
	Grade grade = F;
	int score = 0;
};

struct Student {
	string stuNo = "";
	string name = "";
	SubjectInfo subjectInfo[SUBJECT_LEN];
	int totalScore = 0;
	double avgScore = 0;
	Grade avgGrade = F;
};

class StudentScore {
private:
	Student stu;
public:
	StudentScore(string _stuNo, string _name
		, int _ds, int _algo, int _java)
		:StudentScore(_stuNo,_name)
	{
		setInit(DATA_STRUCTURE,_ds);
		setInit(ALGORITHM,_algo);
		setInit(JAVA,_java);
		setTotalScore();
	}
	StudentScore(string _stuNo, string _name)
	{
		stu.stuNo = _stuNo;
		stu.name = _name;
	}
	//����ü�� �Ѱܹ�����
	StudentScore(Student _student)
		:StudentScore(_student.stuNo,_student.name
		, _student.subjectInfo[DATA_STRUCTURE].score
		, _student.subjectInfo[ALGORITHM].score
		, _student.subjectInfo[JAVA].score
	)
	{}
	inline int getTotal()	 const	{ return stu.totalScore; }
	inline int getAvg()		 const	{ return stu.avgScore; }
	inline int getAvgGrade() const { return stu.avgGrade; }
	inline int getScore(Subject _subject) const { return stu.subjectInfo[_subject].score; }
	inline string getName()	 const	{ return stu.name; }
	inline string getStuNo() const	{ return stu.stuNo; }
	inline Grade getGrade(Subject _subject)	 const	{ return stu.subjectInfo[_subject].grade; }
private:
	void setTotalScore() {
		stu.totalScore = 0;
		for (const SubjectInfo& s : stu.subjectInfo) {
			stu.totalScore += s.score;
		}
		stu.avgScore = stu.totalScore / (double)SUBJECT_LEN;
		stu.avgGrade = checkGrade(stu.avgScore);
	}
	void setInit(Subject _subject, int _score) {
		stu.subjectInfo[_subject].subject = _subject;
		stu.subjectInfo[_subject].score = _score;
		stu.subjectInfo[_subject].grade = checkGrade(_score);
	}
	Grade checkGrade(int _score) {
		if (_score < 60) {
			return F;
		}
		else if (_score < 70) {
			return D;
		}
		else if (_score < 80) {
			return C;
		}
		else if (_score < 90) {
			return B;
		}
		else if (_score <= 100) {
			return A;
		}
	}
};

int main() {
	StudentScore stu1Test("20241592", "Kim", 100, 70, 60);
	const char* strGrade[] = { "A","B","C","D","F" };
	cout << "�̸� : " << stu1Test.getName() << endl;
	cout << "�й� : " << stu1Test.getStuNo() << endl;
	cout << "���� : " << stu1Test.getTotal() << endl;
	cout << "��� : " << stu1Test.getAvg() << endl;
	cout << "�ڷᱸ�� ��� : " << strGrade[stu1Test.getGrade(DATA_STRUCTURE)] << endl;
	cout << "�˰��� ��� : " << strGrade[stu1Test.getGrade(ALGORITHM)] << endl;
	cout << "�ڹ� ��� : " << strGrade[stu1Test.getGrade(JAVA)] << endl;
	cout << "��ü ��� : " << strGrade[stu1Test.getAvgGrade()] << endl;

	cout << "=============================================" << endl;
	
	Student stu2;
	stu2.stuNo = "20101234";
	stu2.name = "����";
	stu2.subjectInfo[DATA_STRUCTURE].score = 88;
	stu2.subjectInfo[ALGORITHM].score = 94;
	stu2.subjectInfo[JAVA].score = 72;
	StudentScore stu2Test(stu2);
	cout << "�̸� : " << stu2Test.getName() << endl;
	cout << "�й� : " << stu2Test.getStuNo() << endl;
	cout << "���� : " << stu2Test.getTotal() << endl;
	cout << "��� : " << stu2Test.getAvg() << endl;
	cout << "�ڷᱸ�� ��� : " << strGrade[stu2Test.getGrade(DATA_STRUCTURE)] << endl;
	cout << "�ڷᱸ�� ���� : " << stu2Test.getScore(DATA_STRUCTURE) << endl;
	cout << "�˰��� ��� : " << strGrade[stu2Test.getGrade(ALGORITHM)] << endl;
	cout << "�˰��� ���� : " << stu2Test.getScore(ALGORITHM) << endl;
	cout << "�ڹ� ��� : " << strGrade[stu2Test.getGrade(JAVA)] << endl;
	cout << "��ü ��� : " << strGrade[stu2Test.getAvgGrade()] << endl;

	return 0;
}