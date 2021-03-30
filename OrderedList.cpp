#include "OrderedList.h"
#include <iostream>
using namespace std;

OrderedList::OrderedList() {
	size = 5;
	itemCount = 0;
	items = new int[size];
}

OrderedList::~OrderedList() {
	delete[] items;
}

int OrderedList::getItem(int index) {
	if (index >= 0 && index < itemCount)
		return items[index];
	else
		return -99999;
}

void OrderedList::addItem(int itm) {
	if (itemCount < 5) {
		int pos;
		for (pos = 0; pos < itemCount; pos++)
			if (items[pos] > itm)
				break;
		if (pos == itemCount) {
			items[itemCount] = itm;
			itemCount++;
		}
		else
			insertItem(pos, itm);

	}
	else {
		int pos;
		for (pos = 0; pos < itemCount; pos++)
			if (items[pos] > itm)
				break;

		if (pos == itemCount) {
			int* newItems = new int[++size];
			for (int i = 0; i < itemCount; i++)
				newItems[i] = items[i];
			newItems[itemCount] = itm;
			delete[] items;
			items = newItems;
			itemCount++;
		}
		else
			insertItem(pos, itm);

	}
}

void OrderedList::insertItem(int index, int itm) {
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

int OrderedList::removeAt(int index) {
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
int OrderedList::removeItem(int itm) {
	int tmp_indx = -99999;
	for (int i = 0; i < itemCount; i++) {
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
void OrderedList::concat(OrderedList& olist) {
	size += olist.size;
	itemCount += olist.itemCount;

	int* newItems = new int[size];

	int i_cnt=0, j_cnt=0;
	int i = 0;
	for (; i_cnt < itemCount - olist.itemCount && j_cnt < olist.itemCount; i++) {
		if (items[i_cnt] < olist.items[j_cnt]) {
			newItems[i] = items[i_cnt];
			i_cnt++;
		}
		else {
			newItems[i] = olist.items[j_cnt];
			j_cnt++;
		}
	}
	if(i_cnt==itemCount-olist.itemCount)
		for (; i < itemCount; i++) {
			newItems[i] = olist.items[j_cnt];
			j_cnt++;
		}
	else if(j_cnt==olist.itemCount)
		for (; i < itemCount; i++) {
			newItems[i] = items[i_cnt];
			i_cnt++;
		}
	delete[] items;
	items = newItems;
}
void OrderedList::print() {
	for (int i = 0; i < itemCount; i++)
		cout << getItem(i) << " ";
}