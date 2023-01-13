#include <stdio.h>
#include <stdlib.h>
#include "Types.h"
#include "LinkedList.h"

void LinkedList_Print(NodeType* head_ref) {
	if (head_ref == NULL_PTR) {
		printf("Linked List is Empty");
	}
	else {
		NodeType* current_node = head_ref;
		while(current_node != NULL_PTR) {
			printf("%d, ", current_node->data);
			current_node = current_node->next;
		}
	}
	printf("\n");
}

NodeType* LinkedList_Push(NodeType** head_ref, LinkedListDataType data) {
	/* Decclare Pointer to new node */
	NodeType* new_node = NULL_PTR;
	/* Decclare Pointer to iterate over all nodes */
	NodeType* current_node = *head_ref;
	/* Allocate memory for the new node */
	new_node = (NodeType*)malloc(sizeof(NodeType));
	/* Fill new node with data */
	new_node->data = data;
	new_node->next = NULL_PTR;
	/* Iterate over all nodes to find last node */
	while(current_node != NULL_PTR) {
		if (current_node->next == NULL_PTR) {
			current_node->next = new_node;
			break;
		}
		current_node = current_node->next;
	}
	/* Check if Linked List is empty */
	if (NULL_PTR == *head_ref) {
		*head_ref = new_node;
	}
	return new_node;
}

void LinkedList_InsertFirst(NodeType** head_ref, LinkedListDataType data) {
	/* Decclare Pointer to new node */
	NodeType* new_node = NULL_PTR;
	/* Allocate memory for the new node */
	new_node = (NodeType*)malloc(sizeof(NodeType));
	/* Fill new node with data */
	new_node->data = data;
	new_node->next = *head_ref;
	/* Make head points to new node */
	*head_ref = new_node;
}

void LinkedList_DeleteNode (NodeType** head_ref, NodeType* node_ref) {
	/* Decclare Pointer to iterate over all nodes */
	NodeType* current_node = *head_ref;
	/* Check if the node to be deleted is the head */
	if (node_ref == current_node) {
		*head_ref = current_node->next;
		free(current_node);
	}
	/* Iterate over all nodes to find the node to be deleted*/
	else {
		while (current_node != NULL_PTR) {
			if (current_node->next == node_ref) {
				current_node->next = node_ref->next;
				free(node_ref);
				break;
			}
			current_node = current_node->next;
		}
	}
}

void LinkedList_DeleteAllNodes (NodeType** head_ref) {
	/* Decclare Pointer to iterate over all nodes */
	NodeType* current_node = *head_ref;
	while (*head_ref != NULL_PTR) {
		*head_ref = current_node->next;
		free(current_node);
		current_node = *head_ref;
	}
}