/** 
 * @file d_linked_list.h
 * @brief Doubly Linked List module for a custom implementation.
 *
 * Detailed description of the Doubly Linked List module.
 * It includes structures, functions, and error codes.
 *
 * @see https://www.doxygen.nl/manual/index.html 
 * 
 * @authors Hugo Verde & André Carvalho
 * @date 11 March 2024
 * @bug No known bugs.
 */

#ifndef D_LINKED_LIST_H
#define D_LINKED_LIST_H
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#define MAX_LL_SIZE 100
#define DLL_FULL -1
#define DLL_ELEMENT_NOT_FOUND -2
#define OK 0

/**
 * @brief Structure representing a node in the doubly linked list.
 *
 * Detailed explanation of the Node structure.
 */ 

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

/**
 * @brief Initializes a Doubly Linked List.
 *
 * @param dll Pointer to the DoublyLinkedList structure.
 * @param max_elem Maximum number of elements in the list.
 * @param elem_size Size of each element in bytes.
 */

void MYDLLInit(DoublyLinkedList *dll, size_t max_elem, size_t elem_size);

/**
 * @brief Inserts an element into the Doubly Linked List.
 *
 * @param dll Pointer to the DoublyLinkedList structure.
 * @param key: Key of the new element.
 * @param data: Data of the new element.
 * @return OK if successful, DLL_FULL if the list is full.
 */

int MYDLLInsert(DoublyLinkedList* dll, uint16_t key, unsigned char *data);

/**
 * @brief Removes an element from the Doubly Linked List.
 *
 * @param dll Pointer to the DoublyLinkedList structure.
 * @param key: Key of the element to be removed.
 * @return OK: if successful, DLL_ELEMENT_NOT_FOUND if the element is not found.
 */	

int MYDLLRemove(DoublyLinkedList* dll, uint16_t key);

/**
 * @brief Finds the data of an element in the Doubly Linked List.
 *
 * @param dll: Pointer to the DoublyLinkedList structure.
 * @param key: Key of the element to be found.
 * @return Pointer to the data if found, NULL if the element is not found.
 */

const unsigned char* MYDLLFind(const DoublyLinkedList* dll, uint16_t key);

/**
 * @brief Finds the data of the next element in the Doubly Linked List.
 *
 * @param dll: Pointer to the DoublyLinkedList structure.
 * @param key: Key of the current element.
 * @return Pointer to the data of the next element if found, NULL otherwise.
 */

const unsigned char* MYDLLFindNext(const DoublyLinkedList* dll, uint16_t key);

/**
 * @brief Finds the data of the previous element in the Doubly Linked List.
 *
 * @param dll: Pointer to the DoublyLinkedList structure.
 * @param key: Key of the current element.
 * @return Pointer to the data of the previous element if found, NULL otherwise.
 */

const unsigned char* MYDLLFindPrev(const DoublyLinkedList* dll, uint16_t key);

#endif //D_LINKED_LIST_H
