#include <stdio.h>

void print (int x) {
	printf("X = %d", x);
}


int main (void) {
	void (*callback) (int x);
	callback = print;
	printf("%x\n", print);
	callback(5);
}