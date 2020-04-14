#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList list;

	list.insertNode(4);
	list.insertNode(7);
	list.insertNode(100);
	list.insertNode(-20);
	list.insertNode(0);
	list.insertNode(350);
	list.insertNode(-100);
	list.insertNode(8);

	list.deleteNode(100);
	list.deleteNode(-100);

	list.printList();
}