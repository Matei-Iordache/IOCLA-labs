#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// reversing a string using pointers
// Restriction : Do not access the elements using the s[] form
void mirror(char *s) {
	int i;
	char aux;
	for (i = 0; i < (int)(strlen(s)/2); i++) {
		//interchanging the elements using pointer arithmetic
		aux = *(s+i);
		*(s + i) = *(s + strlen(s) - 1 - i);
		*(s + strlen(s) - 1 - i) = aux;
	}
}

int main() {
	/* TODO: Test function */
	char test[20] = "Qwerty";
	mirror(test);
	printf("%s\n", test);
	return 0;
}

