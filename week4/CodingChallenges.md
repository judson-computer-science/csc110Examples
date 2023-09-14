# Week 4 Coding Challenges
You may work in pairs to accomplish the following challenges

## Strings
- Declare an array of size 5, initializing it with the string "bath"
- print the first character of the string using the appropriate notation and the character format specifier (`%c`)
- print the word and use `strlen()` to print its length as shown below
- Set the 5th element of the array to the letter 'e'
- Set the 6th element of the array to the letter 's'
- print the entire word (as a string)
  - what, if anything, happened at compile-time?
  - what, if anything, happened at runtime? why?

````
printf("%s is %ld characters long\n", word, strlen(word));
````
NOTE: remember that you need to include `string.h` to use the `strlen()` function:  `#include <string.h>`

## Multi-dimensional Arrays
Create a program that declares a 2-dimensional array of integers and initialize the values to the numbers 1 through 10. The 2 dimensional array should be 5x2 (meaning an array of size 5 where each element is an array of size 2).

````
1, 2
3, 4
5, 6
7, 8
9, 10
````
When you have declared your array, do the following:

1. Print each value in the array using nested `for` loops
2. Modify the value of each element in the array using a switch statement inside 2 nested `for` loops. The following rules should be applied:
  - The numbers 1, 2 and 3 should be incremented by 1
  - The numbers 4, 5 and 6 should be multiplied by 5
  - All other numbers should be set to 0
3. Print the updated values in the array using nested `for` loops
