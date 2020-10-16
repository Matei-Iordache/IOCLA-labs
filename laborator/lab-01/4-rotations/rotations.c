#include <stdio.h>

#define BITS_INT 32


// circular left shift of an integer number
void rotate_left(int *number, int bits) {
	*number = (*number << bits) | (*number >> (BITS_INT - bits));
}

// circular right shift of an integer number
void rotate_right(int *number, int bits) {
	*number = (*number >> bits) | (*number << (BITS_INT - bits));
}

int main() {
	/* TODO: Test functions */
	int x = 1;
	// rotate_left(&x, 1);
	rotate_right(&x, 16);
	printf("%d\n", x);
	return 0;
}

