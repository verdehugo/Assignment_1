#ifndef D_LINKED_LIST_H
#define D_LINKED_LIST_H
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#define MAX_LL_SIZE 100

// Author: Hugo Alcaire Verde 72705
// Date : 08 March 2024

typedef struct Node{

	uint16_t id;
	unsigned char data [MAX_LL_SIZE];
	
	struct Node* next;
	struct Node* prev;
} Node;

typedef struct{
	Node nodes[MAX_LL_SIZE];	// Array of nodes

	Node* head;
	Node* tail;
	size_t max_elem;
	size_t elem_size;
	size_t current_size;
	
} DoublyLinkedList;

void MYDLLInit(DoublyLinkedList *dll, size_t max_elem, size_t elem_size);

void MYDLLInsert(DoublyLinkedList* dll, uint16_t key, unsigned char *data);	

void MYDLLRemove(DoublyLinkedList* dll, uint16_t key);

const unsigned char* MYDLLFind(const DoublyLinkedList* dll, uint16_t key);

const unsigned char* MYDLLFindNext(const DoublyLinkedList* dll, uint16_t key);

const unsigned char* MYDLLFindPrev(const DoublyLinkedList* dll, uint16_t key);

#endif //D_LINKED_LIST_H
