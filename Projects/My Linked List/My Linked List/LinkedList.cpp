#include <iostream>
#include "LinkedList.h"
using namespace std;


LinkedList::LinkedList() {
	cout << "Linked list created." << endl;
}

LinkedList::~LinkedList() {
	// Creating a temporary node to store node data.
	Node* temp;
	currentNode = head;

	while (currentNode->next != NULL) {
		temp = currentNode;
		
		// Deallocating the current node's memory, not destroying the object.
		delete currentNode;

		currentNode = temp->next;
	}
}

void LinkedList::insertNode(int value) {

	if (head == NULL) {
		// This causes an error. Not completely sure why, I think I saw something saying head can't be null?
		head->value = value;
	}

	currentNode = head;

	while (currentNode->next != NULL) {

		// Checking to see if the value is in the right spot by checking for:
		//		1. The current node is less than the value. And
		//		2. The next node is greater than the value.
		if (currentNode->value < value && value < currentNode->next->value) {
			Node* newNode = NULL;
			newNode->value = value;
			newNode->next = currentNode->next;

			currentNode->next = newNode;

			// Let's return to avoid adding any unecessary nodes. There is probably a better way to add a node.
			return;
		}
		// If none of none of those are true, then move currentNode to the next node.
		else {
			currentNode = currentNode->next;
		}
	}

	// Adding the node to the end of the list.
	Node* newNode = NULL;
	newNode->value = value;
	currentNode->next = newNode;
}

void LinkedList::deleteNode(int value) {

	currentNode = head;

	// Checking each value of the list to be sure to delete all specified values.
	while (currentNode->next != NULL) {
		if (currentNode->value == value) {
			delete currentNode;
		}

		currentNode = currentNode->next;
	}

}

void LinkedList::printList() {

	currentNode = head;

	while (currentNode->next != NULL) {
		cout << currentNode->value << ", " << endl;
		currentNode = currentNode->next;
	}
}