
#ifndef BITS_MANIPULATION_H_
#define BITS_MANIPULATION_H_

int clearBit (int number, int bit);
int setBit (int number, int bit);
int toggleBit (int number, int bit);
int getBit (int number, int bit);
int rotateBits (int number);
int flipBits (int number);
int getNumberOfOnes (int number);
int getNumberOfConsecOnes (int number);
int getFirstPositionOfOne (int number);
int getLastPositionOfOne (int number);
void printBinary (int number);

#endif