#include <iostream>
#include "List.h"
#include "OrderedList.h"

using namespace std;

int main() {

	List listA;
	List listB;
	OrderedList olistC;
	OrderedList olistD;

	int INPUT;
	int loc;
	
	cout << "ListA 작성" << endl;							//List test

	for (int i = 0; i < 20; i++) {
		cout << "ListA[" << i << "]: ";
		cin >> INPUT;
		listA.addItem(INPUT);
	}
	cout << endl << "현재 ListA: " << endl;
	listA.print();

	for (int i = 0; i < 2; i++) {
		cout << endl << "ListA.additem" << endl;
		cin >> INPUT;
		listA.addItem(INPUT);
	}

	cout << endl << "현재 ListA: " << endl;
	listA.print();

	for (int i = 0; i < 2; i++) {
		cout << endl << "ListA.InsertItem" << endl;
		cout << "위치: ";
		cin >> loc;
		cout << "내용: ";
		cin >> INPUT;
		listA.insertItem(loc, INPUT);
	}
	
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

	cout << endl << endl << "ListA.getItem" << endl;
	cout << "위치: ";
	cin >> loc;
	cout << listA.getItem(loc);


	cout <<endl<< endl << "ListB 작성" << endl;

	for (int i = 0; i < 10; i++) {
		cout << "ListB[" << i << "]: ";
		cin >> INPUT;
		listB.addItem(INPUT);
	}
	
	cout << endl<< "현재 ListB:" << endl;
	listB.print();

	cout << endl << endl << "ListA concat ListB" << endl;
	listA.concat(listB);
	listA.print();

	cout << endl << endl << "olistC 작성" << endl;							//Olist Test

	for (int i = 0; i < 20; i++) {
		cout << "olistC[" << i << "]: ";
		cin >> INPUT;
		olistC.addItem(INPUT);
	}
	cout << endl << "현재 olistC: " << endl;
	olistC.print();

	for (int i = 0; i < 2; i++) {
		cout << endl << "olistC.additem" << endl;
		cin >> INPUT;
		olistC.addItem(INPUT);
	}

	cout << endl << "현재 olistC: " << endl;
	olistC.print();

	cout << endl << endl << "olistC.removeAt" << endl;
	cout << "위치: ";
	cin >> loc;
	olistC.removeAt(loc);

	cout << "현재 olistC: " << endl;
	olistC.print();

	cout << endl << endl << "olistC.removeItem" << endl;
	cout << "내용: ";
	cin >> INPUT;
	olistC.removeItem(INPUT);

	cout << "현재 olistC: " << endl;
	olistC.print();

	cout << endl << endl << "olistC.getItem" << endl;
	cout << "위치: ";
	cin >> loc;
	cout << olistC.getItem(loc);

	cout <<endl<< endl << "olistD 작성" << endl;

	for (int i = 0; i < 10; i++) {
		cout << "olistD[" << i << "]: ";
		cin >> INPUT;
		olistD.addItem(INPUT);
	}

	cout << endl << "현재 olistD:" << endl;
	olistD.print();

	cout << endl << endl << "olistC concat olistD" << endl;
	olistC.concat(olistD);
	olistC.print();

	return 0;
}

