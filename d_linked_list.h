#include<stdio.h>
#include<stdli.h>
#include<stdint.h>

#define MAX_LL_SIZE 100
typedef struct{

	uint16_t id;
	unsigned char data [MAX_LL_SIZE];
	
	struct Node* next;
	struct Node* prev;
} Node;

typedef struct{

	Node* head;
	Node* tail;
	size_t max_elem;
	size_t elem_size;
	size_t current_size;
	
} DoublyLinkedList;

void MyDLLInit(DoublyLinkedList *dll, size_t max_elem, size_t elem_size);

void MyDLLInsert(DoubleLinkedList* dll, uint16_t key, unsigned char*data);	

void MyDLLRemove(DoubleLinkedList* dll, uint16_t key);

void MyDLLFind(DoubleLinkedList* dll, uint16_t key, unsigned char* result);

void MyDLLFindNext(DoublyLinkedList* dll, uint16_t key, unsigned char*result);

void MyDLLFindPrevious(DoublyLinkedList* dll, uint16_t key, unsigned char*result);

void MyDLLCleanup(DoubleLinkedList* dll);
