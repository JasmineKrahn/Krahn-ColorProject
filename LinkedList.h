#pragma once
#include <iostream>
#include "Colors.h"

//@author Jasmine Krahn

struct llNode {
	Colors color;
	struct llNode* next;
};

typedef struct llNode llNode;

// Specification of Linked List Class
class LinkedList
{
private:
	int length;
	llNode* head;

public:
	LinkedList();
	~LinkedList();

	void MakeEmpty();
	int GetLength();

	bool addNode(Colors val);
	bool delNode(Colors val);

	void PrintList();
};