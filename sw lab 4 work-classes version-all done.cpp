// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
class Node {
public:
	double info; // data
	Node* next; // pointer to next
};
Node *first, *test;
class List {
public:
	List(void) { first = NULL; } // constructor
	~List(void); // destructor
	bool IsEmpty() { return first == NULL; }
	Node* InsertNode(int index, double x);
	int FindNode(double x);
	int DeleteNode(double x);
	void DisplayList(void);
private:

};


	Node *second(Node* x);

	int main(void)
	{
		List list;
		list.InsertNode(0, 7.0); // successful
		list.InsertNode(1, 5.0); // successful
		list.InsertNode(-1, 5.0); // unsuccessful
		list.InsertNode(0, 6.0); // successful
		list.InsertNode(8, 4.0); // unsuccessful
								 // print all the elements
		list.DisplayList();
		if (list.FindNode(5.0) > 0) cout << "5.0 found" << endl;
		else cout << "5.0 not found" << endl;
		if (list.FindNode(4.5) > 0) cout << "4.5 found" << endl;
		else cout << "4.5 not found" << endl;
		list.DeleteNode(7.0);
		list.DisplayList();

		test = second(first);
		cout <<first->info<<" "<< test->info << endl;
		return 0;
	}

	Node *second(Node* x) {


		return x->next;
	}

	Node* List::InsertNode(int index, double x) {
		if (index < 0) return NULL;
		int currIndex = 1;
		Node* currNode = first;
		while (currNode && index > currIndex) {
			currNode = currNode->next;
			currIndex++;
		}
		if (index > 0 && currNode == NULL) return NULL;
		Node* newNode = new Node;
		newNode->info = x;
		if (index == 0) {
			newNode->next = first;
			first = newNode;
		}
		else {
			newNode->next = currNode->next;
			currNode->next = newNode;
		}
		return newNode;
	}



	int List::FindNode(double x) {
		Node* currNode = first;
		int currIndex = 1;
		while (currNode && currNode->info != x) {
			currNode = currNode->next;
			currIndex++;
		}
		if (currNode) return currIndex;
		return 0;
	}


	int List::DeleteNode(double x) {
		Node* prevNode = NULL;
		Node* currNode = first;
		int currIndex = 1;
		while (currNode && currNode->info != x) {
			prevNode = currNode;
			currNode = currNode->next;
			currIndex++;
		}
		if (currNode) {
			if (prevNode) {
				prevNode->next = currNode->next;
				delete currNode;
			}
			else {
				first = currNode->next;
				delete currNode;
			}
			return currIndex;
		}
		return 0;
	}

	void List::DisplayList()
	{
		int num = 0;
		Node* currNode = first;
		while (currNode != NULL) {
			cout << currNode->info << endl;
			currNode = currNode->next;
			num++;
		}
		cout << "Number of nodes in the list: " << num << endl;
	}

	List::~List(void) {
		Node* currNode = first, *nextNode = NULL;
		while (currNode != NULL)
		{
			nextNode = currNode->next;
			// destroy the current node
			delete currNode;
			currNode = nextNode;
		}
	}