#include <stdio.h>
#include "math.h"

void printName();
int x = 5;
int y =10;
void swap (void) {
	int temp = x;
	x = y;
	y = temp;
}
int fib (int n) {
	if (n<2) {
		return n;
	}
	else {
		return fib(n-1) + fib(n-2);
	}
}

int main (void) {
	int x, res;
	printf("Enter Number: ");
	scanf("%d", &x);
	printf("Result = %d", fib(x));

	/*
	scanf("%d %d", &x, &y);
	printf("before: x = %d, y = %d\n", x, y);
	swap();
	printf("after: x = %d, y = %d", x, y);
	*/
	/*
	int x,y, result;
	printf("Enter Number and Power: ");
	scanf("%d %d", &x, &y);
	result = power(x,y);
	printf("Result = %d", result);
	*/
	/*
	int x, result;
	printf("Enter Number: ");
	scanf("%d", &x);
	result = factorial(x);
	printf("Factorial = %d", result);
	*/
	
	// printName(20,50,30,10);

}

void printName() {
	printf("Ahmed Hassan");
}