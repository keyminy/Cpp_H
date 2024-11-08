#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

#define STR_LEN 255

int main() {
	char str[STR_LEN];
	// ����� ���ڿ��� �޸𸮸� �����ϴ� ������ ����
	char* connectStr = nullptr;
	char* largestStr = nullptr;
	int largestLen = 0;
	while (true) {
		cout << "���ڿ� �Է�(exit �Է� �� ����): ";
		cin.getline(str, STR_LEN);

		//if(str == "exit") //�̰� �Ұ���
		//�ֳ��ϸ� ���ڿ��迭�� �̸�(str)�� �ּ��̰� ���ڿ�("str")�� �ּҶ�...
		// �ּҳ��� �񱳰� �Ұ�����
		if (!strcmp(str, "exit")) {
			break;
		}
		/* TODO: �Է¹��� ���ڿ��� �����ϴ� �ڵ� �ۼ� */
		
		// ù��°�� ������?
		if (connectStr == nullptr) {
			connectStr = new char[strlen(str) + 1];
			largestStr = new char[strlen(str) + 1];
			strcpy(connectStr, str);
			strcpy(largestStr, str);
			largestLen = strlen(largestStr);
		}
		// �ι�° �̻� Ƚ���̸�?
		else{
			if (strlen(str) > largestLen) {
				largestLen = strlen(str);
				//���� �Ҵ�� �޸� ������, ���ο� ũ��� �޸� �� �Ҵ�
				delete[] largestStr;
				largestStr = new char[largestLen + 1];
				strcpy(largestStr, str);
			}
			// ���� ���ڿ�(connectStr)���� + �Է¹��� ���ڿ� ���� strlen(str) + 1
			char* temp = new char[strlen(connectStr) + strlen(str) + 1];
			strcpy(temp, connectStr);
			// (delete[] ����) ���� connectStr �޸� �������ش�
			delete[] connectStr;
			strcat(temp, str);
			connectStr = temp; // ���ο� �޸��� �ּҷ� ����
			//delete[] temp; // <--- �ʿ��մϱ�?
			// No If you call delete[] temp; at this point, you would be deallocating the memory that connectStr is also pointing to.
		}
	}
	cout << "\n����� ���ڿ��� [" << connectStr << "] �Դϴ�.";
	cout << "\nThe Largest String is [" << largestStr << "] and the length is " << largestLen << endl;

	delete[] connectStr; //����� ���ڿ� �޸� ���� ����
	delete[] largestStr;
	return 0;
}