#pragma once
#include <iostream>
#include <string>

using namespace std;

class List
{
private:
	string name;
	int* items;
	int itemCount;
	int size;

public:
	List();
	~List();
	int getItem(int index);
	void addItem(int itm);
	void insertItem(int index, int itm);
	int removeAt(int index);
	int removeItem(int itm);
	List concat(List& list);
	void print();
	void setName();
};

