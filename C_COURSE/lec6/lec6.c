#include <stdio.h>
void calculate (int x, int y, int* sum, int *diff);
int main (void) {
	/*
	int x = 10;
	int *ptr = &x;
	printf("%d\n", x);
	printf("%x\n", ptr);
	printf("%p\n", &x);
	printf("%d\n", *ptr);
	printf("%p\n", &ptr);
	*/
	
	/*
	int sum, diff;
	calculate(5,2, &sum, &diff);
	printf("sum = %d\n", sum);
	printf("diff = %d\n", diff);
	*/
	/*
	int x = (long long int)&x;
	printf("Please enter x: ");
	scanf("%d", x);
	printf("You entered: %d", x);
	*/
	/*
	printf("%d\n", sizeof(int*));
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(float*));
	*/
	/*
	int y = 5;
	int x = 1340;
	char *ptr = &x;
	*ptr = 120;
	printf("x = %d\n", x);
	printf("*ptr = %d\n", *ptr);
	printf("y = %d\n", y);
	printf("x = %p\n", &x);
	printf("y = %p\n", &y);
	*/
	
	int x = 0x01234567;
	char *ptr = (char*)&x;
	if (*ptr == 0x01) {
		printf("Big Endian");
	}
	else if (*ptr = 0x67) {
		printf("Little Endian");
	}
	
}

void calculate (int x, int y, int* sum, int *diff) {
	*sum = x+y;
	*diff = x-y;
}