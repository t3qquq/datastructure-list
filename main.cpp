#include <iostream>
#include "List.h"
//#include "OrderedList.h"

using namespace std;

int main() {

	List listA;
	List listB;

	int INPUT;
	
	cout << "ListA, ListB ������" << endl;

	cout << "ListA �ۼ�" << endl;

	for (int i = 0; i < 20; i++) {
		cout << "ListA[" << i << "]: ";
		cin >> INPUT;
		listA.addItem(INPUT);
	}

	cout << endl << "���� ListA: " << endl;
	listA.print();

	cout << endl << endl << "ListA.additem" << endl;

	cin >> INPUT;
	listA.addItem(INPUT);
	cout << endl << "ListA.additem" << endl;
	cin >> INPUT;
	listA.addItem(INPUT);

	cout << endl << "���� ListA: " << endl;
	listA.print();

	int loc;

	cout << endl << endl << "ListA.InsertItem" << endl;
	cout << "��ġ: ";
	cin >> loc;
	cout << "����: ";
	cin >> INPUT;
	listA.insertItem(loc, INPUT);

	cout << endl << "ListA.InsertItem" << endl;
	cout << "��ġ: ";
	cin >> loc;
	cout << "����: ";
	cin >> INPUT;
	listA.insertItem(loc, INPUT);
	
	cout << endl << "���� ListA: " << endl;
	listA.print();

	cout << endl << endl << "ListA.removeAt" << endl;
	cout << "��ġ: ";
	cin >> loc;
	listA.removeAt(loc);
	
	cout << "���� ListA: " << endl;
	listA.print();

	cout << endl << endl << "ListA.removeItem" << endl;
	cout << "����: ";
	cin >> INPUT;
	listA.removeItem(INPUT);

	cout << endl << "���� ListA: " << endl;
	listA.print();

	cout <<endl<< endl << "ListB �ۼ�" << endl;

	for (int i = 0; i < 5; i++) {
		cout << "ListB[" << i << "]: ";
		cin >> INPUT;
		listB.addItem(INPUT);
	}
	
	cout << endl<< "���� ListB:" << endl;
	listB.print();

	cout << endl << endl << "ListA concat ListB" << endl;
	listA.concat(listB);

	listA.print();


	return 0;
}

