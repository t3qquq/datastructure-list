#include <iostream>
#include "List.h"
//#include "OrderedList.h"

using namespace std;

int main() {

	List listA;
	List listB;

	int listAitems[5];
	int listBitems[5];
	
	cout << "ListA, ListB ������" << endl;

	cout << "ListA �ۼ�" << endl;

	for (int i = 0; i < 5; i++) {
		cout << "ListA[" << i << "]: ";
		cin >> listAitems[i];
	}

	cout << "ListB �ۼ�" << endl;

	for (int i = 0; i < 5; i++) {
		cout << "ListB[" << i << "]: ";
		cin >> listBitems[i];
	}




	return 0;
}

