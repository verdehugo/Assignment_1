#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include"d_linked_list.h"

// Author: Hugo Alcaire Verde 72705
// Date: 10 March 2024

int main()
{
    DoublyLinkedList myDll;
    MYDLLInit(&myDll, 10, sizeof(unsigned char) * MAX_LL_SIZE);

    // Test MYDLLInsert

    // TODO POINT: Insertion of data and its correspondent key in the DLL

    unsigned char data1[MAX_LL_SIZE] = "Vermelho";
    MYDLLInsert(&myDll, 1, data1);

    unsigned char data2[MAX_LL_SIZE] = "Laranja";
    MYDLLInsert(&myDll, 2, data2);

    unsigned char data3[MAX_LL_SIZE] = "Amarelo";
    MYDLLInsert(&myDll, 3, data3);

    unsigned char data4[MAX_LL_SIZE] = "Verde";
    MYDLLInsert(&myDll, 4, data4);

    unsigned char data5[MAX_LL_SIZE] = "Azul";
    MYDLLInsert(&myDll, 5, data5);

    unsigned char data6[MAX_LL_SIZE] = "Anil";
    MYDLLInsert(&myDll, 6, data6);

    unsigned char data7[MAX_LL_SIZE] = "Violeta";
    MYDLLInsert(&myDll, 7, data7);

    // Test MYDLLFind()
    // TODO POINT: Change the data stored in variable "result_X" or comment lines not pretended

    const unsigned char *result_1 = MYDLLFind(&myDll, 1); //// Store the result
    const unsigned char *result_2 = MYDLLFind(&myDll, 2);
    const unsigned char *result_3 = MYDLLFind(&myDll, 3);
    const unsigned char *result_4 = MYDLLFind(&myDll, 4);
    const unsigned char *result_5 = MYDLLFind(&myDll, 5);
    const unsigned char *result_6 = MYDLLFind(&myDll, 6);
    const unsigned char *result_7 = MYDLLFind(&myDll, 7);

    if (result_1 != NULL && result_2 != NULL && result_3 != NULL && result_4 != NULL && result_5 != NULL && result_6 != NULL && result_7 != NULL)
    {
        printf("Data found for key 1: %s\n", result_1);
        printf("Data found for key 2: %s\n", result_2);
        printf("Data found for key 3: %s\n", result_3);
        printf("Data found for key 4: %s\n", result_4);
        printf("Data found for key 5: %s\n", result_5);
        printf("Data found for key 6: %s\n", result_6);
        printf("Data found for key 7: %s\n", result_7);
    }
    else
    {
        printf("Data not found for some key\n");
    }

    // Test MYDLLFindNext
    // TODO point: Change the data stored in variable "nextData"

    const unsigned char *nextData = MYDLLFindNext(&myDll, 1);
    if (nextData != NULL)
    {
        printf("Next Data after key 1: %s\n", nextData);
    }
    else
    {
        printf("No next data after key 1\n");
    }

    // Test MYDLLFindPrev
    // TODO point: Change the data stored in variable "prevData"

    const unsigned char *prevData = MYDLLFindPrev(&myDll, 2);
    if (prevData != NULL)
    {
        printf("Previous data before key 2: %s\n", prevData);
    }
    else
    {
        printf("No previous data before key 2\n");
    }

    // Test MYDLLRemove
    // TODO point: Change the key of the data we pretend to remove and add printf to that key

    MYDLLRemove(&myDll, 1);
    result_1 = MYDLLFind(&myDll, 1);

    if (result_1 != NULL)
    {
        printf("Data found for key 1 after removal: %s\n", result_1);
    }
    else
    {
        printf("Data not found for key 1 after removal\n");
    }

    // TODO POINT: Additional tests for MYDLLRemove, you can add more scenarios to test the removal function

    // Test removing a non-existing key
    MYDLLRemove(&myDll, 8);

    // Test removing the last element
    MYDLLRemove(&myDll, 7);
    result_7 = MYDLLFind(&myDll, 7);
    if (result_7 != NULL)
    {
        printf("Data found for key 7 after removal: %s\n", result_7);
    }
    else
    {
    	printf("Data not foud for key 7 after removal");
    }
}
