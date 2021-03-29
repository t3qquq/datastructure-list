#include <iostream>
#include "List.h"
//#include "OrderedList.h"
#include <Windows.h>

using namespace std;

int listNum = 0;
int orderedListNum = 0;

void manageList();


int main() {

	while (1) {
		int task;

		cout << "리스트 테스트" << endl << endl << endl;
		cout << "생성된 List: " << listNum << "개, OrderedList: " << orderedListNum << "개" << endl << endl;
		cout << "List 관련 작업은 1, OrderedList 관련 작업은 2를 입력하세요." << endl;
		cout << "종료는 9를 입력하세요." << endl << endl;
		cout << "입력: ";
		
		cin >> task;

		if (task == 9)
			break;
		else if (task == 1) {
			system("cls");
			manageList();
		}
		else {
			cout << endl << "잘못 입력하였습니다." << endl;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			Sleep(500);
			system("cls");
		}
	}



	return 0;
}

void manageList() {
	while (1) {
		int ml_task;

		cout << "생성된 List: " << listNum << "개, OrderedList: " << orderedListNum << "개" << endl << endl;
		cout << endl << "	List 관련 작업을 진행합니다." << endl;
		cout << endl << "	List 생성은 1, 내용 확인은 2, 내용 수정은 3, List 삭제는 4를 입력하세요." << endl;
		cout << "	이전화면으로 돌아가려면 9를 입력하세요" << endl << endl;
		cout << "	입력: ";
		cin >> ml_task;

		if (ml_task == 9) {
			system("cls");
			break;
		}
		else if (ml_task == 1) {
			List* LISTS = new List[++listNum];

			cout << endl << "	생성할 List의 이름을 입력하세요." << endl << "	List 이름: ";

			LISTS[listNum - 1].setName();

			system("cls");
		}
		else if (ml_task == 2) {

		}
		else if (ml_task == 3) {

		}
		else if (ml_task == 4) {

		}
		else {
			cout << endl << "	잘못 입력하였습니다." << endl;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			Sleep(500);
			system("cls");
		}
	}
}