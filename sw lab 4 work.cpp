// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

struct Node {
	int info;
	Node* next;
};

int main()
{
	Node *list, *first, *current, *last, *temp, *trail, *p, *q, *postCurrent;

	list = new Node;
	list->info = 47;
	first = list;
	temp = list;
	list = new Node;
	temp->next = list;
	temp = temp->next;
	list->info = 12;
	list = new Node;
	list->info = 92;
	temp->next = list;
	temp = temp->next;
	list = new Node;
	list->info = 65;
	temp->next = list;
	temp = temp->next;
	current = list;
	postCurrent = new Node;
	postCurrent->info = 17;
	current->next = postCurrent;
	list = new Node;
	list->info = 80;
	temp->next = postCurrent;
	temp = temp->next;
	postCurrent->next = list;
	list = new Node;
	list->info = 46;
	temp->next = list;
	temp = temp->next;
	list = new Node;
	list->info = 5;
	temp->next = list;
	temp = temp->next;
	list = new Node;
	list->info = 78;
	list->next = nullptr;
	last = list;
	temp->next = list;
	
	delete list;
	last = temp;
	temp->next = nullptr;
	
	list = first->next;
	temp = list->next;
	list = temp;
	temp = temp->next;
	delete list;

	
	temp = first->next;
	temp->next = current;
	temp = temp->next;
	list = temp;
	list = postCurrent->next;
	list->next = postCurrent;
	current->next = list;
	temp = current->next;
	temp = temp->next;
	
	
	std::cout << current->info<<temp->info;
	
    return 0;
}

