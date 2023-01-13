#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Types.h"

typedef u32 LinkedListDataType;

typedef struct node {
	LinkedListDataType data;
	struct node* next;
} NodeType;

void LinkedList_Print(NodeType* head_ref);
NodeType* LinkedList_Push(NodeType** head_ref, LinkedListDataType data);
void LinkedList_InsertFirst(NodeType** head_ref, LinkedListDataType data);
void LinkedList_DeleteNode (NodeType** head_ref, NodeType* node_ref);
void LinkedList_DeleteAllNodes (NodeType** head_ref);
void LinkedList_DeleteNumber (NodeType** head_ref);
NodeType* LinkedList_InsertAfter (NodeType** head_ref, NodeType* node_ref);
NodeType* LinkedList_InsertBefore (NodeType** head_ref, NodeType* node_ref);
void LinkedList_Sort (NodeType** head_ref);
void LinkedList_Swap (NodeType** head_ref, NodeType* first_node_ref, NodeType* second_node_ref);
void LinkedList_Reverse(NodeType** head_ref);


#endif