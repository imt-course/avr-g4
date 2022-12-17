#include "algorithms.h"

int get_max (int arr[], int length) {
	int i, max;
	max = arr[0];
	for (i=1; i<length; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int get_min (int arr[], int length) {
	int i, min;
	min = arr[0];
	for (i=1; i<length; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

void bubble_sort (int arr[], int length) {
	int i, j, flag=0;
	
	for (i=length-1; i>0; i--) {
		for (j=0; j<i; j++) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag = 1;
			}
		}
		if (flag == 0) {
			break;
		}
		else {
			flag = 0;
		}
		
	}
}

/*
Return: index of element if exist,
		length if element does not exist
*/
int linear_search (int arr[], int length, int number) {
	int i;
	for (i=0; i< length; i++) {
		if (arr[i] == number) {
			break;
		} 
	}
	return i;
}

int binary_search (int arr[], int length, int number) {
	int index = length;
	int start = 0;
	int end = length -1;
	int mid;
	while (start <= end) {
		mid = (start+end) / 2;
		if (number == arr[mid]) {
			index = mid;
			break;
		}
		else if (number > arr[mid]) {
			start = mid+1;
		}
		else if (number < arr[mid]) {
			end = mid-1;
		}
	}
	return index;
}