#include<stdio.h>
#include<stdlib.h>
#include"d_linked_list.h"

const unsigned char* MYDLLFindNext(const DoublyLinkedList *dll, uint16_t key)
{
	Node *current = dll->head;
	
	while(current != NULL && current->id != key)
	{
		current = current->next;
	}
	
	if(current != NULL && current->next != NULL) // If found and has next element, return next element
	{
		
		return current->next->data;
		
	}
	
	return NULL;


}
