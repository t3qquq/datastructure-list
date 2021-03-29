#include <iostream>
#include "List.h"
//#include "OrderedList.h"

using namespace std;

int main() {

	List listA;
	List listB;

	int INPUT;
	
	cout << "ListA, ListB 생성됨" << endl;

	cout << "ListA 작성" << endl;

	for (int i = 0; i < 20; i++) {
		cout << "ListA[" << i << "]: ";
		cin >> INPUT;
		listA.addItem(INPUT);
	}

	cout << endl << "현재 ListA: " << endl;
	listA.print();

	cout << endl << endl << "ListA.additem" << endl;

	cin >> INPUT;
	listA.addItem(INPUT);
	cout << endl << "ListA.additem" << endl;
	cin >> INPUT;
	listA.addItem(INPUT);

	cout << endl << "현재 ListA: " << endl;
	listA.print();

	int loc;

	cout << endl << endl << "ListA.InsertItem" << endl;
	cout << "위치: ";
	cin >> loc;
	cout << "내용: ";
	cin >> INPUT;
	listA.insertItem(loc, INPUT);

	cout << endl << "ListA.InsertItem" << endl;
	cout << "위치: ";
	cin >> loc;
	cout << "내용: ";
	cin >> INPUT;
	listA.insertItem(loc, INPUT);
	
	cout << endl << "현재 ListA: " << endl;
	listA.print();

	cout << endl << endl << "ListA.removeAt" << endl;
	cout << "위치: ";
	cin >> loc;
	listA.removeAt(loc);
	
	cout << "현재 ListA: " << endl;
	listA.print();

	cout << endl << endl << "ListA.removeItem" << endl;
	cout << "내용: ";
	cin >> INPUT;
	listA.removeItem(INPUT);

	cout << endl << "현재 ListA: " << endl;
	listA.print();

	cout <<endl<< endl << "ListB 작성" << endl;

	for (int i = 0; i < 5; i++) {
		cout << "ListB[" << i << "]: ";
		cin >> INPUT;
		listB.addItem(INPUT);
	}
	
	cout << endl<< "현재 ListB:" << endl;
	listB.print();

	cout << endl << endl << "ListA concat ListB" << endl;
	listA.concat(listB);

	listA.print();


	return 0;
}

