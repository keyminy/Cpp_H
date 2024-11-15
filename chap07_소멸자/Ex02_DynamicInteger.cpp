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
	// ��� setAt�Լ��� ȣ��Ǹ� overhead�̹Ƿ� -> inline�Լ�ȭ
	inline void setAt(int index, int value) {
		if(index >= 0 && index < size)
			// ��ȿ�� üũ
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
	int* arr = nullptr; // ���� �޸��� �ּҸ� �����Ѵ�.
	int size = 1; //���� �޸��� ũ��(default=1)
};

// int�� �޸𸮸� �������� �Ҵ��ϴ� Ŭ����
int main() {
	DynamicInt d1(5); // �����ڷ� �ν��Ͻ� ������ ũ�⸦ �Ѱ� �����Ҵ���

	// (M2)�ʱ�ȭ
	d1.randomize(100, 900); // (���۰�,���ᰪ)
	// (M2)�迭�ǰ� ���
	d1.displayArr();

	// [10]-�Ҹ��� ����Ǯ��
	d1.setSize(8);
	d1.setAt(5, 789);
	d1.displayArr();

	//srand(time(NULL)); //seed�ʱ�ȭ
	//for (int i = 0; i < d1.getSize(); i++) {
	//	// arr������ private����� ��ҿ� ���� �־��� �� ����.
	//	//d1.arr[i] = rand(); // rand : 0 ~ 32767(2byte����)
	//	d1.setAt(i, rand());
	//}

	//cout << "\n\n * �����ϰ� ����� ���� ��� *\n";
	//for (int i = 0; i < d1.getSize(); i++) {
	//	//cout << std::setw(5) << d1.arr[i] << " ";
	//	cout << std::setw(5) << d1.getAt(i) << " ";
	//}
	//cout << endl;
	return 0;
}

DynamicInt::DynamicInt(int count)
{
	// ũ�⸦ �������� ���� ��, default param���� 1
	if (count < 1)
		return; //������ ����
	arr = new int[count]; // �������� �Ҵ�� �޸��� �ּҸ� ����
	std::memset(arr, 0, sizeof(int) * count);
	size = count; //��������� �����ڿ� �Ѱ��� ������ ������ set
	cout << "Constructor\n";
}

void DynamicInt::setSize(int newSize)
{
	if (newSize < 0 || size == newSize)
		return;
	// newSize��ŭ ���ο� �����Ҵ�
	int* temp = new int[newSize];
	memset(temp, 0, sizeof(int) * newSize);

	// 2. size > newSize(newSize�� �� ����)
	/*int copySize = size;
	if (size > newSize) {
		copySize = newSize;
	}*/
	int copySize = (size > newSize) ? newSize : size;

	// ���ο� �޸𸮿� ������ ����
	//for (int i = 0; i < copySize; i++) {
	//	// 1. newSize > size���, newSize��ŭ�� ����
	//	temp[i] = arr[i];
	//}
	std::copy(arr, arr + copySize, temp);

	// 2.������ �̵� ��, ���� ������ ����
	delete[] arr;
	// 3.���ο� �޸𸮿� ����
	arr = temp;
	//4.���� �Ҵ�� ������� ��������� ����
	size = newSize;
}

void DynamicInt::randomize(int start, int end)
{
	srand(time(NULL)); //seed�ʱ�ȭ
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % (end - start + 1) + start;
	}
}

void DynamicInt::displayArr() const
{
	cout << "\n\n * �����ϰ� ����� ���� ��� *\n";
	for (int i = 0; i < size; i++) {
		cout << std::setw(5) << arr[i] << " ";
	}
	cout << endl;
}
