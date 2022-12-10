#include <stdio.h>

int main (void) {
	/*
	int answer; 
	printf("Enter 3x4 = ");
	scanf("%d", &answer);
	while (answer != 12) {
		printf("Wrong, try again: ");
		scanf("%d", &answer);
	}
	printf("Correct Answer");
	*/
	
	/*
	int num;
	int i=0;
	printf("Enter number: ");
	scanf("%d", &num);
	while (i <= 12) {
		printf("%d x %d = %d\n", num, i, num*i);
		i++;
	}
	*/
	
	/*
	int num, count=0, temp;
	printf("Enter number: ");
	scanf("%d", &num);
	temp = num;
	do {
		count++;
		num /= 10;
	} while (num > 0);
	printf("Number of digits in Decimal: %d\n", count);
	
	count = 0;
	num = temp;
	do {
		count++;
		num >>= 1;
	} while (num > 0);
	printf("Number of digits in Binary: %d\n", count);

	count = 0;
	num = temp;
	do {
		count++;
		num >>= 4;
	} while (num > 0);
	printf("Number of digits in Hexdecimal: %d\n", count);
	*/
	
	/*
	int i,n,x,sum=0;
	printf("Enter n: ");
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		printf("Enter number %d: ", i+1);
		scanf("%d", &x);
		sum += x;
	}
	printf("Sum = %d\n", sum);
	printf("Avg = %.2f\n", (float)sum/n);
	*/
	
	/*
	int i,n,x,sum=0;
	printf("Enter n: ");
	scanf("%d", &n);
	for (i=0; i<n; i++) {
		printf("Enter number %d: ", i+1);
		scanf("%d", &x);
		if (x < 0) {
			break;
		}
		sum += x;
	}
	printf("Sum = %d\n", sum);
	printf("Avg = %.2f\n", (float)sum/i);
	*/
	
	int n,x,sum=0;
	printf("Enter n: ");
	scanf("%d", &n);
	for (int i=0; i<n; i++) {
		printf("Enter number %d: ", i+1);
		scanf("%d", &x);
		if (x < 0) {
			i--;
			continue;
		}
		sum += x;
	}
	printf("Sum = %d\n", sum);
	printf("Avg = %.2f\n", (float)sum/i);



}