#include<stdio.h>
#include<stdlib.h>
#include"d_linked_list.h"

void MYDLLRemove(DoublyLinkedList *dll, uint16_t key)
{
	Node* current = dll->head;
	
	while(current != NULL && current->id != key)
	{
		current = current->next;
	}
	
	if(current == NULL)
	{
		printf("No element found\n");
	}
	
	if(current->prev != NULL)
	{
		current->prev->next = current->next;
	}
	else
	{
		dll->head = current->next;
	}
	
	if(current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	else
	{
		dll->tail = current->prev;	
	}

	// Free memory
	free(current);
	dll->current_size--;

}
