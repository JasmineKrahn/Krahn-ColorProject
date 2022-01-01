#include "LinkedList.h"
using namespace std;

//@author Jasmine Krahn

LinkedList::LinkedList()
{
	length = 0;
	head = nullptr;
}

LinkedList::~LinkedList()
{
	MakeEmpty();
}

void LinkedList::MakeEmpty()
{
	while (head != nullptr)
	{
		llNode* temp = head->next;
		delete head;
		head = temp;
	}
	head = nullptr;
	length = 0;
}

int LinkedList::GetLength()
{
	return length;
}

bool LinkedList::addNode(Colors val)
{
	llNode* temp = new llNode();
	if (temp == nullptr)
	{
		return false;
	}
	temp->color = val;
	temp->next = nullptr;
	temp->next = head;
	head = temp;
	length++;
	return true;
}

bool LinkedList::delNode(Colors val)
{
	llNode* temp = head;
	llNode* previous = nullptr;
	while (temp != nullptr)
	{
		if (temp->color.getName() == val.getName() && temp->color.getHexCode() == val.getHexCode())
		{
			if (previous == nullptr)
			{
				head = temp->next;
			}
			else
			{
				previous = temp->next;
			}
			delete temp;
			length--;
			return true;
		}
		previous = temp;
		temp = temp->next;
	}
	return false;
}

//have to find another way to display
void LinkedList::PrintList()
{
	llNode* temp = head;
	cout << "The list contains: ";
	while (temp != nullptr)
	{
		cout << temp->color.getName() << "\t" << temp->color.getHexCode() << endl;
		temp = temp->next;
	}
	cout << endl;
}