#include <stdio.h>

#define NAME_LEN 50
#define MAX_COLLECTION_SIZE 6

/**
 * define an enumeration of book categories including the following:
 *  - MYSTERY
 *  - THRILLER,
 *  - ROMANCE,
 *  - SCIENCE_FICTION,
 *  - KIDS
 */

/**
 * define a structure (struct Author) with the following properties:
 *  - name (including first and last name in one string)
 *  - number of books written
 */

/**
 * define a structure (struct Book) with the following properties:
 *  - number of pages
 *  - category (the enum above)
 *  - title
 *  - isbn number
 *  - author (the structure above)
 */

/**
 * define a structure (struct Collection) representing a collection of books
 *  - collection name
 *  - size of collection (number of books in the collection)
 *  - an array of books
 */

int main() {
	struct Author author_king = { "Steven King", 2 };
	struct Author author_blume = { "Judy Blume", 2 };
	struct Author author_white = { "E. B. White", 1 };
	struct Author author_sobol = { "Donald J. Sobol", 1 };

	// TODO: implement the remaining code here
        // (see output.txt for a description of the output you should produce)


	return 0;
}
