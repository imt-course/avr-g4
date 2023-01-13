#include <stdio.h>
#include <stdlib.h>
#include "Types.h"
#include "LinkedList.h"

int main (void) {
	
	NodeType* head = NULL_PTR;
	NodeType* temp = NULL_PTR;
	LinkedList_InsertFirst(&head, 10);
	LinkedList_Print(head); // 10
	temp = LinkedList_Push(&head, 5);
	LinkedList_Print(head); // 10 5
	LinkedList_Push(&head, 7);
	LinkedList_Print(head); // 10 5 7
	LinkedList_InsertFirst(&head, 9);
	LinkedList_Print(head); // 9 10 5 7
	LinkedList_DeleteNode(&head, temp);
	LinkedList_Print(head); // 9 10 7
	LinkedList_DeleteNode(&head, head);
	LinkedList_Print(head); // 10 7
	LinkedList_DeleteAllNodes(&head);
	LinkedList_Print(head); // 10 7

	/*
	NodeType *head=NULL_PTR, *second=NULL_PTR, *third=NULL_PTR;
	LinkedList_Print(head);
	// Add head 
	head = (NodeType*)malloc(sizeof(NodeType));
	head->data = 10;
	head->next = NULL_PTR;
	LinkedList_Print(head);
	// Add new node
	second = (NodeType*)malloc(sizeof(NodeType));
	second->data = 15;
	second->next = NULL_PTR;
	head->next = second;
	LinkedList_Print(head);
	// Add new node 
	third = (NodeType*)malloc(sizeof(NodeType));
	third->data = 70;
	third->next = NULL_PTR;
	second->next = third;
	LinkedList_Print(head);
	*/
	
	
	
	
	/*
	u8 n = 10;
	u8 i;
	u16 *ptr = NULL_PTR;
	ptr = (u16*) malloc(n*sizeof(u16));
	//u16 *ptr = (u16*) calloc(n,sizeof(u16));
	if (ptr == NULL_PTR) {
		printf("Failed to allocate memory");
	}
	printf("ptr = %p\n", ptr);
	for (i=0; i<n; i++) {
		ptr[i] = i;
	}
	for (i=0; i<n; i++) {
		printf("%d ", ptr[i]);
	}
	n = 15;
	ptr = (u16*)realloc((void*)ptr, n*sizeof(u16));
	if (ptr == NULL_PTR) {
		printf("Failed to allocate memory");
	}
	printf("\nptr = %p\n", ptr);
	for (i=0; i<n; i++) {
		printf("%d ", ptr[i]);
	}
	free((void*)ptr);
	printf("\nptr = %p\n", ptr);*/

}