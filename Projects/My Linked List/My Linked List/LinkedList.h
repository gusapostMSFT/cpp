#pragma once
#include <iostream>
using namespace std;

class LinkedList
{
	// Creating the Node struct.
	struct Node {
		int value;

		// next must be a pointer because it will point to the next Node object.
		Node* next = NULL;
	};

private:
	Node* head;
	Node* currentNode;

public: 
	LinkedList();
	~LinkedList();
	void insertNode(int value);
	void deleteNode(int value);
	void printList();
};

