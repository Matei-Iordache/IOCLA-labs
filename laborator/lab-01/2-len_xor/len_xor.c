#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// calculating the length of a string
// without using the strlen function
int my_strlen(const char *str) {
	int i;
	for (i = 0; *str != '\0'; i++) {
		str++;
	}
	return i;
}

// check if the element in the position "i"
// is equal to the element in the position "i + 2^i"

// restrictions: Do not traverse the string using str[i]
// 				 Do not use the '==' operator
void equality_check(const char *str) {
	int i, position;
	for (i = 0; *(str + i) != '\0'; i++) {
		position = (i + (1 << i)) % my_strlen(str);

		if(!(*(str+i) ^ *(str + position))){
			printf("Address of %c: %p\n", *(str+i), (str+i));
		}
	}
}

int main(void)
{
	// Test functions
	char test[30] = "ababababacccbacbacbacbacbabc";

	printf("Length: %d\n", my_strlen(test));
	equality_check(test);
	return 0;
}

