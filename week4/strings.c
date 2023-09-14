#include <stdio.h>
#include <string.h>

#define STR_SIZE 10

int main() {

	// the following declarations are the same
	char name1[STR_SIZE] = { 'P', 'a', 't', 'r', 'i', 'c', 'k', '\0' };
	char name2[STR_SIZE] = "Patrick";

	printf("name1 is %ld characters long\n", strlen(name1));
	printf("name2 is %ld characters long\n", strlen(name2));

	return 0;
}
