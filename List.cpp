#include "List.h"
#include <iostream>
using namespace std;

List::List() {
	size = 5;
	itemCount = 0;
	items = new int[size];
}

List::~List() {
	delete [] items;
}

int List::getItem(int index) {
	if (index >= 0 && index <itemCount)
		return items[index];
	else
		return -99999;
}

void List::addItem(int itm) {
	if (itemCount < 5) {
		items[itemCount] = itm;
		itemCount++;
	}
	else {
		int* newItems = new int[++size];
		for (int i = 0; i < itemCount; i++)
			newItems[i] = items[i];
		newItems[itemCount] = itm;
		delete[] items;
		items = newItems;
		itemCount++;
	}
}

void List::insertItem(int index, int itm) {
	int* newItems = new int[++size];
	for (int i = 0; i < index; i++) {
		newItems[i] = items[i];
	}
	for (int i = index + 1; i < size; i++) {
		newItems[i] = items[i - 1];
	}
	newItems[index] = itm;
	delete[] items;
	items = newItems;
	itemCount++;
}

int List::removeAt(int index) {
	int tmp = -99999;
	if (index >= 0 && index < itemCount) {
		int tmp = items[index];
		for (int i = index; i < itemCount; i++) {
			items[i] = items[i + 1];
		}
		itemCount--;

	}
	return tmp;
}

int List::removeItem(int itm) {
	int tmp_indx = -99999;
	for (int i = 0; i<itemCount; i++) {
		if (items[i] == itm) {
			tmp_indx = i;
			break;
		}
	}
	if (tmp_indx != -99999) {
		for (int i = tmp_indx; i < itemCount; i++) {
			items[i] = items[i + 1];
		}
		itemCount--;
	}
	return tmp_indx;
}

void List::concat(List& list) {

	size += list.size;
	itemCount += list.itemCount;
	
	int* newItems = new int[size];

	for (int i = 0; i < itemCount-list.itemCount; i++) {
		newItems[i] = items[i];
	}
	
	for (int i = itemCount - list.itemCount; i < itemCount; i++) {
		newItems[i] = list.items[i - (itemCount - list.itemCount)];
	}

	delete[] items;

	items = newItems;
}

void List::print() {
	for (int i = 0; i < itemCount; i++)
		cout << items[i]<<" ";
}