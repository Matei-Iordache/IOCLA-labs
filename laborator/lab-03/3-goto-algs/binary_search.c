#include <stdio.h>

// BINARY SEARCH IMPLEMENTATION USING GOTO STATEMENTS

// THIS IS USELESS
// DO NOT EVER DO THIS
void main(void) {
	int v[] =  {1, 2, 15, 51, 53, 66, 202, 7000};
	int dest = 222; /* 15 */
	int start = 0;
	int end = sizeof(v) / sizeof(int) - 1;
	int middle;
goto_while:
	middle = start + (end - start) / 2;
	
	if (v[middle] == dest){
		goto stuff;
	}

	if (dest > v[middle])
		goto goto1;

goto2:
	if (dest < v[middle])
		goto goto3;

goto4:
	if (start <= end)
		goto goto_while;

stuff:

	if (start > end) {
		printf("The number %d is not in the array\n", dest);
		return;
	}
	printf("%d\n", v[middle]);
	return;

goto1:
	start = middle + 1;
	goto goto2;
goto3:
	end = middle - 1;
	goto goto4;

}
