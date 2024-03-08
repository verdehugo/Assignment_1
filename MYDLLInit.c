#include<stdio.h>
#include<stdlib.h>
#include"d_linked_list.h"

void MYDLLInit(DoublyLinkedList *dll, size_t max_elem, size_t elem_size)
{
	dll->head = NULL;
	dll->tail = NULL;
	dll->max_elem = max_elem;
	dll->elem_size = elem_size;
	dll->current_size =0;

}
