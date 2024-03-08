#include<stdio.h>
#include<stdlib.h>
#include"d_linked_list.h"

void MyDLLInsert(DoublyLinkedList *dll, uint16_t key, unsigned char* data)
{

	if (dll-> current_size >= dll-> max_elem)
	{
	
		printf("Doubly Linked List is full");
	}

	
	Node *newNode = &dll -> nodes[dll->current_size];
	newNode->id = key;
	
	// Copy the data into the node
	
	for(size_t i = 0; i < dll->elem_size; i++)
	{
		newNode->data[i] = data[i];
	}
	
	newNode->prev = NULL;
	newNode->next = NULL;
	
	if(dll->head == NULL)	// Dll empty
	{
		dll->head = newNode;
		dll->tail = newNode;
	}else
	{
		//Add new node to the end of the DLL (tail)
	
		newNode->prev = dll->tail;
		dll->tail->next = newNode;
		dll->tail = newNode;
	}
	
	dll->current_size++;
}
