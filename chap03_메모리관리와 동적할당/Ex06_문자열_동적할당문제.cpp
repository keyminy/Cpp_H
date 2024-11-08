#include <iostream>
#pragma warning (disable : 4996)

using std::cout;
using std::cin;
using std::endl;

#define STR_LEN 255

int main() {
	char str[STR_LEN];
	// 연결된 문자열의 메모리를 저장하는 포인터 변수
	char* connectStr = nullptr;
	char* largestStr = nullptr;
	int largestLen = 0;
	while (true) {
		cout << "문자열 입력(exit 입력 시 종료): ";
		cin.getline(str, STR_LEN);

		//if(str == "exit") //이거 불가함
		//왜냐하면 문자열배열의 이름(str)은 주소이고 문자열("str")도 주소라서...
		// 주소끼리 비교가 불가능함
		if (!strcmp(str, "exit")) {
			break;
		}
		/* TODO: 입력받은 문자열을 연결하는 코드 작성 */
		
		// 첫번째로 나오면?
		if (connectStr == nullptr) {
			connectStr = new char[strlen(str) + 1];
			largestStr = new char[strlen(str) + 1];
			strcpy(connectStr, str);
			strcpy(largestStr, str);
			largestLen = strlen(largestStr);
		}
		// 두번째 이상 횟수이면?
		else{
			if (strlen(str) > largestLen) {
				largestLen = strlen(str);
				//이전 할당된 메모리 해제후, 새로운 크기로 메모리 재 할당
				delete[] largestStr;
				largestStr = new char[largestLen + 1];
				strcpy(largestStr, str);
			}
			// 기존 문자열(connectStr)길이 + 입력받은 문자열 길이 strlen(str) + 1
			char* temp = new char[strlen(connectStr) + strlen(str) + 1];
			strcpy(temp, connectStr);
			// (delete[] 빠짐) 기존 connectStr 메모리 제거해준다
			delete[] connectStr;
			strcat(temp, str);
			connectStr = temp; // 새로운 메모리의 주소로 변경
			//delete[] temp; // <--- 필요합니까?
			// No If you call delete[] temp; at this point, you would be deallocating the memory that connectStr is also pointing to.
		}
	}
	cout << "\n연결된 문자열은 [" << connectStr << "] 입니다.";
	cout << "\nThe Largest String is [" << largestStr << "] and the length is " << largestLen << endl;

	delete[] connectStr; //연결된 문자열 메모리 최종 제거
	delete[] largestStr;
	return 0;
}