#include <stdio.h>

int main (void) {
	/*
	int grade;
	printf("Please enter your grade: ");
	scanf("%d", &grade);
	if ((grade>100) || (grade<0)) {
		printf("INVALID INPUT");
	}
	else if (grade >= 85) {
		printf("EXCELLENT")
	}
	else if (grade >= 75){
		printf("V.G");
	}
	else if (grade >= 65){
		printf("G");
	}
	else if (grade >= 75){
		printf("V.G");
	}
	else if (grade >= 50){
		printf("PASS");
	}
	else {
		printf("FAIL");
	}
	*/
	
	/*
	int hours;
	printf("Please enter your hours: ");
	scanf("%d", &hours);
	if (hours < 0) {
		printf("INVALID INPUT");
	}
	else if (hours > 50) {
		printf("Keep your work life balance");
	}
	else if (hours > 40) {
		printf("%d", 40*100+(hours-40)*100*2);
	}
	else if (hours < 40) {
		printf("%d", (int)(hours*100*0.9));
		
	}
	else if (hours == 40) {
		printf("%d", 40*100);
	}
	else {
		// Do Nothing 
	}
	*/
	
	int id;
	printf("Please enter your id: ");
	scanf("%d", &id);
	switch(id) {
		case 1234:
			printf("Welcome Ahmed\n");
			//break;
		case 5678:
			printf("Welcome Yousef\n");
			//break;
		case 1145:
			printf("Welcome Mina\n");
			//break;
		default:
			printf("Wrong id\n");
			//break;
	}
	
	
	
}