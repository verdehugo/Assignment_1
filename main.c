#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include"d_linked_list.h"

int main()
{
	DoublyLinkedList myDll;
	MYDLLInit(&myDll, 10, sizeof(unsigned char) *MAX_LL_SIZE);
	
	// Test MYDLLInsert 
	
	unsigned char data1[MAX_LL_SIZE] = "Info1";
	MYDLLInsert(&myDll, 1, data1);
	
	unsigned char data2[MAX_LL_SIZE] = "Info2";
	MYDLLInsert(&myDll, 2, data2);
	
	//Test MYDLLFind()
	
	// Store the result
	
	const unsigned char* result = MYDLLFind(&myDll,1);
	
	if(result != NULL)
	{
		printf("Data found for key 1: %s\n", result);
	}else
	{
		printf("Data not found for key 1\n");
	}
	
	// Test MYDLLFindNext
	
	
	const unsigned char* nextData = MYDLLFindNext(&myDll,1);
	if(nextData != NULL)
	{
		printf("Next Data after key1: %s\n",nextData);
	}
	else
	{
		printf("No next data after key 1\n");
	}
	
	// Test MYDLLFindPrev
	
	const unsigned char* prevData = MYDLLFindPrev(&myDll,2);
	if(prevData != NULL)
	{
		printf("Previous data before key 2: %s\n", prevData);
	}else
	{
		printf("No previousdata before key 2\n");
	}
	
	// Test MYDLLRemove
	MYDLLRemove(&myDll,1);
	result = MYDLLFind(&myDll,1);
 
 	if(result !=NULL)
	{
		printf("Data found for key 1 after removal: %s\n", result);
	}else
	{
		printf("Data not found for key 1 after removal\n");
	}
	
	return 0;

}
