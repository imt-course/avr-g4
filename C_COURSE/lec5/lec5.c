#include <stdio.h>
#include "algorithms.h"


int main (void) {
	/*int arr[5];
	int i;
	for(i=0; i<5; i++) {
		printf("Please enter number %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	for(i=4; i>=0; i--) {
		printf("%d\n", arr[i]);
	}*/
	
	/*
	int arr[5];
	int i, max, min;
	for(i=0; i<5; i++) {
		printf("Please enter number %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	max = get_max(arr, 5);
	min = get_min(arr, 5);
	printf("Max = %d\n", max);
	printf("Min = %d\n", min);
	*/
	
	/*int arr[5];
	int i;
	for(i=0; i<5; i++) {
		printf("Please enter number %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	bubble_sort(arr, 5);
	for(i=0; i<5; i++) {
		printf("%d ", arr[i]);
	}*/
	
	
	/*int arr[5], x, index;
	int i;
	for(i=0; i<5; i++) {
		printf("Please enter number %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Please enter number to search: ");
	scanf("%d", &x);
	index = linear_search(arr, 5, x);
	if (index == 5) {
		printf("Does not exist");
	}
	else {
		printf("Exist at index: %d", index);
	}*/


	/*int arr[5], x, index;
	int i;
	for(i=0; i<5; i++) {
		printf("Please enter number %d: ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Please enter number to search: ");
	scanf("%d", &x);
	bubble_sort(arr, 5);
	index = binary_search(arr, 5, x);
	if (index == 5) {
		printf("Does not exist");
	}
	else {
		printf("Exist at index: %d", index);
	}*/
	
	char name1[] = {'A', 'h', 'm', 'e', 'd'};
	char name[5] =  "Ahmed";
	name[5] = 62;
	printf("name1: %d\n", sizeof(name1));
	printf("name: %d\n", sizeof(name));
	/*printf("Please enster your name: ");
	scanf("%s", name);*/
	printf("Hello %s", name);

}

