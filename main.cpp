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

		cout << "����Ʈ �׽�Ʈ" << endl << endl << endl;
		cout << "������ List: " << listNum << "��, OrderedList: " << orderedListNum << "��" << endl << endl;
		cout << "List ���� �۾��� 1, OrderedList ���� �۾��� 2�� �Է��ϼ���." << endl;
		cout << "����� 9�� �Է��ϼ���." << endl << endl;
		cout << "�Է�: ";
		
		cin >> task;

		if (task == 9)
			break;
		else if (task == 1) {
			system("cls");
			manageList();
		}
		else {
			cout << endl << "�߸� �Է��Ͽ����ϴ�." << endl;
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

		cout << "������ List: " << listNum << "��, OrderedList: " << orderedListNum << "��" << endl << endl;
		cout << endl << "	List ���� �۾��� �����մϴ�." << endl;
		cout << endl << "	List ������ 1, ���� Ȯ���� 2, ���� ������ 3, List ������ 4�� �Է��ϼ���." << endl;
		cout << "	����ȭ������ ���ư����� 9�� �Է��ϼ���" << endl << endl;
		cout << "	�Է�: ";
		cin >> ml_task;

		if (ml_task == 9) {
			system("cls");
			break;
		}
		else if (ml_task == 1) {
			List* LISTS = new List[++listNum];

			cout << endl << "	������ List�� �̸��� �Է��ϼ���." << endl << "	List �̸�: ";

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
			cout << endl << "	�߸� �Է��Ͽ����ϴ�." << endl;
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			Sleep(500);
			system("cls");
		}
	}
}