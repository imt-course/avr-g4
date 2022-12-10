#include "math.h"

int power (int num, int exp) {
	int result = 1;
	while (exp > 0) {
		result *= num;
		exp--;
	}
	return result;
}

int factorial (int number) {
	int result = 1;
	while (number > 1) {
		result *= number;
		number--;
	}
	return result;
}
