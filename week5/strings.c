#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 20

int main() {

	const int chars_to_compare = 5;

	char name1[MAX_NAME_LENGTH];
	char name2[MAX_NAME_LENGTH];

	strcpy(name1, "Patrick");
	strncpy(name2, "Patricia", 5);

	printf("name1 is %s, name2 is %s\n", name1, name2);

	strcpy(name2, "Patricia");
	printf("After copying: name1 is %s, name2 is %s\n", name1, name2);


	// compare the first few characters of each string
	int name_comparison = strncmp(name1, name2, chars_to_compare);

	if(name_comparison == 0) {
		printf("First %d chars are equal\n", chars_to_compare);
	} else {
		printf("First %d chars are NOT equal\n", chars_to_compare);
	}


	// compare the entire strings
	name_comparison = strcmp(name1, name2);

	if(name_comparison == 0) {
		printf("%s and %s are equal\n", name1, name2);
	} else {
		printf("%s and %s are NOT equal\n", name1, name2);
	}

	char concat_name[MAX_NAME_LENGTH * 2] = "";

	strcat(concat_name, name1);
	strcat(concat_name, name2);

	printf("Concatenated name is %s\n", concat_name);

	strcpy(concat_name, "");  // reset the array to an empty string

	strncat(concat_name, name1, 3);
	strncat(concat_name, name2, 3);

	printf("Concatenated name is %s\n", concat_name);

}
