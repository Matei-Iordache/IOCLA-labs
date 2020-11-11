#include <stdio.h>
#include <limits.h>

// USING GOTO STATEMENTS TO DETERMINE THE MAX_VALUE IN AN ARRAY
// DO NOT DO THIS
// ONLY FOR EDUCATIONAL PURPOSE
void main(void)
{
	int v[] = {4, 1, 2, -17, 15, 22, 6, 2};
	int max = INT_MIN;
	int i = 0;
	int size = sizeof(v) / sizeof(int) - 1;
For:
	if (max < v[i])
		goto goto1;

goto2:
	i++;
	if (i < size)
		goto For;

printf("Max value %d\n", max);
return;

goto1:
	max = v[i];
	goto goto2;
	/* TODO: Implement finding the maximum value in the vector */
}
