#include <iostream>
#include <string>
#include <iomanip>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

class DynamicInt {
public:
	DynamicInt(int count = 1);
	inline ~DynamicInt() {
		delete[] arr;
		cout << "Destructor\n";
	}
public:
	inline int getSize() const { return size; }
public:
	// 계속 setAt함수가 호출되면 overhead이므로 -> inline함수화
	inline void setAt(int index, int value) {
		if(index >= 0 && index < size)
			// 유효성 체크
			arr[index] = value;
	}
	void setSize(int newSize);
public:
	inline int getAt(int index) const{
		//if (index >= 0 && index < size)
		//if (validIndex(index))
		//	return arr[index];
		//else
		//	return 0;
		return validIndex(index) ? arr[index] : 0;
	}
	void randomize(int start, int end);
	void displayArr() const;
private:
	inline bool validIndex(int index) const {
		return (index >= 0 && index < size);
	}
private:
	int* arr = nullptr; // 동적 메모리의 주소를 저장한다.
	int size = 1; //동적 메모리의 크기(default=1)
};

// int형 메모리를 동적으로 할당하는 클래스
int main() {
	DynamicInt d1(5); // 생성자로 인스턴스 생성시 크기를 넘겨 동적할당함

	// (M2)초기화
	d1.randomize(100, 900); // (시작값,종료값)
	// (M2)배열의값 출력
	d1.displayArr();

	// [10]-소멸자 예제풀이
	d1.setSize(8);
	d1.setAt(5, 789);
	d1.displayArr();

	//srand(time(NULL)); //seed초기화
	//for (int i = 0; i < d1.getSize(); i++) {
	//	// arr변수는 private멤버라 요소에 값을 넣어줄 수 없다.
	//	//d1.arr[i] = rand(); // rand : 0 ~ 32767(2byte범위)
	//	d1.setAt(i, rand());
	//}

	//cout << "\n\n * 랜덤하게 저장된 값을 출력 *\n";
	//for (int i = 0; i < d1.getSize(); i++) {
	//	//cout << std::setw(5) << d1.arr[i] << " ";
	//	cout << std::setw(5) << d1.getAt(i) << " ";
	//}
	//cout << endl;
	return 0;
}

DynamicInt::DynamicInt(int count)
{
	// 크기를 전달하지 않을 때, default param으로 1
	if (count < 1)
		return; //생성자 종료
	arr = new int[count]; // 동적으로 할당된 메모리의 주소를 저장
	std::memset(arr, 0, sizeof(int) * count);
	size = count; //멤버변수는 생성자에 넘겨준 인자의 값으로 set
	cout << "Constructor\n";
}

void DynamicInt::setSize(int newSize)
{
	if (newSize < 0 || size == newSize)
		return;
	// newSize만큼 새로운 동적할당
	int* temp = new int[newSize];
	memset(temp, 0, sizeof(int) * newSize);

	// 2. size > newSize(newSize가 더 작음)
	/*int copySize = size;
	if (size > newSize) {
		copySize = newSize;
	}*/
	int copySize = (size > newSize) ? newSize : size;

	// 새로운 메모리에 데이터 복사
	//for (int i = 0; i < copySize; i++) {
	//	// 1. newSize > size라면, newSize만큼만 복사
	//	temp[i] = arr[i];
	//}
	std::copy(arr, arr + copySize, temp);

	// 2.데이터 이동 후, 기존 데이터 해제
	delete[] arr;
	// 3.새로운 메모리와 연결
	arr = temp;
	//4.새로 할당된 사이즈로 멤버변수값 변경
	size = newSize;
}

void DynamicInt::randomize(int start, int end)
{
	srand(time(NULL)); //seed초기화
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % (end - start + 1) + start;
	}
}

void DynamicInt::displayArr() const
{
	cout << "\n\n * 랜덤하게 저장된 값을 출력 *\n";
	for (int i = 0; i < size; i++) {
		cout << std::setw(5) << arr[i] << " ";
	}
	cout << endl;
}
