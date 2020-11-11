#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <memory.h>

char* delete_first(char *s, char *pattern) {
	int i, j;
	char *s_copy = strdup(s);
	size_t len = strlen(pattern);
    if (len > 0) {
        char *p = s_copy;
		if ((p = strstr(p, pattern)) != NULL )
        memmove(p, p + len, strlen(p + len) + 1);
    }
	return s_copy;
}

int main(){
	char *s = "Ana are mere";
	char *pattern = "re";

	// Decomentati linia dupa ce ati implementat functia delete_first.
	printf("%s\n", delete_first(s, pattern));

	// char *start = strstr(s, pattern);
	// char *end = start + strlen(start);
	// strcpy(start, end);
	printf("%s\n", s);
	return 0;
}
