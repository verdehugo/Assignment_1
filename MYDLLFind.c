#include<stdio.h>
#include<stdlib.h>
#include "d_linked_list.h"

const unsigned char* MYDLLFind(const DoublyLinkedList *dll, uint16_t key)
{

	Node *current = dll->head;

	while(current != NULL && current->id != key)
	{
		current = current->next;
	}
	
	if(current == NULL)
	{
		printf("Element not found\n");
		return NULL;
	}else
	{
		return current->data;
	}
	
	
}
