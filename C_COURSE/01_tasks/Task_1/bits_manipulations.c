
#include <stdio.h>
#include "bits_manipulations.h"

/*
** Function Name	: clearBit
** Parameters In	: - number: number to clear bit in.
** 				      - bit: bit order to be cleared.
** Parameters Out	: None.
** Return			: Number after clearing the bit.
** Description		: Clears specific bit in number.
*/
int clearBit (int number, int bit) {
	return (number & ~(1<<bit));
}

int setBit (int number, int bit);
int toggleBit (int number, int bit);
int getBit (int number, int bit);
int rotateBits (int number);
int flipBits (int number);
int getNumberOfOnes (int number);
int getNumberOfConsecOnes (int number);
int getFirstPositionOfOne (int number);
int getLastPositionOfOne (int number);

/*
** Function Name	: printBinary
** Parameters In	: - number: number to be printed.
** Parameters Out	: None.
** Return			: None.
** Description		: Prints the number in binary format.
*/
void printBinary (int number) {
	int i;
	printf("0b");
	for (i=31; i>=0; i--) {
		printf("%d", (number>>i)&1);
		
		if (i%4 == 0) {
			printf(" ");
		}
	}
	printf("\n");
}