#pragma once
class OrderedList
{
private:
	int* items;
	int itemCount;
	int size;

public:
	OrderedList();
	~OrderedList();
	int getItem(int index);
	void addItem(int itm);
	void insertItem(int index, int itm);
	int removeAt(int index);
	int removeItem(int itm);
	void concat(OrderedList& olist);
	void print();
};

