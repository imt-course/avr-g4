#include <stdio.h>
#include "Types.h"

void getArraySize(int *arr);
typedef int ahmed;


u8 m = 5;
void MyFunction (void);
//register u8 x;

void count (void) {
	static u8 x = 0;
	x++;
	printf("Called %d\n", x);
}
int main (void) {
	/*
	int arr[5] = {1,2,3,4,5};
	printf("Size of arr = %d\n", sizeof(arr)/sizeof(arr[0]));
	getArraySize(arr);
	*/
	
	/*char x = 0xB4;
	printf("%d", x);
	*/
	/*
	printf("Size of char = %d\n", sizeof(char));
	printf("Size of short int = %d\n", sizeof(short int));
	printf("Size of int = %d\n", sizeof(int));
	printf("Size of long int = %d\n", sizeof(long int));
	printf("Size of long long int = %d\n", sizeof(long long int));
	printf("Size of float = %d\n", sizeof(float));
	printf("Size of double = %d\n", sizeof(double));
	printf("Size of long double = %d\n", sizeof(long double));
	*/
	/*
	ahmed x = 10;
	printf("x = %d", x);
	*/
	
	/*
	const int x = 10;
	int y = 5;
	const int * const ptr = &x;
	ptr = &y;
	printf("x before = %d\n", x);
	*ptr = 5;
	//x = 5;
	printf("x after = %d\n", x);
	*/
	MyFunction();
	count();
	count();
	count();
	count();
}

void getArraySize(int *arr) {
	int arr2[] = {1,2,3};
	printf("Size of arr in function = %d\n", sizeof(arr)/sizeof(arr[0]));
	printf("Size of arr2 in function = %d\n", sizeof(arr2)/sizeof(arr2[0]));
}