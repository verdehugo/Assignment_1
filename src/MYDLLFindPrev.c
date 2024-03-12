#include<stdio.h>
#include<stdlib.h>
#include"d_linked_list.h"

// Author: Hugo Alcaire Verde 72705
// Date : 10 March 2024

const unsigned char* MYDLLFindPrev(const DoublyLinkedList *dll, uint16_t key)
{
	Node *current = dll->head;
	
	while(current != NULL && current->id != key)
	{
		current = current->next;
	}
	
	if(current != NULL && current->prev != NULL) // If found and has previouselement, return previous element
	{
		
		return current->prev->data;
		
	}
	
	return NULL;


}
