# Week 5 Coding Challenges

## String functions
1. Define an array of 5 strings: "park", "packing", "party", "parked", "parts"
2. Loop over each string (using a `for` loop) comparing each string the string "parking", 4 times as follows:
  - compare to the first character of "parking"
  - compare to the first 2 characters of "parking"
  - compare to the first 3 characters of "parking"
  - compare to the first 4 characters of "parking"

Your output should match the following:

````
The first 4 chars of "park" and "parking" match
The first 2 chars of "packing" and "parking" match
The first 3 chars of "party" and "parking" match
The first 4 chars of "parked" and "parking" match
The first 3 chars of "parts" and "parking" match
````
**HINT:**  use a series of `if` statements to compare the first 4 characters, then the first 3 and so on...when you get a match, move on to the next word.


## Structures and Strings
Define a structure that represents a Student (struct Student).  It should have the following fields:
- Name (up to 20 characters long)
- Age (unsigned short)
- GPA (float)
- Grades (character array - NOT to be used as a string)

Create two students, one is initialized at the time it is declared, one has values assigned after declaration
Print the properties of both students including their grades
