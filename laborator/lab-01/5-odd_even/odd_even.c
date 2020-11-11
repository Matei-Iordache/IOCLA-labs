#include <stdio.h>
#include <stdlib.h>

// count the bits of a number
int find_nrbits(int number) {
	unsigned int count = 0; 
   	while (number) { 
        count++; 
        number >>= 1; 
    }
    return count; 
}

// Print the number in binary
void print_binary(int number, int nr_bits) {
	int i;
	printf("%d ---> 0b", number);
	for (i = 1 << (nr_bits); i > 0; i = i / 2) {
        if (number & i) {
			printf("1");
		} else {
			printf("0");
		}
	}
	printf("\n");
}

//Checks the parity and does the following:
	// Prints the number in hexadecimal if it is odd.
	// Prints the number in binary if it is even
void check_parity(int *numbers, int n) {
	int i;
	for (i = 0; i < n; i++) {
		if (*(numbers + i) & 1) {
			printf("%d ---> 0x%08x\n", *(numbers + i),*(numbers + i));
		} else {
			print_binary(*(numbers + i), find_nrbits(*(numbers + i)));
		}
	}
}

int main() {
	// Test function
	int test[5] = {214, 71, 84, 134, 86};
	check_parity(test, 5);
	return 0;
}