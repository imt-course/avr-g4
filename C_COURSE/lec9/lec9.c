#include <stdio.h>
#include "Types.h"
#include "Macros.h"
#define EVEN 0
#define ODD 1

#define ARR_LENGTH 20

#define MY_NAME "Ahmed Hassan"

/*
u8 isEven(u8 number) {
	char arr[ARR_LENGTH];
	func(arr, ARR_LENGTH);
	u8 res;
	if (number%2 == 0) {
		res = EVEN;
	}
	else {
		res = ODD;
	}
	return res;
}
*/

//#define LOW 0

typedef enum {
	SAT,
	SUN,
	MON,
	TUE,
	WED,
	THU,
	FRI,
} Day;

typedef enum {
	PORTA,
	PORTB,
	PORTC,
	PORTD,
} PortType;

typedef enum {
	PIN0 = 1,
	PIN1,
	PIN2,
	PIN3 = 4,
	PIN4 = 8,
	PIN5,
	PIN6,
	PIN7 = 0
} PinType;

typedef enum {
	HIGH,
	LOW
} LevelType;

void SetPinLevel(PortType port, PinType pin, LevelType level) {
	
}

#define ADD(X,Y) X+Y
#define CONCAT(N) PIN##N

#define PRINT() do { \
	printf("Ahmed");\
	printf("Hassan");\
}while (0)

/*
#define PRINT() printf("Ahmed"); \
printf("Hassan")
*/

typedef int* ptr1;
#define ptr2 int*

int main (void) {
	ptr1 a,b,c;
	ptr2 d,e,f;
	printf("a = %d\n", sizeof(a));
	printf("b = %d\n", sizeof(b));
	printf("c = %d\n", sizeof(c));
	printf("d = %d\n", sizeof(d));
	printf("e = %d\n", sizeof(e));
	printf("f = %d\n", sizeof(f));
	
	/*
	u8 m = ADD(3.5,2);
	if (m == 1) 
		PRINT();
	else
		printf("ELSE");
	*/
/*
	CONCAT(5);	
	SET_BIT(m, 3);
	CLR_BIT(m, 2);
	TOG_BIT(m, 5);
	u8 bit = GET_BIT(m, 6);
	*/
	/*
	Day x = MON;
	u8 y = FRI;
	printf("y = %d\n", y);
	printf("x = %d\n", x);
	x = THU;
	printf("x = %d\n", x);
	x = 10;
	printf("x = %d\n", x);
	SetPinLevel(PORTA, PIN4, HIGH);
	SetPinLevel(0,4,1);
	*/

	/*
	printf("Common Code\n");
	
	#ifdef BM
		printf("BM Code\n");
	#elif defined APP
		printf("APP Code\n");
	#elif defined BTLD
		printf("BTLD Code\n");
	#else
		#error "Variant must be BM,BTLD,APP"
	#endif

	printf("Common Code\n");
	printf("Common Code\n");
	printf("Common Code\n");
	*/
}